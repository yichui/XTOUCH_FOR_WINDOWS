#ifndef _XTOUCHDATAMIDIINFO_
#define _XTOUCHDATAMIDIINFO_

//#define UNICODE 1
#include "JuceHeader.h"
#include "GlobalCompactComponent.h"

extern GlobalCompactComponent *pGlobalCompactComponent;

typedef enum {
    MINI_MODE = 0,
    COMPACT_MODE
}XTOUCH_MODE_ID;

#define COMPACT_PRE_LONG 718
#define COMPACT_PRE_7TO8_LONG 824
#define COMPACT_PRE_7TO8_ADD_HEAD 841
#define COMPACT_PRE_PAG 103
#define COMPACT_PRE_CRC_NUM 180

#define MINI_PRE_LONG 263
#define MINI_PRE_7TO8_LONG 304
#define MINI_PRE_7TO8_ADD_HEAD 321
#define MINI_PRE_PAG 38
#define MINI_PRE_CRC_NUM 66

#define BC_STATR_NO 319
#define BC9_STATR_NO 383
#define BC17_STATR_NO 447
#define BC25_STATR_NO 511
#define BC34_STATR_NO 583
#define FADER_TOUCH_START_NO 646
#define BC_COM      8

extern XTOUCH_MODE_ID  eXTOUCH_MODE_ID;
extern int ThirtySecTimeNum;
extern bool ThirtySecTimeflag;
extern int LLL;
extern int LayerFlag;
extern double ProgressBarValue;

extern bool Load_or_SaveFlag;
extern int Push_or_Turn ;
extern unsigned char MidiSendToMcuList[3000] ;

extern const unsigned int SecretFuncSeed_1[32];
extern const unsigned int SecretFuncSeed_2[32];
extern const unsigned int SecretFuncSeed_3[32];
extern const unsigned int SecretFuncSeed_4[32];

extern __declspec(align(8)) unsigned char FileProcessBuf[80*1024];
extern unsigned char MidiInCheckBuffer[700];
extern __declspec(align(8)) unsigned char GetReceiveSysEXbuf[633];
extern int MidiInWriteBufferCnt;
extern  __declspec(align(8)) unsigned char ConstMidiLayerMessage[718];
extern  __declspec(align(8)) unsigned char MiniConstMidiLayerMessage[263];

extern int GetintValue(String s);
/*extern  String Midimusic[128];
extern  String MMC_Functions[10];
extern  String MMC_Functions_e[10];*/
#endif