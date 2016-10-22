/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
#include "MainComponent.h"
#include "BackgroundThread.h"
#include "XtouchDevMidiData.h"
#include "MidiDeviceProcess.h"
#include "CC_Viewport_Component.h"
#include "ViewChannelComponent.h"
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
#include "MutilDevWinComponent.h"
//#include <windows.h>
#include <string>
#include <string.h>
//[/Headers]

#include "GlobalCompactComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
extern CC_Viewport_Component *CC_VP;
extern unsigned char LowLevel_SysExRecv_Buf[1000];
extern ViewChannelComponent *pViewChannelComponent;
extern FadersAndFootCompactComponent *pFadersAndFootCompactComponent;
extern FaderMiniComponent *pFaderMiniComponent;
extern EncodersCompact1To8Component *pEncodersCompact1To8Component;
extern EncodersCompact9To16Component *pEncodersCompact9To16Component;
extern ButtonsCompact1To8Component *BC1TO8;
extern ButtonsCompact9To16Component *BC9TO16;
extern ButtonsCompact17To24Component *BC17TO24;
extern ButtonsCompact25To33Component *BC25TO33;
extern ButtonsCompact34To39Component *BC34TO39;
extern ButtonsMini1To8Component *BM1TO8;
extern ButtonsMini9To16Component *BM9TO16;
extern EncodersMiniComponent *pEncodersMiniComponent;
extern FaderTouchCompactComponent *pFaderTouchCompactComponent;

extern MutilDevWinComponent *pMutilDevWinComponent;
extern MidiDeviceProcess *pMidiDeviceProcess;
GlobalCompactComponent * pGlobalCompactComponent = nullptr;
extern MainComponent * pMainComponent;
extern bool EDITEDFlag , EDITEDFlag2 ;
extern volatile bool ToStartThrd03;
extern volatile bool ToStartThrd02;
extern bool  afterOpenThenCloseMidiFlag,tabbedComponentFlag;
extern UINT CurrentDevID;
extern bool midiopenflag;
extern bool midirealdyopen;
extern pMidiDevNameAndId MidiIntDev[10];
extern pMidiDevNameAndId MidiOutDev[10];
extern BackgroundThread2 * pBackgroundThread2;
//extern unsigned char LowLevel_SysExRecv_Buf;
int i,j,k,L,m,ZerosNeededNum;
bool useNativeVersion;
//bool dounlesend
FILE *fIn,*fOt;
extern UINT INDEVID, OUTDEVID;
extern unsigned char SetThirtySecTime_SysExCmd_Buf[80];
extern bool UpdateSuccessFlag;
 __declspec(align(8)) char str1[500];
unsigned char *p;
char __NextLine[]="\n";

const wchar_t *WFileName[20];

unsigned char SendChangeMessage[14]  = {0xf0 ,0x40 ,0x41 ,0x42 ,0 ,0 ,0,0,0,0,0,0,0 ,0xf7};
//[/MiscUserDefs]

//==============================================================================
GlobalCompactComponent::GlobalCompactComponent ()
{
    addAndMakeVisible (label_poc = new Label ("new label",
                                              "PRESETS ON COMPUTER"));
    label_poc->setFont (Font ("Arial", 14.00f, Font::plain));
    label_poc->setJustificationType (Justification::centredLeft);
    label_poc->setEditable (false, false, false);
    label_poc->setColour (Label::textColourId, Colour (0xffffab00));
    label_poc->setColour (TextEditor::textColourId, Colours::black);
    label_poc->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_fh = new Label ("new label",
                                             "FROM HARDWARE"));
    label_fh->setFont (Font ("Arial", 14.00f, Font::plain));
    label_fh->setJustificationType (Justification::centredLeft);
    label_fh->setEditable (false, false, false);
    label_fh->setColour (Label::textColourId, Colour (0xffffab00));
    label_fh->setColour (TextEditor::textColourId, Colours::black);
    label_fh->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_th = new Label ("new label",
                                             "TO HARDWARE"));
    label_th->setFont (Font ("Arial", 14.00f, Font::plain));
    label_th->setJustificationType (Justification::centredLeft);
    label_th->setEditable (false, false, false);
    label_th->setColour (Label::textColourId, Colour (0xffffab00));
    label_th->setColour (TextEditor::textColourId, Colours::black);
    label_th->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_firm = new Label ("new label",
                                               "FIRMWARE"));
    label_firm->setFont (Font ("Arial", 14.00f, Font::plain));
    label_firm->setJustificationType (Justification::centredLeft);
    label_firm->setEditable (false, false, false);
    label_firm->setColour (Label::textColourId, Colour (0xffffab00));
    label_firm->setColour (TextEditor::textColourId, Colours::black);
    label_firm->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Bt_SAVE = new TextButton ("new button"));
    Bt_SAVE->setButtonText ("Save");
    Bt_SAVE->addListener (this);
    Bt_SAVE->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_SAVE->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_SAVE->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_SAVE->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (Bt_GetA = new TextButton ("new button"));
    Bt_GetA->setButtonText ("Get A");
    Bt_GetA->addListener (this);
    Bt_GetA->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_GetA->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_GetA->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_GetA->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (Bt_GetB = new TextButton ("new button"));
    Bt_GetB->setButtonText ("Get B");
    Bt_GetB->addListener (this);
    Bt_GetB->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_GetB->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_GetB->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_GetB->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (Bt_DUMPA = new TextButton ("new button"));
    Bt_DUMPA->setButtonText ("Dump A");
    Bt_DUMPA->addListener (this);
    Bt_DUMPA->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_DUMPA->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_DUMPA->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_DUMPA->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (Bt_DUMPB = new TextButton ("new button"));
    Bt_DUMPB->setButtonText ("Dump B");
    Bt_DUMPB->addListener (this);
    Bt_DUMPB->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_DUMPB->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_DUMPB->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_DUMPB->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (Bt_UPDATE = new TextButton ("new button"));
    Bt_UPDATE->setButtonText ("Update");
    Bt_UPDATE->addListener (this);
    Bt_UPDATE->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_UPDATE->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_UPDATE->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_UPDATE->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (label = new Label ("new label",
                                          "LAYER TRANSFER"));
    label->setFont (Font ("Arial", 13.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colour (0xffffab00));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MODE = new Label ("new label",
                                               "MODE"));
    label_MODE->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MODE->setJustificationType (Justification::centredLeft);
    label_MODE->setEditable (false, false, false);
    label_MODE->setColour (Label::textColourId, Colour (0xffffab00));
    label_MODE->setColour (TextEditor::textColourId, Colours::black);
    label_MODE->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Bt_Standart = new TextButton ("new button"));
    Bt_Standart->setButtonText ("Standard");
    Bt_Standart->addListener (this);
    Bt_Standart->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_Standart->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_Standart->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_Standart->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (Bt_MC = new TextButton ("new button"));
    Bt_MC->setButtonText ("MC");
    Bt_MC->addListener (this);
    Bt_MC->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_MC->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_MC->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_MC->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (label_DEVID = new Label ("new label",
                                                "DEVICE ID"));
    label_DEVID->setFont (Font ("Arial", 14.00f, Font::plain));
    label_DEVID->setJustificationType (Justification::centredLeft);
    label_DEVID->setEditable (false, false, false);
    label_DEVID->setColour (Label::textColourId, Colour (0xffffab00));
    label_DEVID->setColour (TextEditor::textColourId, Colours::black);
    label_DEVID->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Bt_ID16 = new CustomTextButton (1,"new button"));
    Bt_ID16->setButtonText ("ID 16");
    Bt_ID16->addListener (this);
    Bt_ID16->setColour (TextButton::buttonColourId, Colour (0xff333333));
    Bt_ID16->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_ID16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_ID16->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (label_HARDWARE = new Label ("new label",
                                                   "HARDWARE"));
    label_HARDWARE->setFont (Font ("Arial", 14.00f, Font::plain));
    label_HARDWARE->setJustificationType (Justification::centredLeft);
    label_HARDWARE->setEditable (false, false, false);
    label_HARDWARE->setColour (Label::textColourId, Colour (0xffffab00));
    label_HARDWARE->setColour (TextEditor::textColourId, Colours::black);
    label_HARDWARE->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Bt_ID2 = new TextButton ("new button"));
    Bt_ID2->setButtonText ("X_TOUCH COMPACT #2");
    Bt_ID2->addListener (this);
    Bt_ID2->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_ID2->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_ID2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_ID2->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (label_GLOBALCH = new Label ("new label",
                                                   "GLOBAL CH"));
    label_GLOBALCH->setFont (Font ("Arial", 14.00f, Font::plain));
    label_GLOBALCH->setJustificationType (Justification::centredLeft);
    label_GLOBALCH->setEditable (false, false, false);
    label_GLOBALCH->setColour (Label::textColourId, Colour (0xffffab00));
    label_GLOBALCH->setColour (TextEditor::textColourId, Colours::black);
    label_GLOBALCH->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Bt_CH2 = new CustomTextButton (2,"new button"));
    Bt_CH2->setButtonText ("CH 2");
    Bt_CH2->addListener (this);
    Bt_CH2->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_CH2->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_CH2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_CH2->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (label_GLOBALCH2 = new Label ("new label",
                                                    "FOOT SWITCH POLARITY"));
    label_GLOBALCH2->setFont (Font ("Arial", 14.00f, Font::plain));
    label_GLOBALCH2->setJustificationType (Justification::centredLeft);
    label_GLOBALCH2->setEditable (false, false, false);
    label_GLOBALCH2->setColour (Label::textColourId, Colour (0xffffab00));
    label_GLOBALCH2->setColour (TextEditor::textColourId, Colours::black);
    label_GLOBALCH2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Bt_ADD = new TextButton ("new button"));
    Bt_ADD->setButtonText ("-");
    Bt_ADD->addListener (this);
    Bt_ADD->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_ADD->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_ADD->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_ADD->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (Bt_DEV = new TextButton ("new button"));
    Bt_DEV->setButtonText ("+");
    Bt_DEV->addListener (this);
    Bt_DEV->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_DEV->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_DEV->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_DEV->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (label3 = new Label ("new label",
                                           String::empty));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Bt_LOAD = new TextButton ("new button"));
    Bt_LOAD->setButtonText ("Load");
    Bt_LOAD->addListener (this);
    Bt_LOAD->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_LOAD->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_LOAD->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_LOAD->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (label5 = new Label ("new label",
                                           "RX MIDI CONTROL"));
    label5->setFont (Font ("Arial", 15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (Label::backgroundColourId, Colours::black);
    label5->setColour (Label::textColourId, Colour (0xff9f6d25));
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           "Motor Fader"));
    label6->setFont (Font ("Arial", 14.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (Label::backgroundColourId, Colour (0x00000000));
    label6->setColour (Label::textColourId, Colour (0xff9f6d25));
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label10 = new Label ("new label",
                                            "LED Ring Behavior"));
    label10->setFont (Font ("Arial", 14.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::backgroundColourId, Colour (0x00000000));
    label10->setColour (Label::textColourId, Colour (0xff9f6d25));
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label7 = new Label ("new label",
                                           "LED Ring Value"));
    label7->setFont (Font ("Arial", 14.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (Label::backgroundColourId, Colour (0x00000000));
    label7->setColour (Label::textColourId, Colour (0xff9f6d25));
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label8 = new Label ("new label",
                                           "Button LEDs"));
    label8->setFont (Font ("Arial", 14.00f, Font::plain));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (Label::backgroundColourId, Colour (0x00000000));
    label8->setColour (Label::textColourId, Colour (0xff9f6d25));
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label9 = new Label ("new label",
                                           "Layer B Select"));
    label9->setFont (Font ("Arial", 14.00f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (Label::backgroundColourId, Colour (0x00000000));
    label9->setColour (Label::textColourId, Colour (0xff9f6d25));
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label11 = new Label ("new label",
                                            "STANDARD MODE"));
    label11->setFont (Font ("Arial", 14.00f, Font::plain));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (Label::backgroundColourId, Colour (0x00000000));
    label11->setColour (Label::textColourId, Colour (0xff9f6d25));
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label12 = new Label ("new label",
                                            "Layer A Select"));
    label12->setFont (Font ("Arial", 14.00f, Font::plain));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (Label::backgroundColourId, Colour (0x00000000));
    label12->setColour (Label::textColourId, Colour (0xff9f6d25));
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label13 = new Label ("new label",
                                            "FOOT Ctrl LEDs"));
    label13->setFont (Font ("Arial", 14.00f, Font::plain));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (Label::backgroundColourId, Colour (0x00000000));
    label13->setColour (Label::textColourId, Colour (0xff9f6d25));
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label14 = new Label ("new label",
                                            "MC MODE"));
    label14->setFont (Font ("Arial", 14.00f, Font::plain));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (Label::backgroundColourId, Colour (0x00000000));
    label14->setColour (Label::textColourId, Colour (0xff9f6d25));
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label15 = new Label ("new label",
                                            "CC1-CC9"));
    label15->setFont (Font ("Arial", 14.00f, Font::plain));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (Label::backgroundColourId, Colour (0x00000000));
    label15->setColour (Label::textColourId, Colour (0xff9f6d25));
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label16 = new Label ("new label",
                                            "CC10-CC25"));
    label16->setFont (Font ("Arial", 14.00f, Font::plain));
    label16->setJustificationType (Justification::centredLeft);
    label16->setEditable (false, false, false);
    label16->setColour (Label::backgroundColourId, Colour (0x00000000));
    label16->setColour (Label::textColourId, Colour (0xff9f6d25));
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label17 = new Label ("new label",
                                            "CC26-CC41"));
    label17->setFont (Font ("Arial", 14.00f, Font::plain));
    label17->setJustificationType (Justification::centredLeft);
    label17->setEditable (false, false, false);
    label17->setColour (Label::backgroundColourId, Colour (0x00000000));
    label17->setColour (Label::textColourId, Colour (0xff9f6d25));
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label18 = new Label ("new label",
                                            "NOTE 0-NOTE 38"));
    label18->setFont (Font ("Arial", 14.00f, Font::plain));
    label18->setJustificationType (Justification::centredLeft);
    label18->setEditable (false, false, false);
    label18->setColour (Label::backgroundColourId, Colour (0x00000000));
    label18->setColour (Label::textColourId, Colour (0xff9f6d25));
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label19 = new Label ("new label",
                                            "Program Change 1"));
    label19->setFont (Font ("Arial", 14.00f, Font::plain));
    label19->setJustificationType (Justification::centredLeft);
    label19->setEditable (false, false, false);
    label19->setColour (Label::backgroundColourId, Colour (0x00000000));
    label19->setColour (Label::textColourId, Colour (0xff9f6d25));
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label20 = new Label ("new label",
                                            "CC127 Value 0"));
    label20->setFont (Font ("Arial", 14.00f, Font::plain));
    label20->setJustificationType (Justification::centredLeft);
    label20->setEditable (false, false, false);
    label20->setColour (Label::backgroundColourId, Colour (0x00000000));
    label20->setColour (Label::textColourId, Colour (0xff9f6d25));
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label21 = new Label ("new label",
                                            "Program Change 0"));
    label21->setFont (Font ("Arial", 14.00f, Font::plain));
    label21->setJustificationType (Justification::centredLeft);
    label21->setEditable (false, false, false);
    label21->setColour (Label::backgroundColourId, Colour (0x00000000));
    label21->setColour (Label::textColourId, Colour (0xff9f6d25));
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label22 = new Label ("new label",
                                            "CC42-CC43"));
    label22->setFont (Font ("Arial", 14.00f, Font::plain));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (Label::backgroundColourId, Colour (0x00000000));
    label22->setColour (Label::textColourId, Colour (0xff9f6d25));
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label23 = new Label ("new label",
                                            "CC127 Value 1"));
    label23->setFont (Font ("Arial", 14.00f, Font::plain));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (Label::backgroundColourId, Colour (0x00000000));
    label23->setColour (Label::textColourId, Colour (0xff9f6d25));
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label221 = new Label ("new label",
                                             String::empty));
    label221->setFont (Font (15.00f, Font::plain));
    label221->setJustificationType (Justification::centredLeft);
    label221->setEditable (false, false, false);
    label221->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label221->setColour (TextEditor::textColourId, Colours::black);
    label221->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label220 = new Label ("new label",
                                             String::empty));
    label220->setFont (Font (15.00f, Font::plain));
    label220->setJustificationType (Justification::centredLeft);
    label220->setEditable (false, false, false);
    label220->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label220->setColour (TextEditor::textColourId, Colours::black);
    label220->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label222 = new Label ("new label",
                                             String::empty));
    label222->setFont (Font (15.00f, Font::plain));
    label222->setJustificationType (Justification::centredLeft);
    label222->setEditable (false, false, false);
    label222->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label222->setColour (TextEditor::textColourId, Colours::black);
    label222->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label223 = new Label ("new label",
                                             String::empty));
    label223->setFont (Font (15.00f, Font::plain));
    label223->setJustificationType (Justification::centredLeft);
    label223->setEditable (false, false, false);
    label223->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label223->setColour (TextEditor::textColourId, Colours::black);
    label223->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (Bt_ADD2 = new TextButton ("new button"));
    Bt_ADD2->setButtonText ("Compact");
    Bt_ADD2->addListener (this);
    Bt_ADD2->setColour (TextButton::buttonColourId, Colour (0xff333333));
    Bt_ADD2->setColour (TextButton::buttonOnColourId, Colour (0xff333333));
    Bt_ADD2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_ADD2->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (Bt_DEV2 = new TextButton ("new button"));
    Bt_DEV2->setButtonText ("Mini");
    Bt_DEV2->addListener (this);
    Bt_DEV2->setColour (TextButton::buttonColourId, Colour (0xff333333));
    Bt_DEV2->setColour (TextButton::buttonOnColourId, Colour (0xff333333));
    Bt_DEV2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_DEV2->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

    addAndMakeVisible (label_tip = new Label ("new label",
                                              "No device is connected,please manually choose device"));
    label_tip->setFont (Font ("Arial", 14.00f, Font::plain));
    label_tip->setJustificationType (Justification::centredLeft);
    label_tip->setEditable (false, false, false);
    label_tip->setColour (Label::textColourId, Colour (0x7fffffff));
    label_tip->setColour (TextEditor::textColourId, Colours::black);
    label_tip->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
	
    //Bt_ADD2->setButtonText("Xtouch Compact");
    //Bt_DEV2->setButtonText("Xtouch Mini");
    Bt_ADD2->setButtonText("COMPACT");
    Bt_DEV2->setButtonText("MINI");
    addAndMakeVisible (label_ID = new Label ("new label",
                                             "ID 16"));
    label_ID->setFont (Font ("Arial", 19.60f, Font::plain));
    label_ID->setJustificationType (Justification::centred);
    label_ID->setEditable (false, false, false);
    label_ID->setColour (Label::textColourId, Colour (0xffffab00));
    label_ID->setColour (TextEditor::textColourId, Colours::black);
    label_ID->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    ProgressBarValue=0.0;
    ProgressBarPtr=new ProgressBar(ProgressBarValue);
    addAndMakeVisible(ProgressBarPtr);

    ProgressBarPtr->setColour((ProgressBar::ColourIds)0x1001a00,Colour(0xfffdac01));
    ProgressBarPtr->setColour((ProgressBar::backgroundColourId),Colour(200,200,200));

    ProgressBarPtr->setBounds(576,85,64,12);
    ProgressBarPtr->setVisible(0);


    for( i=0;i<(1024);i++)
        FileProcessBuf[i]=0;

    //[/UserPreSize]

    setSize (800, 600);


    //[Constructor] You can add your own custom stuff here..
    setSize(800, 535);
    //[/Constructor]
}

GlobalCompactComponent::~GlobalCompactComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    ProgressBarPtr =nullptr;
    //[/Destructor_pre]

    label_poc = nullptr;
    label_fh = nullptr;
    label_th = nullptr;
    label_firm = nullptr;
    Bt_SAVE = nullptr;
    Bt_GetA = nullptr;
    Bt_GetB = nullptr;
    Bt_DUMPA = nullptr;
    Bt_DUMPB = nullptr;
    Bt_UPDATE = nullptr;
    label = nullptr;
    label_MODE = nullptr;
    Bt_Standart = nullptr;
    Bt_MC = nullptr;
    label_DEVID = nullptr;
    Bt_ID16 = nullptr;
    label_HARDWARE = nullptr;
    Bt_ID2 = nullptr;
    label_GLOBALCH = nullptr;
    Bt_CH2 = nullptr;
    label_GLOBALCH2 = nullptr;
    Bt_ADD = nullptr;
    Bt_DEV = nullptr;
    label3 = nullptr;
    Bt_LOAD = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label10 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    label11 = nullptr;
    label12 = nullptr;
    label13 = nullptr;
    label14 = nullptr;
    label15 = nullptr;
    label16 = nullptr;
    label17 = nullptr;
    label18 = nullptr;
    label19 = nullptr;
    label20 = nullptr;
    label21 = nullptr;
    label22 = nullptr;
    label23 = nullptr;
    label221 = nullptr;
    label220 = nullptr;
    label222 = nullptr;
    label223 = nullptr;
    Bt_ADD2 = nullptr;
    Bt_DEV2 = nullptr;
    label_tip = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    label_ID = nullptr;
    //[/Destructor]
}

//==============================================================================
void GlobalCompactComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xff9f6d25));
    g.fillRect (431, 189, 2, 178);

    g.setColour (Colour (0xff9f6d25));
    g.fillRect (431, 189, 212, 2);

    g.setColour (Colour (0xff9f6d25));
    g.fillRect (642, 189, 2, 178);

    g.setColour (Colour (0xff9f6d25));
    g.fillRect (431, 366, 213, 2);

    g.setColour (Colours::black);
    g.fillRect (0, 389, 680, 100);

    g.setColour (Colour (0xffffab00));
    g.fillRect (0, 128, 685, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (411, 129, 2, 259);

    //[UserPaint] Add your own custom painting code here..
    g.setColour(Colour(0xffffab00));
    g.fillRect(0, 500, 664, 2);

    g.setColour(Colour(0xff000000));
    g.fillRect(0, 389, 680, 111);

    g.setColour(Colour(0xff333333));
    g.fillRect(-1, 502, 809, 100);
    //[/UserPaint]
}

void GlobalCompactComponent::resized()
{
    label_poc->setBounds (18, 24, 160, 24);
    label_fh->setBounds (230, 24, 150, 24);
    label_th->setBounds (406, 24, 108, 24);
    label_firm->setBounds (570, 24, 80, 24);
    Bt_SAVE->setBounds (104, 56, 64, 24);
    Bt_GetA->setBounds (216, 56, 64, 24);
    Bt_GetB->setBounds (296, 56, 64, 24);
    Bt_DUMPA->setBounds (384, 56, 64, 24);
    Bt_DUMPB->setBounds (464, 56, 64, 24);
    Bt_UPDATE->setBounds (576, 56, 64, 24);
    label->setBounds (324, 96, 96, 24);
    label_MODE->setBounds (99, 152, 56, 24);
    Bt_Standart->setBounds (40, 184, 72, 24);
    Bt_MC->setBounds (128, 184, 72, 24);
    label_DEVID->setBounds (280, 152, 88, 24);
    Bt_ID16->setBounds (280, 184, 72, 24);
    label_HARDWARE->setBounds (496, 132, 88, 24);
    Bt_ID2->setBounds (449, 157, 176, 24);
    label_GLOBALCH->setBounds (278, 273, 80, 24);
    Bt_CH2->setBounds (280, 304, 72, 24);
    label_GLOBALCH2->setBounds (41, 273, 160, 24);
    Bt_ADD->setBounds (40, 304, 72, 24);
    Bt_DEV->setBounds (128, 304, 72, 24);
    label3->setBounds (0, 387, 664, 2);
    Bt_LOAD->setBounds (24, 56, 64, 24);
    label5->setBounds (472, 192, 150, 24);
    label6->setBounds (438, 211, 96, 24);
    label10->setBounds (438, 227, 110, 24);
    label7->setBounds (438, 243, 93, 24);
    label8->setBounds (438, 275, 70, 24);
    label9->setBounds (438, 307, 82, 24);
    label11->setBounds (438, 323, 90, 24);
    label12->setBounds (437, 291, 83, 24);
    label13->setBounds (438, 259, 85, 24);
    label14->setBounds (438, 339, 58, 24);
    label15->setBounds (541, 211, 59, 24);
    label16->setBounds (541, 227, 67, 24);
    label17->setBounds (541, 243, 67, 24);
    label18->setBounds (541, 275, 91, 24);
    label19->setBounds (541, 307, 100, 24);
    label20->setBounds (541, 323, 83, 24);
    label21->setBounds (541, 291, 100, 24);
    label22->setBounds (541, 259, 67, 24);
    label23->setBounds (541, 339, 83, 24);
    label221->setBounds (215, 108, 113, 1);
    label220->setBounds (215, 88, 1, 20);
    label222->setBounds (415, 108, 113, 1);
    label223->setBounds (527, 88, 1, 20);
    Bt_ADD2->setBounds (40, 431, 72, 24);
    Bt_DEV2->setBounds (128, 431, 72, 24);
    label_tip->setBounds (208, 431, 264, 24);
    //[UserResized] Add your own custom resize handling here..
    label_ID->setBounds (280, 218, 72, 32);
    
    //[/UserResized]
}

void GlobalCompactComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //pMainComponent->setMyComponent(8);
    pMainComponent->GlobalorOFF = 0;
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == Bt_SAVE)
    {
        //[UserButtonCode_Bt_SAVE] -- add your button handler code here..

        String s = pMainComponent->GetBt_NIText();
        //CharPointer_UTF8 *utf;
        unsigned char b[300];
		int q = 0 ;
		memset(b,'\0',300);
		wchar_t cc;
        //*utf = s.toUTF8();
		CharPointer_UTF8 utf16(s.toUTF8());
		const char* yy ( s.toRawUTF8 ()); 
		q = strlen(yy);
		
		memcpy(b,yy,q);//
		/*while(q != 0)
		{
			//b[lp] = utf16.getAndAdvance();
			b[lp]= (unsigned char)*yy;
			q--;
			lp++;
			yy++;
		}*/
		
		/*for (int i = 0; i<50; i++)
        {
            a[i] << s.substring(i, i + 1);
            b[i]=a[i].operator[](0);
            
        }*/
		/*const char *utf8buffer;
		utf8buffer = (char *)b;
		String s1;
		s1 <<s1.fromUTF8(utf8buffer);
		String g(s1);
		pMainComponent->SetBt_NIText(g);*/

		/*String str = L"liuxijiao计算机网络";  
		int n = str.length(); //获取str的字符数  
		int len = WideCharToMultiByte(CP_ACP, 0, &b, n, NULL, 0, NULL, NULL); //获取宽字节字符的大小，大小是按字节计算的  
		char *pChar = new char[len + 1]; //以字节为单位  
		WideCharToMultiByte(CP_ACP, 0, b, n, pChar, len, NULL, NULL); //宽字节编码转换成多字节编码  
		pChar[len + 1] = '\0'; //多字节字符以'\0'结束  
		
         delete[] pChar; */

        String SyxFileToTxtName[10];
        __declspec(align(8)) unsigned char Compacthead[5] = {0x20,0x15,0x01,0x04,0x03};
        __declspec(align(8)) unsigned char Minihead[5] = {0x20,0x15,0x01,0x04,0x0c};
        useNativeVersion = /*Bt_SAVE->getToggleState()*/1;
        //p=(unsigned int *)FileProcessBuf;
        L = /*80*1024/2*/633;

        if(Load_or_SaveFlag == 0)
            AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                        "Noting to SAVE!",
                      "Internal memory is empty!" ,
                        "Close",
                        nullptr,
                        nullptr);
        else
        {
            if(AlertWindow::showOkCancelBox (AlertWindow::InfoIcon,
                        "  SAVE preset to Computer?",
                      "" ,
                        "Yes",
                        "No",
                        nullptr,
                        nullptr))
           {
                FileChooser fc ("Choose a file to save...",
                                File::getCurrentWorkingDirectory(),
                                "*.bin",
                                useNativeVersion);
				fc.Setfilename(pMainComponent->GetBt_NIText());
                if (fc.browseForFileToSave (true))
                {
                    File chosenFile = fc.getResult();
                    //SyxFileToTxtName[0] <<"_UpdateFiles/"<</*chosenFile.getFullPathName()*/chosenFile.getFileName();
					//SyxFileToTxtName[0] << chosenFile.getFullPathName() +"\\"+ chosenFile.getFileName();
					SyxFileToTxtName[0] << chosenFile.getFullPathName();
                        //chosenFile. getRelativePathFrom(chosen);
                    for(k=0;k<1;k++)
                    {              
                        for( i=0;i<(633);i++)
                                FileProcessBuf[i]=0;
						wchar_t str3[500];
						SyxFileToTxtName[k].copyToUTF16(str3,500);
						//char str2[500] ;//=  SyxFileToTxtName[k].toRawUTF8(); 
						//memcpy(str2,str3,500);
						/*size_t len = wcslen(str3) + 1;

						size_t converted = 0;

						char *str2;

						str2=(char*)malloc(len*sizeof(char));

						wcstombs_s(&converted, str2, len, str3, _TRUNCATE);*/

						/*int len= WideCharToMultiByte(CP_ACP,0,str3,wcslen(str3),NULL,0,NULL,NULL);   
						char * str2=new char[len+1];   
						WideCharToMultiByte(CP_ACP,0,str3,wcslen(str3),str2,len,NULL,NULL);   
						str2[len]='\0'; */

                        _wunlink(str3);
						//remove(str3);
                        fOt=_wfopen(str3,L"w+b");
						
                        if(eXTOUCH_MODE_ID == COMPACT_MODE)
                        {
							pMainComponent ->CompactGetCustomBtID();

                            for(i=0;i<5;i++)
                                FileProcessBuf[i] =Compacthead[i];
                            for(i=0;i<COMPACT_PRE_LONG;i++)
                                FileProcessBuf[i+5] = ConstMidiLayerMessage[i];
                            p=(unsigned char *)/*GetReceiveSysEXbuf*/FileProcessBuf;

                            //p=(unsigned char *)/*GetReceiveSysEXbuf*/ConstMidiLayerMessage;
                            L=COMPACT_PRE_LONG+5;
                        }
                        else if(eXTOUCH_MODE_ID == MINI_MODE)
                        {
                            pFaderMiniComponent->GetCustomBtID();
                            BM1TO8->GetCustomBtID();
                            BM9TO16->GetCustomBtID();
                            pEncodersMiniComponent->GetCustomBtID();

                            for(i=0;i<5;i++)
                                FileProcessBuf[i] = Minihead[i];
                            for(i=0;i<MINI_PRE_LONG;i++)
                                FileProcessBuf[i+5] = MiniConstMidiLayerMessage[i];
                            for (i = 0; i < 300; i++)
                            {
                                FileProcessBuf[i + 350] = b[i];
                                //fwrite(utf++, sizeof(unsigned char), 1, fOt);
                            }
                            p=(unsigned char *)/*GetReceiveSysEXbuf*/FileProcessBuf;
                            //p=(unsigned char *)/*GetReceiveSysEXbuf*/MiniConstMidiLayerMessage;
                            L=/*203*/650;
                        }
                        while (L!=0)
                        {
                            //fread( p++, sizeof(unsigned int),1, fIn);
                            fwrite(p++, sizeof(unsigned char),1, fOt);
                            L--;
                        }

                        
                    fclose(fOt);

                    pMainComponent->ChangeEditedButtonIm();
                    }
                }
            }
        }
        //[/UserButtonCode_Bt_SAVE]
    }
    else if (buttonThatWasClicked == Bt_GetA)
    {
        //[UserButtonCode_Bt_GetA] -- add your button handler code here..
        Bt_GetA->setToggleState(1,dontSendNotification);
        Bt_GetB->setToggleState(0,dontSendNotification);
		if (AlertWindow::showOkCancelBox(AlertWindow::InfoIcon,
						"    Do you really want?",
						"",
						"Yes",
						"No",
						nullptr,
						nullptr))
		{
			this->GlobalBt = Bt_GetA;
			LayerFlag = 0;
			GetLayerAorB_FromLowLevel();
			//GetLayerAorB_FromLowLevel();
			ThirtySecTimeflag = 1;
		}
		else
			Bt_GetA->setToggleState(0, dontSendNotification);
        //[/UserButtonCode_Bt_GetA]
    }
    else if (buttonThatWasClicked == Bt_GetB)
    {
        //[UserButtonCode_Bt_GetB] -- add your button handler code here..
        Bt_GetA->setToggleState(0,dontSendNotification);
        Bt_GetB->setToggleState(1,dontSendNotification);
		if (AlertWindow::showOkCancelBox(AlertWindow::InfoIcon,
						"    Do you really want?",
						"",
						"Yes",
						"No",
						nullptr,
						nullptr))
		{
			this->GlobalBt = Bt_GetB;
			LayerFlag = 1;
			GetLayerAorB_FromLowLevel();
			//GetLayerAorB_FromLowLevel();
			ThirtySecTimeflag = 1;
		}
		else
			Bt_GetB->setToggleState(0, dontSendNotification);
		/*if (eXTOUCH_MODE_ID == COMPACT_MODE)
		{
			pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
			pEncodersCompact1To8Component->UpdateEncode1TO8Bt(45);
			pEncodersCompact9To16Component->UpdateEncode9TO16Bt(141);
			BC1TO8->UpdateBt1TO8(237);
			BC9TO16->UpdateBt9TO16(285);
			BC17TO24->UpdateBt17TO24(333);
			BC25TO33->UpdateBt25TO33(381);
			BC34TO39->UpdateBt34TO39(435);
		}*/
        //[/UserButtonCode_Bt_GetB]
    }
    else if (buttonThatWasClicked == Bt_DUMPA)
    {
        //[UserButtonCode_Bt_DUMPA] -- add your button handler code here..
         Bt_DUMPA->setToggleState(1,dontSendNotification);
         Bt_DUMPB->setToggleState(0,dontSendNotification);
         this->GlobalBt = Bt_DUMPA;
		 if(eXTOUCH_MODE_ID == MINI_MODE)
		 {
			 pFaderMiniComponent->GetCustomBtID();
			 BM1TO8->GetCustomBtID();
			 BM9TO16->GetCustomBtID();
			 pEncodersMiniComponent->GetCustomBtID();
		 }
		 else
		 {
			 pFadersAndFootCompactComponent->GetCustomBtID();
			 pEncodersCompact1To8Component->GetCustomBtID();
			 pEncodersCompact9To16Component->GetCustomBtID();
			 BC1TO8->GetCustomBtID();
			 BC9TO16->GetCustomBtID();
			 BC17TO24->GetCustomBtID();
			 BC25TO33->GetCustomBtID();
			 BC34TO39->GetCustomBtID();
			 pFaderTouchCompactComponent->GetCustomBtID();
		 }
         if(pMidiDeviceProcess->GetMidiDevOpenFlag())
         {
			 if (AlertWindow::showOkCancelBox(AlertWindow::InfoIcon,
							"    Do you really want?",
							"",
							"Yes",
							"No",
							nullptr,
							nullptr))
			 {
				 if ((pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH COMPACT") == 0) || (pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH MINI") == 0))
				 {
					 this->GlobalBt = Bt_DUMPA;
					 SendDumpMessage();
					 ThirtySecTimeflag = 1;
				 }
				 else
					 AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
					 "Now X-TOUCH is  in the uboot mode!",
					 "if you want to DUMP , please set X-TOUCH in the APP mode!",
					 "Close",
					 nullptr,
					 nullptr);
			 }
			 else
				 Bt_DUMPA->setToggleState(0, dontSendNotification);
         }
         else
             AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                        "No device connenct!",
                      "please check the USB done!" ,
                        "Close",
                        nullptr,
                        nullptr);
        //[/UserButtonCode_Bt_DUMPA]
    }
    else if (buttonThatWasClicked == Bt_DUMPB)
    {
        //[UserButtonCode_Bt_DUMPB] -- add your button handler code here..
         Bt_DUMPB->setToggleState(1,dontSendNotification);
         Bt_DUMPA->setToggleState(0,dontSendNotification);
         this->GlobalBt = Bt_DUMPB;
		 if(eXTOUCH_MODE_ID == MINI_MODE)
		 {
			 pFaderMiniComponent->GetCustomBtID();
			 BM1TO8->GetCustomBtID();
			 BM9TO16->GetCustomBtID();
			 pEncodersMiniComponent->GetCustomBtID();
		 }
		 else
		 {
			 pFadersAndFootCompactComponent->GetCustomBtID();
			 pEncodersCompact1To8Component->GetCustomBtID();
			 pEncodersCompact9To16Component->GetCustomBtID();
			 BC1TO8->GetCustomBtID();
			 BC9TO16->GetCustomBtID();
			 BC17TO24->GetCustomBtID();
			 BC25TO33->GetCustomBtID();
			 BC34TO39->GetCustomBtID();
			 pFaderTouchCompactComponent->GetCustomBtID();
		 }
         if(pMidiDeviceProcess->GetMidiDevOpenFlag())
         {
             //pMidiDeviceProcess->checkistheremididevice();
			 if (AlertWindow::showOkCancelBox(AlertWindow::InfoIcon,
							"    Do you really want?",
							"",
							 "Yes",
							 "No",
							 nullptr,
							 nullptr))
			 {
				 if ((pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH COMPACT") == 0) || (pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH MINI") == 0))
				 {
					 this->GlobalBt = Bt_DUMPB;
					 SendDumpMessage();
					 ThirtySecTimeflag = 1;
				 }
				 else
					 AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
					 "Now X-TOUCH is  in the uboot mode!",
					 "if you want to DUMP , please set X-TOUCH in the APP mode!",
					 "Close",
					 nullptr,
					 nullptr);
			 }
			 else
				 Bt_DUMPB->setToggleState(0, dontSendNotification);
         }
         else
             AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                        "No device to connenct!",
                      "please check the USB done!" ,
                        "Close",
                        nullptr,
                        nullptr);
        //[/UserButtonCode_Bt_DUMPB]
    }
    else if (buttonThatWasClicked == Bt_UPDATE)
    {
        //[UserButtonCode_Bt_UPDATE] -- add your button handler code here..
        if(Bt_UPDATE->getToggleState())
            Bt_UPDATE->setToggleState(0,dontSendNotification);
        else
            Bt_UPDATE->setToggleState(1,dontSendNotification);
        //if(!pBackgroundThread2->isThreadRunning())

		pBackgroundThread2->startThread(0);
         //if(ToStartThrd02 == 0)
        //pMainComponent->pMainComponentMessage = new MainComponentMessage("toStartThread2",0x01);
        //pMainComponent->myMainComponentMessageListener.postMessage(pMainComponent->pMainComponentMessage);
         ToStartThrd02 = 1;
         ProgressBarPtr->setVisible(1);
        //[/UserButtonCode_Bt_UPDATE]
    }
    else if (buttonThatWasClicked == Bt_Standart)
    {
        //[UserButtonCode_Bt_Standart] -- add your button handler code here..
        if(pMidiDeviceProcess->GetMidiDevOpenFlag())
        {
            unsigned char SendWantTodevAMessage[14]  = {0xf0 ,0x40 ,0x41 ,0x42 ,0x59 ,0 ,0,0,0,0,0,0,0 ,0xf7};
            pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantTodevAMessage);
        }
        SetStandartModeChange();
         //Bt_Standart->setToggleState(1,dontSendNotification);
         //Bt_MC->setToggleState(0,dontSendNotification);
        //[/UserButtonCode_Bt_Standart]
    }
    else if (buttonThatWasClicked == Bt_MC)
    {
        //[UserButtonCode_Bt_MC] -- add your button handler code here..
        if(pMidiDeviceProcess->GetMidiDevOpenFlag())
        {
            unsigned char SendWantTodevAMessage[14]  = {0xf0 ,0x40 ,0x41 ,0x42 ,0x59 ,0x01 ,0,0,0,0,0,0,0 ,0xf7};
            pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantTodevAMessage);
        }
        this->GlobalBt = Bt_MC;
        SetMCModeChange();

         //Bt_MC->setToggleState(1,dontSendNotification);
         //Bt_Standart->setToggleState(0,dontSendNotification);
        //[/UserButtonCode_Bt_MC]
    }
    
    else if (buttonThatWasClicked == Bt_ID2)
    {
        //[UserButtonCode_Bt_ID2] -- add your button handler code here..
		if (OUTDEVID > 1 && INDEVID > 1)
		{
			pMutilDevWinComponent = new MutilDevWinComponent();
			CallOutBox::launchAsynchronously(pMutilDevWinComponent, Bt_ID2->getScreenBounds(), nullptr);
			
		}
        //Bt_ID2->setToggleState(1,dontSendNotification);
        //[/UserButtonCode_Bt_ID2]
    }
    
    else if (buttonThatWasClicked == Bt_ADD)
    {
        //[UserButtonCode_Bt_ADD] -- add your button handler code here..
         Bt_ADD->setToggleState(1,dontSendNotification);
         Bt_DEV->setToggleState(0,dontSendNotification);
         //pMainComponent->ChangeEditedButtonIm();
         unsigned char SendWantTodevAMessage[14]  = {0xf0 ,0x40 ,0x41 ,0x42 ,0x62 ,0x01 ,0,0,0,0,0,0,0 ,0xf7};
         pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantTodevAMessage);

        //[/UserButtonCode_Bt_ADD]
    }
    else if (buttonThatWasClicked == Bt_DEV)
    {
        //[UserButtonCode_Bt_DEV] -- add your button handler code here..
         Bt_DEV->setToggleState(1,dontSendNotification);
         Bt_ADD->setToggleState(0,dontSendNotification);
         //pMainComponent->ChangeEditedButtonImClose();
         unsigned char SendWantToaddAMessage[14]  = {0xf0 ,0x40 ,0x41 ,0x42 ,0x62 ,0 ,0,0,0,0,0,0,0 ,0xf7};
         pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantToaddAMessage); 
        //[/UserButtonCode_Bt_DEV]
    }
    else if (buttonThatWasClicked == Bt_LOAD)
    {
        //[UserButtonCode_Bt_LOAD] -- add your button handler code here..
        /*Bt_LOAD->setToggleState(1,dontSendNotification);
        ;
        if(Bt_SAVE ->getToggleState())
            Bt_SAVE->setToggleState(0,dontSendNotification);*/
        ToLoadFile();
        //[/UserButtonCode_Bt_LOAD]
    }
    else if (buttonThatWasClicked == Bt_ADD2)
    {
        //[UserButtonCode_Bt_ADD2] -- add your button handler code here..
		SetStandartModeChange();
        Bt_ADD2->setToggleState(1,dontSendNotification);
        Bt_DEV2->setToggleState(0,dontSendNotification);
        Bt_ID2->setButtonText("X-TOUCH COMPACT Dummy");

        label6->setVisible(1);
        label15->setVisible(1);
        label13->setVisible(1);
        label22->setVisible(1);

        label8->setBounds (438, 275, 70, 24);
        label18->setBounds (541, 275, 91, 24);
        label12->setBounds (437, 291, 83, 24);
        label21->setBounds (541, 291, 100, 24);
        label9->setBounds (438, 307, 82, 24);
        label19->setBounds (541, 307, 100, 24);
        label11->setBounds (438, 323, 90, 24);
        label20->setBounds (541, 323, 83, 24);
        label14->setBounds (438, 339, 58, 24);
        label23->setBounds (541, 339, 83, 24);

        label16->setText("CC10-CC25",dontSendNotification);
        label17->setText("CC26-CC41",dontSendNotification);
		label18->setText("NOTE 0-NOTE 38",dontSendNotification);
        Bt_ADD->setVisible(1);
        Bt_DEV->setVisible(1);
        label_GLOBALCH2->setVisible(1);
        label_ID ->setVisible(0);

		Bt_Standart ->setToggleState(1,dontSendNotification);
		Bt_MC ->setToggleState(0,dontSendNotification);

        eXTOUCH_MODE_ID = COMPACT_MODE;
        pMainComponent ->removeTabbedComponent();
        pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);

		pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
		pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
		pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
		BC1TO8->UpdateBt1TO8(319);
		BC9TO16->UpdateBt9TO16(383);
		BC17TO24->UpdateBt17TO24(447);
		BC25TO33->UpdateBt25TO33(511);
		BC34TO39->UpdateBt34TO39(583);
		pFaderTouchCompactComponent->UpdateFT(646);
        //[/UserButtonCode_Bt_ADD2]
    }
    else if (buttonThatWasClicked == Bt_DEV2)
    {
        //[UserButtonCode_Bt_DEV2] -- add your button handler code here..
		SetStandartModeChange();
        Bt_ADD2->setToggleState(0,dontSendNotification);
        Bt_DEV2->setToggleState(1,dontSendNotification);
        Bt_ID2->setButtonText("X-TOUCH MINI Dummy");

        label6->setVisible(0);
        label15->setVisible(0);
        label13->setVisible(0);
        label22->setVisible(0);

        label8->setBounds (438, 259, 70, 24);
        label18->setBounds (541, 259, 91, 24);
        label12->setBounds (438, 275, 83, 24);
        label21->setBounds (541, 275, 100, 24);
        label9->setBounds (437, 291, 82, 24);
        label19->setBounds (541, 291, 100, 24);
        label11->setBounds (438, 307, 90, 24);
        label20->setBounds (541, 307, 83, 24);
        label14->setBounds (438, 323, 58, 24);
        label23->setBounds (541, 323, 83, 24);

        label16->setText("CC01-CC08",dontSendNotification);
        label17->setText("CC09-CC16",dontSendNotification);
        repaint();

        Bt_ADD->setVisible(0);
        Bt_DEV->setVisible(0);
        label_GLOBALCH2->setVisible(0);
        label_ID ->setVisible(0);
        label_ID->setAlpha(0.5);
        label_ID->setText(Bt_ID16->getButtonText(),dontSendNotification);
		label18->setText("NOTE 0-NOTE 15",dontSendNotification);
		Bt_Standart ->setToggleState(1,dontSendNotification);
		Bt_MC ->setToggleState(0,dontSendNotification);

        eXTOUCH_MODE_ID = MINI_MODE;
        pMainComponent ->removeTabbedComponent();
        pMainComponent ->UpdateTabbedComponent(eXTOUCH_MODE_ID);

        pFaderMiniComponent->UpdateMiniFaderBt();
        pEncodersMiniComponent->UpdateEncodeMini(7);
        //pEncodersMiniComponent->UpdateEncodeMini(5);
        BM1TO8->UpdateMiniBt1TO8(135);
        BM9TO16->UpdateMiniBt9TO16(199);
        //[/UserButtonCode_Bt_DEV2]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

/*******************************************************************************
**  Abstract: change "RX MIDI CONTROL" details
*******************************************************************************/
void GlobalCompactComponent:: SetRXMIDIControlVersion()
{
    if(eXTOUCH_MODE_ID == COMPACT_MODE)
    {
        label6->setVisible(1);
        label15->setVisible(1);
        label13->setVisible(1);
        label22->setVisible(1);

        label8->setBounds (438, 275, 70, 24);
        label18->setBounds (541, 275, 91, 24);
        label12->setBounds (437, 291, 83, 24);
        label21->setBounds (541, 291, 100, 24);
        label9->setBounds (438, 307, 82, 24);
        label19->setBounds (541, 307, 100, 24);
        label11->setBounds (438, 323, 90, 24);
        label20->setBounds (541, 323, 83, 24);
        label14->setBounds (438, 339, 58, 24);
        label23->setBounds (541, 339, 83, 24);

        label16->setText("CC10-CC25",dontSendNotification);
        label17->setText("CC26-CC41",dontSendNotification);
		label18->setText("NOTE 0-NOTE 38",dontSendNotification);
        repaint();
    }
    else if(eXTOUCH_MODE_ID == MINI_MODE)
    {
        label6->setVisible(0);
        label15->setVisible(0);
        label13->setVisible(0);
        label22->setVisible(0);

        label8->setBounds (438, 259, 70, 24);
        label18->setBounds (541, 259, 91, 24);
        label12->setBounds (438, 275, 83, 24);
        label21->setBounds (541, 275, 100, 24);
        label9->setBounds (437, 291, 82, 24);
        label19->setBounds (541, 291, 100, 24);
        label11->setBounds (438, 307, 90, 24);
        label20->setBounds (541, 307, 83, 24);
        label14->setBounds (438, 323, 58, 24);
        label23->setBounds (541, 323, 83, 24);

        label16->setText("CC01-CC08",dontSendNotification);
        label17->setText("CC09-CC16",dontSendNotification);
		label18->setText("NOTE 0-NOTE 15",dontSendNotification);
        repaint();
    }
}

/*******************************************************************************
**  Abstract: update the global's component when compact touch is connected
*******************************************************************************/
void GlobalCompactComponent::SetWhenCompactConnectTheChange()
{

    Bt_GetA->setEnabled(1);
    Bt_GetB->setEnabled(1);
    Bt_DUMPA->setEnabled(1);
    Bt_DUMPB->setEnabled(1);
     if(pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH COMPACT-U")==0)
        Bt_UPDATE->setEnabled(1);
	 else
		Bt_UPDATE->setEnabled(0);
    Bt_CH2->setEnabled(1);
    Bt_ID16->setEnabled(1);
    Bt_ADD->setEnabled(1);
    Bt_DEV->setEnabled(1);

    Bt_GetA->setToggleState(0,dontSendNotification);
    Bt_GetB->setToggleState(0,dontSendNotification);
    Bt_DUMPA->setToggleState(0,dontSendNotification);
    Bt_DUMPB->setToggleState(0,dontSendNotification);
    Bt_UPDATE->setToggleState(0,dontSendNotification);
    Bt_CH2->setToggleState(0,dontSendNotification);
    Bt_ID16->setToggleState(0,dontSendNotification);
    Bt_ADD->setToggleState(0,dontSendNotification);
    Bt_DEV->setToggleState(0,dontSendNotification);

    label_fh->setAlpha(1);
    label_th->setAlpha(1);
    if(pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH COMPACT-U")==0)
        label_firm->setAlpha(1);
	else
		label_firm->setAlpha(0.5);
    label->setAlpha(1);
    label_DEVID ->setAlpha(1);
    label_GLOBALCH ->setAlpha(1);
    label_GLOBALCH2 ->setAlpha(1);
    label220->setAlpha(1);
    label221->setAlpha(1);
    label222->setAlpha(1);
    label223->setAlpha(1);

    Bt_ADD->setVisible(1);
    Bt_DEV->setVisible(1);
    label_GLOBALCH2->setVisible(1);
    label_ID ->setVisible(0);
    label_ID->setAlpha(1.0);

    Bt_ADD2->setVisible(0);
    Bt_DEV2->setVisible(0);
    label_tip->setVisible(0);

	int a[10];
	int b = 0;
	for (int i = 0; i < INDEVID; i++)
	{
		if (MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT-U") == 0)
		{
			b++;
			a[i] = b;
		}
		else
			a[i] = 0;
	}
	Bt_ID2->setButtonText("X-TOUCH COMPACT #"+String(a[CurrentDevID]));
    Bt_Standart->setToggleState(1,dontSendNotification);
    Bt_MC->setToggleState(0,dontSendNotification);
    pMainComponent->SetFirwareVersion("empty ","X-TOUCH COMAPCT",1.0);
    repaint();
}

/*******************************************************************************
**  Abstract: update the global's component when mini touch is connected
*******************************************************************************/
void GlobalCompactComponent::SetWhenMiniConnectTheChange()
{
    Bt_GetA->setEnabled(1);
    Bt_GetB->setEnabled(1);
    Bt_DUMPA->setEnabled(1);
    Bt_DUMPB->setEnabled(1);
    Bt_SAVE ->setEnabled(1);
    Bt_LOAD->setEnabled(1);
    if(pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH MINI-U")==0)
        Bt_UPDATE->setEnabled(1);
	else
		Bt_UPDATE->setEnabled(0);
    Bt_CH2->setEnabled(1);
    Bt_ID16->setEnabled(1);
    Bt_ADD->setEnabled(0);
    Bt_DEV->setEnabled(0);

    Bt_ADD2->setVisible(0);
    Bt_DEV2->setVisible(0);
    label_tip->setVisible(0);

    Bt_GetA->setToggleState(0,dontSendNotification);
    Bt_GetB->setToggleState(0,dontSendNotification);
    Bt_DUMPA->setToggleState(0,dontSendNotification);
    Bt_DUMPB->setToggleState(0,dontSendNotification);
    Bt_UPDATE->setToggleState(0,dontSendNotification);
    Bt_CH2->setToggleState(0,dontSendNotification);
    Bt_ID16->setToggleState(0,dontSendNotification);
    Bt_ADD->setToggleState(0,dontSendNotification);
    Bt_DEV->setToggleState(0,dontSendNotification);

    Bt_ADD->setVisible(0);
    Bt_DEV->setVisible(0);
    label_GLOBALCH2->setVisible(0);
    label_ID->setVisible(0);
    label_ID->setText(Bt_ID16->getButtonText(),dontSendNotification);
    label_ID->setAlpha(1.0);

    label_fh->setAlpha(1);
    label_th->setAlpha(1);
    if(pMidiDeviceProcess->GetsMidiDeviceName().compare("X-TOUCH MINI-U")==0)
        label_firm->setAlpha(1);
	else
		label_firm->setAlpha(0.5);
    label->setAlpha(1);
    label_DEVID ->setAlpha(1);
    label_GLOBALCH ->setAlpha(1);
    label220->setAlpha(1);
    label221->setAlpha(1);
    label222->setAlpha(1);
    label223->setAlpha(1);
    //label_GLOBALCH2 ->setAlpha(0.5);

	int a[10];
	int b = 0;
	for (int i = 0; i < INDEVID; i++)
	{
		if (MidiIntDev[i].MidiDevName.compare("X-TOUCH MINI") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH MINI-U") == 0)
		{
			b++;
			a[i] = b;
		}
		else
			a[i] = 0;
	}

	Bt_ID2->setButtonText("X-TOUCH MINI #" + String(a[CurrentDevID]));
    Bt_MC->setToggleState(0,dontSendNotification);
    Bt_Standart->setToggleState(1,dontSendNotification);
    pMainComponent->SetFirwareVersion("empty","X-TOUCH MINI",1.0);
    repaint();
}


/*******************************************************************************
**  Abstract:the UI of the global's component without device connected
*******************************************************************************/
void GlobalCompactComponent::SetNotConnentButtonUnenbale()
{
    Bt_GetA->setEnabled(0);
    Bt_GetB->setEnabled(0);
    Bt_DEV->setEnabled(0);
    Bt_ADD->setEnabled(0);
    Bt_DUMPB->setEnabled(0);
    Bt_DUMPA->setEnabled(0);
    Bt_UPDATE->setEnabled(0);
    Bt_CH2->setEnabled(0);
    Bt_ID16->setEnabled(0);

    Bt_GetA->setToggleState(0,dontSendNotification);
    Bt_GetB->setToggleState(0,dontSendNotification);
    Bt_DUMPA->setToggleState(0,dontSendNotification);
    Bt_DUMPB->setToggleState(0,dontSendNotification);
    Bt_UPDATE->setToggleState(0,dontSendNotification);
    Bt_CH2->setToggleState(0,dontSendNotification);
    Bt_ID16->setToggleState(0,dontSendNotification);
    Bt_ADD->setToggleState(0,dontSendNotification);
    Bt_DEV->setToggleState(0,dontSendNotification);

    label_fh->setAlpha(0.5);
    label_th->setAlpha(0.5);
    label_firm->setAlpha(0.5);
    label->setAlpha(0.5);
    label_DEVID ->setAlpha(0.5);
    label_GLOBALCH ->setAlpha(0.5);
    label_GLOBALCH2 ->setAlpha(0.5);
    label220->setAlpha(0.5);
    label221->setAlpha(0.5);
    label222->setAlpha(0.5);
    label223->setAlpha(0.5);

    /*Bt_ADD->setVisible(1);
    Bt_DEV->setVisible(1);
    label_GLOBALCH2->setVisible(1);
    label_ID ->setVisible(0);*/
    /*
    Bt_DEV->setButtonText("Mini");
    Bt_ADD->setButtonText("Compact");
    Bt_ADD->setToggleState(1,dontSendNotification);
    label_GLOBALCH2->setText("CHOOSE MODE",dontSendNotification);
    label_GLOBALCH2->setJustificationType (Justification::centred);*/
    Bt_ADD2->setVisible(1);
    Bt_DEV2->setVisible(1);
    label_tip->setVisible(1);
    Bt_ADD2->setToggleState(1,dontSendNotification);
    Bt_DEV2->setToggleState(0,dontSendNotification);

	/*if(INDEVID>=1)
	{
		Bt_ADD2->setEnabled(0);
		Bt_DEV2->setEnabled(0);
	}
	else
	{
		Bt_ADD2->setEnabled(1);
		Bt_DEV2->setEnabled(1);
	}*/

	if(eXTOUCH_MODE_ID == COMPACT_MODE)
	{
		Bt_ID2->setButtonText("X-TOUCH COMPACT Dummy");
		Bt_ADD2->setToggleState(1,dontSendNotification);
		Bt_DEV2->setToggleState(0,dontSendNotification);
		Bt_ADD->setVisible(1);
		Bt_DEV->setVisible(1);
		label_GLOBALCH2->setVisible(1);
		label_ID->setVisible(0);
	}
	else
	{
		Bt_ID2->setButtonText("X-TOUCH MINI Dummy");
		Bt_ADD2->setToggleState(0,dontSendNotification);
		Bt_DEV2->setToggleState(1,dontSendNotification);
		Bt_ADD->setVisible(0);
		Bt_DEV->setVisible(0);
		label_GLOBALCH2->setVisible(0);
		label_ID->setVisible(0);
		label_ID->setAlpha(0.5);
	}
    Bt_Standart->setToggleState(1,dontSendNotification);
    Bt_MC->setToggleState(0,dontSendNotification);
    pMainComponent->SetFirwareVersion("empty","No Device",0.5);
}

/*******************************************************************************
**  Abstract: return a number
*******************************************************************************/
int GlobalCompactComponent::ConventNO_BTtoInt(String JK)
{
     int r;
     JK = JK.substring (3);
     //BTCO_CH_BT17->setButtonText(JK);
     r = JK.getIntValue();
     return r;
 }

Button * GlobalCompactComponent::GetCHBt()
{
    return CHBt;
}

Label * GlobalCompactComponent::GetlabelID()
{
	return label_ID;
}

/*******************************************************************************
**  Abstract: send config to touch for updating touch 's config
*******************************************************************************/
void GlobalCompactComponent::SendDumpMessage()
{
    int i;

    bool SysExRtnOK;
    //unsigned char *Rom1Ptr/*,*Rom2Ptr*/;

    //vars for process the APP BIN file

    //unsigned char SysExStreamHead[8]={0xf0,0x00,0x20,0x32,0x00,0x1e,0x34,0x00};

    unsigned int /*TotalPages,*/TmpU32,rTimes;

    __declspec(align(8)) unsigned char MidiSendDataBuf  [8*1024];
    __declspec(align(8)) unsigned char TmpSmallBinBuf[3000];
    __declspec(align(8)) unsigned char ModifiedBinBuf[3000];

    unsigned char SysExDumpAHead[8]={0xf0,0x50,0x51,0x52,0x63,0x00,0x05,0x4e};
    unsigned char SysExDumpBHead[8]={0xf0,0x50,0x51,0x52,0x64,0x00,0x05,0x4e};

    unsigned char *p;

	pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SetThirtySecTime_SysExCmd_Buf);
	ThirtySecTimeflag = 0;//
	ThirtySecTimeNum = 0;


    for( i = 0 ; i<1000; i++)
    {
       // TmpSmallBinBuf[i] = 0x00;
        ModifiedBinBuf[i] = 0x00;
        MidiSendToMcuList[i]=0x00;
        TmpSmallBinBuf[i] = MidiSendToMcuList[i];
    }
    p = MidiSendDataBuf;
    if(eXTOUCH_MODE_ID == MINI_MODE)
    {
        SysExDumpAHead[4] = 0x65;
        SysExDumpBHead[4] = 0x66;
        SysExDumpAHead[6] = 0x02;
        SysExDumpAHead[7] = 0x07;
        SysExDumpBHead[6] = 0x02;
        SysExDumpBHead[7] = 0x07;
    }
    for( i= 0 ; i < 8 ; i++)
    {
        if(GlobalBt ==this-> Bt_DUMPB)
            *p++ = SysExDumpBHead[i];

        else if (GlobalBt ==this->Bt_DUMPA)
            *p++ = SysExDumpAHead[i];
    }

    unsigned int Crc1=0xffffffff;
    if(eXTOUCH_MODE_ID==COMPACT_MODE)
    {
        for(j=0;j</*536*/COMPACT_PRE_LONG;j++)
            MidiSendToMcuList[j] = ConstMidiLayerMessage[j];
        for(j=0;j</*64*8*/COMPACT_PRE_CRC_NUM ;j++)
        {
            TmpU32=(MidiSendToMcuList[4*j+0]<<0)|(MidiSendToMcuList[4*j+1]<<8)|(MidiSendToMcuList[4*j+2]<<16)|(MidiSendToMcuList[4*j+3]<<24);
            crc32(&Crc1,TmpU32);
         };
    }
    else if(eXTOUCH_MODE_ID == MINI_MODE)
    {
        for(j=0;j</*197*/MINI_PRE_LONG;j++)
            MidiSendToMcuList[j] = MiniConstMidiLayerMessage[j];
        for(j=0;j</*64*8*//*50*/MINI_PRE_CRC_NUM ;j++)
        {
            TmpU32=(MidiSendToMcuList[4*j+0]<<0)|(MidiSendToMcuList[4*j+1]<<8)|(MidiSendToMcuList[4*j+2]<<16)|(MidiSendToMcuList[4*j+3]<<24);
            crc32(&Crc1,TmpU32);
        };
    }

    TmpSmallBinBuf[ 0]=(BYTE)((Crc1>>0)&0x0f);        //low 4 bit of Crc1
    TmpSmallBinBuf[ 1]=(BYTE)((Crc1>>4)&0x0f);
    TmpSmallBinBuf[ 2]=(BYTE)((Crc1>>8)&0x0f);
    TmpSmallBinBuf[ 3]=(BYTE)((Crc1>>12)&0x0f);
    TmpSmallBinBuf[ 4]=(BYTE)((Crc1>>16)&0x0f);
    TmpSmallBinBuf[ 5]=(BYTE)((Crc1>>20)&0x0f);
    TmpSmallBinBuf[ 6]=(BYTE)((Crc1>>24)&0x0f);
    TmpSmallBinBuf[ 7]=(BYTE)((Crc1>>28)&0x0f);    //highest 4 bits of Crc1

    for(i=0;i<8;i++)
    {
        *p++ = TmpSmallBinBuf[i];
    }

   if(eXTOUCH_MODE_ID==COMPACT_MODE)
   {
        for(i=0;i</*536*/COMPACT_PRE_LONG;i++)
            TmpSmallBinBuf[i] = ConstMidiLayerMessage[i];

        MidiByteConvert7To8(TmpSmallBinBuf, ModifiedBinBuf, /*77*/COMPACT_PRE_PAG);

        for(i =0;i</*616*/COMPACT_PRE_7TO8_LONG;i++)
            *p++ = ModifiedBinBuf[i];
   }
   else if(eXTOUCH_MODE_ID==MINI_MODE)
   {
        for(i=0;i</*197*/MINI_PRE_LONG;i++)
            TmpSmallBinBuf[i] = MiniConstMidiLayerMessage[i];

        MidiByteConvert7To8(TmpSmallBinBuf, ModifiedBinBuf, /*29*/MINI_PRE_PAG);

        for(i =0;i</*232*/MINI_PRE_7TO8_LONG;i++)
            *p++ = ModifiedBinBuf[i];
   }


        //end 0xf7
    *p++ = 0xf7;
    for(i = 0;i<100;i++)
    {
        *p++ =0x00;
    }
    /*SysExRtnOK=0;
    rTimes=0;
    bool r = true;*/
    /*for(i=0;i<633;i++)
        MidiSendDataBuf[i]=FileProcessBuf[i];*/

    //pMidiDeviceProcess->SendMidiSysEx_NoRecvPrepare((unsigned char)FileProcessBuf, 633);
    //pMidiDeviceProcess->SendMidiSysEx_NoRecvPrepare(GetReceiveSysEXbuf, 633);
    if(eXTOUCH_MODE_ID==COMPACT_MODE)
        pMidiDeviceProcess->SendMidiSysEx_WithRecvPrepare(MidiSendDataBuf, /*633*/COMPACT_PRE_7TO8_ADD_HEAD);
    else
        pMidiDeviceProcess->SendMidiSysEx_WithRecvPrepare(MidiSendDataBuf, /*249*/MINI_PRE_7TO8_ADD_HEAD);
    while(!SysExRtnOK)
    {
        rTimes++;

		if (!RecvMidiSysExRtn((GlobalBt == Bt_DUMPA ? SysExDumpAHead[4] : SysExDumpBHead[4]), 0x11112222))
        {
            SysExRtnOK=1;

            break;      //success
        }
		/*else
		{
			SysExRtnOK=0;
			break;
		}*/

        if(rTimes>10000)
        {
			SysExRtnOK = 0;
            break;      //fail
        }
    }
	if(SysExRtnOK)
	{
		if(this->GlobalBt == Bt_DUMPA)
			AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                        "Dump Layer A completed successfully!",
                      "Please click 'Close' to continue." ,
                        "Close",
                        nullptr,
                        nullptr);
		else if(this->GlobalBt == Bt_DUMPB)
			AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                        "Dump Layer B completed successfully!",
                      "Please click 'Close' to continue." ,
                        "Close",
                        nullptr,
                        nullptr);
	}
	else
		AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                        "Noting to SAVE!",
                      "press 'close' to continue!" ,
                        "Close",
                        nullptr,
                        nullptr);

}

/*******************************************************************************
**  Abstract: get config from touch and update the software's contain about "button"
*******************************************************************************/
void GlobalCompactComponent::GetLayerAorB_FromLowLevel()
{
    unsigned int Crc1,Crc2;
    int rtimes = 0;

    __declspec(align(8)) unsigned char Buf8To7[1000];

    unsigned char SendWantToGetLayerAMessage[14]  = {0xf0 ,0x40 ,0x41 ,0x42 ,0x52 ,0x01 ,0,0,0,0,0,0,0 ,0xf7};
    unsigned char SendWantToGetLayerBMessage[14]  = {0xf0 ,0x40 ,0x41 ,0x42 ,0x52 ,0x02 ,0,0,0,0,0,0,0 ,0xf7};

	//if(!ToStartThrd03)
	//	pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SetThirtySecTime_SysExCmd_Buf);
	ThirtySecTimeflag = 0;
	ThirtySecTimeNum = 0;

    if(pMidiDeviceProcess->GetMidiDevOpenFlag())
    {
        if(LayerFlag == 0)
            pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantToGetLayerAMessage);
        else if(LayerFlag == 1)
            pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantToGetLayerBMessage);

		if (eXTOUCH_MODE_ID == COMPACT_MODE)
		{
			while (1)
			{
				rtimes++;
				if (MidiInWriteBufferCnt == 1)
				{
					MidiInWriteBufferCnt = 0;
					break;
				}
				if (rtimes > 2500)
				{

					break;
				}
				Thread::sleep(1);
			}
			/*while (1)
			{
				//rtimes ++;
				if (MidiInWriteBufferCnt == 1)
				{
					MidiInWriteBufferCnt = 0;
					break;
				}*/
				/*if (rtimes > 0xf00000000)
				{
				AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
				"Do ont get Layer from xtouch",
				" please restart xtouch or the software",
				"Close",
				nullptr,
				nullptr);
				ok = 0;
				return;
				}*/
			//}
		}
		else if (eXTOUCH_MODE_ID == MINI_MODE)
		{
			//Thread::sleep(130);
			while (1)
			{
				rtimes ++;
				if (MidiInWriteBufferCnt == 1)
				{
					MidiInWriteBufferCnt = 0;
					break;
				}
				if (rtimes > 2500)
				{

					break;
				}
				Thread::sleep(1);
			}
		}
        //pMidiDeviceProcess->SetMidiInRevSysExBuffer( LowLevel_SysExRecv_Buf);

		if (eXTOUCH_MODE_ID == MINI_MODE)
		{
			if (LowLevel_SysExRecv_Buf[0] == 0xf0 && LowLevel_SysExRecv_Buf[MINI_PRE_7TO8_ADD_HEAD-1] == 0xf7)
			{
				Crc1 = LowLevel_SysExRecv_Buf[8] << 0 | LowLevel_SysExRecv_Buf[9] << 4 | LowLevel_SysExRecv_Buf[10] << 8 | LowLevel_SysExRecv_Buf[11] << 12 |
					LowLevel_SysExRecv_Buf[12] << 16 | LowLevel_SysExRecv_Buf[13] << 20 | LowLevel_SysExRecv_Buf[14] << 24 | LowLevel_SysExRecv_Buf[15] << 28;

				MidiByteConvert8To7(&(LowLevel_SysExRecv_Buf[16]), Buf8To7, /*77*//*29*/MINI_PRE_PAG);

				unsigned int TmpU32;
				Crc2 = 0xffffffff;
				for (j = 0; j </*134*//*50*/MINI_PRE_CRC_NUM; j++)
				{
					TmpU32 = (Buf8To7[4 * j + 0] << 0) | (Buf8To7[4 * j + 1] << 8) | (Buf8To7[4 * j + 2] << 16) | (Buf8To7[4 * j + 3] << 24);
					crc32(&Crc2, TmpU32);
				}
				if (Crc1 == Crc2)
				{

					for (int i = 0; i < MINI_PRE_LONG; i++)
						MiniConstMidiLayerMessage[i] = Buf8To7[i];

					//unsigned char r;
					// r =MiniConstMidiLayerMessage[16];
					Thread::sleep(3);
					//ToStartThrd03 = 1;
					pFaderMiniComponent->UpdateMiniFaderBt();
					pEncodersMiniComponent->UpdateEncodeMini(7);
					BM1TO8->UpdateMiniBt1TO8(135);
					BM9TO16->UpdateMiniBt9TO16(199);
					Thread::sleep(3);
					Load_or_SaveFlag = 1;
					for (int i = 0; i < COMPACT_PRE_7TO8_ADD_HEAD; i++)
						LowLevel_SysExRecv_Buf[i] = 0;
                    //pMidiDeviceProcess->SetMidiInRevSysExBuffer(LowLevel_SysExRecv_Buf);
                    if (!ToStartThrd03)
                    {
                        if (GlobalBt == Bt_GetA)
                        {
                            AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
                                "Get Layer A completed successfully!",
                                "Please click 'Close' to continue",
                                "Close",
                                nullptr,
                                nullptr);
                            pMainComponent->SetBt_NIText("LayerA");
                        }
                        else
                        {
                            AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
                                "Get Layer B completed successfully!",
                                "Please click 'Close' to continue",
                                "Close",
                                nullptr,
                                nullptr);
                            pMainComponent->SetBt_NIText("LayerB");
                        }
					}
				}
				else
				{
					if (!ToStartThrd03)
					{
						if (GlobalBt == Bt_GetA)
							AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
							"Failed to get layerA !!",
							"Please click 'close' to continue",
							"Close",
							nullptr,
							nullptr);
						else
							AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
							"Failed to get layerB !!",
							"Please click 'close' to continue",
							"Close",
							nullptr,
							nullptr);
					}
				}
			}
			else
			{
				if (!ToStartThrd03)
					AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
						"Not revice message !!",
						"please try again",
						"Close",
						nullptr,
						nullptr);

				//midiInReset(MidiIntDev[CurrentDevID].MidiInDevHid);
				//midiInClose(MidiIntDev[CurrentDevID].MidiInDevHid);
				//midiInOpen(&MidiIntDev[CurrentDevID].MidiInDevHid, MidiIntDev[CurrentDevID].MidiDevId, (DWORD)&(MidiInCallback), 0, CALLBACK_FUNCTION);
				//midiInStart(MidiIntDev[CurrentDevID].MidiInDevHid);
				/*
				midiOutReset(MidiOutDev[CurrentDevID].MidiOutDevHid);
				midiOutClose(MidiOutDev[CurrentDevID].MidiOutDevHid);


				midiInOpen(&MidiIntDev[CurrentDevID].MidiInDevHid, MidiIntDev[CurrentDevID].MidiDevId, (DWORD)&(MidiInCallback), 0, CALLBACK_FUNCTION);
				midiInStart(MidiIntDev[CurrentDevID].MidiInDevHid);
				midiOutOpen(&MidiOutDev[CurrentDevID].MidiOutDevHid, MidiOutDev[CurrentDevID].MidiDevId, 0, 0, CALLBACK_NULL);*/
				UpdateSuccessFlag = 0;
				afterOpenThenCloseMidiFlag = 1;
				ThirtySecTimeflag = 0;
				tabbedComponentFlag = 1;
				MidiIntDev[CurrentDevID].hasopen = 0;
				pMidiDeviceProcess->CloseMidiDevice();
				pMidiDeviceProcess->checkistheremididevice();
				UpdateSuccessFlag = 1;
				//INDEVID--;
				//pMidiDeviceProcess->SetMidiDevOpenFlag(0);
			}
		}
		else if (eXTOUCH_MODE_ID == COMPACT_MODE)
		{
			if (LowLevel_SysExRecv_Buf[0] == 0xf0 && LowLevel_SysExRecv_Buf[COMPACT_PRE_7TO8_ADD_HEAD-1] == 0xf7)
			{
				Crc1 = LowLevel_SysExRecv_Buf[8] << 0 | LowLevel_SysExRecv_Buf[9] << 4 | LowLevel_SysExRecv_Buf[10] << 8 | LowLevel_SysExRecv_Buf[11] << 12 |
					LowLevel_SysExRecv_Buf[12] << 16 | LowLevel_SysExRecv_Buf[13] << 20 | LowLevel_SysExRecv_Buf[14] << 24 | LowLevel_SysExRecv_Buf[15] << 28;

				MidiByteConvert8To7(&(LowLevel_SysExRecv_Buf[16]), Buf8To7, /*77*/COMPACT_PRE_PAG);

				unsigned int TmpU32;
				Crc2 = 0xffffffff;
				for (j = 0; j < /*134*/COMPACT_PRE_CRC_NUM; j++)
				{
					TmpU32 = (Buf8To7[4 * j + 0] << 0) | (Buf8To7[4 * j + 1] << 8) | (Buf8To7[4 * j + 2] << 16) | (Buf8To7[4 * j + 3] << 24);
					crc32(&Crc2, TmpU32);
				}
				if (Crc1 == Crc2)
				{

					for (int i = 0; i < /*536*/COMPACT_PRE_LONG; i++)
						ConstMidiLayerMessage[i] = Buf8To7[i];
					//for (int i = 0; i < 536; i++)
					//	ConstMidiLayerMessage[i] = Buf8To7[i];
					//ToStartThrd03 = 1;
					pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
					pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
					pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
					BC1TO8->UpdateBt1TO8(319);
					BC9TO16->UpdateBt9TO16(383);
					BC17TO24->UpdateBt17TO24(447);
					BC25TO33->UpdateBt25TO33(511);
					BC34TO39->UpdateBt34TO39(583);
					pFaderTouchCompactComponent->UpdateFT(646);

					Thread::sleep(5);
					//repaint();
					Load_or_SaveFlag = 1;

					for (int i = 0; i < 1000; i++)
						LowLevel_SysExRecv_Buf[i] = 0;

					if (!ToStartThrd03)
					{
						if (GlobalBt == Bt_GetA)
						{
							AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
							"Get Layer A completed successfully!",
							"Please click 'Close' to continue",
							"Close",
							nullptr,
							nullptr);
							pMainComponent->SetBt_NIText("LayerA");
						}
						else{
							AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
							"Get Layer B completed successfully!",
							"Please click 'Close' to continue",
							"Close",
							nullptr,
							nullptr);
							pMainComponent->SetBt_NIText("LayerB");
						}
						/*pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
						pEncodersCompact1To8Component->UpdateEncode1TO8Bt(45);
						pEncodersCompact9To16Component->UpdateEncode9TO16Bt(141);
						BC1TO8->UpdateBt1TO8(237);
						BC9TO16->UpdateBt9TO16(285);
						BC17TO24->UpdateBt17TO24(333);
						BC25TO33->UpdateBt25TO33(381);
						BC34TO39->UpdateBt34TO39(435);*/
					}
				}
				else
				{
					if (!ToStartThrd03)
					{
						if (GlobalBt == Bt_GetA)
							AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
							"Failed to get layerA !!",
							"Please click 'close' to continue",
							"Close",
							nullptr,
							nullptr);
						else
							AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
							"Failed to get layerB !!",
							"Please click 'close' to continue",
							"Close",
							nullptr,
							nullptr);
					}
				}
			}
			else
			{
				if (!ToStartThrd03)
					AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon,
						"Not revice message !!",
						"please try again",
						"Close",
						nullptr,
						nullptr);
				UpdateSuccessFlag = 0;
				afterOpenThenCloseMidiFlag = 1;

				ThirtySecTimeflag = 0;
				tabbedComponentFlag = 1;
				MidiIntDev[CurrentDevID].hasopen = 0;
				pMidiDeviceProcess->CloseMidiDevice();
				pMidiDeviceProcess->checkistheremididevice();
				UpdateSuccessFlag = 1;
				//midiInReset(MidiIntDev[CurrentDevID].MidiInDevHid);
				//midiInClose(MidiIntDev[CurrentDevID].MidiInDevHid);
				//midiInOpen(&MidiIntDev[CurrentDevID].MidiInDevHid, MidiIntDev[CurrentDevID].MidiDevId, (DWORD)&(MidiInCallback), 0, CALLBACK_FUNCTION);
				//midiInStart(MidiIntDev[CurrentDevID].MidiInDevHid);
			}
		}

    }
}

/*******************************************************************************
**  Abstract: when the software is opened,send the message to touch for getting the global component 's contain.
*******************************************************************************/
void GlobalCompactComponent:: SetGlobalInitBt(unsigned char name1,unsigned char name2, bool L1,bool L2)
{
	if(name1>=0 && name1 <=0x0f)
	{
		Bt_ID16->setButtonText("ID "+String(name1 + 0x01));
		label_ID->setText("ID "+String(name1 + 0x01),dontSendNotification);
	}

	if((name2>=0 && name2<=0x0f) || name2 == 0x12)
	{
		if (name2 == 0x12)
			Bt_CH2->setButtonText("Off");
		else
			Bt_CH2->setButtonText("CH "+String(name2 + 0x01));
	}
    if(L1 ==1)
    {
        Bt_Standart->setToggleState(1,dontSendNotification);
        Bt_MC->setToggleState(0,dontSendNotification);
		pMainComponent ->SetAllButtonState(1);
        SetStandartModeChange();
    }
    else
    {
        Bt_MC->setToggleState(1,dontSendNotification);
        Bt_Standart->setToggleState(0,dontSendNotification);
		pMainComponent ->SetAllButtonState(0);
        SetMCModeChange();
    }
    if(L2 == 1)
    {
        Bt_DEV->setToggleState(0,dontSendNotification);
        Bt_ADD->setToggleState(1,dontSendNotification);
    }
    else
    {
        Bt_DEV->setToggleState(1,dontSendNotification);
        Bt_ADD->setToggleState(0,dontSendNotification);
    }
}

void GlobalCompactComponent::SetMCModeChange()
{
    if (eXTOUCH_MODE_ID == COMPACT_MODE && (!pMidiDeviceProcess->GetMidiDevOpenFlag()))
    {
        Bt_MC->setToggleState(1, dontSendNotification);
        Bt_Standart->setToggleState(0, dontSendNotification);
        pMainComponent->SetFirwareVersion("MC Mode ", "No Device", 0.5);
        Bt_SAVE->setEnabled(0);
        Bt_LOAD->setEnabled(0);
        label_poc->setAlpha(0.5);

        Bt_GetA->setToggleState(0, dontSendNotification);
        Bt_GetB->setToggleState(0, dontSendNotification);
        Bt_DUMPA->setToggleState(0, dontSendNotification);
        Bt_DUMPB->setToggleState(0, dontSendNotification);
        Bt_UPDATE->setToggleState(0, dontSendNotification);
        Bt_CH2->setToggleState(0, dontSendNotification);
        Bt_ID16->setToggleState(0, dontSendNotification);
        //Bt_ADD->setToggleState(0,dontSendNotification);
        //Bt_DEV->setToggleState(0,dontSendNotification);
        pMainComponent->SetAllButtonState(0);
        repaint();
    }
    else if (eXTOUCH_MODE_ID == MINI_MODE && (!pMidiDeviceProcess->GetMidiDevOpenFlag()))
    {
        Bt_MC->setToggleState(1, dontSendNotification);
        Bt_Standart->setToggleState(0, dontSendNotification);
        pMainComponent->SetFirwareVersion("MC Mode ", "No Device", 0.5);
        Bt_SAVE->setEnabled(0);
        Bt_LOAD->setEnabled(0);
        label_poc->setAlpha(0.5);

        Bt_GetA->setToggleState(0, dontSendNotification);
        Bt_GetB->setToggleState(0, dontSendNotification);
        Bt_DUMPA->setToggleState(0, dontSendNotification);
        Bt_DUMPB->setToggleState(0, dontSendNotification);
        Bt_UPDATE->setToggleState(0, dontSendNotification);
        Bt_CH2->setToggleState(0, dontSendNotification);
        Bt_ID16->setToggleState(0, dontSendNotification);
        Bt_ADD->setToggleState(0, dontSendNotification);
        Bt_DEV->setToggleState(0, dontSendNotification);
        pMainComponent->SetAllButtonState(0);
        repaint();
    }
    else if (eXTOUCH_MODE_ID == COMPACT_MODE && (pMidiDeviceProcess->GetMidiDevOpenFlag()))
    {
        Bt_MC->setToggleState(1, dontSendNotification);
        Bt_Standart->setToggleState(0, dontSendNotification);
        Bt_SAVE->setEnabled(0);
        Bt_LOAD->setEnabled(0);
        Bt_GetA->setEnabled(0);
        Bt_GetB->setEnabled(0);
        Bt_DUMPA->setEnabled(0);
        Bt_DUMPB->setEnabled(0);

        Bt_GetA->setToggleState(0, dontSendNotification);
        Bt_GetB->setToggleState(0, dontSendNotification);
        Bt_DUMPA->setToggleState(0, dontSendNotification);
        Bt_DUMPB->setToggleState(0, dontSendNotification);
        Bt_UPDATE->setToggleState(0, dontSendNotification);
        Bt_CH2->setToggleState(0, dontSendNotification);
        Bt_ID16->setToggleState(0, dontSendNotification);
        //Bt_ADD->setToggleState(0,dontSendNotification);
        //Bt_DEV->setToggleState(0,dontSendNotification);

        label220->setAlpha(1);
        label221->setAlpha(1);
        label222->setAlpha(1);
        label223->setAlpha(1);
        label_fh->setAlpha(0.5);
        label_th->setAlpha(0.5);
        label_poc->setAlpha(0.5);
        pMainComponent->SetAllButtonState(0);
        pMainComponent->SetFirwareVersion("MC Mode ", "X-TOUCH COMPACT", 1);
    }
    else if (eXTOUCH_MODE_ID == MINI_MODE && (pMidiDeviceProcess->GetMidiDevOpenFlag()))
    {
        Bt_MC->setToggleState(1, dontSendNotification);
        Bt_Standart->setToggleState(0, dontSendNotification);
        Bt_SAVE->setEnabled(0);
        Bt_LOAD->setEnabled(0);
        Bt_GetA->setEnabled(0);
        Bt_GetB->setEnabled(0);
        Bt_DUMPA->setEnabled(0);
        Bt_DUMPB->setEnabled(0);

        Bt_GetA->setToggleState(0, dontSendNotification);
        Bt_GetB->setToggleState(0, dontSendNotification);
        Bt_DUMPA->setToggleState(0, dontSendNotification);
        Bt_DUMPB->setToggleState(0, dontSendNotification);
        Bt_UPDATE->setToggleState(0, dontSendNotification);
        Bt_CH2->setToggleState(0, dontSendNotification);
        Bt_ID16->setToggleState(0, dontSendNotification);
        Bt_ADD->setToggleState(0, dontSendNotification);
        Bt_DEV->setToggleState(0, dontSendNotification);

        label220->setAlpha(0.5);
        label221->setAlpha(0.5);
        label222->setAlpha(0.5);
        label223->setAlpha(0.5);
        label_fh->setAlpha(0.5);
        label_th->setAlpha(0.5);
        label_poc->setAlpha(0.5);
        label220->setAlpha(0.5);
        label221->setAlpha(0.5);
        label222->setAlpha(0.5);
        label223->setAlpha(0.5);
        label->setAlpha(0.5);
        pMainComponent->SetAllButtonState(0);
        pMainComponent->SetFirwareVersion("MC Mode ", "X-TOUCH MINI", 1);
    }
}

void GlobalCompactComponent::SetStandartModeChange()
{
    if (eXTOUCH_MODE_ID == COMPACT_MODE && (!pMidiDeviceProcess->GetMidiDevOpenFlag()))
    {
        Bt_MC->setToggleState(0, dontSendNotification);
        Bt_Standart->setToggleState(1, dontSendNotification);
        pMainComponent->SetFirwareVersion("empty", "No Device", 0.5);
        Bt_SAVE->setEnabled(1);
        Bt_LOAD->setEnabled(1);
        label_poc->setAlpha(1);
        pMainComponent->SetAllButtonState(1);
        //pMainComponent->SetAllButtonState(1);
        repaint();
    }
    else if (eXTOUCH_MODE_ID == MINI_MODE && (!pMidiDeviceProcess->GetMidiDevOpenFlag()))
    {
        Bt_MC->setToggleState(0, dontSendNotification);
        Bt_Standart->setToggleState(1, dontSendNotification);
        pMainComponent->SetFirwareVersion("empty", "No Device", 0.5);
        Bt_SAVE->setEnabled(1);
        Bt_LOAD->setEnabled(1);
        label_poc->setAlpha(1);
        pMainComponent->SetAllButtonState(1);
        repaint();
    }
    else if (eXTOUCH_MODE_ID == COMPACT_MODE && (pMidiDeviceProcess->GetMidiDevOpenFlag()))
    {
        Bt_MC->setToggleState(0, dontSendNotification);
        Bt_Standart->setToggleState(1, dontSendNotification);
        Bt_SAVE->setEnabled(1);
        Bt_LOAD->setEnabled(1);
        Bt_GetA->setEnabled(1);
        Bt_GetB->setEnabled(1);
        Bt_DUMPA->setEnabled(1);
        Bt_DUMPB->setEnabled(1);

        label220->setAlpha(1);
        label221->setAlpha(1);
        label222->setAlpha(1);
        label223->setAlpha(1);
        label_fh->setAlpha(1);
        label_th->setAlpha(1);
        label->setAlpha(1);
        label_poc->setAlpha(1);
        pMainComponent->SetAllButtonState(1);
        if (this->GlobalBt == Bt_MC)
            pMainComponent->SetFirwareVersion("My NI B4 Upper Manual  ", "X-TOUCH COMPACT", 1);
    }
    else if (eXTOUCH_MODE_ID == MINI_MODE && (pMidiDeviceProcess->GetMidiDevOpenFlag()))
    {
        Bt_MC->setToggleState(0, dontSendNotification);
        Bt_Standart->setToggleState(1, dontSendNotification);
        Bt_SAVE->setEnabled(1);
        Bt_LOAD->setEnabled(1);
        Bt_GetA->setEnabled(1);
        Bt_GetB->setEnabled(1);
        Bt_DUMPA->setEnabled(1);
        Bt_DUMPB->setEnabled(1);

        label220->setAlpha(1);
        label221->setAlpha(1);
        label222->setAlpha(1);
        label223->setAlpha(1);
        label_fh->setAlpha(1);
        label_th->setAlpha(1);
        label_poc->setAlpha(1);
        label220->setAlpha(1);
        label221->setAlpha(1);
        label222->setAlpha(1);
        label223->setAlpha(1);
        label->setAlpha(1);
        pMainComponent->SetAllButtonState(1);
        if (this->GlobalBt == Bt_MC)
            pMainComponent->SetFirwareVersion("My NI B4 Upper Manual", "X-TOUCH MINI", 1.0);
    }

}

int GlobalCompactComponent::GetBT_CH2Num()
{
    if (Bt_CH2->getButtonText().compare("Off") == 0)
        return 18;
    else
        return ConventNO_BTtoInt(Bt_CH2->getButtonText());
}


/*****************to load file *****************************/
void GlobalCompactComponent::ToLoadFile()
{
	String SyxFileName[20] ;
        L =633;

        if(Load_or_SaveFlag == 0)
        {
            if(AlertWindow::showOkCancelBox (AlertWindow::InfoIcon,
                        "        LOAD preset?",
                      "" ,
                        "Yes",
                        "No",
                        nullptr,
                        nullptr))
            {
                useNativeVersion = /*Bt_LOAD->getToggleState()*/1;
                FileChooser fc ("Choose a file to open...",
                               File::getCurrentWorkingDirectory(),
                                "*",
                                useNativeVersion);
                /* FileChooser fc ("Choose an *.bin to open...",
                                File::getSpecialLocation (File::userPicturesDirectory),
                                "*.bin",
                                useNativeVersion);*/
                if (fc.browseForMultipleFilesToOpen())
                {
                        File chosenFile = fc.getResult();
                        //String chosen;
                        //SyxFileName[0] <<"_UpdateFiles/"<</*chosenFile.getFullPathName()*/chosenFile.getFileName();
                        //chosenFile. getRelativePathFrom(chosen);
						SyxFileName[0] << chosenFile.getFullPathName();
                        for(k=0;k<1;k++)
                        {
                            //xtouch BIN size is 80K


                            for( i=0;i<(633);i++)
                                FileProcessBuf[i]=0;

                            // chosen.copyToUTF8(str1,500);
                            //SyxFileName[0] = "_UpdateFiles/Xtouch_Mini.bin";
							wchar_t str3[1000];
                            SyxFileName[k].copyToUTF16(str3,1000);
							
							//jassert(!str3);
                            fIn=_wfopen(str3, L"r+b");

                            /*if(eXTOUCH_MODE_ID == COMPACT_MODE)
                                p=(unsigned char *)GetReceiveSysEXbufConstMidiLayerMessage;
                            else if(eXTOUCH_MODE_ID == MINI_MODE)
                                p=(unsigned char *)MiniConstMidiLayerMessage;*/
                            p=(unsigned char *)FileProcessBuf;
                            L=0;
                            while (!feof(fIn))
                            {
                                fread( p++, sizeof(unsigned char),1, fIn);
                                L++;
                            }
                            /*while(L!=633)
                            {
                                *p++ = GetReceiveSysEXbuf[L];
                                L++;
                            }*/
        //L--;
                            fclose(fIn);
/********************************************************/
							
                        
                            if((FileProcessBuf[0]==0x20) && (FileProcessBuf[1] == 0x15) && (FileProcessBuf[2] == 0x01) && (FileProcessBuf[3] == 0x04))
                            {
                                //Load_or_SaveFlag =1;
                                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                                {
                                    if(FileProcessBuf[4] == 0x03)
                                    {
                                        Load_or_SaveFlag =1;
                                        for(int i = 0 ; i<COMPACT_PRE_LONG; i++)
                                             ConstMidiLayerMessage[i] = FileProcessBuf[i+5];
                                        //pFadersAndFootCompactComponent->UpdateFaderCompactBt();
										pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
										pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
										pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
										BC1TO8->UpdateBt1TO8(319);
										BC9TO16->UpdateBt9TO16(383);
										BC17TO24->UpdateBt17TO24(447);
										BC25TO33->UpdateBt25TO33(511);
										BC34TO39->UpdateBt34TO39(583);
										pFaderTouchCompactComponent->UpdateFT(646);

										this->Bt_GetA->setToggleState(0, dontSendNotification);
										this->Bt_GetB->setToggleState(0, dontSendNotification);
										this->Bt_DUMPA->setToggleState(0, dontSendNotification);
										this->Bt_DUMPB->setToggleState(0, dontSendNotification);

										pMainComponent->SetBt_NIText(chosenFile.getFileName().dropLastCharacters(4));

										AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon, "LOAD preset completed successfully!", "Please click 'Close' to continue", "Close", nullptr, nullptr);
                                    }
                                    else
                                        AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,"The file belongs to mini","Please choose a right file!" ,"Close",nullptr,nullptr);
                                }
                                else if(eXTOUCH_MODE_ID == MINI_MODE)
                                {
                                    unsigned char c[300];
                                    String d;
                                    //CharPointer_UTF8 *utf;
                                    if(FileProcessBuf[4] == 0x0c)
                                    {
                                        Load_or_SaveFlag =1;
                                        for(int i = 0 ; i<MINI_PRE_LONG; i++)
                                             MiniConstMidiLayerMessage[i] = FileProcessBuf[i+5];

                                        for (int i = 0; i < 300; i++)
                                        {
                                            c[i] = FileProcessBuf[i + 350];
                                            //utf->operator[](c[i]);
                                            //d << String::charToString(c[i]);
                                            //d << String(*utf);
                                        }
									    char utf8buffer[300];
										//utf8buffer = (char *)c;
										String s1;
										memcpy(utf8buffer,c,300);
										s1<<s1.fromUTF8(utf8buffer);
										
										//pMainComponent->SetBt_NIText(s1);

                                        //pMainComponent->SetBt_NIText(d);

                                        pFaderMiniComponent->UpdateMiniFaderBt();
                                        pEncodersMiniComponent->UpdateEncodeMini(7);
                                        BM1TO8->UpdateMiniBt1TO8(135);
                                        BM9TO16->UpdateMiniBt9TO16(199);

										this->Bt_GetA->setToggleState(0,dontSendNotification);
										this->Bt_GetB->setToggleState(0,dontSendNotification);
										this->Bt_DUMPA->setToggleState(0,dontSendNotification);
										this->Bt_DUMPB->setToggleState(0,dontSendNotification);
                                        AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,"LOAD preset completed successfully!","Please click 'Close' to continue" ,"Close",nullptr,nullptr);

										pMainComponent->SetBt_NIText(chosenFile.getFileName().dropLastCharacters(4));
                                    }
                                    else
                                        AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,"The file  belongs to compact","Please choose a right file!" ,"Close",nullptr,nullptr);
                                }
								
                            }
                            else
                                AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                                                                                            "Choose file error",
                                                                                            "Please choose a right file!" ,
                                                                                            "Close",
                                                                                            nullptr,
                                                                                            nullptr);


                        }
                }
            }
        }
        else
        {
            if(AlertWindow::showOkCancelBox (AlertWindow::InfoIcon,
                        "LOAD preset and overwrite",
                      "Current editor preset?" ,
                        "Yes",
                        "No",
                        nullptr,
                        nullptr))
            {
                useNativeVersion = 1;
                FileChooser fc ("Choose a file to open...",
                               File::getCurrentWorkingDirectory(),
                                "*",
                                useNativeVersion);
                /* FileChooser fc ("Choose an *.bin to open...",
                                File::getSpecialLocation (File::userPicturesDirectory),
                                "*.bin",
                                useNativeVersion);*/
                if (fc.browseForMultipleFilesToOpen())
                {
                        File chosenFile = fc.getResult();
                        //String chosen;
                        //SyxFileName[0] <<"_UpdateFiles/"<</*chosenFile.getFullPathName()*/chosenFile.getFileName();
                        //chosenFile. getRelativePathFrom(chosen);
						SyxFileName[0] << chosenFile.getFullPathName();
                        for(k=0;k<1;k++)
                        {
                            //xtouch BIN size is 80k
                            for( i=0;i<(COMPACT_PRE_LONG);i++)
                                FileProcessBuf[i]=0;

                            // chosen.copyToUTF8(str1,500);
                            //SyxFileName[0] = "_UpdateFiles/Xtouch_Mini.bin";
                            wchar_t str3[1000];
                            SyxFileName[k].copyToUTF16(str3,1000);
							
							//jassert(!str3);
                            fIn=_wfopen(str3, L"r+b");

                            /*if(eXTOUCH_MODE_ID == COMPACT_MODE)
                                p=(unsigned char *)GetReceiveSysEXbufConstMidiLayerMessage;
                            else if(eXTOUCH_MODE_ID == MINI_MODE)
                                 p=(unsigned char *)GetReceiveSysEXbufMiniConstMidiLayerMessage;*/
                           // p=(unsigned char *)/*GetReceiveSysEXbuf*/FileProcessBuf;
                            p=(unsigned char *)FileProcessBuf;
                            L=0;
                            while (!feof(fIn))
                            {
                                fread( p++, sizeof(unsigned char),1, fIn);
                                L++;
                            }
                            //L--;
                            fclose(fIn);
							
                            if((FileProcessBuf[0]==0x20) && (FileProcessBuf[1] == 0x15) && (FileProcessBuf[2] == 0x01) && (FileProcessBuf[3] == 0x04))
                            {
                                //Load_or_SaveFlag =1;
                                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                                {
                                    if(FileProcessBuf[4] == 0x03)
                                    {
                                        Load_or_SaveFlag =1;
                                        for(int i = 0 ; i<COMPACT_PRE_LONG; i++)
                                             ConstMidiLayerMessage[i] = FileProcessBuf[i+5];
                                        //pFadersAndFootCompactComponent->UpdateFaderCompactBt();
                                        //pEncodersCompact1To8Component->UpdateEncode1TO8Bt(45);
										pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
										pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
										pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
										BC1TO8->UpdateBt1TO8(319);
										BC9TO16->UpdateBt9TO16(383);
										BC17TO24->UpdateBt17TO24(447);
										BC25TO33->UpdateBt25TO33(511);
										BC34TO39->UpdateBt34TO39(583);
										pFaderTouchCompactComponent->UpdateFT(646);

										this->Bt_GetA->setToggleState(0, dontSendNotification);
										this->Bt_GetB->setToggleState(0, dontSendNotification);
										this->Bt_DUMPA->setToggleState(0, dontSendNotification);
										this->Bt_DUMPB->setToggleState(0, dontSendNotification);
										AlertWindow::showMessageBoxAsync(AlertWindow::InfoIcon, "LOAD preset completed successfully!", "Please click 'Close' to continue", "Close", nullptr, nullptr);
										pMainComponent->SetBt_NIText(chosenFile.getFileName().dropLastCharacters(4));
									}
                                    else
                                        AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,"The file  belongs to mini","Please choose a right file!" ,"Close",nullptr,nullptr);
                                }
                                else if(eXTOUCH_MODE_ID == MINI_MODE)
                                {
                                    unsigned char c[300];
                                    //char ff[50];
                                    //String d;
                                    //CharPointer_UTF8 *utf;
                                    //CharPointer_ASCII  *asc;
                                    if(FileProcessBuf[4] == 0x0c)
                                    {
                                        Load_or_SaveFlag =1;
                                        for(int i = 0 ; i<MINI_PRE_LONG; i++)
                                             MiniConstMidiLayerMessage[i] = FileProcessBuf[i+5];
                                        for (int i = 0; i < 300; i++)
                                        {

                                            c[i] = FileProcessBuf[i + 350];

                                        }
                                        char utf8buffer[300];
										//utf8buffer = (char *)c;
										String s1;
										memcpy(utf8buffer,c,300);
										s1<<s1.fromUTF8(utf8buffer);
										
										//pMainComponent->SetBt_NIText(s1);

                                        pFaderMiniComponent->UpdateMiniFaderBt();
                                        pEncodersMiniComponent->UpdateEncodeMini(7);
                                        BM1TO8->UpdateMiniBt1TO8(135);
                                        BM9TO16->UpdateMiniBt9TO16(199);

										this->Bt_GetA->setToggleState(0,dontSendNotification);
										this->Bt_GetB->setToggleState(0,dontSendNotification);
										this->Bt_DUMPA->setToggleState(0,dontSendNotification);
										this->Bt_DUMPB->setToggleState(0,dontSendNotification);
                                        AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,"LOAD preset completed successfully!","Please click 'Close' to continue" ,"Close",nullptr,nullptr);
										pMainComponent->SetBt_NIText(chosenFile.getFileName().dropLastCharacters(4));
									}
                                    else
                                        AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,"The file belongs to compact","Please choose a right file!" ,"Close",nullptr,nullptr);
                                }
                            }
                            else
                                AlertWindow::showMessageBoxAsync (AlertWindow::InfoIcon,
                                                                                            "Choose file error",
                                                                                            "please choose a right file!" ,
                                                                                            "Close",
                                                                                            nullptr,
                                                                                            nullptr);
                        }
                }
            }
        }
}


void GlobalCompactComponent::CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked)
{
	if (buttonThatWasClicked == Bt_ID16)
    {
        //[UserButtonCode_Bt_ID16] -- add your button handler code here..
        // Bt_ID16->setToggleState(1,dontSendNotification);
		pMainComponent->GlobalorOFF = 0;
        pMainComponent->setMyComponent(8);
        CHBt = Bt_ID16;
        num = ConventNO_BTtoInt(Bt_ID16->getButtonText());
        pViewChannelComponent  = new ViewChannelComponent ();
        CallOutBox::launchAsynchronously(pViewChannelComponent, Bt_ID16->getScreenBounds(), nullptr);
        //[/UserButtonCode_Bt_ID16]
    }
	else if (buttonThatWasClicked == Bt_CH2)
    {
        //[UserButtonCode_Bt_CH2] -- add your button handler code here..
        pMainComponent->GlobalorOFF = 2;
        pMainComponent->setMyComponent(9);
        CHBt = Bt_CH2;
        num = ConventNO_BTtoInt(Bt_CH2->getButtonText());
        pViewChannelComponent  = new ViewChannelComponent ();
        CallOutBox::launchAsynchronously(pViewChannelComponent, Bt_CH2->getScreenBounds(), nullptr);
         //Bt_CH2->setToggleState(1,dontSendNotification);
        //[/UserButtonCode_Bt_CH2]
    }
}

void GlobalCompactComponent::CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged)
{
	String a1[16]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16"};
	String a2[16]={"ID 1","ID 2","ID 3","ID 4","ID 5","ID 6","ID 7","ID 8","ID 9","ID 10","ID 11","ID 12","ID 13","ID 14","ID 15","ID 16"};
	String a3[16]={"CH 1","CH 2","CH 3","CH 4","CH 5","CH 6","CH 7","CH 8","CH 9","CH 10","CH 11","CH 12","CH 13","CH 14","CH 15","CH 16"};

	if (CustomTextButtonThatHasChanged == Bt_CH2)
    {
		String s = Bt_CH2->GetValue().toString();
		if(s.compare("Off")==0 || s.compare("OFF")==0 || s.compare("off")==0 || s.compare("oFF")==0)
		{
			SendChangeMessage[4] = 0x61;
			SendChangeMessage[5] = 18 * 0x01;
			pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendChangeMessage);
			Bt_CH2->setButtonText ("Off");
			pMainComponent->ChangeEditedButtonImClose();
			repaint();
		}
		else 
		{
			for(int i=0;i<16;i++)
			{
				if(s.compare(a1[i])==0 || s.compare(a3[i])==0)
				{
					SendChangeMessage[4] = 0x61;
					SendChangeMessage[5]=i*0x01;
					pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendChangeMessage);
					Bt_CH2->setButtonText ("CH "+String(i+1));
					pMainComponent->ChangeEditedButtonImClose();
					repaint();
				}
			}
		}
	}

	else if (CustomTextButtonThatHasChanged == Bt_ID16)
    {
		String s = Bt_ID16->GetValue().toString();
		for(int i=0;i<16;i++)
		{
			if(s.compare(a1[i])==0 || s.compare(a2[i])==0)
			{
				SendChangeMessage[4] = 0x61;
				SendChangeMessage[5]=i*0x01;
				pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendChangeMessage);
				Bt_ID16->setButtonText ("ID "+String(i+1));
				pMainComponent->ChangeEditedButtonImClose();
				repaint();
			}
		}
		
	}
	if(eXTOUCH_MODE_ID == MINI_MODE)
	{
		pFaderMiniComponent->UpdateMiniFaderBt();
		pEncodersMiniComponent->UpdateEncodeMini(7);
		BM1TO8->UpdateMiniBt1TO8(135);
		BM9TO16->UpdateMiniBt9TO16(199);
	}
	else 
	{
		pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
		pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
		pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
		BC1TO8->UpdateBt1TO8(319);
		BC9TO16->UpdateBt9TO16(383);
		BC17TO24->UpdateBt17TO24(447);
		BC25TO33->UpdateBt25TO33(511);
		BC34TO39->UpdateBt34TO39(583);
		pFaderTouchCompactComponent->UpdateFT(646);
	}
}

Button * GlobalCompactComponent::ReturnButtonMutil()
{
	return Bt_ID2;
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GlobalCompactComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="800" initialHeight="600">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="431 189 2 178" fill="solid: ff9f6d25" hasStroke="0"/>
    <RECT pos="431 189 212 2" fill="solid: ff9f6d25" hasStroke="0"/>
    <RECT pos="642 189 2 178" fill="solid: ff9f6d25" hasStroke="0"/>
    <RECT pos="431 366 213 2" fill="solid: ff9f6d25" hasStroke="0"/>
    <RECT pos="0 389 680 100" fill="solid: ff000000" hasStroke="0"/>
    <RECT pos="0 128 685 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="411 129 2 259" fill="solid: ffffab00" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="69aff78c56029477" memberName="label_poc"
         virtualName="" explicitFocusOrder="0" pos="18 24 160 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="PRESETS ON COMPUTER"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8e0e97571af0bfc3" memberName="label_fh"
         virtualName="" explicitFocusOrder="0" pos="230 24 150 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FROM HARDWARE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="91adf6dba59979cb" memberName="label_th"
         virtualName="" explicitFocusOrder="0" pos="406 24 108 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TO HARDWARE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7bc4bdf4eeda6e0f" memberName="label_firm"
         virtualName="" explicitFocusOrder="0" pos="570 24 80 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FIRMWARE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="9454cef3ac8fd86" memberName="Bt_SAVE" virtualName=""
              explicitFocusOrder="0" pos="104 56 64 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Save"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="14f04b85f2a1137a" memberName="Bt_GetA"
              virtualName="" explicitFocusOrder="0" pos="216 56 64 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Get A"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="2efeccaad2042372" memberName="Bt_GetB"
              virtualName="" explicitFocusOrder="0" pos="296 56 64 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Get B"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="edacbd7b0d3d8930" memberName="Bt_DUMPA"
              virtualName="" explicitFocusOrder="0" pos="384 56 64 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Dump A"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="75eebafa0240afb7" memberName="Bt_DUMPB"
              virtualName="" explicitFocusOrder="0" pos="464 56 64 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Dump B"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8e1164fd5bf69b35" memberName="Bt_UPDATE"
              virtualName="" explicitFocusOrder="0" pos="576 56 64 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Update"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="9be99d4170427530" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="324 96 96 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LAYER TRANSFER"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="13" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="660ce774bade33dc" memberName="label_MODE"
         virtualName="" explicitFocusOrder="0" pos="99 152 56 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MODE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="ada6ea650f4192be" memberName="Bt_Standart"
              virtualName="" explicitFocusOrder="0" pos="40 184 72 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Standard"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="418b7bb5b8b95ebe" memberName="Bt_MC" virtualName=""
              explicitFocusOrder="0" pos="128 184 72 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="MC"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="5d876ece2c1f4fdb" memberName="label_DEVID"
         virtualName="" explicitFocusOrder="0" pos="280 152 88 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="DEVICE ID" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="4aa4984b88a565e2" memberName="Bt_ID16"
              virtualName="" explicitFocusOrder="0" pos="280 184 72 24" bgColOff="ff333333"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="ID 16"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="245543757080c59b" memberName="label_HARDWARE"
         virtualName="" explicitFocusOrder="0" pos="496 132 88 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="HARDWARE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="e682dbbc1a2ebe69" memberName="Bt_ID2" virtualName=""
              explicitFocusOrder="0" pos="449 157 176 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="X_TOUCH COMPACT #2"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="8764207acda80d17" memberName="label_GLOBALCH"
         virtualName="" explicitFocusOrder="0" pos="278 273 80 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="GLOBAL CH" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="aee1066e27d3f57f" memberName="Bt_CH2" virtualName=""
              explicitFocusOrder="0" pos="280 304 72 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="CH 2"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="dc2f5367d609c615" memberName="label_GLOBALCH2"
         virtualName="" explicitFocusOrder="0" pos="41 273 160 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FOOT SWITCH POLARITY"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="1b8a5153e232c64f" memberName="Bt_ADD" virtualName=""
              explicitFocusOrder="0" pos="40 304 72 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="-"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="2f70d583d3a14eb9" memberName="Bt_DEV" virtualName=""
              explicitFocusOrder="0" pos="128 304 72 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="+"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="d5e6cb99d4d23726" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="0 387 664 2" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="64d031f82ae69ad4" memberName="Bt_LOAD"
              virtualName="" explicitFocusOrder="0" pos="24 56 64 24" bgColOff="ff444444"
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Load"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="d6cc4830f2e7c681" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="472 192 150 24" bkgCol="ff000000"
         textCol="ff9f6d25" edTextCol="ff000000" edBkgCol="0" labelText="RX MIDI CONTROL"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5e5777b552234844" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="438 211 96 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Motor Fader" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4a4be29d772a1452" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="438 227 110 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="LED Ring Behavior"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b89c10d085b56788" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="438 243 93 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="LED Ring Value"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="30a468ec69332826" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="438 275 70 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Button LEDs" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1ec7828ea1fea709" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="438 307 82 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Layer B Select"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b7d1d92f6eb7b6b9" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="438 323 90 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="STANDARD MODE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d182dbfa58351224" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="437 291 83 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Layer A Select"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="988e4eb3f75775af" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="438 259 85 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="FOOT Ctrl LEDs"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ccd854d409ccb58d" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="438 339 58 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="MC MODE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="afc48af81abd6554" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="541 211 59 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="CC1-CC9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="901c93a56ede3d67" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="541 227 67 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="CC10-CC25" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b12d27cc0f4e4cd" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="541 243 67 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="CC26-CC41" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="542b80243633dd35" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="541 275 91 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="NOTE 0-NOTE 38"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d14ab3635cbce60b" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="541 307 100 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Program Change 1"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8731893e828ae1d7" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="541 323 83 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="CC127 Value 0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="6d60787a81a2c0be" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="541 291 100 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Program Change 0"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5c8ae080bb78a5e7" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="541 259 67 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="CC42-CC43" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e44d69bc94ee26c8" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="541 339 83 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="CC127 Value 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3db4c847b0d21eb8" memberName="label221"
         virtualName="" explicitFocusOrder="0" pos="215 108 113 1" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9edb06bafa33168b" memberName="label220"
         virtualName="" explicitFocusOrder="0" pos="215 88 1 20" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a9bec0836755dd37" memberName="label222"
         virtualName="" explicitFocusOrder="0" pos="415 108 113 1" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="aab116512323d859" memberName="label223"
         virtualName="" explicitFocusOrder="0" pos="527 88 1 20" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="eeefce28ffce403d" memberName="Bt_ADD2"
              virtualName="" explicitFocusOrder="0" pos="40 431 72 24" bgColOff="ff333333"
              bgColOn="ff333333" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Compact"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="1ff1019e714d9855" memberName="Bt_DEV2"
              virtualName="" explicitFocusOrder="0" pos="128 431 72 24" bgColOff="ff333333"
              bgColOn="ff333333" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="Mini"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="c9b6454a8131846e" memberName="label_tip"
         virtualName="" explicitFocusOrder="0" pos="208 431 264 24" textCol="7fffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="No device is connected,please manually choose device"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: rxmini_png, 8585, "Pic/rxmini.PNG"
static const unsigned char resource_GlobalCompactComponent_rxmini_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,183,0,0,0,150,8,6,0,0,0,156,158,25,12,0,0,0,1,115,82,71,66,0,174,206,28,
233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,33,30,73,68,65,84,120,94,237,154,59,175,109,203,81,133,253,19,72,209,205,8,17,1,22,18,
18,150,5,34,179,35,18,7,36,32,33,100,97,11,2,98,66,66,66,167,78,29,58,245,239,187,156,111,207,251,221,61,78,221,234,158,115,189,31,183,143,52,52,187,171,170,171,235,49,186,215,94,115,157,159,124,249,247,
237,194,194,155,162,21,46,44,188,3,90,225,77,241,135,223,254,197,183,127,250,175,63,251,1,126,247,235,159,126,251,205,55,223,124,216,252,239,191,253,236,67,246,55,127,253,87,95,173,253,191,127,255,219,
143,245,218,9,236,244,83,117,204,255,248,159,127,254,149,63,124,176,7,227,255,248,213,63,124,191,54,241,223,255,252,247,95,249,193,158,117,41,171,248,159,127,249,249,212,7,248,229,63,254,221,71,174,218,
224,147,24,212,155,139,241,37,244,57,138,89,160,183,134,21,191,255,205,95,126,196,144,126,247,98,2,200,186,124,158,24,173,240,166,72,98,137,95,253,226,231,31,4,84,46,33,41,184,54,255,250,79,91,67,121,
42,19,73,238,218,20,215,129,25,185,213,1,227,129,172,202,176,103,157,243,10,72,147,196,209,111,198,131,14,25,135,84,25,132,65,38,113,50,23,226,208,14,164,157,192,166,179,237,226,197,55,49,166,252,72,76,
128,53,117,239,39,71,43,188,41,146,88,9,100,20,222,121,146,3,178,179,46,27,144,144,16,157,13,4,61,114,115,39,185,83,238,39,193,140,220,35,31,172,97,111,231,228,215,229,144,235,205,5,100,61,0,178,75,200,
13,106,94,71,98,98,142,175,69,238,29,36,177,18,20,56,111,106,192,92,123,72,82,201,35,36,132,68,78,29,115,124,215,70,25,195,136,152,52,31,185,13,29,145,5,224,191,35,136,183,34,79,199,221,39,15,32,78,246,
50,23,246,227,73,124,218,100,60,226,84,114,179,30,123,198,71,99,98,140,175,186,247,147,163,21,222,20,73,44,49,106,144,197,7,179,194,74,8,255,4,97,29,114,215,219,208,83,200,173,157,251,206,200,157,36,24,
161,222,152,21,28,100,246,48,23,106,129,12,223,174,49,151,92,119,10,185,241,157,57,29,141,137,113,174,123,17,180,194,155,130,34,81,208,4,31,141,29,185,210,94,194,118,72,66,224,203,38,240,164,65,149,192,
248,60,74,110,237,58,178,8,214,239,53,222,125,58,29,32,78,144,185,228,225,196,166,219,103,70,110,228,9,226,79,187,163,49,49,102,237,94,142,79,134,86,120,83,36,97,184,49,32,35,183,83,71,46,138,73,241,209,
215,191,63,19,73,8,214,104,43,209,207,37,119,222,200,51,114,35,207,47,159,29,220,103,118,75,242,167,77,230,130,92,146,42,175,4,155,145,59,227,213,79,254,9,114,52,38,198,248,170,123,63,57,90,225,77,145,
196,2,52,13,18,121,67,84,57,182,54,97,84,220,36,132,183,157,50,230,231,144,155,134,35,151,12,149,44,137,209,223,220,250,32,110,227,170,36,20,30,164,204,5,57,62,208,225,95,95,185,238,40,185,129,23,137,
100,62,26,19,227,69,238,3,168,228,6,20,141,34,67,52,101,52,51,27,1,249,153,87,18,130,74,8,236,176,247,6,63,135,220,202,221,127,70,238,61,31,202,243,38,28,217,1,198,73,56,235,3,46,33,183,182,89,255,35,
49,49,95,228,62,128,142,220,222,78,54,195,47,134,20,88,27,155,222,53,162,18,2,255,204,253,83,161,107,148,49,84,157,178,188,181,64,71,150,4,7,9,112,27,50,215,71,254,185,130,206,131,231,161,145,184,238,
85,115,17,236,157,118,226,20,114,3,246,206,124,143,196,4,240,85,247,126,114,180,194,155,34,137,149,144,100,20,16,27,111,221,132,69,175,175,174,42,33,60,28,206,143,144,59,81,137,13,246,200,13,49,176,73,
63,29,25,32,147,4,3,248,36,6,245,35,114,155,83,245,121,42,185,245,159,61,216,139,9,32,83,159,168,251,62,17,90,225,194,194,59,160,21,46,44,188,3,90,225,194,194,59,160,21,46,44,188,3,90,225,194,194,59,160,
21,46,44,188,3,90,225,194,194,59,160,21,46,44,188,3,90,225,194,139,194,31,145,248,193,197,31,172,0,99,126,152,74,219,123,192,95,63,137,41,127,124,242,7,35,126,168,203,56,175,140,109,224,175,86,245,167,
109,54,239,126,229,186,6,216,175,162,179,171,160,72,20,167,211,189,50,232,1,245,182,22,245,87,203,145,78,240,75,33,68,226,151,82,250,232,47,144,16,204,95,23,235,154,61,80,107,247,100,127,127,158,7,236,
167,95,158,236,147,107,1,125,194,7,58,236,200,131,57,246,248,98,156,191,148,94,25,219,64,114,231,233,102,115,3,87,86,97,33,59,221,30,76,182,211,205,240,142,228,166,142,212,217,70,251,147,58,245,153,233,
210,7,255,135,197,255,199,34,161,25,187,150,53,105,191,7,73,40,105,169,121,30,24,252,121,200,180,117,45,144,63,60,153,195,19,236,121,98,175,205,13,63,81,182,129,228,6,38,195,255,101,216,187,185,9,118,
166,159,129,189,22,185,55,80,71,106,157,50,136,4,89,103,186,148,85,210,80,95,117,246,215,249,17,208,215,252,63,60,250,192,119,183,127,181,135,71,73,92,236,237,157,113,122,80,61,0,87,198,54,48,112,138,
232,198,4,3,36,47,69,198,6,72,46,231,36,235,109,161,31,124,250,209,133,61,235,221,207,181,149,220,204,89,171,95,247,209,55,197,162,137,200,41,136,182,200,217,75,191,196,3,210,247,51,195,90,159,170,75,
212,26,103,125,237,175,186,61,120,56,70,164,163,238,73,228,14,246,222,57,188,162,39,60,93,207,30,25,231,149,177,13,76,158,34,250,103,6,129,17,0,79,147,101,46,169,8,146,98,154,0,50,155,64,18,248,241,100,
98,227,161,17,38,38,170,222,152,120,210,56,124,227,23,25,115,236,141,53,111,9,253,189,18,185,109,250,169,186,196,53,201,189,103,79,63,189,76,70,24,145,59,47,37,230,244,205,56,175,140,109,96,50,144,151,
205,32,11,1,24,96,23,40,196,74,114,103,49,37,27,235,244,231,90,145,246,34,19,23,198,166,15,10,66,35,65,218,165,109,253,148,120,118,204,110,231,153,46,65,63,60,4,94,70,234,172,139,115,65,157,172,29,117,
85,238,122,158,105,47,232,209,222,205,157,23,14,32,135,238,144,206,246,185,16,219,192,228,77,138,68,9,230,26,228,206,117,137,180,23,248,165,112,213,134,103,71,238,81,177,170,223,103,7,68,201,188,129,53,
158,233,82,150,135,128,90,101,221,173,161,243,35,232,8,236,69,149,123,137,60,92,160,30,16,249,162,30,212,56,175,140,109,144,201,147,20,99,136,41,57,13,148,100,25,99,67,34,204,13,14,153,9,67,64,146,57,
135,220,144,150,177,183,10,54,200,240,141,95,100,206,217,147,120,136,195,91,162,243,251,10,160,78,222,158,121,57,236,233,4,115,228,228,78,237,181,7,217,223,163,240,226,98,63,230,248,179,55,250,147,172,
60,217,91,34,11,251,132,15,251,146,61,174,7,226,202,216,6,153,60,193,72,148,36,167,100,3,53,73,230,158,66,230,144,14,221,169,228,102,174,15,124,226,7,226,234,155,184,136,15,157,135,12,219,108,118,231,
247,21,64,142,230,3,178,233,51,93,194,195,79,173,178,6,140,145,167,237,17,80,107,247,180,167,234,36,180,251,213,195,6,146,19,198,156,125,227,89,15,196,21,209,10,23,22,222,1,173,112,97,225,29,208,10,23,
22,222,1,173,112,97,225,29,208,10,23,94,24,124,1,247,11,63,200,23,1,221,151,190,91,130,253,252,210,153,111,111,140,7,240,133,51,215,92,17,173,112,225,1,224,77,68,190,17,241,53,219,158,46,33,145,37,55,
111,34,124,147,196,219,138,83,137,196,26,247,172,111,54,240,233,155,16,158,188,25,201,181,0,57,49,17,63,99,223,124,177,38,223,188,220,8,219,128,141,216,48,20,31,240,213,82,130,194,105,159,232,94,79,117,
118,20,9,185,197,169,107,142,34,111,36,128,175,89,193,176,191,100,63,242,203,219,231,154,128,52,196,166,127,106,67,78,228,51,211,165,15,230,216,209,31,201,13,153,168,183,54,16,125,86,163,132,135,65,210,
226,211,24,36,168,135,172,59,56,236,131,141,115,214,98,151,191,73,220,24,219,160,6,34,8,200,132,18,213,158,100,189,33,102,118,128,98,243,254,52,101,231,128,194,218,68,128,79,126,20,72,155,196,165,228,
190,37,136,45,73,8,168,59,57,205,116,41,19,89,23,200,148,53,193,79,237,209,8,212,10,34,58,183,151,28,182,110,255,106,95,225,15,54,0,174,136,238,198,191,18,182,193,165,228,6,181,144,224,168,221,57,168,
228,222,251,36,120,102,114,67,148,17,89,103,186,14,149,220,217,63,228,232,157,143,0,129,37,114,167,231,144,204,136,92,33,15,32,50,185,176,30,223,140,111,216,147,109,112,13,114,119,228,234,236,72,140,2,
107,175,13,141,224,105,226,128,113,234,210,79,37,55,133,50,86,138,136,111,253,177,135,228,102,13,114,109,157,167,45,118,54,143,189,145,39,81,120,186,6,185,126,144,215,26,28,1,235,244,115,138,174,195,53,
200,221,245,45,65,142,71,63,1,0,245,203,56,132,135,136,253,170,238,10,216,6,163,100,8,200,38,10,10,214,217,207,200,157,176,184,149,220,0,223,124,84,65,44,79,56,50,245,233,27,63,202,133,132,164,137,18,
130,39,159,20,218,227,95,159,245,102,34,30,236,242,160,228,199,41,50,246,192,7,113,251,231,24,79,15,9,49,87,191,123,96,63,112,170,174,3,241,39,185,243,83,146,216,146,148,89,195,36,159,164,27,229,129,159,
163,55,55,177,83,215,145,47,246,161,150,157,238,66,108,131,142,172,128,132,51,105,209,217,147,44,73,167,44,237,72,78,242,48,175,228,86,238,237,226,19,153,100,100,44,180,113,142,13,254,24,99,155,112,223,
252,27,15,57,123,147,95,218,98,39,129,177,115,141,228,246,233,190,146,159,88,186,90,29,65,87,59,124,226,123,166,75,153,200,186,212,181,30,74,231,51,116,4,182,22,221,129,179,14,41,171,53,175,216,59,68,
23,98,27,116,100,5,52,171,107,88,103,223,21,188,218,65,104,146,37,153,74,110,139,126,46,185,129,126,120,214,130,98,47,249,181,197,38,27,158,123,34,103,95,158,204,25,239,145,219,181,231,128,216,244,107,
92,222,178,51,93,69,214,133,58,99,11,73,137,49,243,223,131,245,178,142,236,175,95,107,108,190,60,217,167,146,20,89,173,9,245,146,39,233,243,6,216,6,6,27,138,15,176,185,69,77,84,251,81,193,59,191,36,67,
161,247,200,141,13,183,7,79,244,213,15,54,89,24,11,204,152,117,198,205,13,67,49,209,103,115,241,103,220,52,197,177,205,96,13,115,27,65,28,248,132,40,200,137,215,53,60,141,91,255,167,2,31,196,109,174,236,
119,68,87,209,213,69,159,163,3,49,2,181,115,45,251,219,35,128,95,114,71,71,93,171,111,230,174,21,212,15,31,230,98,255,115,221,21,177,13,216,160,6,98,51,171,60,9,153,232,10,174,93,202,72,154,162,64,146,
25,185,33,156,69,192,119,245,147,77,3,248,180,192,144,1,223,200,109,10,246,200,92,143,14,57,251,105,7,145,253,184,213,191,31,205,214,131,113,214,197,188,47,37,247,194,213,209,10,159,14,16,8,242,117,186,
133,133,1,90,225,83,32,111,230,188,149,23,22,14,162,21,46,44,188,3,90,225,194,139,194,239,15,126,201,69,230,119,156,252,126,112,111,16,151,223,87,4,223,101,144,167,236,202,104,133,11,15,0,95,110,253,2,
13,242,203,233,76,39,144,97,195,23,241,252,142,194,151,104,136,132,15,214,242,172,107,71,192,143,123,234,91,29,135,198,47,237,60,61,76,21,200,177,73,114,251,39,231,93,200,109,226,161,248,64,247,182,132,
128,180,79,116,183,66,103,71,145,144,91,156,186,230,40,124,227,146,50,98,27,221,78,236,125,74,99,239,9,72,67,45,36,0,181,49,222,153,46,125,160,55,119,235,142,173,36,63,21,248,74,210,230,237,43,97,61,100,
218,186,54,33,135,92,75,108,216,226,239,225,228,54,168,68,181,39,217,238,75,95,231,151,98,215,95,183,206,1,113,165,31,72,192,94,236,153,118,98,166,123,52,188,117,83,102,126,51,93,202,18,73,190,174,127,
71,0,1,243,242,176,151,212,185,219,191,218,3,123,146,7,67,16,219,75,144,27,112,122,253,193,67,28,181,59,7,20,50,155,94,231,21,196,241,172,228,134,40,35,178,206,116,35,208,51,106,76,173,25,67,60,242,103,
222,217,87,72,74,158,157,158,58,87,34,119,96,63,8,108,28,169,123,41,114,119,127,102,116,118,20,134,196,180,215,134,2,240,68,79,81,1,227,212,165,31,244,124,90,216,0,73,128,95,191,64,185,22,61,99,247,226,
137,204,194,231,94,221,39,208,173,65,141,141,243,20,93,7,72,103,142,214,141,220,200,41,115,159,193,58,117,58,64,223,142,212,8,59,122,77,28,79,73,110,228,9,2,237,236,37,107,202,180,75,144,84,218,167,13,
190,253,91,26,162,210,20,27,4,210,55,240,118,98,204,58,255,62,20,236,101,76,172,119,47,158,200,36,55,240,211,196,63,177,244,113,15,204,110,231,153,174,130,188,136,221,154,240,244,178,96,206,216,250,3,
198,214,54,201,135,61,50,215,85,224,103,239,230,198,183,117,36,142,167,36,119,13,10,116,246,221,159,5,105,71,161,60,201,204,43,185,149,147,176,137,43,163,56,93,124,146,50,9,201,24,191,216,131,35,228,230,
169,189,208,230,30,232,106,103,110,51,93,202,0,185,102,191,88,155,118,71,72,41,58,91,47,144,238,192,177,15,113,57,103,92,107,154,177,189,20,185,187,130,87,59,8,77,129,32,122,37,183,100,58,133,220,248,
241,166,114,111,158,22,62,63,77,220,195,39,64,199,90,73,174,223,71,32,137,233,97,37,254,61,157,32,126,115,21,214,135,53,216,147,251,232,54,174,160,246,248,99,45,115,246,151,140,214,209,254,240,180,175,
174,79,16,91,229,145,61,78,217,149,177,13,12,54,20,31,32,160,26,20,168,246,163,130,119,126,37,146,196,211,134,167,122,18,199,134,219,131,39,250,46,62,128,13,126,188,101,242,6,33,118,27,238,30,196,9,249,
121,34,195,150,57,126,104,14,126,208,233,255,94,160,134,196,96,174,230,176,167,19,212,77,189,32,95,73,13,36,227,81,80,23,215,178,191,61,2,18,26,29,53,174,189,79,16,239,195,201,157,48,160,42,79,66,38,186,
130,107,151,50,138,64,81,32,209,140,220,16,205,134,226,187,250,17,234,188,53,178,153,54,7,29,79,246,208,30,223,30,132,220,139,216,102,141,90,120,25,180,194,167,3,4,132,124,157,110,97,97,128,86,248,20,
224,246,230,38,93,183,233,194,153,104,133,11,11,239,128,86,184,176,240,14,104,133,11,47,12,191,80,251,5,221,47,208,224,212,183,37,215,2,47,9,124,91,146,95,222,121,26,231,13,208,10,23,30,0,154,108,211,
43,17,103,186,10,222,0,97,195,26,192,247,149,115,222,115,131,60,24,236,159,107,241,199,219,46,116,60,125,31,94,129,28,27,201,141,79,127,147,64,86,95,17,94,17,159,19,147,72,164,254,18,28,45,132,240,117,
96,202,40,2,133,73,25,205,171,49,3,246,195,62,101,55,190,37,46,2,164,161,46,54,58,111,223,153,46,125,128,172,7,99,106,152,239,146,241,195,250,92,51,2,181,206,94,229,237,43,97,237,145,182,174,77,216,7,
215,38,106,124,87,198,231,100,84,176,83,64,2,213,199,172,16,232,252,53,49,113,42,185,187,184,171,61,243,27,22,242,34,144,43,135,47,101,196,75,109,102,186,148,1,100,228,56,170,201,41,111,157,232,81,254,
252,110,173,57,108,221,254,213,30,96,203,154,60,24,9,110,240,78,126,37,124,78,70,5,57,138,17,209,102,133,64,215,37,119,11,114,83,104,63,162,211,238,25,64,125,58,178,238,233,18,230,55,186,217,169,39,250,
148,141,32,41,121,118,122,14,91,37,114,7,234,79,47,121,214,62,227,31,220,176,31,159,147,25,73,12,68,178,16,16,4,69,230,199,189,55,134,183,178,24,21,194,38,0,10,207,147,189,192,45,200,13,244,235,126,238,
153,54,143,64,23,235,17,93,130,156,172,125,173,9,99,136,93,107,58,130,117,237,116,128,125,142,124,2,96,199,158,196,223,213,25,121,253,84,186,34,62,39,54,91,176,49,164,164,40,36,11,161,189,249,8,200,219,
132,160,249,120,177,32,89,84,48,43,4,107,77,218,125,153,159,74,238,138,145,189,126,189,225,88,111,78,105,119,111,92,227,230,166,206,230,75,13,178,15,244,203,47,113,9,106,97,205,236,3,184,198,205,109,157,
25,19,87,250,23,123,251,92,136,207,73,45,8,168,65,81,32,100,105,43,233,37,90,245,49,43,4,190,245,207,90,9,125,171,155,219,88,108,118,183,238,17,48,166,148,17,59,49,206,116,41,163,14,21,228,71,29,88,127,
42,129,172,85,202,188,8,186,3,39,55,156,51,174,241,216,107,241,242,228,158,21,2,223,250,207,181,183,32,55,5,180,57,216,163,103,45,55,94,183,254,222,32,14,107,97,77,253,196,155,233,58,88,19,108,71,245,
217,3,245,103,95,124,48,103,127,250,194,24,127,248,181,71,60,137,105,68,210,228,17,79,15,38,188,208,231,13,240,57,233,138,192,201,149,184,22,149,39,167,90,194,26,172,167,176,250,152,21,2,31,38,157,107,
111,65,110,230,22,146,253,189,149,200,165,238,245,8,88,87,242,1,25,251,76,215,193,154,96,231,26,113,74,174,244,199,117,236,159,117,182,143,232,56,4,179,195,70,28,246,25,31,230,146,135,231,6,248,156,176,
217,136,36,38,104,81,9,136,192,144,101,210,202,114,61,24,21,2,185,126,121,234,103,68,110,108,18,216,87,25,96,109,181,207,56,221,87,249,141,62,22,23,30,139,86,184,176,240,14,104,133,11,11,239,128,86,184,
176,240,14,104,133,11,111,6,190,35,249,157,103,239,203,232,61,225,247,34,98,243,123,24,223,127,252,194,121,225,155,148,86,184,112,103,248,133,59,191,216,118,95,170,207,5,190,32,53,36,135,52,221,139,131,
14,144,175,18,236,148,245,51,64,102,94,46,144,51,121,50,70,158,175,7,33,249,5,135,113,27,116,111,29,102,175,118,174,141,124,131,34,242,141,70,66,251,148,213,6,188,26,204,21,50,41,35,167,25,185,209,205,
244,2,242,224,219,131,195,107,219,35,235,128,55,107,218,51,159,145,155,53,167,146,95,254,49,102,189,132,230,153,53,57,17,219,32,157,3,223,111,59,239,96,18,20,205,151,242,231,98,68,110,79,115,69,218,179,
255,133,39,252,225,48,215,36,206,30,185,177,63,66,82,255,36,113,206,205,120,180,86,244,152,125,178,15,51,114,203,163,145,126,4,226,113,15,198,55,185,185,67,113,56,137,25,9,143,130,245,231,146,27,48,222,
59,140,207,12,114,165,161,144,201,155,74,114,123,120,169,183,127,155,210,112,230,246,128,53,206,43,25,176,207,58,162,119,143,61,96,135,61,235,61,72,238,217,253,214,65,204,204,145,119,113,87,255,192,53,
198,205,58,230,174,171,246,39,96,27,72,86,231,220,220,22,196,34,51,38,0,230,153,132,129,80,136,46,97,27,231,154,174,176,172,169,201,179,206,24,42,58,123,124,215,70,27,247,179,195,26,217,7,137,130,156,
155,150,90,106,103,195,169,1,115,201,11,41,0,99,250,160,239,107,144,155,125,244,97,124,196,68,108,218,241,233,157,241,179,206,79,244,250,233,81,65,140,172,35,126,242,54,190,28,159,129,109,96,80,9,3,183,
200,140,37,119,38,145,137,119,9,163,199,150,228,88,207,152,36,176,17,172,239,200,109,44,130,189,71,246,232,45,34,254,143,252,105,245,44,32,87,115,163,110,192,186,103,253,1,57,121,137,32,183,166,137,180,
175,196,170,127,150,100,239,237,163,32,14,109,221,15,187,236,63,58,247,72,57,113,235,87,104,223,1,238,208,51,236,240,135,44,47,217,51,176,13,12,202,57,206,13,38,139,187,71,238,76,192,132,209,219,144,106,
35,88,223,145,123,148,88,181,135,204,248,245,233,1,123,21,144,43,117,101,108,109,201,81,57,79,109,59,114,207,190,243,100,109,152,123,225,84,187,14,73,110,214,176,167,253,243,137,206,94,167,156,184,243,
16,237,161,35,55,61,30,113,224,0,182,129,65,133,226,251,162,102,113,25,131,76,194,164,209,119,9,167,190,218,8,244,151,144,155,49,123,57,166,129,236,67,172,218,60,51,172,179,115,72,69,252,200,57,168,221,
159,37,200,152,251,9,69,189,169,171,99,125,1,124,227,7,121,87,255,17,146,220,128,186,187,190,251,148,246,32,161,55,110,100,221,167,168,253,77,61,99,98,197,31,54,248,116,124,6,182,1,193,16,148,115,137,
201,147,13,0,129,98,195,230,153,68,126,116,116,9,155,132,190,93,231,28,84,178,130,186,46,145,246,196,194,190,52,193,184,241,159,49,214,245,207,6,114,77,114,19,59,121,32,55,63,114,65,102,222,212,23,25,
115,199,160,187,45,169,11,53,27,233,71,192,111,218,179,23,62,168,105,250,36,62,235,172,108,20,119,130,156,209,3,114,69,134,31,215,241,196,79,93,119,16,219,0,135,110,34,76,202,132,8,26,226,218,4,147,112,
45,242,46,225,163,228,70,46,240,197,186,148,9,214,86,123,14,145,190,178,209,140,115,159,133,31,21,90,225,194,194,59,160,21,46,44,188,3,90,225,194,194,59,160,21,46,44,188,3,90,225,194,194,75,192,183,99,
188,60,104,222,2,109,3,223,120,132,226,230,224,205,11,129,117,175,122,144,229,107,162,189,183,30,190,93,233,116,175,128,238,205,208,41,175,236,238,5,98,50,62,95,211,201,157,250,6,236,30,160,239,196,4,
201,155,24,182,193,35,200,13,177,1,239,201,171,142,128,41,30,99,98,227,213,223,140,188,231,144,27,251,103,57,16,196,65,14,206,109,214,5,239,120,175,14,122,66,31,136,141,57,241,114,233,60,138,220,212,38,
107,228,111,42,97,179,13,238,77,110,63,78,40,88,119,43,35,67,231,156,91,126,118,123,159,67,238,189,3,115,79,84,114,3,226,235,126,248,120,20,136,39,47,34,57,51,184,53,111,14,57,228,28,142,36,103,190,96,
27,140,200,141,49,114,128,35,138,157,63,228,100,130,254,170,164,29,122,230,144,178,18,83,82,215,0,5,205,166,152,37,216,239,117,198,100,28,146,155,83,220,197,145,107,60,56,206,239,221,148,14,149,220,254,
112,230,237,100,13,169,23,117,65,230,143,100,216,163,211,206,67,129,191,156,83,15,108,128,117,213,143,107,89,195,56,99,1,245,150,76,200,1,99,192,31,118,221,158,218,90,127,109,129,113,168,195,119,215,107,
129,127,114,115,206,58,98,8,155,109,224,166,161,248,1,88,8,60,169,4,132,67,130,226,233,175,132,73,88,3,43,155,126,172,241,22,72,18,38,240,105,177,73,2,191,236,137,61,99,108,216,83,59,10,209,197,225,26,
246,203,49,62,89,147,123,62,10,217,68,97,108,206,169,33,117,227,114,65,206,156,92,201,133,156,200,93,91,201,205,88,2,229,94,146,2,61,235,146,116,142,121,186,102,198,15,117,174,183,190,105,227,158,35,91,
114,146,71,234,71,189,214,231,197,228,174,69,119,49,78,9,202,128,44,100,66,159,54,73,100,130,194,134,141,96,242,36,84,215,18,147,228,238,226,64,78,145,170,207,103,35,55,177,119,58,115,112,76,253,24,123,
120,179,169,214,71,114,43,199,150,124,173,137,164,72,127,57,70,143,15,198,0,162,161,207,67,34,106,159,237,69,183,231,200,214,39,50,9,62,234,181,251,154,191,115,56,146,228,255,130,175,3,12,197,7,60,89,
140,179,136,56,98,204,26,54,33,184,226,248,3,232,45,152,192,206,219,21,224,223,98,11,230,121,250,73,212,130,119,68,205,34,213,56,70,107,240,103,65,31,13,99,239,116,89,195,28,31,33,183,249,81,111,47,16,
107,89,253,229,216,90,51,22,92,46,217,19,192,254,196,145,107,221,183,219,19,155,206,54,99,37,31,115,232,250,38,234,129,99,63,125,124,135,109,224,166,161,248,0,206,217,4,7,36,151,55,1,246,22,201,155,21,
59,10,96,80,153,136,32,145,36,160,65,226,83,25,251,224,207,181,204,9,94,91,147,192,6,95,22,167,139,131,49,79,230,140,137,153,49,118,165,24,15,3,113,144,67,167,203,26,18,179,132,177,38,146,64,82,0,100,
73,24,236,172,57,235,206,33,55,190,144,219,39,252,176,7,107,114,173,251,118,123,142,108,177,179,151,232,193,168,215,140,5,235,169,71,61,96,223,97,27,184,105,2,71,110,70,241,36,142,107,148,49,38,16,116,
218,90,24,230,185,161,1,39,145,193,40,112,108,1,122,253,144,172,114,108,180,69,62,138,163,91,67,193,153,215,38,62,2,196,103,92,21,196,104,238,212,13,146,32,203,154,152,139,36,170,228,102,142,30,208,51,
158,246,66,31,57,238,200,13,92,11,220,31,228,90,247,237,246,172,36,236,250,38,231,208,119,125,75,100,61,42,127,190,224,171,201,97,152,80,37,233,194,99,33,121,32,75,167,127,5,64,82,136,222,233,78,68,43,
156,194,19,201,45,209,233,23,238,11,8,205,167,20,61,25,220,96,79,143,188,161,243,19,247,66,180,194,133,133,119,64,43,92,88,120,7,180,194,133,133,151,2,127,163,55,127,202,124,53,89,120,16,242,111,78,241,
140,127,59,251,38,3,64,40,190,184,214,183,37,247,68,190,101,25,146,219,0,67,113,83,248,250,70,140,26,89,95,61,205,222,2,224,227,85,191,228,66,238,124,213,245,140,111,61,168,47,125,243,13,25,241,82,239,
71,146,155,253,121,159,62,248,18,186,13,30,65,110,131,97,111,130,171,175,21,209,35,183,104,22,51,109,18,231,144,27,82,129,78,119,79,84,114,131,209,187,230,71,129,120,242,23,74,57,227,65,124,4,185,197,
160,86,219,224,145,228,6,52,182,146,172,54,156,194,178,46,109,18,231,144,27,127,207,72,110,106,67,63,184,185,121,146,23,128,72,196,140,140,79,50,9,133,78,59,107,235,101,224,188,123,93,168,31,215,178,134,
113,198,2,140,163,251,36,145,59,198,224,39,108,183,167,182,140,211,22,24,135,58,124,83,23,198,160,198,148,48,199,34,223,6,35,114,187,17,240,234,231,79,5,55,114,29,69,55,56,237,208,51,39,105,144,126,51,
24,124,228,13,45,244,205,218,90,212,46,105,98,117,31,11,13,144,215,53,232,51,183,186,247,189,145,177,9,100,232,156,19,51,53,166,254,200,153,243,145,236,127,51,200,124,168,173,68,149,64,185,23,245,215,
55,235,172,117,142,179,38,202,156,39,212,185,158,88,242,134,7,238,57,178,37,39,226,204,28,136,25,189,159,232,249,115,126,197,89,228,78,80,76,224,199,16,155,179,153,65,177,57,118,232,9,138,177,129,178,
46,125,17,140,58,128,143,212,11,2,102,173,118,20,105,148,52,192,150,53,248,199,14,48,54,38,10,233,122,63,9,36,209,35,65,12,163,155,201,188,29,75,58,115,50,111,100,228,142,141,228,86,142,109,214,156,113,
245,151,99,244,73,22,106,134,158,167,50,33,119,140,145,125,25,119,123,142,108,125,34,35,31,108,204,37,81,121,36,106,188,223,97,27,184,105,40,62,192,134,157,115,156,65,14,137,77,112,105,7,106,34,137,12,
70,2,118,118,9,246,195,159,207,4,113,217,100,139,147,192,183,7,46,113,100,223,123,128,24,168,97,167,35,126,73,151,227,35,228,54,55,46,0,111,124,116,228,93,253,229,56,251,35,232,53,181,79,25,251,19,71,
174,117,223,110,79,108,58,219,140,53,201,221,245,172,67,23,239,23,108,3,55,13,197,7,112,110,66,89,68,130,102,204,26,146,35,56,244,185,22,100,34,137,26,76,250,22,204,45,142,192,31,69,232,146,214,7,79,63,
69,196,168,80,196,97,81,31,9,27,220,233,178,134,16,204,154,144,43,121,154,27,121,99,11,144,37,97,252,116,115,29,121,87,223,57,238,200,130,47,228,244,155,57,126,216,67,238,184,214,125,187,61,71,182,216,
121,81,162,7,126,90,152,131,122,198,21,93,188,95,176,13,220,52,20,31,160,104,44,98,35,156,19,36,114,79,171,69,162,224,232,177,227,48,72,36,108,76,36,145,193,232,187,6,78,82,238,159,243,81,210,128,248,
220,159,24,217,219,49,79,116,172,103,127,198,172,213,207,35,65,12,71,200,77,30,196,142,140,216,149,147,55,50,73,68,205,146,220,204,209,3,122,197,211,58,234,35,199,217,159,132,107,129,251,131,92,235,190,
221,158,242,166,218,202,1,116,18,28,61,58,198,96,84,31,48,136,119,27,24,96,66,194,48,134,24,18,216,53,202,24,103,112,200,221,136,185,137,36,108,144,24,5,238,254,32,19,232,146,150,220,140,109,54,64,62,
90,163,93,215,200,87,132,228,161,31,157,254,21,64,191,146,103,23,160,21,238,194,195,64,49,59,253,194,253,224,167,146,7,215,195,252,74,200,139,39,47,199,11,209,10,167,96,99,130,240,150,92,88,120,82,180,
194,133,133,119,64,43,92,120,97,240,69,57,191,195,228,247,22,62,254,145,213,239,60,204,181,127,4,242,207,146,43,126,255,105,133,11,15,0,223,99,252,82,14,36,226,158,46,33,73,36,55,235,248,27,150,191,203,
253,115,178,126,217,196,214,23,3,130,53,28,146,148,97,215,253,61,143,223,75,14,7,241,248,119,54,254,175,120,208,62,39,20,198,47,38,108,64,65,252,226,88,97,241,40,10,107,178,96,252,45,158,55,7,96,13,190,
242,45,6,160,97,200,211,22,89,93,95,111,26,139,209,233,234,90,129,29,235,82,230,43,170,26,67,7,201,209,233,46,5,245,35,62,191,199,184,23,113,205,116,233,131,57,118,228,111,13,232,105,214,3,189,117,3,140,
107,255,0,123,37,225,209,143,234,132,15,252,86,249,81,248,74,214,57,241,28,233,199,1,108,3,130,199,169,167,181,59,65,20,169,222,24,172,201,117,64,2,167,173,133,65,151,167,159,121,22,63,191,249,103,193,
107,83,40,188,5,73,29,107,144,119,55,12,118,248,205,55,60,216,142,154,86,193,30,216,118,186,75,65,173,178,193,64,130,205,116,41,19,149,208,9,106,155,117,196,15,72,27,80,9,87,231,137,75,201,77,175,242,
71,55,246,201,24,47,192,54,160,185,217,184,238,164,86,114,75,68,130,203,2,49,38,217,76,88,95,232,146,120,30,42,9,103,162,32,247,74,2,3,247,238,116,140,213,37,176,35,14,247,247,32,212,60,71,192,111,214,
232,154,128,168,35,178,206,116,29,70,228,70,158,117,177,246,29,145,212,241,100,110,12,214,150,58,88,75,100,246,58,107,73,12,232,179,206,221,126,216,36,127,42,207,46,192,231,132,0,33,85,222,108,137,186,
169,65,37,209,128,4,198,159,246,38,93,201,13,210,175,99,108,242,52,87,2,83,104,11,82,117,32,139,44,176,163,200,250,229,54,194,143,182,236,203,24,16,7,54,217,24,246,227,137,188,179,189,4,93,93,142,232,
58,16,91,141,137,252,232,145,117,6,228,159,125,171,160,78,238,139,93,229,5,190,172,61,79,100,212,163,146,59,123,89,185,2,208,219,75,32,7,210,230,76,124,78,36,31,155,219,204,212,215,77,105,186,127,142,
176,70,130,217,12,147,71,102,210,93,163,244,11,145,176,227,105,17,188,57,240,131,78,100,108,22,216,57,112,191,148,97,7,153,45,46,62,136,31,91,246,227,201,92,66,219,24,198,196,231,222,232,241,97,179,147,
4,231,194,155,241,84,93,7,98,173,228,206,67,45,240,89,101,9,114,66,159,132,100,156,189,176,246,60,209,35,171,228,230,169,189,200,222,184,143,115,98,173,253,60,19,173,240,99,115,18,146,188,32,201,141,190,
6,108,3,146,192,36,45,49,88,211,145,219,67,146,4,18,238,111,17,25,83,136,25,185,243,144,40,211,46,201,236,225,97,206,222,54,8,88,112,27,132,204,248,216,139,103,34,227,57,7,196,69,29,82,102,12,51,93,202,
4,113,38,185,137,141,245,181,30,172,175,189,72,120,136,115,47,158,246,89,82,251,68,70,45,232,51,64,198,218,172,97,135,154,31,123,178,62,109,206,196,54,160,32,181,128,73,230,58,175,197,37,64,19,76,2,99,
143,220,164,43,185,45,32,100,171,197,166,136,146,198,34,230,26,231,169,3,140,209,59,23,218,145,167,13,71,78,108,198,169,173,249,141,200,221,249,191,20,236,111,190,30,190,204,113,164,171,32,78,201,141,
173,181,175,118,248,164,111,85,158,160,70,105,151,61,34,30,116,196,193,19,25,113,209,55,158,236,139,45,115,252,208,55,252,212,218,217,79,116,216,235,235,10,216,6,36,111,48,204,45,32,79,109,146,220,217,
116,64,128,172,199,158,164,83,71,176,22,184,234,152,227,43,73,174,46,11,97,17,213,225,195,6,166,14,63,20,50,247,16,218,81,236,204,213,184,121,178,103,250,0,140,37,54,48,87,107,49,218,239,84,16,3,190,220,
39,125,206,116,21,73,110,236,92,35,140,187,214,187,131,235,201,153,57,245,211,143,117,164,102,18,82,123,98,245,32,88,79,228,236,153,125,20,89,223,78,127,38,62,39,56,101,115,55,169,5,148,220,54,183,22,
198,38,87,2,91,16,201,173,127,192,26,228,163,19,141,13,235,43,185,209,89,40,116,233,51,63,81,18,250,96,47,236,140,159,49,49,100,129,37,71,54,198,198,33,239,108,23,158,14,173,112,97,225,29,208,10,23,22,
222,1,173,112,97,225,29,208,10,23,22,222,1,173,112,225,133,193,23,230,252,146,235,23,97,224,155,146,250,37,220,183,29,143,0,95,216,243,101,193,21,209,10,23,30,0,222,216,248,102,38,137,184,167,75,248,22,
71,114,179,206,87,126,16,8,29,111,128,114,13,182,188,214,75,25,107,56,36,41,195,174,190,65,3,190,177,170,242,61,228,155,168,155,146,155,34,176,73,125,141,198,230,25,120,222,2,232,106,161,142,250,153,193,
38,116,186,119,5,117,164,62,188,42,101,110,13,168,231,76,151,62,152,99,7,9,37,55,100,119,12,208,39,145,24,67,228,218,71,246,74,194,163,239,246,4,248,56,218,219,4,123,192,19,95,233,118,54,23,98,27,72,74,
54,82,102,66,6,14,177,25,251,126,152,162,89,112,113,196,207,30,108,94,167,123,87,64,66,46,128,148,73,176,153,46,101,162,18,58,81,137,132,159,218,67,192,173,157,123,214,121,226,92,114,11,214,222,133,220,
64,242,154,144,129,243,204,143,42,215,228,169,63,226,103,15,63,70,114,67,212,17,89,103,186,14,35,114,35,175,151,206,232,214,84,103,111,141,1,91,228,246,152,11,47,201,141,12,14,48,38,6,244,248,160,255,
232,186,253,238,70,110,130,240,239,42,19,98,115,2,68,111,178,35,236,249,97,78,145,177,1,54,33,11,192,77,194,115,100,251,142,32,103,235,117,138,174,67,71,110,250,2,177,208,41,227,210,65,150,118,9,127,62,
103,140,157,151,149,192,151,196,156,145,27,248,103,42,62,234,158,119,35,55,36,52,16,54,165,0,60,213,107,63,194,158,31,15,9,115,9,109,1,24,39,153,209,103,81,179,216,239,6,47,128,83,117,29,58,114,83,91,
251,33,178,71,29,36,101,18,146,49,125,180,71,140,247,200,205,83,123,161,13,208,135,243,43,98,27,72,74,79,51,73,80,16,3,151,148,60,99,241,15,176,231,39,11,1,44,160,133,64,38,193,177,229,153,232,254,62,
124,7,80,47,234,148,50,107,51,211,165,76,84,114,83,51,214,215,222,177,222,154,119,240,114,201,189,120,122,208,186,158,210,35,56,0,144,177,54,123,219,65,31,157,238,66,108,3,73,41,137,41,8,73,100,224,20,
136,66,187,6,228,205,10,246,252,164,63,96,225,70,228,246,198,248,49,128,186,120,120,189,45,109,250,76,87,145,228,198,150,90,210,151,106,135,207,218,207,10,122,158,118,121,32,136,7,93,246,148,184,232,55,
79,246,197,150,185,135,11,63,181,167,250,72,217,149,176,13,36,37,99,2,145,92,25,56,69,99,44,153,73,46,111,8,176,231,71,210,147,36,99,108,40,0,96,44,177,129,182,200,244,103,97,223,17,212,213,154,129,204,
117,166,171,72,114,99,231,26,97,61,33,153,189,28,193,245,244,130,57,125,212,15,164,229,73,47,229,136,246,196,234,65,176,207,200,187,67,121,87,114,123,242,24,75,74,237,76,200,4,234,141,112,196,79,18,216,
38,100,1,44,208,200,118,97,225,32,90,225,194,194,59,160,21,46,44,188,3,90,225,194,194,139,227,39,223,254,63,8,195,2,137,18,42,166,155,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* GlobalCompactComponent::rxmini_png = (const char*) resource_GlobalCompactComponent_rxmini_png;
const int GlobalCompactComponent::rxmini_pngSize = 8585;


//[EndFile] You can add extra defines here...
//[/EndFile]
