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

#define E_DRUM_TEST_CMD             0x64     // �����õ������ʾ��
#define E_DRUM_TEST_XD60_IDTF       0x60     // 60�ı�ʾ��
#define E_DRUM_TEST_XD70_IDTF       0x70     // 70�ı�ʾ��

typedef struct MidiDevNameAndId
{
	UINT MidiDevId;
	String MidiDevName;
	HMIDIIN MidiInDevHid;   // MIDI IN �豸���
	HMIDIOUT MidiOutDevHid; // MIDI OUT �豸���
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

    UINT iMidiInDevId;      // MIDI IN �豸��ͨ����
    UINT iMidiOutDevId;     // MIDI OUT �豸��ͨ����

    MIDIHDR MidiInHdr;      // MIDI IN��Ƶ��Ϣͷ���ݿ�
    MIDIHDR MidiOutHdr;     // MIDI OUT��Ƶ��Ϣͷ���ݿ�

    HMIDIIN MidiInDevHid;   // MIDI IN �豸���
    HMIDIOUT MidiOutDevHid; // MIDI OUT �豸���

    String sMidiDeviceName; // ���ڱȽ�midi�豸���Ƶ���ʱ����
    MMRESULT MidiDevOperateResult;      // ����midi�豸��״̬����
    MIDIINCAPS MidiInCapabilities;      // MIDI IN �豸��Ϣ��ָ��
    MIDIOUTCAPS MidiOutCapabilities;    // MIDI OUT �豸��Ϣ��ָ��

    static bool bMidiDevOpenFlag;
};




void CALLBACK MidiInCallback(HMIDIIN hMidiIn,UINT wMsg,DWORD_PTR dwInstance,DWORD_PTR dwParam1,DWORD_PTR dwParam2);
bool ReadBinOrSyxFile(int whatdev);


#endif  // __MIDIDEVICEDETECT_H_30C192__


