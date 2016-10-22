/*
  ==============================================================================

    MidiDeviceProcess.h
    Created: 29 Jul 2013 10:39:57am
    Author:  Administrator

  ==============================================================================
*/

#ifndef __MIDIDEVICEPROCESS_H_30C192__
#define __MIDIDEVICEPROCESS_H_30C192__


#include <Windows.h>
#include "JuceHeader.h"


//fixed head bytes
#define PcHostSysExCmd_FixedHeaderByte0         0x40
#define PcHostSysExCmd_FixedHeaderByte1         0x41
#define PcHostSysExCmd_FixedHeaderByte2         0x42

#define E_DRUM_TEST_CMD             0x64     // 测试用的命令标示符
#define E_DRUM_TEST_XD60_IDTF       0x60     // 60的标示符
#define E_DRUM_TEST_XD70_IDTF       0x70     // 70的标示符

typedef struct MidiDevNameAndId
{
	UINT MidiDevId;
	String MidiDevName;
	HMIDIIN MidiInDevHid;   // MIDI IN 设备句柄
	HMIDIOUT MidiOutDevHid; // MIDI OUT 设备句柄
	unsigned char Pid;
	bool hasopen;
}pMidiDevNameAndId;


class MidiDeviceProcess
{
public:

    MidiDeviceProcess ();

    ~MidiDeviceProcess()
     {
        CloseMidiDevice();
     }
    void checkistheremididevice();
	void OpenMidiDevice(UINT MidiInDevId, UINT MidiOutDevId);
    void CloseMidiDevice();
    bool E_DrumCompareDeviceName();
    void CheckMidiInReveice();

    void SetMidiInRevSysExBuffer(BYTE *pCmdRevBuffer);
    void SendMidiSysExCmd(BYTE *pCmdSendPacket);
    void SendLongMidiSysEx_WithRecvPrepare(unsigned char *SendPtr);
    static void SetMidiDevOpenFlag(bool bFlag);
    static bool GetMidiDevOpenFlag();
    
    void SendMidiSysEx_WithRecvPrepare(unsigned char *SendPtr, int l);
    unsigned char  CollectUsbInfo(void);

    String GetsMidiDeviceName();
    void SendMidiSysEx_NoRecvPrepare(unsigned char *SendPtr, int ll);

    void CopyMidiSysExToCheckBuffer(const BYTE *pSrcAdd);
private:

    UINT iMidiInDevId;      // MIDI IN 设备的通道号
    UINT iMidiOutDevId;     // MIDI OUT 设备的通道号

    MIDIHDR MidiInHdr;      // MIDI IN音频信息头数据块
    MIDIHDR MidiOutHdr;     // MIDI OUT音频信息头数据块

    HMIDIIN MidiInDevHid;   // MIDI IN 设备句柄
    HMIDIOUT MidiOutDevHid; // MIDI OUT 设备句柄

    String sMidiDeviceName; // 用于比较midi设备名称的临时变量
    MMRESULT MidiDevOperateResult;      // 操作midi设备的状态返回
    MIDIINCAPS MidiInCapabilities;      // MIDI IN 设备信息的指针
    MIDIOUTCAPS MidiOutCapabilities;    // MIDI OUT 设备信息的指针

    static bool bMidiDevOpenFlag;
};




void CALLBACK MidiInCallback(HMIDIIN hMidiIn,UINT wMsg,DWORD_PTR dwInstance,DWORD_PTR dwParam1,DWORD_PTR dwParam2);
bool ReadBinOrSyxFile(int whatdev);


#endif  // __MIDIDEVICEDETECT_H_30C192__


