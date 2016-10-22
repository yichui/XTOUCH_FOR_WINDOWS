#include "JuceHeader.h"
#include "XtouchDevMidiData.h"
#include "CustomImageButton.h"
#include "CustomTextButton.h"
#include "GlobalCompactComponent.h"

#define  _MODE_

#ifdef _MODE_
XTOUCH_MODE_ID  eXTOUCH_MODE_ID =COMPACT_MODE;
#endif

#ifndef _MODE_
XTOUCH_MODE_ID  eXTOUCH_MODE_ID =MINI_MODE;
#endif

int ThirtySecTimeNum;
bool ThirtySecTimeflag;
int LLL = 11812;

int Push_or_Turn ; // 1: turn ,move  0:push

bool Load_or_SaveFlag;

double ProgressBarValue;

int LayerFlag;

unsigned char MidiSendToMcuList[3000] = {};

__declspec(align(8)) unsigned char FileProcessBuf[80*1024] ;

const unsigned int SecretFuncSeed_1[32]=
{
    0x6E4B134C,0x049A4D84,0x2AA920D2,0x928A1841,
    0x02D129B2,0x2964B051,0x4DB42373,0xC6ADE740,
    0xB0592F2B,0x38DEB384,0x17C66817,0x85A050CA,
    0x4E268A4F,0x7492B51F,0x869F8292,0x59C8AE08,
    0x73115D4C,0x2C68F4D3,0x74FA07F0,0xEAE8DDB1,
    0xF8ED8D3F,0x3D853623,0x57374F27,0x38DE1670,
    0xDDBD7B07,0x1D73A255,0xACCFF97C,0x762806B6,
    0x878D80FC,0x5CB9B3E8,0xC1C75BDE,0x2CF658BA
};
 const unsigned int SecretFuncSeed_2[32]=
{
    0x6E4B134C,0x049A4D84,0x2AA920D2,0x928A1842,
    0x02D129B2,0x2964B051,0x4DB42373,0xC6ADE742,
    0xB0592F2B,0x38DEB384,0x17C66817,0x85A050C2,
    0x4E268A4F,0x7492B51F,0x869F8292,0x59C8AE02,
    0x73115D4C,0x2C68F4D3,0x74FA07F0,0xEAE8DDB2,
    0xF8ED8D3F,0x3D853623,0x57374F27,0x38DE1672,
    0xDDBD7B07,0x1D73A255,0xACCFF97C,0x762806B2,
    0x878D80FC,0x5CB9B3E8,0xC1C75BDE,0x2CF658B2
};
 const unsigned int SecretFuncSeed_3[32]=
{
    0x6E4B134C,0x049A4D84,0x2AA920D2,0x928A1843,
    0x02D129B2,0x2964B051,0x4DB42373,0xC6ADE743,
    0xB0592F2B,0x38DEB384,0x17C66817,0x85A050C3,
    0x4E268A4F,0x7492B51F,0x869F8292,0x59C8AE03,
    0x73115D4C,0x2C68F4D3,0x74FA07F0,0xEAE8DDB3,
    0xF8ED8D3F,0x3D853623,0x57374F27,0x38DE1673,
    0xDDBD7B07,0x1D73A255,0xACCFF97C,0x762806B3,
    0x878D80FC,0x5CB9B3E8,0xC1C75BDE,0x2CF658B3
};
 const unsigned int SecretFuncSeed_4[32]=
{
    0x6E4B134C,0x049A4D84,0x2AA920D2,0x928A1844,
    0x02D129B2,0x2964B051,0x4DB42373,0xC6ADE744,
    0xB0592F2B,0x38DEB384,0x17C66817,0x85A050C4,
    0x4E268A4F,0x7492B51F,0x869F8292,0x59C8AE04,
    0x73115D4C,0x2C68F4D3,0x74FA07F0,0xEAE8DDB4,
    0xF8ED8D3F,0x3D853623,0x57374F27,0x38DE1674,
    0xDDBD7B07,0x1D73A255,0xACCFF97C,0x762806B4,
    0x878D80FC,0x5CB9B3E8,0xC1C75BDE,0x2CF658B4
};



 __declspec(align(8)) unsigned char ConstMidiLayerMessage[] = {
/****Fader1 channal , TYPE , NO,MIN,MAX***/0,2,0,0,0x7f,0,0,/****Fader2*/0,1,0x22,0,0x7f,0,0,/****Fader3*/0,0,0,0,0x7f,0,0,/****Fader4*/0,0,0,0,0x7f,0,0,/****Fader5*/0,0,0,0,0x7f,0,0,/****Fader6*/0,0,0,0,0x7f,0,0,/****Fader7*/0,0,0,0,0x7f,0,0,/****Fader8*/0,0,0,0,0x66,0,0,/****Fader9*/8,3,0,0,0x7f,0,0,

/*EN1 Turn channal , TYPE , NO,MIN,MAX ,BEH***/0,1,0x10,3,0x71,0,0,0,/***EN2***/0,2,0,0,0,0x03,0,0,/***EN3***/0,0,0,0,0x71,0,0,0,/***EN4***/0,0,0,0,0x7f,0,0,0,/***EN5***/0,0,0,0,0x71,0x01,0,0,/***EN6***/0,0,0,0,0x79,0x01,0,0,/***EN7***/0,0,0x11,0,0x71,0x01,0,0,/***EN8***/0,0,0,0,0x71,0x01,0,0,                                                                                                                  
/*EN1 Push channal , TYPE , NO,MIN,MAX ,RING***/1,1,3,0x0,0x71,0,0,0,/***EN2***/0,0,0,0,0x71,0x01,0,0,/***EN3***/0,0,0,0,0x71,0x01,0,0,/***EN4***/0,0,0,0,0x61,0,0,0,/***EN5***/0,0,0,0,0x71,0x00,0,0,/***EN6***/0,0,0,0,0x71,0x00,0,0,/***EN7***/0,0,0,0,0x71,0x01,0,0,/***EN8***/0,0,0x01,0,0x71,0x01,0,0,
/*EN9 Turn channal , TYPE , NO,MIN,MAX ,BEH***/3,1,1,0,0x71,0,0,0,/***EN10***/0,0,0,0,0x71,0x01,0,0,/***EN11***/0,0,0,0,0x71,0,0,0,/***EN12***/0,0,0,0,0x61,0,0,0,/***EN13***/0,0,0,0,0x71,0x01,0,0,/***EN14***/0,0,0,0,0x71,0x01,0,0,/***EN15***/0,0,0,0,0x71,0x01,0,0,/***EN16***/0,0,0,0,0x71,0x03,0,0,                                                                                                                  
/*EN9 Push channal , TYPE , NO,MIN,MAX ,RING***/4,0,0,0,0x71,0,0,0,/***EN10***/0,0,0,0,0x71,0x01,0,0,/***EN11***/0,0,0,0,0x71,0x01,0,0,/***EN12***/0,0,0,0,0x61,0,0,0,/***EN13***/0,0,0,0,0x71,0x01,0,0,/***EN14***/0,0,0,0,0x71,0x01,0,0,/***EN15***/0,0,0,0,0x71,0x00,0,0,/***EN16***/0,0,0,0,0x71,0x01,0,0,

/*BT1 Push channal , TYPE , NO,MIN,MAX ,BEH **/0,2,0,0x1,0x7f,0x01,0,0,/***BT2 ***/0,0,0,0,0x70,0x00,0,0,/***BT3 ***/0,0,0,0,0x70,0x01,0,0,/***BT4 ***/0,0,0,0,0x70,0x00,0,0,/***BT5 ***/0,0,0,0,0x70,0x00,0,0,/***BT6 ***/0,0,0,0,0x7f,0x00,0,0,/***BT7 ***/0,0,0,0,0x7f,0x00,0,0,/***BT8 ***/0,0,0,0,0x7f,0x00,0,0,
/*BT9 Push channal , TYPE , NO,MIN,MAX ,BEH **/0,0,0,0,0x7f,0x01,0,0,/***BT10 ***/0,0,0,0,0x70,0x00,0,0,/***BT11 ***/0,0,0,0,0x70,0x01,0,0,/***BT12 ***/0,0,0,0,0x70,0x00,0,0,/***BT13 ***/0,0,0,0,0x70,0x00,0,0,/***BT14 ***/0,0,0,0,0x70,0x00,0,0,/***BT15 ***/0,0,0,0,0x70,0x00,0,0,/***BT16 ***/0,0,0,0,0x7f,0x00,0,0,
/*BT17 Push channal , TYPE , NO,MIN,MAX ,BEH **/0,0,0,0,0x7f,0x01,0,0,/***BT18 ***/0,0,0,0,0x70,0x00,0,0,/***BT19 ***/0,0,0,0,0x70,0x01,0,0,/***BT20***/0,0,0,0,0x70,0x00,0,0,/***BT21 ***/0,0,0,0,0x70,0x00,0,0,/***BT22 ***/0,0,0,0,0x70,0x00,0,0,/***BT23 ***/0,0,0,0,0x76,0x00,0,0,/***BT24 ***/2,2,0,1,0x7f,0x01,0,0,
/*BT25 Push channal , TYPE , NO,MIN,MAX ,BEH **/0,0,0,0,0x7f,0x01,0,0,/***BT26 ***/0,0,0,0,0x70,0x00,0,0,/***BT27 ***/0,0,0,0,0x70,0x01,0,0,/***BT28 ***/0,0,0,0,0x70,0x00,0,0,/***BT29 ***/0,0,0,0,0x70,0x00,0,0,/***BT30 ***/0,0,0,0,0x70,0x00,0,0,/***BT31 ***/0,0,0,0,0x7a,0x00,0,0,/***BT32 ***/0,0,0,0,0x7f,0x00,0,0,/***BT33***/3,2,3,1,0x70,0x00,0,0,
/*BT34 Push channal , TYPE , NO,MIN,MAX ,BEH **/1,1,1,0x02,0x7f,0x01,0,0,/***BT35 ***/0,0,0,0,0x70,0x00,0,0,/***BT36 ***/0,0,0,0,0x70,0x00,0,0,/***BT37 ***/0,0,0,0,0x70,0x00,0,0,/***BT38 ***/0,0,0,0,0x70,0x00,0,0,/***BT39 ***/2,1,2,2,0x70,0x00,0,0,

/****EXP channal , TYPE , NO,MIN,MAX***/0,0,0,0,0x7e,0,0,
/*FOOT Turn channal , TYPE , NO,MIN,MAX ,BEH***/0,0,0,0,0x71,0,0,0,

/*FADER TOUCH1 Turn channal , TYPE , NO,MIN,MAX ,BEH***/0,0,0,0,0x71,0,0,0,/***FT2***/0,0,0,0,0x71,0x01,0,0,/***FT3***/0,0,0,0,0x71,0,0,0,/***TF4***/0,0,0,0,0x61,0,0,0,/***FT5***/0,0,0,0,0x71,0x01,0,0,/***FT6***/0,0,0,0,0x71,0x01,0,0,/***FT7***/0,0,0,0,0x71,0x01,0,0,/***FT8***/0,0,0,0,0x71,0x01,0,0,/***FT9***/0,0,0,0,0x71,0x01,0,0
};

  __declspec(align(8)) unsigned char MiniConstMidiLayerMessage[263] ={
 /*fader1  channal , TYPE , NO,MIN,MAX*/0,0,0,0,0x7e,0,0,
 /*EN1 Turn channal , TYPE , NO,MIN,MAX ,BEH***/0, 0, 0x33, 0, 0x71, 0, 0, 0,/***EN2***/0, 0, 0, 0, 0x71, 0x01, 0, 0,/***EN3***/0, 0, 0, 0, 0x71, 0, 0, 0,/***EN4***/0, 0, 0, 0, 0x61, 0, 0, 0,/***EN5***/0, 0, 0, 0, 0x71, 0x01, 0, 0,/***EN6***/0, 0, 0, 0, 0x79, 0x01, 0, 0,/***EN7***/0, 0, 0, 0, 0x71, 0x01, 0, 0,/***EN8***/0, 0, 0, 0, 0x71, 0x01, 0, 0,
 /*EN1 Push channal , TYPE , NO,MIN,MAX ,RING***/0, 0, 0, 0, 0x71, 0, 0, 0,/***EN2***/0, 0, 0, 0, 0x71, 0x01, 0, 0,/***EN3***/0, 0, 0, 0, 0x71, 0x02, 0, 0,/***EN4***/0, 0, 0, 0, 0x61, 0, 0, 0,/***EN5***/0, 0, 0, 0, 0x71, 0x04, 0, 0,/***EN6***/0, 0, 0, 0, 0x71, 0x03, 0, 0,/***EN7***/0, 0, 0, 0, 0x71, 0x02, 0, 0,/***EN8***/0, 0, 0, 0, 0x71, 0x02, 0, 0,
 
 /*BT1 Push channal , TYPE , NO,MIN,MAX ,BEH **/0, 0, 0, 0x1, 0x7f, 0x01, 0, 0,/***BT2 ***/0, 0, 0, 0, 0x70, 0x00, 0, 0,/***BT3 ***/0, 0, 0, 0, 0x70, 0x01, 0, 0,/***BT4 ***/0, 0, 0, 0, 0x70, 0x00, 0, 0,/***BT5 ***/0, 0, 0, 0, 0x70, 0x00, 0, 0,/***BT6 ***/0, 0, 0, 0, 0x7f, 0x00, 0, 0,/***BT7 ***/0, 0, 0, 0, 0x7f, 0x00, 0, 0,/***BT8 ***/0, 0, 0, 0, 0x7f, 0x00, 0, 0,
 /*BT9 Push channal , TYPE , NO,MIN,MAX ,BEH **/0, 0, 0, 0, 0x7f, 0x01, 0, 0,/***BT10 ***/0, 0, 0, 0, 0x70, 0x00, 0, 0,/***BT11 ***/0, 0, 0, 0, 0x70, 0x01, 0, 0,/***BT12 ***/0, 0, 0, 0, 0x70, 0x00, 0, 0,/***BT13 ***/0, 0, 0, 0, 0x70, 0x00, 0, 0,/***BT14 ***/0, 0, 0, 0, 0x70, 0x00, 0, 0,/***BT15 ***/0, 0, 0, 0, 0x70, 0x00, 0, 0,/***BT16 ***/0, 0, 0, 0, 0x7f, 0x00,0, 0
 };

 unsigned char MidiInCheckBuffer[700];

 __declspec(align(8)) unsigned char GetReceiveSysEXbuf[633];

 int MidiInWriteBufferCnt;

 int GetintValue(String s)
 {
	 int returnnum;  
	 for(int i = 0; i<16 ; i++)
	 {
		 if(s.compare(String(i+1))==0 || s.compare(String(i+1)+"*")==0)
		 {
			 returnnum = i;
		 }
	 }
	 return returnnum;
 }