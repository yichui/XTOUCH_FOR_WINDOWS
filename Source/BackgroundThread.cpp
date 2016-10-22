#include "MainComponent.h"

#include "BackgroundThread.h"
#include "MidiDeviceProcess.h"
#include "XtouchDevMidiData.h"
#include "GlobalCompactComponent.h"
#include "GlobalMiniComponent.h"
#include "FadersAndFootCompactComponent.h"
#include "FaderMiniComponent.h"
#include "EncodersCompact1To8Component.h"
#include "EncodersCompact9To16Component.h"
#include "EncodersMiniComponent.h"
#include "ButtonsCompact1To8Component.h"
#include "ButtonsCompact9To16Component.h"
#include "ButtonsCompact17To24Component.h"
#include "ButtonsCompact25To33Component.h"
#include "ButtonsCompact34To39Component.h"
#include "ButtonsMini1To8Component.h"
#include "ButtonsMini9To16Component.h"
#include "FaderTouchCompactComponent.h"

MessageManagerLock *MmlPtrForUpdtThrd;

unsigned int McuId0,McuId1,McuId2;
unsigned char usbpidinfo;
bool tabbedComponentFlag,afterOpenThenCloseMidiFlag;
String MidiDeviceName;

unsigned int AppBinBufSize;
unsigned int MidiBinSize;
unsigned int SecretDataStrtAddr;
unsigned int AppStartAddr;
unsigned int MidiBinStartAddr;
bool isFileOpenOk;
bool UpdateSuccessFlag; 

__declspec(align(8)) unsigned char MidiSendDataBuf  [8*1024];
__declspec(align(8)) unsigned char AppBinBuf        [512*1024];

int RetryRecordCnt;;
unsigned int Crc1;
unsigned int SecretCrc[16];

BackgroundThread * pBackgroundThread;    // 后台运行的线程
BackgroundThread2 * pBackgroundThread2;    
TTThread3 * pTTThread3;
extern UINT INDEVID, OUTDEVID;
extern bool midirealdyopen;
extern UINT CurrentDevID;
extern MidiDeviceProcess * pMidiDeviceProcess;
extern MainComponent * pMainComponent;
extern GlobalCompactComponent *pGlobalCompactComponent;
extern GlobalMiniComponent *pGlobalMiniComponent;
extern FadersAndFootCompactComponent * pFadersAndFootCompactComponent;
extern FaderMiniComponent *pFaderMiniComponent;
extern EncodersCompact1To8Component *pEncodersCompact1To8Component;
extern EncodersCompact9To16Component *pEncodersCompact9To16Component;
extern EncodersMiniComponent * pEncodersMiniComponent;
extern ButtonsCompact1To8Component *BC1TO8;
extern ButtonsCompact9To16Component *BC9TO16;
extern ButtonsCompact17To24Component * BC17TO24;
extern ButtonsCompact25To33Component * BC25TO33;
extern ButtonsCompact34To39Component *BC34TO39;
extern ButtonsMini1To8Component *BM1TO8;
extern ButtonsMini9To16Component *BM9TO16;
extern FaderTouchCompactComponent *pFaderTouchCompactComponent;

extern unsigned char GetUsbMidiDeviceInfo_TriedTimes;

extern bool EDITEDFlag , EDITEDFlag2;
extern unsigned char MidiAppBinBuf[];
extern unsigned char LowLevel_SysExRecv_Buf[1000];
extern BYTE SysExCmdSendBuf[14];
unsigned char Xtouch_SysExCmd_Buf[80]={   //actually 22 is enough
    0xF0,
        //Keyboard cmd flag bytes
        PcHostSysExCmd_FixedHeaderByte0, PcHostSysExCmd_FixedHeaderByte1, PcHostSysExCmd_FixedHeaderByte2,
        //cmdId
        0,
        //cmd Para1
        0,0,0,0,  0,0,0,0,
        //cmd Para2
        0,0,0,0,  0,0,0,0,
    0xF7};

unsigned char Global_SysExCmd_Buf[80]={   //actually 22 is enough
    0xF0,
        //Keyboard cmd flag bytes
        PcHostSysExCmd_FixedHeaderByte0, PcHostSysExCmd_FixedHeaderByte1, PcHostSysExCmd_FixedHeaderByte2,
        //cmdId
        0x51,
        //cmd Para1
        0,0,0,0,  0,0,0,0,       
        0xF7};

unsigned char SetThirtySecTime_SysExCmd_Buf[80]={   //actually 22 is enough
    0xF0,
        //Keyboard cmd flag bytes
        PcHostSysExCmd_FixedHeaderByte0, PcHostSysExCmd_FixedHeaderByte1, PcHostSysExCmd_FixedHeaderByte2,
        //cmdId
        0x50,
        //cmd Para1
        0,0,0,0,  0,0,0,0,       
        0xF7};

extern BYTE SysExCmdSendBuf[14] ;
extern int RtnSysExMsgIsReceived;
volatile bool ToStartThrd02;
volatile bool ToStartThrd03;
bool midiopenflag;
extern pMidiDevNameAndId MidiIntDev[10], MidiOutDev[10];


/*BackgroundThread::~BackgroundThread()
{
    stopThread (200);
}*/
/*******************************************************************************
**  Abstract: 后台运行的一个线程，主要用来检测midi in数据和命令返回超时
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
void BackgroundThread::run()
{
    SetBackgroundThreadRunFlag(true);
	midirealdyopen = 0;
    UpdateSuccessFlag = 1;
	CurrentDevID = 0;  //设置MIDI设备数组（MidiOutDev, MidiIntDev）为第一个
    MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 

    pGlobalCompactComponent->SetNotConnentButtonUnenbale();
    pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);       
    pMainComponent->SetFirwareVersion2("N/A");

    pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
    pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
    pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
    BC1TO8->UpdateBt1TO8(319);
    BC9TO16->UpdateBt9TO16(383);
    BC17TO24->UpdateBt17TO24(447);
    BC25TO33->UpdateBt25TO33(511);
    BC34TO39->UpdateBt34TO39(583);
    pFaderTouchCompactComponent->UpdateFT(646);
    delete MmlPtrForUpdtThrd;

    if(isThreadRunning())
    {       
        while(pMainComponent->GetBackgroundThreadOpenFlag())    // MainComponent 析构时被设置成false, 使该线程跳出循环，从而析构该线程
        {          
           if(!pMainComponent->GetBackgroundThreadOpenFlag()) 
           {    
                SetBackgroundThreadRunFlag(0);
                return;
           } 
		   //sleep(20);
		   if(UpdateSuccessFlag)
		   {
			   //if (INDEVID>1)
				//pMidiDeviceProcess->CloseMidiDevice();
			   pMidiDeviceProcess->checkistheremididevice(); // 查找midi设备并打开
			   if(!MidiDeviceProcess::GetMidiDevOpenFlag())        // midi设备没有被打开
			   {
				    //pMidiDeviceProcess->checkistheremididevice(); // 查找midi设备并打开
					if(afterOpenThenCloseMidiFlag == 1 &&(!MidiDeviceProcess::GetMidiDevOpenFlag()))
					{
						
						pMidiDeviceProcess->CloseMidiDevice();
						if(eXTOUCH_MODE_ID == COMPACT_MODE)
						{
							
							eXTOUCH_MODE_ID = COMPACT_MODE;
							MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 
							pGlobalCompactComponent->SetNotConnentButtonUnenbale();
							pMainComponent ->removeTabbedComponent();
							pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);     
							pMainComponent->SetFirwareVersion2("N/A");
							pGlobalCompactComponent ->SetRXMIDIControlVersion();
							//pMainComponent ->removeTabbedComponent();
							//pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);                    
							delete MmlPtrForUpdtThrd;
							tabbedComponentFlag = 1;
							afterOpenThenCloseMidiFlag =0;
							midiopenflag = 0;
							midirealdyopen = 0;
						}
						else if(eXTOUCH_MODE_ID == MINI_MODE)
						{
							eXTOUCH_MODE_ID = MINI_MODE;
							MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 
							pGlobalCompactComponent->SetNotConnentButtonUnenbale();
							pMainComponent ->removeTabbedComponent();
							pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);     
							pMainComponent->SetFirwareVersion2("N/A");
							pGlobalCompactComponent ->SetRXMIDIControlVersion();
							//pMainComponent ->removeTabbedComponent();
							//pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);                    
							delete MmlPtrForUpdtThrd;
							tabbedComponentFlag = 1;
							afterOpenThenCloseMidiFlag =0;
							midiopenflag = 0;
							midirealdyopen = 0;
						}
                    
					}
					GetUsbMidiDeviceInfo_TriedTimes++;
					if(GetUsbMidiDeviceInfo_TriedTimes == 128)
						GetUsbMidiDeviceInfo_TriedTimes =1;
					sleep(10);
					//int loop;              
				   //midiopenflag =1;
			   }
			   else 
			   {      
						if(MidiDeviceProcess::GetMidiDevOpenFlag())     // midi设备正确打开
						{
							//sleep(10);
							if(!midiopenflag)
							{
								usbpidinfo = pMidiDeviceProcess->CollectUsbInfo();
								sleep(10);   //be added in 5-12
								if(usbpidinfo == 0xb2 )
								{
									if(tabbedComponentFlag == 1)
									{
										if(eXTOUCH_MODE_ID == MINI_MODE)
										{
											eXTOUCH_MODE_ID = COMPACT_MODE;

											MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread());   

											pGlobalCompactComponent ->SetWhenCompactConnectTheChange();
											pGlobalCompactComponent ->SetRXMIDIControlVersion();
											pMainComponent ->removeTabbedComponent();
											pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);                                          
											delete MmlPtrForUpdtThrd;
											tabbedComponentFlag = 0;
											afterOpenThenCloseMidiFlag =1;
										}
										else if(eXTOUCH_MODE_ID == COMPACT_MODE)
										{
											eXTOUCH_MODE_ID = COMPACT_MODE;
											MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread());        
											pGlobalCompactComponent ->SetWhenCompactConnectTheChange();
											pGlobalCompactComponent ->SetRXMIDIControlVersion();
											pMainComponent ->removeTabbedComponent();
											pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);                                          
											delete MmlPtrForUpdtThrd;
											tabbedComponentFlag = 0;
											afterOpenThenCloseMidiFlag =1;
										}
									}
									//pMainComponent->pMainComponentMessage = new MainComponentMessage("EDITEDCHANGE_red",0x01);
									//pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);  									
									midiopenflag = 1;
									//sleep(260);
									if(pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH COMPACT") == 0)
									{
										//ToStartThrd03 = 1;
										pMidiDeviceProcess->SendMidiSysEx_WithRecvPrepare(Global_SysExCmd_Buf,14);
										sleep(500);
										if(LowLevel_SysExRecv_Buf[0] == 0xf0 && LowLevel_SysExRecv_Buf[13] == 0xf7)
										{
											MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 
                                        
											pGlobalCompactComponent->SetGlobalInitBt(LowLevel_SysExRecv_Buf[5],LowLevel_SysExRecv_Buf[6], (LowLevel_SysExRecv_Buf[7] == 0x00)?1:0, (LowLevel_SysExRecv_Buf[8] == 0x01)?1:0);
										
											if(LowLevel_SysExRecv_Buf[10] > 9)
												pMainComponent->SetFirwareVersion2(String(LowLevel_SysExRecv_Buf[9])+"."+String(LowLevel_SysExRecv_Buf[10]));
											else
												pMainComponent->SetFirwareVersion2(String(LowLevel_SysExRecv_Buf[9])+"."+"0"+String(LowLevel_SysExRecv_Buf[10]));										
											
											delete MmlPtrForUpdtThrd;

											if (LowLevel_SysExRecv_Buf[11] == 0)
											{
												LayerFlag = 0;
												sleep(20);
												ToStartThrd03 = 1;
												if (ToStartThrd03)
												{
													MmlPtrForUpdtThrd = new MessageManagerLock(Thread::getCurrentThread());
													pGlobalCompactComponent->GetLayerAorB_FromLowLevel();
													delete MmlPtrForUpdtThrd;
													//pMainComponent->pMainComponentMessage = new MainComponentMessage("GetLayerAorB_FromLowLevel", 0x01);
													//pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);
													LayerFlag = 2;
													ToStartThrd03 = 0;
												}

											}
											else if (LowLevel_SysExRecv_Buf[11] == 1)
											{
												LayerFlag = 1;
												sleep(20);
												ToStartThrd03 = 1;
												if (ToStartThrd03)
												{
													MmlPtrForUpdtThrd = new MessageManagerLock(Thread::getCurrentThread());
													pGlobalCompactComponent->GetLayerAorB_FromLowLevel();
													delete MmlPtrForUpdtThrd;
													//pMainComponent->pMainComponentMessage = new MainComponentMessage("GetLayerAorB_FromLowLevel", 0x01);
													//pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);
													LayerFlag = 2;
													ToStartThrd03 = 0;
												}
											}
										}
										else
										{
											pMainComponent->pMainComponentMessage = new MainComponentMessage("Alertwindow", 0x01);
											pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);  
											//midiopenflag = 1;
											pMidiDeviceProcess->CloseMidiDevice();
										}
									}
									//GetUsbMidiDeviceInfo_TriedTimes = 0;
									//SysExCmdSendBuf[4]=0x51;
									//pMidiDeviceProcess->SendMidiSysEx_WithRecvPrepare(SysExCmdSendBuf, 14);
									sleep(2);
								}
								else if(usbpidinfo == 0xb3 )
								{
									if(tabbedComponentFlag == 1)
									{
										if(eXTOUCH_MODE_ID == COMPACT_MODE)
										{
											eXTOUCH_MODE_ID = MINI_MODE;
											MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread());                                         

											pGlobalCompactComponent-> SetWhenMiniConnectTheChange();
											pGlobalCompactComponent ->SetRXMIDIControlVersion();
											pMainComponent ->removeTabbedComponent();
											pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);   

											//pEncodersMiniComponent->UpdateEncodeMini();
											//pEncodersMiniComponent->UpdateEncodeMini();
											//BM1TO8->UpdateMiniBt1TO8();
											//BM9TO16->UpdateMiniBt9TO16();
											//setName("");
											delete MmlPtrForUpdtThrd;
											tabbedComponentFlag = 0;
											afterOpenThenCloseMidiFlag = 1;
										}
										else if (eXTOUCH_MODE_ID == MINI_MODE)
										{
											eXTOUCH_MODE_ID = MINI_MODE;
											MmlPtrForUpdtThrd = new MessageManagerLock(Thread::getCurrentThread());

											pGlobalCompactComponent->SetWhenMiniConnectTheChange();
											pGlobalCompactComponent->SetRXMIDIControlVersion();
											pMainComponent->removeTabbedComponent();
											pMainComponent->UpdateTabbedComponent(eXTOUCH_MODE_ID);

											//pEncodersMiniComponent->UpdateEncodeMini();
											//pEncodersMiniComponent->UpdateEncodeMini();
											//BM1TO8->UpdateMiniBt1TO8();
											//BM9TO16->UpdateMiniBt9TO16();
											//setName("");
											delete MmlPtrForUpdtThrd;
											tabbedComponentFlag = 0;
											afterOpenThenCloseMidiFlag = 1;
										}
									}
									//pMainComponent->pMainComponentMessage = new MainComponentMessage("EDITEDCHANGE_red",0x01);
									//pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);  
									midiopenflag = 1;
									//sleep(260);
									if(pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH MINI") == 0)
									{
										pMidiDeviceProcess->SendMidiSysEx_WithRecvPrepare(Global_SysExCmd_Buf,14);
										sleep(40);
										if (LowLevel_SysExRecv_Buf[0] == 0xf0 && LowLevel_SysExRecv_Buf[13] == 0xf7)
										{
											MmlPtrForUpdtThrd = new MessageManagerLock(Thread::getCurrentThread());

											pGlobalCompactComponent->SetGlobalInitBt(LowLevel_SysExRecv_Buf[5] , LowLevel_SysExRecv_Buf[6], (LowLevel_SysExRecv_Buf[7] == 0x00) ? 1 : 0, (LowLevel_SysExRecv_Buf[8] == 0x00) ? 1 : 0);

											if (LowLevel_SysExRecv_Buf[10] > 0x09)
												pMainComponent->SetFirwareVersion2(String(LowLevel_SysExRecv_Buf[9]) + "." + String(LowLevel_SysExRecv_Buf[10]));
											else
												pMainComponent->SetFirwareVersion2(String(LowLevel_SysExRecv_Buf[9]) + "." + "0" + String(LowLevel_SysExRecv_Buf[10]));

											delete MmlPtrForUpdtThrd;

											if (LowLevel_SysExRecv_Buf[11] == 0)
											{
												LayerFlag = 0;
												sleep(20);
												ToStartThrd03 = 1;
												if (ToStartThrd03)
												{
													MmlPtrForUpdtThrd = new MessageManagerLock(Thread::getCurrentThread());
													pGlobalCompactComponent->GetLayerAorB_FromLowLevel();
													delete MmlPtrForUpdtThrd;
													LayerFlag = 2;
													ToStartThrd03 = 0;
												}

											}
											else if (LowLevel_SysExRecv_Buf[11] == 1)
											{
												LayerFlag = 1;
												sleep(20);
												ToStartThrd03 = 1;
												if (ToStartThrd03)
												{
													MmlPtrForUpdtThrd = new MessageManagerLock(Thread::getCurrentThread());
													pGlobalCompactComponent->GetLayerAorB_FromLowLevel();
													delete MmlPtrForUpdtThrd;
													LayerFlag = 2;
													ToStartThrd03 = 0;
												}
											}
										}
										else
										{
											/*AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
												"do not get layer from xtouch or get layer error",
												"   please restart xtouch or the software",
												"Close",
												nullptr,
												nullptr);*/
											pMainComponent->pMainComponentMessage = new MainComponentMessage("Alertwindow", 0x01);
											pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);
											pMidiDeviceProcess->CloseMidiDevice();
										}
									}
									sleep(2);
								}
							}
							else 
								sleep(2);
						}
						else
						{
							MidiDeviceProcess::SetMidiDevOpenFlag(0);
							midiopenflag = 0;
						}
				}
			}
			sleep(100);
		}
        SetBackgroundThreadRunFlag(false);  
    }
   
}


void BackgroundThread::SetBackgroundThreadRunFlag(bool bFlag)
{
    bBackgroundThreadRunFlag = bFlag;
}



bool BackgroundThread::GetBackgroundThreadRunFlag()
{
    return bBackgroundThreadRunFlag;
}



/*************************************************************************************/
/*BackgroundThread2::~BackgroundThread2()
{
    stopThread(200);
}*/
               
void BackgroundThread2::run()
{
    int r;

    SetBackgroundThreadRunFlag(true);
    
    if(isThreadRunning())
    {
        while(pMainComponent->GetBackgroundThreadOpenFlag2())    // MainComponent 析构时被设置成false, 使该线程跳出循环，从而析构该线程
        {
            while(!ToStartThrd02)
            {
                sleep(1);
                if(!pMainComponent->GetBackgroundThreadOpenFlag2()) 
                {    
                    SetBackgroundThreadRunFlag(0);
                    return;
                }
            }
           if(!pMainComponent->GetBackgroundThreadOpenFlag2()) 
           {    
                 SetBackgroundThreadRunFlag(0);
                 return;
           } 
           if(ToStartThrd02)
           {
                if(MidiDeviceProcess::GetMidiDevOpenFlag())        // midi设备有被打开
                {
					ThirtySecTimeflag = 0;
                    if(usbpidinfo == 0xb2 || usbpidinfo == 0xb3)
                    {
						//pMidiDeviceProcess->SendMidiSysEx_NoRecvPrepare(SetThirtySecTime_SysExCmd_Buf,14);    
						
						//ThirtySecTimeNum = 0;
						UpdateSuccessFlag = 0;
                        r = XtouchUpdateSoftware(usbpidinfo);

                        if(r==0)
                        {   
                            midiopenflag = 0;
                            //MidiDeviceProcess::SetMidiDevOpenFlag(0);
							GetUsbMidiDeviceInfo_TriedTimes = 1;
                            /*AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                                                "Succeeded",
                                                "Click 'Ok' button to continue");*/
							UpdateSuccessFlag = 1;
                            MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 
                            pGlobalCompactComponent->ProgressBarPtr->setVisible(0);
                            pGlobalCompactComponent->repaint();
							ProgressBarValue=0.0;
                            delete MmlPtrForUpdtThrd;
							//tabbedComponentFlag = 1;
                            //ProgressBarValue=0.0;							
                        }
                        else if(r ==1)
                        {
                            midiopenflag = 0;
                            //MidiDeviceProcess::SetMidiDevOpenFlag(0);
                            GetUsbMidiDeviceInfo_TriedTimes =1;
                            AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                                                "error",
                                                "Click 'Ok' button to continue");
                            MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 
                            pGlobalCompactComponent->ProgressBarPtr->setVisible(0);
                            pGlobalCompactComponent->repaint();
                            delete MmlPtrForUpdtThrd;
							UpdateSuccessFlag = 1;
                        }
                        else if(r == 2)
                        {
                            midiopenflag= 0;
                            //MidiDeviceProcess::SetMidiDevOpenFlag(0);
                            GetUsbMidiDeviceInfo_TriedTimes =1;
                            AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                                                "failed",
                                                "Click 'Ok' button to continue");
                            MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 
                            pGlobalCompactComponent->ProgressBarPtr->setVisible(0);
                            pGlobalCompactComponent->repaint();
                            delete MmlPtrForUpdtThrd;
							UpdateSuccessFlag = 1;
                        }
                        else if(r == 5)
                        {
                            midiopenflag= 0;
                            //MidiDeviceProcess::SetMidiDevOpenFlag(0);
                            GetUsbMidiDeviceInfo_TriedTimes =1;
                            AlertWindow::showMessageBox (AlertWindow::WarningIcon,
                                                "Can not do update again",
                                                "Click 'Ok' button to continue");
                            MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 
                            pGlobalCompactComponent->ProgressBarPtr->setVisible(0);
                            pGlobalCompactComponent->repaint();
                            delete MmlPtrForUpdtThrd;
							UpdateSuccessFlag = 1;
                        }
                    }
                }
                else
                {
                    midiopenflag = 0;
                    //MidiDeviceProcess::SetMidiDevOpenFlag(0);

                    AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                                                "Failed --- no device is connected",
                                                "Click 'Ok' button to continue");
                    MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread()); 
                    pGlobalCompactComponent->ProgressBarPtr->setVisible(0);
                    pGlobalCompactComponent->repaint();
                    delete MmlPtrForUpdtThrd;
					GetUsbMidiDeviceInfo_TriedTimes =1;
					UpdateSuccessFlag = 1;
                }
           }
           else if(!ToStartThrd02)
           {
                sleep(1);
           }
		   sleep(100);
           // stopThread(5);
		   ThirtySecTimeflag = 1;
           ToStartThrd02 = 0;
        }
        
    
        SetBackgroundThreadRunFlag(false);  
    }
}


void BackgroundThread2::SetBackgroundThreadRunFlag(bool bFlag)
{
    bBackgroundThreadRunFlag = bFlag;
}



bool BackgroundThread2::GetBackgroundThreadRunFlag()
{
    return bBackgroundThreadRunFlag;
}

/**************************************************************************************/
void TTThread3::run()
{
    

    SetBackgroundThreadRunFlag(true);
    
    if(isThreadRunning())
    {
        while(pMainComponent->GetBackgroundThreadOpenFlag3())    // MainComponent 析构时被设置成false, 使该线程跳出循环，从而析构该线程
        {
			sleep(300);
            if(!pMainComponent->GetBackgroundThreadOpenFlag3()) 
            {    
                SetBackgroundThreadRunFlag(0);
                return;
            } 
			if (pMidiDeviceProcess->GetMidiDevOpenFlag())
			{
				if (!ToStartThrd03)
				{
					if (eXTOUCH_MODE_ID == MINI_MODE)
					{
						//MmlPtrForUpdtThrd=new MessageManagerLock(Thread::getCurrentThread());                
						//delete MmlPtrForUpdtThrd;

						ThirtySecTimeNum++;
						if (ThirtySecTimeNum == 3000)
						{
							ThirtySecTimeNum = 0;
							if (ThirtySecTimeflag)
								if (UpdateSuccessFlag)
									pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SetThirtySecTime_SysExCmd_Buf);
						}
						sleep(10);
					}
					else if ((eXTOUCH_MODE_ID == COMPACT_MODE))
					{
						//ToStartThrd03 = 0;

						ThirtySecTimeNum++;
						if (ThirtySecTimeNum == 3000)
						{
							ThirtySecTimeNum = 0;
							if (ThirtySecTimeflag)
								if (UpdateSuccessFlag)
									pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SetThirtySecTime_SysExCmd_Buf);
						}
						sleep(10);
					}
				}
			}
                
		}
	}
    SetBackgroundThreadRunFlag(false);  

}

void TTThread3::SetBackgroundThreadRunFlag(bool bFlag)
{
    bBackgroundThreadRunFlag = bFlag;
}

bool TTThread3::GetBackgroundThreadRunFlag()
{
    return bBackgroundThreadRunFlag;
}



/*****************************************************************************
**********************************************************************************/

int XtouchUpdateSoftware(int WhatDev)
{
    int r=0,s=0;
    int result=0;
    unsigned int XTOUCH_DevId0,XTOUCH_DevId1;

    switch(WhatDev)
    {
        case 0xb3:{
						XTOUCH_DevId0 = xTOUCHMINI_DevId0;
						XTOUCH_DevId1 = xTOUCHMINI_DevId1;
						break;
                  }
        case 0xb2:{
						XTOUCH_DevId0 = xTOUCHCOMPACT_DevId0;
						XTOUCH_DevId1 = xTOUCHCOMPACT_DevId1;
						break;
                  }
        default:  {		result=ErrCode_WrongDev;
						break;
                  }
    }

    if(result!=0)return result;
    while(1)
    {   
        //the first step :determinate mode,and get device Id
        
        #ifdef UserUpdateMode
          Keyboard_SendMidiSysExCmd(PcHostSysExCmd_UserGetDevId0,0,0);
          r=Keyboard_RecvMidiSysExRtn(PcHostSysExCmd_UserGetDevId0,Keyboard_DevId0);
        #else
        Xtouch_SendMidiSysExCmd(0x36,0,0);
		r = Xtouch_RecvMidiSysExRtn(0x36, XTOUCH_DevId0);
        
        #endif
        
        if(r!=0)break;//Link Mcu fail,no response or not the correct device

        //get the device Id
        Xtouch_SendMidiSysExCmd(0x38,0,0);
		r = Xtouch_RecvMidiSysExRtn(0x38, XTOUCH_DevId1);
        if(r!=0)break;

        //the second step:get the Mcu Id
        Xtouch_SendMidiSysExCmd(0x33,0,0);
        r=Xtouch_RecvMidiSysExRtn(0x33,0);
        if(r!=0)break;//fail,no response from Mcu or the message transmission error
        McuId0=(
                (LowLevel_SysExRecv_Buf[ 5]<< 0)|
                (LowLevel_SysExRecv_Buf[ 6]<< 4)|
                (LowLevel_SysExRecv_Buf[ 7]<< 8)|
                (LowLevel_SysExRecv_Buf[ 8]<<12)|
                (LowLevel_SysExRecv_Buf[ 9]<<16)|
                (LowLevel_SysExRecv_Buf[10]<<20)|
                (LowLevel_SysExRecv_Buf[11]<<24)|
                (LowLevel_SysExRecv_Buf[12]<<28)
            );
        

        Xtouch_SendMidiSysExCmd(0x34,0,0);
        r=Xtouch_RecvMidiSysExRtn(0x34,0);
        if(r!=0)break;
        McuId1=(
                (LowLevel_SysExRecv_Buf[ 5]<< 0)|
                (LowLevel_SysExRecv_Buf[ 6]<< 4)|
                (LowLevel_SysExRecv_Buf[ 7]<< 8)|
                (LowLevel_SysExRecv_Buf[ 8]<<12)|
                (LowLevel_SysExRecv_Buf[ 9]<<16)|
                (LowLevel_SysExRecv_Buf[10]<<20)|
                (LowLevel_SysExRecv_Buf[11]<<24)|
                (LowLevel_SysExRecv_Buf[12]<<28)
            );
        
        Xtouch_SendMidiSysExCmd(0x35,0,0);
        r=Xtouch_RecvMidiSysExRtn(0x35,0);
        if(r!=0)break;
        McuId2=(
                (LowLevel_SysExRecv_Buf[ 5]<< 0)|
                (LowLevel_SysExRecv_Buf[ 6]<< 4)|
                (LowLevel_SysExRecv_Buf[ 7]<< 8)|
                (LowLevel_SysExRecv_Buf[ 8]<<12)|
                (LowLevel_SysExRecv_Buf[ 9]<<16)|
                (LowLevel_SysExRecv_Buf[10]<<20)|
                (LowLevel_SysExRecv_Buf[11]<<24)|
                (LowLevel_SysExRecv_Buf[12]<<28)
            );

        //the third step:download the update file and create the update file and secret date
        r=Xtouch_CreateSysExDataForDownLoad(WhatDev);
        if(r!=0)
        {
            s=1;
            break;
        }
        

        if(r==0)break;

    }

    //according the return value to determinate the cause of the error
    if(r!=0)
    {
        if(s==0)              //the error occurs before create the update value
        {
            //result=(r==1)?ErrCode_ConnectedDevIsNotKeyboard:ErrCode_ConnectedDevHasNoResponse;
        }
        else if(s==1)      //the error occurs during create the update value
        { 
            //result=(r==1)?ErrCode_BadFileIo:ErrCode_MidiCommunicationFail;
        }
    }
   return r;
}


void Xtouch_SendMidiSysExCmd(unsigned char Cmd, unsigned int Para1, unsigned int Para2)
{
    Xtouch_SysExCmd_Buf[4]=Cmd;

    Xtouch_SysExCmd_Buf[ 5]=(Para1>> 0)&0x0f;
    Xtouch_SysExCmd_Buf[ 6]=(Para1>> 4)&0x0f;
    Xtouch_SysExCmd_Buf[ 7]=(Para1>> 8)&0x0f;
    Xtouch_SysExCmd_Buf[ 8]=(Para1>>12)&0x0f;

    Xtouch_SysExCmd_Buf[ 9]=(Para1>>16)&0x0f;
    Xtouch_SysExCmd_Buf[10]=(Para1>>20)&0x0f;
    Xtouch_SysExCmd_Buf[11]=(Para1>>24)&0x0f;
    Xtouch_SysExCmd_Buf[12]=(Para1>>28)&0x0f;

    Xtouch_SysExCmd_Buf[13]=(Para2>> 0)&0x0f;
    Xtouch_SysExCmd_Buf[14]=(Para2>> 4)&0x0f;
    Xtouch_SysExCmd_Buf[15]=(Para2>> 8)&0x0f;
    Xtouch_SysExCmd_Buf[16]=(Para2>>12)&0x0f;

    Xtouch_SysExCmd_Buf[17]=(Para2>>16)&0x0f;
    Xtouch_SysExCmd_Buf[18]=(Para2>>20)&0x0f;
    Xtouch_SysExCmd_Buf[19]=(Para2>>24)&0x0f;
    Xtouch_SysExCmd_Buf[20]=(Para2>>28)&0x0f;

    //send SysEx
    pMidiDeviceProcess->SendMidiSysEx_WithRecvPrepare(Xtouch_SysExCmd_Buf, 22);
}

int Xtouch_RecvMidiSysExRtn(unsigned char Cmd, unsigned int Para1)
{
    volatile int   i=0;
    
	while(1)
	{   
        i++;
        if(RtnSysExMsgIsReceived) break; 
	    if(i==0xf00000) return 2; //no message recieved at all
	}

	SysExCmdSendBuf [4]=Cmd;
    SysExCmdSendBuf [5]=(Para1>> 0)&0x0f;
    SysExCmdSendBuf [6]=(Para1>> 4)&0x0f;
    SysExCmdSendBuf [7]=(Para1>> 8)&0x0f;
    SysExCmdSendBuf [8]=(Para1>>12)&0x0f;
    SysExCmdSendBuf [9]=(Para1>>16)&0x0f;
    SysExCmdSendBuf[10]=(Para1>>20)&0x0f;
    SysExCmdSendBuf[11]=(Para1>>24)&0x0f;
    SysExCmdSendBuf[12]=(Para1>>28)&0x0f;

    
//#ifdef DevDebugMode
    /*for(i=0;i<14;i++)
    {
        Debug_Rev_Buf[DebugRevDataSize]=LowLevel_SysExRecv_Buf[i];
        DebugRevDataSize++;
    }*/
//#endif
    i=14;
	while(i<14)
	{
	   if(SysExCmdSendBuf[i]==LowLevel_SysExRecv_Buf[i])i++;         //Compare the Message is or not the correct message
	   else
       {
           LowLevel_SysExRecv_Buf[0]=0;  
           return 1;
       }
	}

    LowLevel_SysExRecv_Buf[0]=0;  
	return 0;
}

void fwriteMemcopy(BYTE *pSrc, int l, BYTE ToFromTheBeginning)
{
    int i;
    static BYTE *p=NULL;

    if(ToFromTheBeginning)
        p=MidiSendDataBuf;

    for(i=0;i<l;i++)
        *p++=*pSrc++;
}

void MidiByteConvert7To8(BYTE *SrcPtr, BYTE *DstPtr, unsigned int L)    //input 7*L bytes, output 8*L bytes
{
    unsigned int i,j;
    BYTE b[7];
    
    for(i=0;i<L;i++)
    {
        for(j=0;j<7;j++)
        {
            b[j]=*SrcPtr++;
            *DstPtr++=b[j]&0x7f;
        };
        *DstPtr++=((b[0]&0x80)>>1)|((b[1]&0x80)>>2)|((b[2]&0x80)>>3)|((b[3]&0x80)>>4)|((b[4]&0x80)>>5)|((b[5]&0x80)>>6)|((b[6]&0x80)>>7);
    };
}

void MidiByteConvert8To7(unsigned char *SrcPtr, unsigned char *DstPtr, unsigned int L)    //input 8*L bytes, output 7L bytes
{   
    unsigned int  i,j;
    unsigned char b[7],d;
    
    for(i=0;i<L;i++)
    {
        for(j=0;j<7;j++)
        {
            b[j]=*SrcPtr++;
        };
        d=*SrcPtr++;

        for(j=0;j<7;j++) //*DstPtr++=b[j]|(((d>>j)&0x01)<<j);
            *DstPtr++=b[j]|((d<<(j+1))&0x80);
    }
}


int Xtouch_CreateSysExDataForDownLoad(unsigned int WhatDev)
{
	unsigned int i;
    int length,j;
    int totalpage,retimes,SysExRtnOK;
    unsigned char *p=NULL,*ptr=NULL;
    unsigned char SysExStreamHead[8]={0xf0,0x00,0x20,0x32,0x00,0x1e,0x34,0x00};
   
    __declspec(align(8)) unsigned char TmpSmallBinBuf[3000];
    __declspec(align(8)) unsigned char ModifiedBinBuf[3000];

    //the first step:initialize the buf and the Address
    //for both MotorKeyboard 41 and 69, the var initial values are the same
    AppBinBufSize=  1024*56;          //Keyboard49 App Bin buf size 94K
    //AppBinBufSize = 1024*178;
	//MidiBinSize=    1024*83;          //Midi Bin buf size 84K
    MidiBinSize=   0;
    //SecretDataStrtAddr=      0x13000;
    //AppStartAddr=            0x13800;
    AppStartAddr=            0x8800;
    SecretDataStrtAddr=      0x8000;
    //MidiBinStartAddr=        0x2b000;
    MidiBinStartAddr=        0x20000;
    AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                                                "Hardware in Update Mode!",
                                                "Please click 'OK' to continue.");
    if(ReadBinOrSyxFile(WhatDev))
    {
        ptr=MidiAppBinBuf;
    }
    /*else
    {
        switch (WhatDev)
        {
            case 0xe8: //ptr=(unsigned char *)Buf_Keyboard49SoftwareUpdate_K0;
                DispayName[4]="../FinalInsertExeData/Keyboard_49.txt";
               
                break;
            case 0xe9: //ptr=(unsigned char *)Buf_Keyboard61SoftwareUpdate_K1;
                DispayName[4]="../FinalInsertExeData/Keyboard_61.txt";
                break;
        }
         DispayName[5]=DispayName[4];
         IsNameChange=1;

    }*/

    for(i=0;i<512*1024;i++)AppBinBuf[i]=0;
    if(!isFileOpenOk)
    {
         AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                                                "File open failed,the process of update will use the initialise Txt file,please check whether the file is valid,",
                                                "Click 'Ok' button to continue");
        return 1;
    }
    //the second step:load the update file
    p=AppBinBuf;
    p+=AppStartAddr;
    for(i=0;i<AppBinBufSize;i++)   
        *p++=*ptr++;

   /* p=AppBinBuf;
    p+=MidiBinStartAddr;
    for(i=0;i<MidiBinSize;i++)*p++=0;*/

    //create crc data
    length=AppBinBufSize+MidiBinSize;
    //length=AppBinBufSize;
    totalpage=length>>11;
    
    unsigned int  TmpU32;
    Crc1=0xffffffff;
    for(i=0;i<(length>>2);i++)
    {
        TmpU32=((AppBinBuf[4*i+0+AppStartAddr])<<0)|((AppBinBuf[4*i+1+AppStartAddr])<<8)|((AppBinBuf[4*i+2+AppStartAddr])<<16)|((AppBinBuf[4*i+3+AppStartAddr])<<24);
        crc32(&Crc1,TmpU32);
    };
    //put app bin CRC32 into offset 0x28
    AppBinBuf[0x28+0+AppStartAddr+12]=(BYTE)((Crc1>>0)&0xff);
    AppBinBuf[0x28+1+AppStartAddr+12]=(BYTE)((Crc1>>8)&0xff);
    AppBinBuf[0x28+2+AppStartAddr+12]=(BYTE)((Crc1>>16)&0xff);
    AppBinBuf[0x28+3+AppStartAddr+12]=(BYTE)((Crc1>>24)&0xff);

    //the third step:create secret data
    p=AppBinBuf;
    p+=SecretDataStrtAddr;
    CreateSecretData((unsigned int *)p,2);

    //int k=0;
    //the fourth step:generate update file,send the sysex message to MCU
    for(i=0;i<(totalpage+1);i++)
    //for(i=0;i<132;i++)
    {
        fwriteMemcopy(SysExStreamHead, 8, 1);
       // k=i;
        Crc1=0xffffffff;
        for(j=0;j<64*8;j++)
        {
            TmpU32=(AppBinBuf[2048*i+4*j+0+SecretDataStrtAddr]<<0)|(AppBinBuf[2048*i+4*j+1+SecretDataStrtAddr]<<8)|(AppBinBuf[2048*i+4*j+2+SecretDataStrtAddr]<<16)|(AppBinBuf[2048*i+4*j+3+SecretDataStrtAddr]<<24);
            crc32(&Crc1,TmpU32);
        };

        TmpSmallBinBuf[ 0]=(BYTE)((Crc1>>0)&0x0f);        //low 4 bit of Crc1
        TmpSmallBinBuf[ 1]=(BYTE)((Crc1>>4)&0x0f);
        TmpSmallBinBuf[ 2]=(BYTE)((Crc1>>8)&0x0f);
        TmpSmallBinBuf[ 3]=(BYTE)((Crc1>>12)&0x0f);
        TmpSmallBinBuf[ 4]=(BYTE)((Crc1>>16)&0x0f);
        TmpSmallBinBuf[ 5]=(BYTE)((Crc1>>20)&0x0f);
        TmpSmallBinBuf[ 6]=(BYTE)((Crc1>>24)&0x0f);
        TmpSmallBinBuf[ 7]=(BYTE)((Crc1>>28)&0x0f);    //highest 4 bits of Crc1
        
        TmpSmallBinBuf[ 8]=(BYTE)((i>>0)&0x0f);
        TmpSmallBinBuf[ 9]=(BYTE)((i>>4)&0x0f);
        TmpSmallBinBuf[10]=(BYTE)((i>>8)&0x0f);       //frm idx
        
        fwriteMemcopy(TmpSmallBinBuf, 11, 0);
        for(j=0;j<3000;j++)
        {
            TmpSmallBinBuf[j]=0;
            ModifiedBinBuf[j]=0;
        };

        for(j=0;j<256*8;j++) TmpSmallBinBuf[j]=AppBinBuf[256*8*i+j+SecretDataStrtAddr];
        
        MidiByteConvert7To8(TmpSmallBinBuf, ModifiedBinBuf, 293);   //2048 bytes --> 293 7-byte, converted to 8 bytes --> total 293*8=2344 bytes
        
        fwriteMemcopy(ModifiedBinBuf, 2344, 0);

        TmpSmallBinBuf[0]=0xf7;
        fwriteMemcopy(TmpSmallBinBuf, 1, 0);
        SysExRtnOK=0;
        retimes=0;
        while(!SysExRtnOK)
        {
            retimes++;
            pMidiDeviceProcess->SendMidiSysEx_WithRecvPrepare(MidiSendDataBuf, 2364);
            if(!RecvMidiSysExRtn(0, 0x11112222))
            {
                SysExRtnOK=1;
                break;      //success
            };
            RetryRecordCnt++;
            if(retimes>100) 
               break;      //fail
        }
        ProgressBarValue+=(float)(1.0/28);
        if(ProgressBarValue>0.99999) ProgressBarValue=0.99999;

        if(!SysExRtnOK) return(2);
    }
    return 0;
}

void crc32(unsigned int  *crc, unsigned int dta)
{
    int i; 
    for (i=0; i<32; i++) 
    {
        *crc=(*crc^dta)&0x80000000?(*crc<<1)^0x04C11DB7:(*crc<<1);
        dta<<=1;
    }
}

void CreateSecretData(unsigned int *pDst,BYTE WhichSeedToUse)
{
    int i;
    unsigned int *p1,*p2,*p3,*p4;
    const unsigned int *SecretFuncSeedReallyUsed;

    p1=pDst+0*32;
    p2=pDst+1*32;
    p3=pDst+2*32;
    p4=pDst+3*32;

    if(WhichSeedToUse==1) SecretFuncSeedReallyUsed=SecretFuncSeed_1;
    if(WhichSeedToUse==2) SecretFuncSeedReallyUsed=SecretFuncSeed_2;
    if(WhichSeedToUse==3) SecretFuncSeedReallyUsed=SecretFuncSeed_3;
    if(WhichSeedToUse==4) SecretFuncSeedReallyUsed=SecretFuncSeed_4;


    for(i=0;i<16;i++)
    {
        //Crc1=-1;
        Crc1=0xffffffff;    //if this doesn't work, change to line 1, this is to kill warning
        crc32(&Crc1,SecretFuncSeedReallyUsed[i]);
        crc32(&Crc1,McuId0);
        crc32(&Crc1,McuId1);
        crc32(&Crc1,McuId2);
        SecretCrc[i]=Crc1;
    };

    //group0
    for(i=0;i<32;i++)
    {
        //for testing incorrect secret data cause secret function return bad value
        
        *p1++=0;
        *p2++=0;
        *p3++=0;
        *p4++=0;
   
    };
    p1+=3*32;
    p2+=3*32;
    p3+=3*32;
    p4+=3*32;

    //group1
    for(i=0;i<32;i++)
    {
        //for testing incorrect secret data cause secret function return bad value
        
                *p1++=0;
                *p2++=0;
                *p3++=0;
                *p4++=0;
         
    };
    p1+=3*32;
    p2+=3*32;
    p3+=3*32;
    p4+=3*32;

    //group2
    for(i=0;i<32;i++)
    {
        //for testing incorrect secret data cause secret function return bad value
        
                *p1++=0;
                *p2++=0;
                *p3++=0;
                *p4++=0;
      
    };
    p1+=3*32;
    p2+=3*32;
    p3+=3*32;
    p4+=3*32;

    //group3
    for(i=0;i<32;i++)
    {
        //for testing incorrect secret data cause secret function return bad value
       
                *p1++=0;
                *p2++=0;
                *p3++=0;
                *p4++=0;
        
    };

}

int RecvMidiSysExRtn(BYTE Cmd, unsigned int Para1)
{
    volatile BYTE i=0;

    while(1)
    {
        //Sleep(10);
        i++;
        if(RtnSysExMsgIsReceived) break;
        if(i==/*0xf000000*/0xf000) 
            return(2);               //no messages received at all
    };

    SysExCmdSendBuf [4]=Cmd;
    SysExCmdSendBuf [5]=(Para1>> 0)&0x0f;
    SysExCmdSendBuf [6]=(Para1>> 4)&0x0f;
    SysExCmdSendBuf [7]=(Para1>> 8)&0x0f;
    SysExCmdSendBuf [8]=(Para1>>12)&0x0f;
    SysExCmdSendBuf [9]=(Para1>>16)&0x0f;
    SysExCmdSendBuf[10]=(Para1>>20)&0x0f;
    SysExCmdSendBuf[11]=(Para1>>24)&0x0f;
    SysExCmdSendBuf[12]=(Para1>>28)&0x0f;

    return(CompareSysExRtn());
}

int CompareSysExRtn(void)
{
    int i;

    //modification from ZHY,just for debug
//#ifdef DevDebugMode
    
//#endif
    //end modification

    for(i=0;i<14;i++)
    {
        if(SysExCmdSendBuf[i]!=LowLevel_SysExRecv_Buf[i])
        {
            /*
            String s,t;
            int k;
            for(k=0;k<14;k++)
            {
                s+=T(' ');
                s+=String::toHexStringU8(EDrum_SysExRtnWanted_Buf[k]);
                t+=T(' ');
                t+=String::toHexStringU8(LowLevel_SysExRecv_Buf[k]);
            };

            AlertWindow::showMessageBox (AlertWindow::InfoIcon,s,t);
            */
            
            LowLevel_SysExRecv_Buf[0]=0;    //this is to prevent next time midi in call back function sets up RtnSysExMsgIsReceived again
            return(1);
        }
    }
    LowLevel_SysExRecv_Buf[0]=0;    //this is to prevent next time midi in call back function sets up RtnSysExMsgIsReceived again
    return(0);
}

