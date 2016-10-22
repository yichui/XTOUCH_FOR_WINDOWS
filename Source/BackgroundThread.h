#ifndef __BACKGROUND_THREAD__
#define __BACKGROUND_THREAD__

#include <Windows.h>
#include "JuceHeader.h"
#include "CustomImageButton.h"
#include "CustomTextButton.h"

#define xTOUCHMINI_DevId0                       0x12aa34bb
#define xTOUCHMINI_DevId1                       0x56cc78dd
#define xTOUCHCOMPACT_DevId0                       0x12ee34b7
#define xTOUCHCOMPACT_DevId1                       0x56ff78d7

#define ErrCode_WrongDev                        0x0005


typedef struct ButtonGroup
{
    CustomTextButton * BT1;
    Button * BT2;
    Button * BT3;
    CustomImageButton * BT4;
    CustomImageButton * BT5;
    Button * BT6;
    CustomImageButton * BT7;
    CustomImageButton * BT8;
}ButtonGroup;
/*******************************************************************************
**  Abstract: Thread class
**
**  
**
**  
*******************************************************************************/
class BackgroundThread  : public Thread
{
public:
    BackgroundThread (const String& threadName):Thread(threadName){}
    ~BackgroundThread (){}

    void run();

    void SetBackgroundThreadRunFlag(bool bFlag);
    bool GetBackgroundThreadRunFlag();


private:
    bool bBackgroundThreadRunFlag;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BackgroundThread)
};

class BackgroundThread2  : public Thread
{
public:
    BackgroundThread2 (const String& threadName):Thread(threadName){}
    ~BackgroundThread2 (){}

    void run();

    void SetBackgroundThreadRunFlag(bool bFlag);
    bool GetBackgroundThreadRunFlag();


private:
    bool bBackgroundThreadRunFlag;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BackgroundThread2)
};

class TTThread3  : public Thread
{
public:
    TTThread3 (const String& threadName):Thread(threadName){}
    ~TTThread3 (){}

    void run();

    void SetBackgroundThreadRunFlag(bool bFlag);
    bool GetBackgroundThreadRunFlag();


private:
    bool bBackgroundThreadRunFlag;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (TTThread3)
};

extern void crc32(unsigned int  *crc, unsigned int dta);
extern void MidiByteConvert7To8(BYTE *SrcPtr, BYTE *DstPtr, unsigned int L) ;
extern void MidiByteConvert8To7(unsigned char *SrcPtr, unsigned char *DstPtr, unsigned int L);
extern int XtouchUpdateSoftware(int WhatDev);
extern void Xtouch_SendMidiSysExCmd(unsigned char Cmd, unsigned int Para1, unsigned int Para2);
extern int Xtouch_RecvMidiSysExRtn(unsigned char Cmd, unsigned int Para1);
extern void fwriteMemcopy(BYTE *pSrc, int l, BYTE ToFromTheBeginning);
extern int Xtouch_CreateSysExDataForDownLoad(unsigned int WhatDev);
extern int CompareSysExRtn(void);
extern void CreateSecretData(unsigned int *pDst,BYTE WhichSeedToUse);
extern int RecvMidiSysExRtn(BYTE Cmd, unsigned int Para1);
#endif


