/*
  ==============================================================================

    MidiDeviceProcess.cpp
    Created: 29 Jul 2013 10:39:57am
    Author:  Administrator

  ==============================================================================
*/

#include <string.h>
#include "MidiDeviceProcess.h"
#include "MainComponent.h"
#include "BackgroundThread.h"

int RtnSysExMsgIsReceived;
unsigned char CurrentDevId;
extern bool isFileOpenOk;
unsigned char GetUsbMidiDeviceInfo_TriedTimes;
MidiDeviceProcess * pMidiDeviceProcess = NULL;
bool MidiDeviceProcess::bMidiDevOpenFlag;

extern BackgroundThread * pBackgroundThread;
extern MainComponent * pMainComponent;

unsigned char LowLevel_SysExRecv_Buf[1000];
unsigned char LowLevel_SysExSend_Buf[2800];

// 用于比较 USB MIDI 设备的名字
String E_DrumDeviceName[4] =
{
	"X-TOUCH MINI",
	"X-TOUCH COMPACT",
    "X-TOUCH MINI-U",
    "X-TOUCH COMPACT-U"
};

pMidiDevNameAndId MidiIntDev[10], MidiOutDev[10];
UINT CurrentDevID;
UINT INDEVID, OUTDEVID;
bool midirealdyopen;
//String
// USB MIDI 发送Buffer
BYTE SysExCmdSendBuf[14] = {
                            0xF0,
                            // flag bytes
                            PcHostSysExCmd_FixedHeaderByte0, PcHostSysExCmd_FixedHeaderByte1, PcHostSysExCmd_FixedHeaderByte2,
                            //cmdId
                            0,
                            //Para1
                            0,0,0,0,0,0,0,0,
                            0xF7
                            };
// USB MIDI 接收Buffer
BYTE SysExCmdRevBuf[14];

unsigned char MidiAppBinBuf[512*1024];

#ifdef PlatformWin
#include "windows.h"

#include <Setupapi.h>                   //this is for: U8 CollectUsbInfo(void)
#pragma comment(lib,"Setupapi.lib")     //this is for: U8 CollectUsbInfo(void)



/*********************************************************************************/
unsigned char MidiDeviceProcess:: CollectUsbInfo(void)
{  
    unsigned char  r;

    #ifdef DebugWithOutRealDevConnected
        CurrentDevId=DebugDevImaged_DevID;
        return(DebugDevImagedToBeConnected);
    #endif


    r=0xff;
    //CurrentDevId=0;
    // 获取当前系统所有使用的设备  
    DWORD dwFlag = (DIGCF_ALLCLASSES | DIGCF_PRESENT);  
    HDEVINFO hDevInfo = SetupDiGetClassDevs(NULL, NULL, NULL, dwFlag);  
    if( INVALID_HANDLE_VALUE == hDevInfo )  
        return(r);  

    // 准备遍历所有设备查找USB  
    SP_DEVINFO_DATA sDevInfoData;  
    sDevInfoData.cbSize = sizeof(SP_DEVINFO_DATA);  
  
   wchar_t szDIS[MAX_PATH]; // Device Identification Strings,   
   DWORD nSize = 0 ;  
   int NUM1 = 0;
   int NUM2 = 0;
   for(int i = 0; SetupDiEnumDeviceInfo(hDevInfo,i,&sDevInfoData); i++ )  
   {  
       nSize = 0;  
       if ( !SetupDiGetDeviceInstanceId(hDevInfo, &sDevInfoData, szDIS, sizeof(szDIS), &nSize) )  
            return(r);  

        if((szDIS[0]=='U')&&(szDIS[1]=='S')&&(szDIS[2]=='B'))
        {
            if((szDIS[8]=='1')&&(szDIS[9]=='3')&&(szDIS[10]=='9')&&(szDIS[11]=='7'))
			{
				if ((szDIS[17] == '0') && (szDIS[18] == '0') && (szDIS[19] == 'B') && (szDIS[20] == '2'))
				{
					r = 0xb2;

					if (MidiIntDev[NUM1].MidiDevName.compare("X-TOUCH COMPACT") == 0)
						MidiIntDev[NUM1].Pid = r;
					else if (MidiIntDev[NUM1].MidiDevName.compare("X-TOUCH COMPACT-U") == 0)
						MidiIntDev[NUM1].Pid = r;
					NUM1++;
				}
				else if ((szDIS[17] == '0') && (szDIS[18] == '0') && (szDIS[19] == 'B') && (szDIS[20] == '3')) 
				{ 
					r = 0xb3; 

					if (MidiIntDev[NUM2].MidiDevName.compare("X-TOUCH MINI") == 0)					
						MidiIntDev[NUM2].Pid = r;		
					else if (MidiIntDev[NUM2].MidiDevName.compare("X-TOUCH MINI-U") == 0)
						MidiIntDev[NUM2].Pid = r;
					NUM2++;
				}  //xtouch compact
				
				
				
				

                //check for CurrentDevId
                // string "... ... ... 0.0.x" --> x is from 0,1,2 ...f, stands for CurrentDevId


                if((szDIS[22]=='1')&&(szDIS[23]=='.')&&(szDIS[24]=='0')&&(szDIS[25]=='.'))
                {
                    /*if(szDIS[26]=='0') CurrentDevId=0;
                    if(szDIS[26]=='1') CurrentDevId=1;
                    if(szDIS[26]=='2') CurrentDevId=2;
                    if(szDIS[26]=='3') CurrentDevId=3;
                    if(szDIS[26]=='4') CurrentDevId=4;
                    if(szDIS[26]=='5') CurrentDevId=5;
                    if(szDIS[26]=='6') CurrentDevId=6;
                    if(szDIS[26]=='7') CurrentDevId=7;
                    if(szDIS[26]=='8') CurrentDevId=8;
                    if(szDIS[26]=='9') CurrentDevId=9;
                    if(szDIS[26]=='a') CurrentDevId=10;
                    if(szDIS[26]=='b') CurrentDevId=11;
                    if(szDIS[26]=='c') CurrentDevId=12;
                    if(szDIS[26]=='d') CurrentDevId=13;
                    if(szDIS[26]=='e') CurrentDevId=14;
                    if(szDIS[26]=='f') CurrentDevId=15;
                    if(szDIS[26]=='A') CurrentDevId=10;
                    if(szDIS[26]=='B') CurrentDevId=11;
                    if(szDIS[26]=='C') CurrentDevId=12;
                    if(szDIS[26]=='D') CurrentDevId=13;
                    if(szDIS[26]=='E') CurrentDevId=14;
                    if(szDIS[26]=='F') CurrentDevId=15;
					*/
					//MidiIntDev[NUM].Pid = r;
					//NUM++; 
                   //modification from zhy
                    String s(szDIS);
                    //DispayName[0]=s;
                    //IsNameChange=1;
                }
            };
        };
   }

    // 释放设备  
    SetupDiDestroyDeviceInfoList(hDevInfo);  
	
	return(MidiIntDev[CurrentDevID].Pid);
}  
#endif



/*******************************************************************************
**  Abstract: midi设备处理构造函数 ，检测midi 设备及设备打开操作
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
MidiDeviceProcess::MidiDeviceProcess ()
{
	OUTDEVID = 0;
	INDEVID = 0;
}


void MidiDeviceProcess:: checkistheremididevice()
{
    UINT i;
    UINT iNumOfMidiInOrOutDevice;
	UINT outdevid, indevid;
	
	outdevid = indevid = 0;
    //SetMidiDevOpenFlag(false);

    // MIDI IN
    iNumOfMidiInOrOutDevice = 0;
    iNumOfMidiInOrOutDevice = midiInGetNumDevs();   // 读MIDI IN 设备的个数

    if(iNumOfMidiInOrOutDevice < 1)                 // 不存在MIDI IN设备
    {
        // 显示一个没有midi设备的提示信息
        if(GetUsbMidiDeviceInfo_TriedTimes==0){
#ifdef LANGUAGE_CHINESE_ENABLE
        AlertWindow::showMessageBox (AlertWindow::InfoIcon,
            L"无MIDI输入设备                ",       // 标题栏30个字符宽度
            L"请检查设备或连接线            ");   
#else
            AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                                    "Can not find MIDI IN Device!",
                                    "Please check the Device cable and try again");
#endif
		}
        SetMidiDevOpenFlag(0); 
		MidiIntDev[0].hasopen = 0;
		MidiIntDev[1].hasopen = 0;
		MidiIntDev[2].hasopen = 0;
		MidiOutDev[0].hasopen = 0;
		MidiOutDev[1].hasopen = 0;
		MidiOutDev[2].hasopen = 0;
        return;       // 返回
    }

    for(i=0;i<iNumOfMidiInOrOutDevice;i++)
    {
        // 读midi设备信息
        if (midiInGetDevCaps(i, &MidiInCapabilities, sizeof(MidiInCapabilities)) != MMSYSERR_NOERROR)
        {
            if(GetUsbMidiDeviceInfo_TriedTimes==0){
#ifdef LANGUAGE_CHINESE_ENABLE
            AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                L"获取MIDI输入设备错误          ",       // 标题栏30个字符宽度
                L"请检查设备或连接线            ");   
#else
            AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                "Can not find MIDI IN Device!",
                "please check the Device cable and try again");
#endif
			}
            SetMidiDevOpenFlag(0); 
            return;   // 如果设备错误
        }

        // 设备信息正确，再次比较设备名称信息
        sMidiDeviceName = MidiInCapabilities.szPname;
        if(E_DrumCompareDeviceName())
        {
            //iMidiInDevId = i;   // 记录MIDI IN 设备的通道号
            //break;
			MidiIntDev[indevid].MidiDevId = i;
			MidiIntDev[indevid].MidiDevName = sMidiDeviceName;
			indevid++;
			
        }
        else
        {
            if(i==(iNumOfMidiInOrOutDevice-1)) //当全部通道读完
            {
				if(GetUsbMidiDeviceInfo_TriedTimes==0){
					AlertWindow::showMessageBox (AlertWindow::InfoIcon,
												L"Can not open MIDI IN Device! ",       // 标题栏30个字符宽度
												L"please check the Device cable and try again         ");   
				}
                SetMidiDevOpenFlag(0); 
				MidiIntDev[indevid].hasopen = 0;
                //return;
            }
        }
    }
	/*if (indevid == 0)
	{
		CurrentDevID = 0;
		MidiIntDev[0].hasopen = 0;
		INDEVID = indevid;
	}
	else
		INDEVID = indevid;*/
	if (indevid != INDEVID)
	{
		CloseMidiDevice();
		INDEVID = indevid;
		if (INDEVID == 1)
			CurrentDevID = 0;
		
		SetMidiDevOpenFlag(0);
		
		return;
	}
	else{
		INDEVID = indevid;
		if (indevid == 1)
			CurrentDevID = 0;
		
	}


	iMidiInDevId = MidiIntDev[CurrentDevID].MidiDevId;  //记录MIDI IN 设备的通道号 
	
    // MIDI OUT
    iNumOfMidiInOrOutDevice = 0;
    iNumOfMidiInOrOutDevice = midiOutGetNumDevs();   // 读MIDI OUT 设备的个数

    if(iNumOfMidiInOrOutDevice < 1)                 // 不存在MIDI OUT设备
    {
        if(GetUsbMidiDeviceInfo_TriedTimes==0){
        // 显示一个没有midi设备的提示信息
#ifdef LANGUAGE_CHINESE_ENABLE
        AlertWindow::showMessageBox (AlertWindow::InfoIcon,
            L"无MIDI输出设备                ",       // 标题栏30个字符宽度
            L"请检查设备或连接线            ");   
#else
        AlertWindow::showMessageBox (AlertWindow::InfoIcon,
            "Can not find MIDI OUT Device!",
            "please check the Device cable and try again");
#endif
		}
        SetMidiDevOpenFlag(0); 
        return;       // 返回
    }

    for(i=0;i<iNumOfMidiInOrOutDevice;i++)//遍历各个通道
    {
       // if(GetUsbMidiDeviceInfo_TriedTimes==0)
        // 读midi out设备信息
        if (midiOutGetDevCaps(i, &MidiOutCapabilities, sizeof(MidiOutCapabilities)) != MMSYSERR_NOERROR)
        {
             if(GetUsbMidiDeviceInfo_TriedTimes==0)
			 {
#ifdef LANGUAGE_CHINESE_ENABLE
            AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                L"获取MIDI输出设备错误          ",       // 标题栏30个字符宽度
                L"请检查设备或连接线            ");   
#else
				AlertWindow::showMessageBox (AlertWindow::InfoIcon,
					"Can not find MIDI OUT Device!",
					"please check the Device cable and try again");
#endif
			}
            SetMidiDevOpenFlag(0); 
            return;   // 如果设备错误
        }

        // 设备信息正确，再次比较设备名称信息
        sMidiDeviceName = MidiOutCapabilities.szPname;
        if(E_DrumCompareDeviceName())
        {
            //iMidiOutDevId = i;   // 记录MIDI Out 设备的通道号
            //break;
			MidiOutDev[outdevid].MidiDevId = i;
			MidiOutDev[outdevid].MidiDevName = sMidiDeviceName;
			outdevid++;
        }
        else
        {
            if(i==(iNumOfMidiInOrOutDevice-1))
            {
				if(GetUsbMidiDeviceInfo_TriedTimes==0){
#ifdef LANGUAGE_CHINESE_ENABLE
				AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                    L"MIDI输出设备名检测错误         ",       // 标题栏30个字符宽度
                    L"请检查连接设备是否正确         ");    
#else
				AlertWindow::showMessageBox (AlertWindow::InfoIcon,
                "Can not find MIDI OUT Device!",
                "please check the Device cable and try again");
#endif
				}
                SetMidiDevOpenFlag(0); 
                MidiOutDev[outdevid].hasopen = 0;
                //return;
            }
        }
    }
	/*if (outdevid == 0)
	{
		CurrentDevID = 0;
		MidiIntDev[0].hasopen = 0;
		OUTDEVID = outdevid;
	}
	else
		OUTDEVID = outdevid;*/
	if (outdevid != OUTDEVID)
	{
		CloseMidiDevice();
		OUTDEVID = outdevid;
		if (outdevid == 1)
			CurrentDevID = 0;
		
		SetMidiDevOpenFlag(0);
		
		return;
	}
	else
		OUTDEVID = outdevid;

	iMidiOutDevId = MidiOutDev[CurrentDevID].MidiDevId;  //记录MIDI OUT 设备的通道号

    if(!GetMidiDevOpenFlag())  //！bMidiDevOpenFlag
    {
		if (!MidiIntDev[CurrentDevID].hasopen )//&& MidiIntDev[CurrentDevID].MidiInDevHid != MidiInDevHid)
		{
			// 打开MIDI IN 设备
			MidiDevOperateResult = midiInOpen(&MidiInDevHid, iMidiInDevId, (DWORD)&(MidiInCallback), 0, CALLBACK_FUNCTION);
			if (MidiDevOperateResult != MMSYSERR_NOERROR)  // 打开设备错误
			{
				if(GetUsbMidiDeviceInfo_TriedTimes==0){
#ifdef LANGUAGE_CHINESE_ENABLE
				AlertWindow::showMessageBox (AlertWindow::InfoIcon,
					L"打开MIDI输入设备错误          ",       // 标题栏30个字符宽度
					L"请检查设备或连接线            ");   
#else
				AlertWindow::showMessageBox(AlertWindow::InfoIcon,
					"Can not open MIDI IN Device1!",
					"please check the Device cable and try again");
#endif
				}

				if(MidiDevOperateResult==MMSYSERR_NOMEM)
				{
					if(INDEVID>1)
					{
						if(CurrentDevID<INDEVID-1)CurrentDevID=CurrentDevID+1;
						else if(CurrentDevID==INDEVID-1) CurrentDevID=0;
						
					}
				}
				SetMidiDevOpenFlag(0);
				return;
			}
			MidiIntDev[CurrentDevID].hasopen = 1;
			MidiIntDev[CurrentDevID].MidiInDevHid = MidiInDevHid;
		}
		else if (MidiIntDev[CurrentDevID].hasopen /*&& MidiIntDev[CurrentDevID].MidiInDevHid == MidiInDevHid*/)
			MidiInDevHid = MidiIntDev[CurrentDevID].MidiInDevHid;
		else
			MidiIntDev[CurrentDevID].hasopen = 0;
			
		
		//MMRESULT r = midiInGetID(MidiInDevHid,0);

		MidiDevOperateResult = midiInStart(MidiInDevHid);   // 开始接收设备信息
		if (MidiDevOperateResult != MMSYSERR_NOERROR)
		{
			if(GetUsbMidiDeviceInfo_TriedTimes==0){
#ifdef LANGUAGE_CHINESE_ENABLE
			AlertWindow::showMessageBox (AlertWindow::InfoIcon,
				L"启动MIDI输入设备错误          ",       // 标题栏30个字符宽度
				L"请检查设备或连接线            ");   
#else
			AlertWindow::showMessageBox(AlertWindow::InfoIcon,
				"Can not open MIDI IN Device2!",
				"please check the Device cable and try again");
#endif
			}
			SetMidiDevOpenFlag(0);
			return;
		}
			

			// 打开midi out 设备
		if (!MidiOutDev[CurrentDevID].hasopen)
		{
			MidiDevOperateResult = midiOutOpen(&MidiOutDevHid, iMidiOutDevId, 0, 0, CALLBACK_NULL);
			if (MidiDevOperateResult != MMSYSERR_NOERROR)
			{
				if(GetUsbMidiDeviceInfo_TriedTimes==0){
#ifdef LANGUAGE_CHINESE_ENABLE
				AlertWindow::showMessageBox (AlertWindow::InfoIcon,
					L"打开MIDI输出设备错误          ",       // 标题栏30个字符宽度
					L"请检查设备或连接线            ");
#else
				AlertWindow::showMessageBox(AlertWindow::InfoIcon,
					"Can not open MIDI OUT Device3!",
					"please check the Device cable and try again");
#endif
				}
				SetMidiDevOpenFlag(0);
				return;
			}
			MidiOutDev[CurrentDevID].hasopen = 1;
			MidiOutDev[CurrentDevID].MidiOutDevHid = MidiOutDevHid;
		}
		else{
			MidiOutDevHid = MidiOutDev[CurrentDevID].MidiOutDevHid;
			//midiOutReset(MidiOutDevHid);
		}
        
		SetMidiInRevSysExBuffer(LowLevel_SysExRecv_Buf);   // 设置midi in 设备接收SysEx信息的buffer

		SetMidiDevOpenFlag(true);  //bMidiDevOpenFlag=true
    }
	
        
}


/*******************************************************************************
**  Abstract: open other midi device
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
void MidiDeviceProcess::OpenMidiDevice(UINT MidiInDevId, UINT MidiOutDevId)
{
	//if (!GetMidiDevOpenFlag())  //！bMidiDevOpenFlag
	//{

		// 打开MIDI IN 设备
		/*MidiDevOperateResult = midiInOpen(&MidiInDevHid, MidiInDevId, (DWORD)&(MidiInCallback), 0, CALLBACK_FUNCTION);
		if (MidiDevOperateResult != MMSYSERR_NOERROR)  // 打开设备错误
		{
			if (GetUsbMidiDeviceInfo_TriedTimes == 0){
#ifdef LANGUAGE_CHINESE_ENABLE
				AlertWindow::showMessageBox(AlertWindow::InfoIcon,
					L"打开MIDI输入设备错误          ",       // 标题栏30个字符宽度
					L"请检查设备或连接线            ");
#else
				AlertWindow::showMessageBox(AlertWindow::InfoIcon,
					"Can not open MIDI IN Device!",
					"please check the Device cable and try again");
#endif
			}
			SetMidiDevOpenFlag(0);
			return;
		}*/

		//MidiDevOperateResult = midiInStart(MidiInDevHid);   // 开始接收设备信息
	MidiDevOperateResult = midiInStart(MidiIntDev[MidiInDevId].MidiInDevHid);   // 开始接收设备信息
		if (MidiDevOperateResult != MMSYSERR_NOERROR)
		{
			if (GetUsbMidiDeviceInfo_TriedTimes == 0){
#ifdef LANGUAGE_CHINESE_ENABLE
				AlertWindow::showMessageBox(AlertWindow::InfoIcon,
					L"启动MIDI输入设备错误          ",       // 标题栏30个字符宽度
					L"请检查设备或连接线            ");
#else
				AlertWindow::showMessageBox(AlertWindow::InfoIcon,
					"Can not open MIDI IN Device!",
					"please check the Device cable and try again");
#endif
			}
			SetMidiDevOpenFlag(0);
			return;
		}
		midiOutReset(MidiIntDev[CurrentDevID].MidiOutDevHid);
		// 打开midi out 设备
		/*MidiDevOperateResult = midiOutOpen(&MidiOutDevHid, MidiOutDevId, 0, 0, CALLBACK_NULL);
		if (MidiDevOperateResult != MMSYSERR_NOERROR)
		{
			if (GetUsbMidiDeviceInfo_TriedTimes == 0){
#ifdef LANGUAGE_CHINESE_ENABLE
				AlertWindow::showMessageBox(AlertWindow::InfoIcon,
					L"打开MIDI输出设备错误          ",       // 标题栏30个字符宽度
					L"请检查设备或连接线            ");
#else
				AlertWindow::showMessageBox(AlertWindow::InfoIcon,
					"Can not open MIDI OUT Device!",
					"please check the Device cable and try again");
#endif
			}
			SetMidiDevOpenFlag(0);
			return;
		}*/
	//}

}


/*******************************************************************************
**  Abstract: 复位及关闭midi设备
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
void MidiDeviceProcess::CloseMidiDevice()
{
    SetMidiDevOpenFlag(false);

    //reset and close Midi In device
	for(int i = 0 ;i<INDEVID;i++)
	{
		MidiInDevHid = MidiIntDev[i].MidiInDevHid;
		MidiOutDevHid = MidiOutDev[i].MidiOutDevHid;

		if(MidiIntDev[i].hasopen)
		{
			MidiDevOperateResult = midiInReset(MidiInDevHid); //读取复位信息
			if (MidiDevOperateResult != MMSYSERR_NOERROR)
			{
				CurrentDevID = 0;
				if (GetUsbMidiDeviceInfo_TriedTimes == 0)
				{
	#ifdef LANGUAGE_CHINESE_ENABLE
					AlertWindow::showMessageBox (AlertWindow::InfoIcon,
						L"复位MIDI输入设备错误          ",       // 标题栏30个字符宽度
						L"请检查设备或连接线            ");   
	#else
					AlertWindow::showMessageBox(AlertWindow::InfoIcon,
						"Can not reset MIDI IN Device1!",
						"please check the Device cable and try again");
	#endif
				}
				return;
			}
			//midiInUnprepareHeader(MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
			MidiDevOperateResult = midiInClose(MidiInDevHid);  //读取关闭信息
			if (MidiDevOperateResult != MMSYSERR_NOERROR)
			{
				CurrentDevID = 0;
				if (GetUsbMidiDeviceInfo_TriedTimes == 0)
				{
	#ifdef LANGUAGE_CHINESE_ENABLE
					AlertWindow::showMessageBox (AlertWindow::InfoIcon,
						L"关闭MIDI输入设备错误          ",       // 标题栏30个字符宽度
						L"请检查设备或连接线            ");   
	#else
					AlertWindow::showMessageBox(AlertWindow::InfoIcon,
						"Can not close MIDI IN Device!!!!!",
						"please check the Device cable and try again");
	#endif
				}
				return;
			}
		}
		MidiIntDev[i].hasopen = 0;
		//MidiIntDev[1].hasopen = 0;
		//MidiIntDev[2].hasopen = 0;
		//MidiIntDev[3].hasopen = 0;

		//reset and close Midi Out device
		if(MidiOutDev[i].hasopen)
		{
			MidiDevOperateResult = midiOutReset(MidiOutDevHid);
			if (MidiDevOperateResult != MMSYSERR_NOERROR)
			{
				CurrentDevID = 0;
				if (GetUsbMidiDeviceInfo_TriedTimes == 0)
				{
	#ifdef LANGUAGE_CHINESE_ENABLE
					AlertWindow::showMessageBox(AlertWindow::InfoIcon,
						L"复位MIDI输出设备错误          ",       // 标题栏30个字符宽度
						L"请检查设备或连接线            ");
	#else
					AlertWindow::showMessageBox(AlertWindow::InfoIcon,
						"Can not reset MIDI OUT Device2!!!!!",
						"please check the Device cable and try again");
	#endif
				}
				return;
			}
			//midiOutUnprepareHeader(MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
			MidiDevOperateResult = midiOutClose(MidiOutDevHid);
			if (MidiDevOperateResult != MMSYSERR_NOERROR)
			{
				CurrentDevID = 0;
				if (GetUsbMidiDeviceInfo_TriedTimes == 0)
				{
	#ifdef LANGUAGE_CHINESE_ENABLE
					AlertWindow::showMessageBox(AlertWindow::InfoIcon,
						L"关闭MIDI输出设备错误          ",       // 标题栏30个字符宽度
						L"请检查设备或连接线            ");
	#else
					AlertWindow::showMessageBox(AlertWindow::InfoIcon,
						"Can not close MIDI IN Device!!!!!",
						"please check the Device cable and try again");
	#endif
				}
				return;
			}
		}
		MidiOutDev[i].hasopen = 0;
		//MidiOutDev[1].hasopen = 0;
		//MidiOutDev[2].hasopen = 0;
		//MidiOutDev[3].hasopen = 0;
	}
	//CurrentDevID = 0;
}

/*********************************************
**get sMidiDeviceName
**
**
*********************************************************************/
String MidiDeviceProcess::GetsMidiDeviceName()
{
	return MidiIntDev[CurrentDevID].MidiDevName;
}

/*******************************************************************************
**  Abstract: 比较是否是电子鼓设备 memcmp
**
**  Parameters:
**
**  Returns:
*******************************************************************************/
bool MidiDeviceProcess::E_DrumCompareDeviceName()
{
/*	
	for (UINT i=0;i<3;i++)
	{
		if (!E_DrumDeviceName[i].compare(sMidiDeviceName))   // 相同为0
		{
			return(true);
		}
	}
*/

	for (UINT i=0;i<4;i++)
	{
		if(sMidiDeviceName.containsIgnoreCase(E_DrumDeviceName[i]))
		//if (!E_DrumDeviceName[i].compare(sMidiDeviceName))   // 相同为0
		{
			return(true);
		}
	}
    return(false);
}


/*******************************************************************************
**  Abstract: 设置midi in 设备接收SysEx信息的buffer
**
**  Parameters: pCmdRevBuffer: 接收Buffer的指针
**
**  Returns:
*******************************************************************************/
void MidiDeviceProcess::SetMidiInRevSysExBuffer(BYTE *pCmdRevBuffer)
{
    MidiInHdr.lpData = (LPSTR)pCmdRevBuffer;
    //MidiInHdr.dwBufferLength = 14;
    if (eXTOUCH_MODE_ID == COMPACT_MODE)
        MidiInHdr.dwBufferLength = COMPACT_PRE_7TO8_ADD_HEAD;
    else if (eXTOUCH_MODE_ID == MINI_MODE)
        MidiInHdr.dwBufferLength = MINI_PRE_7TO8_ADD_HEAD;
    MidiInHdr.dwFlags = 0;
	MidiInWriteBufferCnt = 0;
    midiInPrepareHeader(MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
    midiInAddBuffer    (MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
    midiInStart(MidiInDevHid);
}


/*******************************************************************************
**  Abstract: 发送SysEx命令包，
**              这里固定为发送14个字节的命令数据
**  Parameters: pCmdSendPacket: 发送命令包的指针
**
**  Returns:
*******************************************************************************/
void MidiDeviceProcess::SendMidiSysExCmd(BYTE *pCmdSendPacket)
{
    //MessageManagerLock * pMSGLock;

    MidiOutHdr.lpData = (LPSTR)SysExCmdSendBuf;
    MidiOutHdr.dwBufferLength = sizeof(SysExCmdSendBuf);

    memcpy(&SysExCmdSendBuf[5],pCmdSendPacket,8);        // 复制需要发送的数据到buffer

    /*pMSGLock = new MessageManagerLock(Thread::getCurrentThread());
    if(pMSGLock->lockWasGained())
    {
        pMainComponent->eWriteSendText(&SysExCmdSendBuf[4]); // 在发送文本框中显示发送的数据
    }
    delete pMSGLock;*/
	MidiInWriteBufferCnt = 0;
    pMainComponent->pMainComponentMessage = new MainComponentMessage("SendTextMessage",0x01);
    pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);    // 发消息，写发送文本框

    MidiOutHdr.dwFlags = 0;
    midiOutPrepareHeader(MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
    midiOutLongMsg(MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
}


/*******************************************************************************
**  Abstract: 设置midi设备打开标志
**
**  Parameters: bFlag: false , true
**
**  Returns:
*******************************************************************************/
void MidiDeviceProcess::SetMidiDevOpenFlag(bool bFlag)
{
    bMidiDevOpenFlag = bFlag;
}


/*******************************************************************************
**  Abstract: 返回是否打开midi设备
**
**  Parameters:
**
**  Returns: false:没有正确打开, true:有正确打开
*******************************************************************************/
bool MidiDeviceProcess::GetMidiDevOpenFlag()
{
    return bMidiDevOpenFlag;
}


/****************************************************************/
void MidiDeviceProcess::SendMidiSysEx_NoRecvPrepare(unsigned char *SendPtr, int ll)
{
    
    //midiInUnprepareHeader(MidiInDev, &MidiRecvBuf, sizeof(MidiRecvBuf));
    //midiInAddBuffer    (MidiInDev, &MidiRecvBuf, sizeof(MidiRecvBuf));

    //prepare for receiving
    MidiInHdr.lpData = (LPSTR) NULL;
    MidiInHdr.dwBufferLength =0;    //ZZZ???
    MidiInHdr.dwFlags = 0;
    midiInUnprepareHeader(MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
    midiInAddBuffer    (MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
    midiInStart(MidiInDevHid);

    


	MidiInWriteBufferCnt = 0;
    //prepare for sending
    MidiOutHdr.lpData = (LPSTR) SendPtr;
    MidiOutHdr.dwBufferLength = ll;
    MidiOutHdr.dwFlags = 0;
    midiOutPrepareHeader(MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
    //send SysEx
    midiOutLongMsg      (MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
}


/*****************************************************************/
void MidiDeviceProcess::SendMidiSysEx_WithRecvPrepare(unsigned char *SendPtr, int l)
{
    int i;

    //prepare for receiving
    MidiInHdr.lpData = (LPSTR) LowLevel_SysExRecv_Buf;
    //MidiInHdr.dwBufferLength = 14;    //ZZZ???
    if (eXTOUCH_MODE_ID == COMPACT_MODE)
        MidiInHdr.dwBufferLength = COMPACT_PRE_7TO8_ADD_HEAD;
    else if (eXTOUCH_MODE_ID == MINI_MODE)
        MidiInHdr.dwBufferLength = MINI_PRE_7TO8_ADD_HEAD;
    MidiInHdr.dwFlags = 0;
    midiInPrepareHeader(MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
    midiInAddBuffer    (MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
    midiInStart(MidiInDevHid);

    //prepare for sending
    MidiOutHdr.lpData = (LPSTR) SendPtr;
    MidiOutHdr.dwBufferLength = l;
    MidiOutHdr.dwFlags = 0;
    midiOutPrepareHeader(MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
    RtnSysExMsgIsReceived=0;
	//MidiInWriteBufferCnt = 0;
    /*for(i=0;i<l;i++)
    {
        LowLevel_SysExSend_Buf[i]=*SendPtr++;

        //modification from ZHY,just for debug
#ifdef DevDebugMode
        //Debug_Send_Buf[DebugSendDataSize]=LowLevel_SysExSend_Buf[i];
        //DebugSendDataSize++;
#endif
        //end modification
    }*/

    //send SysEx
    midiOutLongMsg      (MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
}

void MidiDeviceProcess::SendLongMidiSysEx_WithRecvPrepare(unsigned char *SendPtr)
{
    //prepare for receiving
    MidiInHdr.lpData = (LPSTR) LowLevel_SysExRecv_Buf;
	if (eXTOUCH_MODE_ID == COMPACT_MODE)
		MidiInHdr.dwBufferLength = COMPACT_PRE_7TO8_ADD_HEAD;   
	else if (eXTOUCH_MODE_ID == MINI_MODE)
		MidiInHdr.dwBufferLength = MINI_PRE_7TO8_ADD_HEAD;
    MidiInHdr.dwFlags = 0;
    midiInPrepareHeader(MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
    midiInAddBuffer    (MidiInDevHid, &MidiInHdr, sizeof(MidiInHdr));
    midiInStart(MidiInDevHid);

    //prepare for sending
    MidiOutHdr.lpData = (LPSTR) SendPtr;
    MidiOutHdr.dwBufferLength = 14;
    MidiOutHdr.dwFlags = 0;
    midiOutPrepareHeader(MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
    RtnSysExMsgIsReceived=0;
	MidiInWriteBufferCnt = 0;
	//MidiInWriteBufferCnt = 0;
    midiOutLongMsg      (MidiOutDevHid, &MidiOutHdr, sizeof(MidiOutHdr));
}


/********************************************************************************/
#define Un_Unicode
bool ReadBinOrSyxFile(int whatdev)
{
    bool result=true;
    FILE *Fn=NULL,*Fn1=NULL;
    int i=0,l=1;
    int j=0;
   
    unsigned char *p=NULL;

#ifdef Un_Unicode
    const char *FileName[30]; 
    
    FileName[0]="_UpdateFiles/Xtouch_Compact.bin";								//for device 0x00e9
    FileName[1]="_UpdateFiles/Xtouch_Mini.bin";                        //for device 0x00ea

	//FileName[13]="_UpdateFiles/Keyboard_49_Key_Update.bin";
   // FileName[14]="_UpdateFiles/Keyboard_61_Key_Update.bin";
    //the first step:open the file to update
    switch(whatdev) 
    {
        

        case 0xb2:if(fopen_s(&Fn,FileName[0], "r+b"))result=false;         //open the update file of Keyboard 49
                  j=0;
                  break;

        case 0xb3:if(fopen_s(&Fn,FileName[1], "r+b"))result=false;         //open the update file of keyboard 61
                  j=1;
                  break;
                 
    }
#endif
	
#ifdef Unicode 
    const wchar_t *FileName[30];
    FileName[ 0]=L"_UpdateFiles/RndSoftCn_Cmd_P0AJD_MainUpdate_V1.0.syx";		//for device 0x00c0
    FileName[ 1]=L"_UpdateFiles/RndSoftCn_Cmd_P0AJE_MainUpdate_V1.0.syx";		//for device 0x00c1
    FileName[ 2]=L"_UpdateFiles/RndSoftCn_Cmd_P0AJF_MainUpdate_V1.0.syx";		//for device 0x00c2
    FileName[ 3]=L"_UpdateFiles/RndSoftCn_Cmd_P0AJG_MainUpdate_V1.0.syx";		//for device 0x00c3
    FileName[ 4]=L"_UpdateFiles/RndSoftCn_Cmd_P0AJH_MainUpdate_V1.0.syx";		//for device 0x00c4
    FileName[ 5]=L"_UpdateFiles/RndSoftCn_Cmd_P0AJR_MainUpdate_V1.0.syx";		//for device 0x00c5
    FileName[ 6]=L"_UpdateFiles/RndSoftCn_Cmd_P0809_MainUpdate_V1.0.syx";		//for device 0x00c6
    FileName[ 7]=L"_UpdateFiles/RndSoftCn_Cmd_P0AVW_MainUpdate_V1.0.syx";		//for device 0x00c7
    FileName[ 8]=L"_UpdateFiles/RndSoftCn_Cmd_P0B3N_MainUpdate_V1.0.syx";		//for device 0x00c8

    FileName[11]=L"_UpdateFiles/ER_IROM1_60.bin";								//for device 0x00e0
    FileName[12]=L"_UpdateFiles/ER_IROM2_60.bin";
    FileName[ 9]=L"_UpdateFiles/ER_IROM1_70.bin";								//for device 0x00e1
    FileName[10]=L"_UpdateFiles/ER_IROM2_70.bin";

    FileName[13]=L"_UpdateFiles/Keyboard_49.bin";								//for device 0x00e9
    FileName[14]=L"_UpdateFiles/Keyboard_61.bin";	 //for device 0x00ea
	//FileName[13]="_UpdateFiles/Keyboard_49_Key_Update.bin";
   // FileName[14]="_UpdateFiles/Keyboard_61_Key_Update.bin";
    //the first step:open the file to update
    switch(whatdev) 
    {
        case 0xc0:if(_wfopen_s(&Fn,FileName[0], L"r+b"))result=false; //open the opdate file of the series of CMD Controllers
                  j=0;
                  break;

        case 0xc1:if(_wfopen_s(&Fn,FileName[1], L"r+b"))result=false;
                  j=1;
                  break;

        case 0xc2:if(_wfopen_s(&Fn,FileName[2], L"r+b"))result=false;
                  j=2;
                  break;

        case 0xc3:if(_wfopen_s(&Fn,FileName[3], L"r+b"))result=false;
                  j=3;
                  break;

        case 0xc4:if(_wfopen_s(&Fn,FileName[4],L"r+b"))result=false;
                  j=4;
                  break;

        case 0xc5:if(_wfopen_s(&Fn,FileName[5], L"r+b"))result=false;      
                  j=5;
                  break;

        case 0xc6:if(_wfopen_s(&Fn,FileName[6], L"r+b"))result=false;
                  j=6;
                  break;
                  
        case 0xc7:if(_wfopen_s(&Fn,FileName[7], L"r+b"))result=false;
                  j=7;
                  break;

        case 0xca:if(_wfopen_s(&Fn,FileName[15], L"r+b"))result=false;
                  j=15;
                  break;

        case 0xe0:if(!_wfopen_s(&Fn,FileName[11], L"r+b"))                   //open the update file of E_DrumXd60 IROM1
                  {
                      if(_wfopen_s(&Fn1,FileName[12], L"r+b"))
                      {
                          result=false;                                  //open the update file of E_Drumxd70 IROM2
                          fclose(Fn1);
                      }
                  }
                  else result=false;
                  if(result)i=1;
                  j=11;
                  break;

        case 0xe1:if(!_wfopen_s(&Fn,FileName[9], L"r+b"))                    //open the update file of E_DrumXd70 IROM1
                  {
                      if(_wfopen_s(&Fn1,FileName[10], L"r+b"))
                      { 
                          result=false;                                     //open the update file of E_DrumXd70 IROM2
                          fclose(Fn1);
                      }
                  }
                  else result=false;
                  if(result)i=1;
                  j=9;
                  break;

        case 0xe8:if(_wfopen_s(&Fn,FileName[13], L"r+b"))result=false;         //open the update file of Keyboard 49
                  j=13;
                  break;

        case 0xe9:if(_wfopen_s(&Fn,FileName[14], L"r+b"))result=false;         //open the update file of keyboard 61
                  j=14;
                  break;
                 
    }
#endif
    
    //the second step:read the update date,namely download the update file;
    if(result)
    {
            p=MidiAppBinBuf;
            while(!feof(Fn))fread(p++,sizeof(char),1,Fn);
            fclose(Fn);
            p=NULL;
            
           // IsNameChange=1;
           // String s(FileName[j]);
            //DispayName[3]=s;        
    }
   // else fclose(Fn);   
    
  //  Isopen=GetExternalFile("..\\_UpdateFiles\\*.*",DispayName[3]);
  //  if(Isopen)DispayName[5]=DispayName[3];
 
    isFileOpenOk=result;
    return result;
}

void MidiDeviceProcess::CopyMidiSysExToCheckBuffer(const BYTE *pSrcAdd)
{
	//if (MidiInWriteBufferCnt == 0)
	//{
		//for (int i = 0; i < 650; i++)
		//{
		//	MidiInCheckBuffer[i] = *pSrcAdd++;
		//}
	if(eXTOUCH_MODE_ID == COMPACT_MODE)
	{
		if(LowLevel_SysExRecv_Buf[0]==0xf0 && LowLevel_SysExRecv_Buf[COMPACT_PRE_7TO8_ADD_HEAD-1]==0xf7)
			MidiInWriteBufferCnt = 1;
	//}
	}
	else
	{
		if (LowLevel_SysExRecv_Buf[0] == 0xf0 && LowLevel_SysExRecv_Buf[MINI_PRE_7TO8_ADD_HEAD-1] == 0xf7)	
			MidiInWriteBufferCnt = 1;
	}
}

/*******************************************************************************
**  Abstract: 接收midi message 的回调函数
**
**  Parameters: 如果接收的MIDI消息是NOTE消息，可直接读变量dwParam1得出数据
**              如果接收的MIDI消息是sysEx消息，需要读接收SysEx信息的buffer得出数据
**  Returns:
*******************************************************************************/
void CALLBACK MidiInCallback(HMIDIIN hMidiIn,UINT wMsg,DWORD_PTR dwInstance,DWORD_PTR dwParam1,DWORD_PTR dwParam2)
{
    if(wMsg == MIM_LONGDATA)//MIM_LONGDATA:0x3c4
    {
        if(MidiDeviceProcess::GetMidiDevOpenFlag())
        {
            if((LowLevel_SysExRecv_Buf[1]==0x50)&&(LowLevel_SysExRecv_Buf[2]==0x51)
                &&(LowLevel_SysExRecv_Buf[3]==0x52))
            {
               // pBackgroundThread->CopyMidiSysExToCheckBuffer(&SysExCmdRevBuf[4]);   // 复制接收到的信息
                pMidiDeviceProcess->CopyMidiSysExToCheckBuffer(LowLevel_SysExRecv_Buf);
               // pMidiDeviceProcess->SetMidiInRevSysExBuffer(LowLevel_SysExRecv_Buf);  // 重设midi接收buffer
                //pMainComponent->CopyToDispBuffer(&SysExCmdRevBuf[4]);   // 复制接收到的信息到显示缓存
                //pMainComponent->pMainComponentMessage = new MainComponentMessage("ReceiveTextMessage",0x01);
                //pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);    // 发消息，写发送文本框
            }
            
        }
        if(LowLevel_SysExRecv_Buf[0]==0xf0 )
        {
			RtnSysExMsgIsReceived=1;
            //pMidiDeviceProcess->SetMidiInRevSysExBuffer(LowLevel_SysExRecv_Buf); 
        }
    }

    else if (wMsg == MIM_DATA)//MIM_DATA:0x3c3
    {
         if(LowLevel_SysExRecv_Buf[0]==0xf0)
        {
            RtnSysExMsgIsReceived=1;
        }
    }
       /* if((dwParam1 & 0x000000F8) != 0x000000F8)   // 忽略时间戳信息
        {
        if(pMainComponent->GetChildComponentID() == CHILD_COMPONENT_XD60COMPONENT)
        {
            if(pXD60Component->DrumXD60TestStep == DRUM_XD60_TEST_TRIGGER)
            {
                if((dwParam1 & 0x00FF00FF) != 0x00000099)
                {
                    memset(SysExCmdRevBuf,0x00,sizeof(SysExCmdRevBuf));

                    SysExCmdRevBuf[4] = E_DRUM_TEST_CMD;
                    SysExCmdRevBuf[5] = 0x0B;
                    SysExCmdRevBuf[6] = (BYTE)(dwParam1 & 0xFF);      // Status
                    SysExCmdRevBuf[7] = (BYTE)((dwParam1>>8)&0xFF);   // note ID
                    SysExCmdRevBuf[8] = (BYTE)((dwParam1>>16)&0xFF);  // 值

                    SysExCmdRevBuf[9] = (BYTE)((dwParam2>>24)&0xFF);      // 时间信息
                    SysExCmdRevBuf[10] = (BYTE)((dwParam2>>16)&0xFF);  // 
                    SysExCmdRevBuf[11] = (BYTE)((dwParam2>>8)&0xFF); // 
                    SysExCmdRevBuf[12] = (BYTE)(dwParam2 & 0xFF); // 

                    pBackgroundThread->CopyMidiSysExToCheckBuffer(&SysExCmdRevBuf[4]);   // 复制接收到的信息

                    pMainComponent->CopyToDispBuffer(&SysExCmdRevBuf[4]);   // 复制接收到的信息到显示缓存
                    pMainComponent->pMainComponentMessage = new MainComponentMessage("ReceiveTextMessage",0x01);
                    pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);    // 发消息，写发送文本框
                }
            }
        }

        if(pMainComponent->GetChildComponentID() == CHILD_COMPONENT_XD70COMPONENT)
        {
            if(pXD70Component->DrumXD70TestStep == DRUM_XD70_TEST_TRIGGER)
            {
                if(((dwParam1 & 0x00FF00FF) != 0x00000099) && ((dwParam1 & 0x000000FF) != 0x00000089))
                {
                    memset(SysExCmdRevBuf,0x00,sizeof(SysExCmdRevBuf));

                    SysExCmdRevBuf[4] = E_DRUM_TEST_CMD;
                    SysExCmdRevBuf[5] = 0x0B;
                    SysExCmdRevBuf[6] = (BYTE)(dwParam1 & 0xFF);      // Status
                    SysExCmdRevBuf[7] = (BYTE)((dwParam1>>8)&0xFF);   // note ID
                    SysExCmdRevBuf[8] = (BYTE)((dwParam1>>16)&0xFF);  // 值

                    SysExCmdRevBuf[9] = (BYTE)((dwParam2>>24)&0xFF);      // 时间信息
                    SysExCmdRevBuf[10] = (BYTE)((dwParam2>>16)&0xFF);  // 
                    SysExCmdRevBuf[11] = (BYTE)((dwParam2>>8)&0xFF); // 
                    SysExCmdRevBuf[12] = (BYTE)(dwParam2 & 0xFF); // 

                    pBackgroundThread->CopyMidiSysExToCheckBuffer(&SysExCmdRevBuf[4]);   // 复制接收到的信息

                    pMainComponent->CopyToDispBuffer(&SysExCmdRevBuf[4]);   // 复制接收到的信息到显示缓存
                    pMainComponent->pMainComponentMessage = new MainComponentMessage("ReceiveTextMessage",0x01);
                    pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);    // 发消息，写发送文本框
                }
            }
        }

        dwParam1 = 0;
    }
}*/
}






