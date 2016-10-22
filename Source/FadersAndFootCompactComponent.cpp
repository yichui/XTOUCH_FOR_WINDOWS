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
#include "ViewPortComponent.h"
#include "MainComponent.h"
#include "DecumoMenuComponent.h"
#include "LookAndFeel_V4.h"
#include "CC_Viewport_Component.h"
#include "FiveMenuComponent.h"
#include "Twochoose_Component.h"
#include "PanFanComponent.h"
#include "SixthChannelComponent.h"
#include "ViewChannelComponent.h"
#include "MusicNoteViewComponent.h"
#include "MMCFuntionsViewComponent.h"
#include "BackgroundThread.h"
//[/Headers]

#include "FadersAndFootCompactComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
extern SixthChannelComponent *pSixthChannelComponent;
extern ViewChannelComponent *pViewChannelComponent;
extern PanFanComponent *pPanFanComponent ;
extern Twochoose_Component * pTwochoose_Component;
extern FiveMenuComponent * pFiveComp;
extern CC_Viewport_Component *CC_VP ;
extern ViewPortComponent * pViewPortComponent;
extern DecumoMenuComponent * pDecumoMenuComponent ;
extern MainComponent * pMainComponent;
extern MusicNoteViewComponent *pMusicNoteViewComponent;
extern MMCFuntionsViewComponent *pMMCFuntionsViewComponent;
FadersAndFootCompactComponent * pFadersAndFootCompactComponent =nullptr;
bool IB_FSW_BEH_FLAG = true;
extern String  Midimusic[128]; 
extern String MMC_Functions_e[9];
extern String CCBT[128];
ButtonGroup FcBt[11];
 //int IB_F1_TYPE_FLAG = 1 ,IB_F2_TYPE_FLAG = 1 ,IB_F3_TYPE_FLAG = 2 ,IB_F4_TYPE_FLAG = 3 ,IB_F5_TYPE_FLAG = 5 ,IB_F6_TYPE_FLAG = 1 ,IB_F7_TYPE_FLAG = 2 ,IB_F8_TYPE_FLAG = 3;
//[/MiscUserDefs]

//==============================================================================
FadersAndFootCompactComponent::FadersAndFootCompactComponent ()
{
    addAndMakeVisible (label_MOVE = new Label ("new label",
                                               "MOVE"));
    label_MOVE->setFont (Font ("Arial", 15.00f, Font::plain));
    label_MOVE->setJustificationType (Justification::centredLeft);
    label_MOVE->setEditable (false, false, false);
    label_MOVE->setColour (Label::textColourId, Colour (0xffffab00));
    label_MOVE->setColour (TextEditor::textColourId, Colours::black);
    label_MOVE->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_CHANNEL = new Label ("new label",
                                                  "CHANNEL"));
    label_CHANNEL->setFont (Font ("Arial", 14.00f, Font::plain));
    label_CHANNEL->setJustificationType (Justification::centredLeft);
    label_CHANNEL->setEditable (false, false, false);
    label_CHANNEL->setColour (Label::textColourId, Colour (0xffffab00));
    label_CHANNEL->setColour (TextEditor::textColourId, Colours::black);
    label_CHANNEL->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_TYPE = new Label ("new label",
                                               "TYPE"));
    label_TYPE->setFont (Font ("Arial", 14.00f, Font::plain));
    label_TYPE->setJustificationType (Justification::centredLeft);
    label_TYPE->setEditable (false, false, false);
    label_TYPE->setColour (Label::textColourId, Colour (0xffffab00));
    label_TYPE->setColour (TextEditor::textColourId, Colours::black);
    label_TYPE->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_NO = new Label ("new label",
                                             "NO."));
    label_NO->setFont (Font ("Arial", 14.00f, Font::plain));
    label_NO->setJustificationType (Justification::centredLeft);
    label_NO->setEditable (false, false, false);
    label_NO->setColour (Label::textColourId, Colour (0xffffab00));
    label_NO->setColour (TextEditor::textColourId, Colours::black);
    label_NO->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MIN = new Label ("new label",
                                              "MIN VALUE"));
    label_MIN->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MIN->setJustificationType (Justification::centredLeft);
    label_MIN->setEditable (false, false, false);
    label_MIN->setColour (Label::textColourId, Colour (0xffffab00));
    label_MIN->setColour (TextEditor::textColourId, Colours::black);
    label_MIN->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MAX = new Label ("new label",
                                              "MAX VALUE"));
    label_MAX->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MAX->setJustificationType (Justification::centredLeft);
    label_MAX->setEditable (false, false, false);
    label_MAX->setColour (Label::textColourId, Colour (0xffffab00));
    label_MAX->setColour (TextEditor::textColourId, Colours::black);
    label_MAX->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD1 = new Label ("new label",
                                              "FD 1"));
    label_FD1->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD1->setJustificationType (Justification::centredLeft);
    label_FD1->setEditable (false, false, false);
    label_FD1->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD1->setColour (TextEditor::textColourId, Colours::black);
    label_FD1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD2 = new Label ("new label",
                                              "FD 2"));
    label_FD2->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD2->setJustificationType (Justification::centredLeft);
    label_FD2->setEditable (false, false, false);
    label_FD2->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD2->setColour (TextEditor::textColourId, Colours::black);
    label_FD2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD3 = new Label ("new label",
                                              "FD 3"));
    label_FD3->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD3->setJustificationType (Justification::centredLeft);
    label_FD3->setEditable (false, false, false);
    label_FD3->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD3->setColour (TextEditor::textColourId, Colours::black);
    label_FD3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD4 = new Label ("new label",
                                              "FD 4"));
    label_FD4->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD4->setJustificationType (Justification::centredLeft);
    label_FD4->setEditable (false, false, false);
    label_FD4->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD4->setColour (TextEditor::textColourId, Colours::black);
    label_FD4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD5 = new Label ("new label",
                                              "FD 5"));
    label_FD5->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD5->setJustificationType (Justification::centredLeft);
    label_FD5->setEditable (false, false, false);
    label_FD5->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD5->setColour (TextEditor::textColourId, Colours::black);
    label_FD5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD6 = new Label ("new label",
                                              "FD 6"));
    label_FD6->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD6->setJustificationType (Justification::centredLeft);
    label_FD6->setEditable (false, false, false);
    label_FD6->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD6->setColour (TextEditor::textColourId, Colours::black);
    label_FD6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD7 = new Label ("new label",
                                              "FD 7"));
    label_FD7->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD7->setJustificationType (Justification::centredLeft);
    label_FD7->setEditable (false, false, false);
    label_FD7->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD7->setColour (TextEditor::textColourId, Colours::black);
    label_FD7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD8 = new Label ("new label",
                                              "FD 8"));
    label_FD8->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD8->setJustificationType (Justification::centredLeft);
    label_FD8->setEditable (false, false, false);
    label_FD8->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD8->setColour (TextEditor::textColourId, Colours::black);
    label_FD8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MOVE2 = new Label ("new label",
                                                "MOVE"));
    label_MOVE2->setFont (Font ("Arial", 15.00f, Font::plain));
    label_MOVE2->setJustificationType (Justification::centredLeft);
    label_MOVE2->setEditable (false, false, false);
    label_MOVE2->setColour (Label::textColourId, Colour (0xffffab00));
    label_MOVE2->setColour (TextEditor::textColourId, Colours::black);
    label_MOVE2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_CHANNEL2 = new Label ("new label",
                                                   "CHANNEL"));
    label_CHANNEL2->setFont (Font ("Arial", 14.00f, Font::plain));
    label_CHANNEL2->setJustificationType (Justification::centredLeft);
    label_CHANNEL2->setEditable (false, false, false);
    label_CHANNEL2->setColour (Label::textColourId, Colour (0xffffab00));
    label_CHANNEL2->setColour (TextEditor::textColourId, Colours::black);
    label_CHANNEL2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_TYPE2 = new Label ("new label",
                                                "TYPE"));
    label_TYPE2->setFont (Font ("Arial", 14.00f, Font::plain));
    label_TYPE2->setJustificationType (Justification::centredLeft);
    label_TYPE2->setEditable (false, false, false);
    label_TYPE2->setColour (Label::textColourId, Colour (0xffffab00));
    label_TYPE2->setColour (TextEditor::textColourId, Colours::black);
    label_TYPE2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_NO2 = new Label ("new label",
                                              "NO."));
    label_NO2->setFont (Font ("Arial", 14.00f, Font::plain));
    label_NO2->setJustificationType (Justification::centredLeft);
    label_NO2->setEditable (false, false, false);
    label_NO2->setColour (Label::textColourId, Colour (0xffffab00));
    label_NO2->setColour (TextEditor::textColourId, Colours::black);
    label_NO2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MIN2 = new Label ("new label",
                                               "MIN VALUE"));
    label_MIN2->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MIN2->setJustificationType (Justification::centredLeft);
    label_MIN2->setEditable (false, false, false);
    label_MIN2->setColour (Label::textColourId, Colour (0xffffab00));
    label_MIN2->setColour (TextEditor::textColourId, Colours::black);
    label_MIN2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MAX2 = new Label ("new label",
                                               "MAX VALUE"));
    label_MAX2->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MAX2->setJustificationType (Justification::centredLeft);
    label_MAX2->setEditable (false, false, false);
    label_MAX2->setColour (Label::textColourId, Colour (0xffffab00));
    label_MAX2->setColour (TextEditor::textColourId, Colours::black);
    label_MAX2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD9 = new Label ("new label",
                                              "FD 9"));
    label_FD9->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD9->setJustificationType (Justification::centredLeft);
    label_FD9->setEditable (false, false, false);
    label_FD9->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD9->setColour (TextEditor::textColourId, Colours::black);
    label_FD9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MOVE3 = new Label ("new label",
                                                "MOVE"));
    label_MOVE3->setFont (Font ("Arial", 15.00f, Font::plain));
    label_MOVE3->setJustificationType (Justification::centredLeft);
    label_MOVE3->setEditable (false, false, false);
    label_MOVE3->setColour (Label::textColourId, Colour (0xffffab00));
    label_MOVE3->setColour (TextEditor::textColourId, Colours::black);
    label_MOVE3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_CHANNEL3 = new Label ("new label",
                                                   "CHANNEL"));
    label_CHANNEL3->setFont (Font ("Arial", 14.00f, Font::plain));
    label_CHANNEL3->setJustificationType (Justification::centredLeft);
    label_CHANNEL3->setEditable (false, false, false);
    label_CHANNEL3->setColour (Label::textColourId, Colour (0xffffab00));
    label_CHANNEL3->setColour (TextEditor::textColourId, Colours::black);
    label_CHANNEL3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_TYPE3 = new Label ("new label",
                                                "TYPE"));
    label_TYPE3->setFont (Font ("Arial", 14.00f, Font::plain));
    label_TYPE3->setJustificationType (Justification::centredLeft);
    label_TYPE3->setEditable (false, false, false);
    label_TYPE3->setColour (Label::textColourId, Colour (0xffffab00));
    label_TYPE3->setColour (TextEditor::textColourId, Colours::black);
    label_TYPE3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_NO3 = new Label ("new label",
                                              "NO."));
    label_NO3->setFont (Font ("Arial", 14.00f, Font::plain));
    label_NO3->setJustificationType (Justification::centredLeft);
    label_NO3->setEditable (false, false, false);
    label_NO3->setColour (Label::textColourId, Colour (0xffffab00));
    label_NO3->setColour (TextEditor::textColourId, Colours::black);
    label_NO3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MIN3 = new Label ("new label",
                                               "MIN VALUE"));
    label_MIN3->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MIN3->setJustificationType (Justification::centredLeft);
    label_MIN3->setEditable (false, false, false);
    label_MIN3->setColour (Label::textColourId, Colour (0xffffab00));
    label_MIN3->setColour (TextEditor::textColourId, Colours::black);
    label_MIN3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MAX3 = new Label ("new label",
                                               "MAX VALUE"));
    label_MAX3->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MAX3->setJustificationType (Justification::centredLeft);
    label_MAX3->setEditable (false, false, false);
    label_MAX3->setColour (Label::textColourId, Colour (0xffffab00));
    label_MAX3->setColour (TextEditor::textColourId, Colours::black);
    label_MAX3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_EXP = new Label ("new label",
                                              "  EXP\n"
                                              "PEDAL"));
    label_EXP->setFont (Font ("Arial", 14.00f, Font::plain));
    label_EXP->setJustificationType (Justification::centredLeft);
    label_EXP->setEditable (false, false, false);
    label_EXP->setColour (Label::textColourId, Colour (0xffffab00));
    label_EXP->setColour (TextEditor::textColourId, Colours::black);
    label_EXP->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MOVE4 = new Label ("new label",
                                                "PUSH"));
    label_MOVE4->setFont (Font ("Arial", 15.00f, Font::plain));
    label_MOVE4->setJustificationType (Justification::centredLeft);
    label_MOVE4->setEditable (false, false, false);
    label_MOVE4->setColour (Label::textColourId, Colour (0xffffab00));
    label_MOVE4->setColour (TextEditor::textColourId, Colours::black);
    label_MOVE4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_CHANNEL4 = new Label ("new label",
                                                   "CHANNEL"));
    label_CHANNEL4->setFont (Font ("Arial", 14.00f, Font::plain));
    label_CHANNEL4->setJustificationType (Justification::centredLeft);
    label_CHANNEL4->setEditable (false, false, false);
    label_CHANNEL4->setColour (Label::textColourId, Colour (0xffffab00));
    label_CHANNEL4->setColour (TextEditor::textColourId, Colours::black);
    label_CHANNEL4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_TYPE4 = new Label ("new label",
                                                "TYPE"));
    label_TYPE4->setFont (Font ("Arial", 14.00f, Font::plain));
    label_TYPE4->setJustificationType (Justification::centredLeft);
    label_TYPE4->setEditable (false, false, false);
    label_TYPE4->setColour (Label::textColourId, Colour (0xffffab00));
    label_TYPE4->setColour (TextEditor::textColourId, Colours::black);
    label_TYPE4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_NO4 = new Label ("new label",
                                              "NO."));
    label_NO4->setFont (Font ("Arial", 14.00f, Font::plain));
    label_NO4->setJustificationType (Justification::centredLeft);
    label_NO4->setEditable (false, false, false);
    label_NO4->setColour (Label::textColourId, Colour (0xffffab00));
    label_NO4->setColour (TextEditor::textColourId, Colours::black);
    label_NO4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MIN4 = new Label ("new label",
                                               "MIN VALUE"));
    label_MIN4->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MIN4->setJustificationType (Justification::centredLeft);
    label_MIN4->setEditable (false, false, false);
    label_MIN4->setColour (Label::textColourId, Colour (0xffffab00));
    label_MIN4->setColour (TextEditor::textColourId, Colours::black);
    label_MIN4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MAX4 = new Label ("new label",
                                               "MAX VALUE"));
    label_MAX4->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MAX4->setJustificationType (Justification::centredLeft);
    label_MAX4->setEditable (false, false, false);
    label_MAX4->setColour (Label::textColourId, Colour (0xffffab00));
    label_MAX4->setColour (TextEditor::textColourId, Colours::black);
    label_MAX4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_EXP2 = new Label ("new label",
                                               "  FOOT\n"
                                               "SWITCH"));
    label_EXP2->setFont (Font ("Arial", 14.00f, Font::plain));
    label_EXP2->setJustificationType (Justification::centredLeft);
    label_EXP2->setEditable (false, false, false);
    label_EXP2->setColour (Label::textColourId, Colour (0xffffab00));
    label_EXP2->setColour (TextEditor::textColourId, Colours::black);
    label_EXP2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label = new Label ("new label",
                                          "BEHAVIOR"));
    label->setFont (Font ("Arial", 14.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colour (0x00ffab00));
    label->setColour (Label::textColourId, Colour (0xffffab00));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           String::empty));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           String::empty));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::backgroundColourId, Colour (0xff444444));
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           String::empty));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (Label::backgroundColourId, Colour (0xff444444));
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label5 = new Label ("new label",
                                           String::empty));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (Label::backgroundColourId, Colour (0xff444444));
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           String::empty));
    label6->setFont (Font (15.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (Label::backgroundColourId, Colour (0xff444444));
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label7 = new Label ("new label",
                                           "label text"));
    label7->setFont (Font (15.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (Label::backgroundColourId, Colour (0xff444444));
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label8 = new Label ("new label",
                                           "label text"));
    label8->setFont (Font (15.00f, Font::plain));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (Label::backgroundColourId, Colour (0xff444444));
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label9 = new Label ("new label",
                                           "label text"));
    label9->setFont (Font (15.00f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (Label::backgroundColourId, Colour (0xff444444));
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label10 = new Label ("new label",
                                            "label text"));
    label10->setFont (Font (15.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::backgroundColourId, Colour (0xff444444));
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label11 = new Label ("new label",
                                            "label text"));
    label11->setFont (Font (15.00f, Font::plain));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (Label::backgroundColourId, Colour (0xff444444));
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label12 = new Label ("new label",
                                            "label text"));
    label12->setFont (Font (15.00f, Font::plain));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (Label::backgroundColourId, Colour (0xff444444));
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label13 = new Label ("new label",
                                            "label text"));
    label13->setFont (Font (15.00f, Font::plain));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (Label::backgroundColourId, Colour (0xff444444));
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label14 = new Label ("new label",
                                            "label text"));
    label14->setFont (Font (15.00f, Font::plain));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (Label::backgroundColourId, Colour (0xff444444));
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label15 = new Label ("new label",
                                            "label text"));
    label15->setFont (Font (15.00f, Font::plain));
    label15->setJustificationType (Justification::centredLeft);
    label15->setEditable (false, false, false);
    label15->setColour (Label::backgroundColourId, Colour (0xff444444));
    label15->setColour (TextEditor::textColourId, Colours::black);
    label15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label16 = new Label ("new label",
                                            "label text"));
    label16->setFont (Font (15.00f, Font::plain));
    label16->setJustificationType (Justification::centredLeft);
    label16->setEditable (false, false, false);
    label16->setColour (Label::backgroundColourId, Colour (0xff444444));
    label16->setColour (TextEditor::textColourId, Colours::black);
    label16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label17 = new Label ("new label",
                                            "label text"));
    label17->setFont (Font (15.00f, Font::plain));
    label17->setJustificationType (Justification::centredLeft);
    label17->setEditable (false, false, false);
    label17->setColour (Label::backgroundColourId, Colour (0xff444444));
    label17->setColour (TextEditor::textColourId, Colours::black);
    label17->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label18 = new Label ("new label",
                                            "label text"));
    label18->setFont (Font (15.00f, Font::plain));
    label18->setJustificationType (Justification::centredLeft);
    label18->setEditable (false, false, false);
    label18->setColour (Label::backgroundColourId, Colour (0xff444444));
    label18->setColour (TextEditor::textColourId, Colours::black);
    label18->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label19 = new Label ("new label",
                                            "label text"));
    label19->setFont (Font (15.00f, Font::plain));
    label19->setJustificationType (Justification::centredLeft);
    label19->setEditable (false, false, false);
    label19->setColour (Label::backgroundColourId, Colour (0xff444444));
    label19->setColour (TextEditor::textColourId, Colours::black);
    label19->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (FDCP_TY_FD1 = new TextButton ("new button"));
    FDCP_TY_FD1->setButtonText ("CC");
    FDCP_TY_FD1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD1->addListener (this);
    FDCP_TY_FD1->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD2 = new TextButton ("new button"));
    FDCP_TY_FD2->setButtonText ("CC");
    FDCP_TY_FD2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD2->addListener (this);
    FDCP_TY_FD2->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD2->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD2->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD3 = new TextButton ("new button"));
    FDCP_TY_FD3->setButtonText ("CC");
    FDCP_TY_FD3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD3->addListener (this);
    FDCP_TY_FD3->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD3->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD3->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD3->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD4 = new TextButton ("new button"));
    FDCP_TY_FD4->setButtonText ("Pitch");
    FDCP_TY_FD4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD4->addListener (this);
    FDCP_TY_FD4->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD4->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD4->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD4->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD5 = new TextButton ("new button"));
    FDCP_TY_FD5->setButtonText ("CC");
    FDCP_TY_FD5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD5->addListener (this);
    FDCP_TY_FD5->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD5->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD5->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD5->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD6 = new TextButton ("new button"));
    FDCP_TY_FD6->setButtonText ("CC");
    FDCP_TY_FD6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD6->addListener (this);
    FDCP_TY_FD6->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD6->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD6->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD6->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD7 = new TextButton ("new button"));
    FDCP_TY_FD7->setButtonText ("CC");
    FDCP_TY_FD7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD7->addListener (this);
    FDCP_TY_FD7->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD7->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD7->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD7->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD8 = new TextButton ("new button"));
    FDCP_TY_FD8->setButtonText ("CC");
    FDCP_TY_FD8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD8->addListener (this);
    FDCP_TY_FD8->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD8->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD8->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD8->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD9 = new TextButton ("new button"));
    FDCP_TY_FD9->setButtonText ("CC");
    FDCP_TY_FD9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD9->addListener (this);
    FDCP_TY_FD9->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_EXP = new TextButton ("new button"));
    FDCP_TY_EXP->setButtonText ("CC");
    FDCP_TY_EXP->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_EXP->addListener (this);
    FDCP_TY_EXP->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_EXP->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_EXP->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_EXP->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FOOT = new TextButton ("new button"));
    FDCP_TY_FOOT->setButtonText ("CC");
    FDCP_TY_FOOT->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FOOT->addListener (this);
    FDCP_TY_FOOT->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FOOT->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FOOT->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FOOT->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_BEH_FOOT = new TextButton ("new button"));
    FDCP_BEH_FOOT->setButtonText ("Momentary");
    FDCP_BEH_FOOT->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_BEH_FOOT->addListener (this);
    FDCP_BEH_FOOT->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_BEH_FOOT->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_BEH_FOOT->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_BEH_FOOT->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO1 = new TextButton ("new button"));
    FADE_NO1->setButtonText ("CC1");
    FADE_NO1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO1->addListener (this);
    FADE_NO1->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO2 = new TextButton ("new button"));
    FADE_NO2->setButtonText ("CC1");
    FADE_NO2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO2->addListener (this);
    FADE_NO2->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO2->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO2->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO3 = new TextButton ("new button"));
    FADE_NO3->setButtonText ("CC1");
    FADE_NO3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO3->addListener (this);
    FADE_NO3->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO3->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO3->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO3->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO4 = new TextButton ("new button"));
    FADE_NO4->setButtonText ("-");
    FADE_NO4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO4->addListener (this);
    FADE_NO4->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO4->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO4->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO4->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO5 = new TextButton ("new button"));
    FADE_NO5->setButtonText ("CC1");
    FADE_NO5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO5->addListener (this);
    FADE_NO5->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO5->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO5->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO5->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO6 = new TextButton ("new button"));
    FADE_NO6->setButtonText ("CC1");
    FADE_NO6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO6->addListener (this);
    FADE_NO6->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO6->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO6->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO6->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO7 = new TextButton ("new button"));
    FADE_NO7->setButtonText ("CC1");
    FADE_NO7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO7->addListener (this);
    FADE_NO7->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO7->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO7->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO7->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO8 = new TextButton ("new button"));
    FADE_NO8->setButtonText ("CC1");
    FADE_NO8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO8->addListener (this);
    FADE_NO8->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO8->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO8->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO8->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO9 = new TextButton ("new button"));
    FADE_NO9->setButtonText ("CC1");
    FADE_NO9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO9->addListener (this);
    FADE_NO9->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO10 = new TextButton ("new button"));
    FADE_NO10->setButtonText ("CC1");
    FADE_NO10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO10->addListener (this);
    FADE_NO10->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO11 = new TextButton ("new button"));
    FADE_NO11->setButtonText ("CC1");
    FADE_NO11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO11->addListener (this);
    FADE_NO11->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (LSB2 = new Label ("new label",
                                         "MSB"));
    LSB2->setFont (Font ("Arial", 14.00f, Font::plain));
    LSB2->setJustificationType (Justification::centredLeft);
    LSB2->setEditable (false, false, false);
    LSB2->setColour (Label::textColourId, Colour (0xffffab00));
    LSB2->setColour (TextEditor::textColourId, Colours::black);
    LSB2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (MSB2 = new Label ("new label",
                                         "LSB"));
    MSB2->setFont (Font ("Arial", 14.00f, Font::plain));
    MSB2->setJustificationType (Justification::centredLeft);
    MSB2->setEditable (false, false, false);
    MSB2->setColour (Label::textColourId, Colour (0xffffab00));
    MSB2->setColour (TextEditor::textColourId, Colours::black);
    MSB2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LNMSB2 = new Label ("new label",
                                           String::empty));
    LNMSB2->setFont (Font (15.00f, Font::plain));
    LNMSB2->setJustificationType (Justification::centredLeft);
    LNMSB2->setEditable (false, false, false);
    LNMSB2->setColour (Label::backgroundColourId, Colour (0xff444444));
    LNMSB2->setColour (TextEditor::textColourId, Colours::black);
    LNMSB2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LNLSB2 = new Label ("new label",
                                           String::empty));
    LNLSB2->setFont (Font (15.00f, Font::plain));
    LNLSB2->setJustificationType (Justification::centredLeft);
    LNLSB2->setEditable (false, false, false);
    LNLSB2->setColour (Label::backgroundColourId, Colour (0xff444444));
    LNLSB2->setColour (TextEditor::textColourId, Colours::black);
    LNLSB2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label21 = new Label ("new label",
                                            "label text"));
    label21->setFont (Font (15.00f, Font::plain));
    label21->setJustificationType (Justification::centredLeft);
    label21->setEditable (false, false, false);
    label21->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label21->setColour (TextEditor::textColourId, Colours::black);
    label21->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LSB1 = new Label ("new label",
                                         "MSB"));
    LSB1->setFont (Font ("Arial", 14.00f, Font::plain));
    LSB1->setJustificationType (Justification::centredLeft);
    LSB1->setEditable (false, false, false);
    LSB1->setColour (Label::textColourId, Colour (0xffffab00));
    LSB1->setColour (TextEditor::textColourId, Colours::black);
    LSB1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (MSB1 = new Label ("new label",
                                         "LSB"));
    MSB1->setFont (Font ("Arial", 14.00f, Font::plain));
    MSB1->setJustificationType (Justification::centredLeft);
    MSB1->setEditable (false, false, false);
    MSB1->setColour (Label::textColourId, Colour (0xffffab00));
    MSB1->setColour (TextEditor::textColourId, Colours::black);
    MSB1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LNMSB1 = new Label ("new label",
                                           String::empty));
    LNMSB1->setFont (Font (15.00f, Font::plain));
    LNMSB1->setJustificationType (Justification::centredLeft);
    LNMSB1->setEditable (false, false, false);
    LNMSB1->setColour (Label::backgroundColourId, Colour (0xff444444));
    LNMSB1->setColour (TextEditor::textColourId, Colours::black);
    LNMSB1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LNLSB1 = new Label ("new label",
                                           String::empty));
    LNLSB1->setFont (Font (15.00f, Font::plain));
    LNLSB1->setJustificationType (Justification::centredLeft);
    LNLSB1->setEditable (false, false, false);
    LNLSB1->setColour (Label::backgroundColourId, Colour (0xff444444));
    LNLSB1->setColour (TextEditor::textColourId, Colours::black);
    LNLSB1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label20 = new Label ("new label",
                                            "label text"));
    label20->setFont (Font (15.00f, Font::plain));
    label20->setJustificationType (Justification::centredLeft);
    label20->setEditable (false, false, false);
    label20->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label20->setColour (TextEditor::textColourId, Colours::black);
    label20->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LSB3 = new Label ("new label",
                                         "MSB"));
    LSB3->setFont (Font ("Arial", 14.00f, Font::plain));
    LSB3->setJustificationType (Justification::centredLeft);
    LSB3->setEditable (false, false, false);
    LSB3->setColour (Label::textColourId, Colour (0xffffab00));
    LSB3->setColour (TextEditor::textColourId, Colours::black);
    LSB3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (MSB3 = new Label ("new label",
                                         "LSB"));
    MSB3->setFont (Font ("Arial", 14.00f, Font::plain));
    MSB3->setJustificationType (Justification::centredLeft);
    MSB3->setEditable (false, false, false);
    MSB3->setColour (Label::textColourId, Colour (0xffffab00));
    MSB3->setColour (TextEditor::textColourId, Colours::black);
    MSB3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LNMSB3 = new Label ("new label",
                                           String::empty));
    LNMSB3->setFont (Font (15.00f, Font::plain));
    LNMSB3->setJustificationType (Justification::centredLeft);
    LNMSB3->setEditable (false, false, false);
    LNMSB3->setColour (Label::backgroundColourId, Colour (0xff444444));
    LNMSB3->setColour (TextEditor::textColourId, Colours::black);
    LNMSB3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LNLSB3 = new Label ("new label",
                                           String::empty));
    LNLSB3->setFont (Font (15.00f, Font::plain));
    LNLSB3->setJustificationType (Justification::centredLeft);
    LNLSB3->setEditable (false, false, false);
    LNLSB3->setColour (Label::backgroundColourId, Colour (0xff444444));
    LNLSB3->setColour (TextEditor::textColourId, Colours::black);
    LNLSB3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label22 = new Label ("new label",
                                            "label text"));
    label22->setFont (Font (15.00f, Font::plain));
    label22->setJustificationType (Justification::centredLeft);
    label22->setEditable (false, false, false);
    label22->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label22->setColour (TextEditor::textColourId, Colours::black);
    label22->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LSB4 = new Label ("new label",
                                         "MSB"));
    LSB4->setFont (Font ("Arial", 14.00f, Font::plain));
    LSB4->setJustificationType (Justification::centredLeft);
    LSB4->setEditable (false, false, false);
    LSB4->setColour (Label::textColourId, Colour (0xffffab00));
    LSB4->setColour (TextEditor::textColourId, Colours::black);
    LSB4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (MSB4 = new Label ("new label",
                                         "LSB"));
    MSB4->setFont (Font ("Arial", 14.00f, Font::plain));
    MSB4->setJustificationType (Justification::centredLeft);
    MSB4->setEditable (false, false, false);
    MSB4->setColour (Label::textColourId, Colour (0xffffab00));
    MSB4->setColour (TextEditor::textColourId, Colours::black);
    MSB4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LNMSB4 = new Label ("new label",
                                           String::empty));
    LNMSB4->setFont (Font (15.00f, Font::plain));
    LNMSB4->setJustificationType (Justification::centredLeft);
    LNMSB4->setEditable (false, false, false);
    LNMSB4->setColour (Label::backgroundColourId, Colour (0xff444444));
    LNMSB4->setColour (TextEditor::textColourId, Colours::black);
    LNMSB4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (LNLSB4 = new Label ("new label",
                                           String::empty));
    LNLSB4->setFont (Font (15.00f, Font::plain));
    LNLSB4->setJustificationType (Justification::centredLeft);
    LNLSB4->setEditable (false, false, false);
    LNLSB4->setColour (Label::backgroundColourId, Colour (0xff444444));
    LNLSB4->setColour (TextEditor::textColourId, Colours::black);
    LNLSB4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label23 = new Label ("new label",
                                            "label text"));
    label23->setFont (Font (15.00f, Font::plain));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //pViewPortComponent = new ViewPortComponent();
    addAndMakeVisible (pfader1=new CustomTextButton ("1"));
    pfader1->addListener (this);

    addAndMakeVisible (pfader2=new CustomTextButton ("12"));
    pfader2->addListener (this);

    addAndMakeVisible (pfader3=new CustomTextButton ("2"));
    pfader3->addListener (this);

    addAndMakeVisible (pfader4=new CustomTextButton ("3"));
    pfader4->addListener (this);

    addAndMakeVisible (pfader5=new CustomTextButton ("4"));
    pfader5->addListener (this);

    addAndMakeVisible (pfader6=new CustomTextButton ("12"));
    pfader6->addListener (this);

    addAndMakeVisible (pfader7=new CustomTextButton ("2"));
    pfader7->addListener (this);

    addAndMakeVisible (pfader8=new CustomTextButton ("1"));
    pfader8->addListener (this);

    addAndMakeVisible (pfader9=new CustomTextButton ("11"));
    pfader9->addListener (this);

    addAndMakeVisible (pfader10=new CustomTextButton ("1"));
    pfader10->addListener (this);

    addAndMakeVisible (pfader11=new CustomTextButton ("2"));
    pfader11->addListener (this);

    addAndMakeVisible (pCustomImageButton1=new CustomImageButton ("0"));
    pCustomImageButton1->addListener (this);

    addAndMakeVisible (pCustomImageButton2=new CustomImageButton ("12"));
    pCustomImageButton2->addListener (this);

    addAndMakeVisible (pCustomImageButton3=new CustomImageButton ("0"));
    pCustomImageButton3->addListener (this);

    addAndMakeVisible (pCustomImageButton4=new CustomImageButton ("0"));
    pCustomImageButton4->addListener (this);

    addAndMakeVisible (pCustomImageButton5=new CustomImageButton ("0"));
    pCustomImageButton5->addListener (this);

    addAndMakeVisible (pCustomImageButton6=new CustomImageButton ("12"));
    pCustomImageButton6->addListener (this);

    addAndMakeVisible (pCustomImageButton7=new CustomImageButton ("0"));
    pCustomImageButton7->addListener (this);

    addAndMakeVisible (pCustomImageButton8=new CustomImageButton ("0"));
    pCustomImageButton8->addListener (this);

    addAndMakeVisible (pCustomImageButton9=new CustomImageButton ("120"));
    pCustomImageButton9->addListener (this);

    addAndMakeVisible (pCustomImageButton10=new CustomImageButton ("112"));
    pCustomImageButton10->addListener (this);

    addAndMakeVisible (pCustomImageButton11=new CustomImageButton ("110"));
    pCustomImageButton11->addListener (this);

    addAndMakeVisible (pCustomImageButton12=new CustomImageButton ("110"));
    pCustomImageButton12->addListener (this);

    addAndMakeVisible (pCustomImageButton13=new CustomImageButton ("120"));
    pCustomImageButton13->addListener (this);

    addAndMakeVisible (pCustomImageButton14=new CustomImageButton ("122"));
    pCustomImageButton14->addListener (this);

    addAndMakeVisible (pCustomImageButton15=new CustomImageButton ("110"));
    pCustomImageButton15->addListener (this);

    addAndMakeVisible (pCustomImageButton16=new CustomImageButton ("110"));
    pCustomImageButton16->addListener (this);

    addAndMakeVisible (pCustomImageButton17=new CustomImageButton ("0"));
    pCustomImageButton17->addListener (this);

    addAndMakeVisible (pCustomImageButton18=new CustomImageButton ("12"));
    pCustomImageButton18->addListener (this);

    addAndMakeVisible (pCustomImageButton19=new CustomImageButton ("0"));
    pCustomImageButton19->addListener (this);

    addAndMakeVisible (pCustomImageButton20=new CustomImageButton ("120"));
    pCustomImageButton20->addListener (this);

    addAndMakeVisible (pCustomImageButton21=new CustomImageButton ("127"));
    pCustomImageButton21->addListener (this);

    addAndMakeVisible (pCustomImageButton22=new CustomImageButton ("120"));
    pCustomImageButton22->addListener (this);

    /*FDCP_CH_FD1 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_CH_FD2 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_CH_FD3 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_CH_FD4 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_CH_FD5 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_CH_FD6 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_CH_FD7 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_CH_FD8->setLookAndFeel(&lookAndFeelV4);
    FDCP_CH_FD9 ->setLookAndFeel(&lookAndFeelV4);*/
    FDCP_TY_FD1 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD2 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD3 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD4 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD5 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD6 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD7 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD8 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD9 ->setLookAndFeel(&lookAndFeelV4);
    //FDCP_CH_EXP ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_EXP ->setLookAndFeel(&lookAndFeelV4);
    //FDCP_CH_FOOT->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FOOT ->setLookAndFeel(&lookAndFeelV4);
    FDCP_BEH_FOOT->setLookAndFeel(&lookAndFeelV4);

    FADE_NO1 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO2 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO3 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO4 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO5 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO6 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO7 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO8 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO9->setLookAndFeel(&lookAndFeelV4);
    FADE_NO10 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO11 ->setLookAndFeel(&lookAndFeelV4);

    for (int i = 0; i < 11; i++)
    {
        addAndMakeVisible(MSB[i] = new CustomImageButton("-"));
        MSB[i]->addListener(this);

        addAndMakeVisible(LSB[i] = new CustomImageButton("-"));
        LSB[i]->addListener(this);
    }

    MakeButtonPointToBtGroup();
    //[/UserPreSize]

    setSize (664, 535);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

FadersAndFootCompactComponent::~FadersAndFootCompactComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //windows.clear();
    //delete pViewPortComponent;
    pfader1 = nullptr;
    pfader2 = nullptr;
    pfader3 = nullptr;
    pfader4 = nullptr;

    pfader5 = nullptr;
    pfader6 = nullptr;
    pfader7 = nullptr;
    pfader8 = nullptr;

    pfader9 = nullptr;
    pfader10 = nullptr;
    pfader11 = nullptr;

    pCustomImageButton1 = nullptr;
    pCustomImageButton2 = nullptr;
    pCustomImageButton3 = nullptr;
    pCustomImageButton4 = nullptr;

    pCustomImageButton5 = nullptr;
    pCustomImageButton6 = nullptr;
    pCustomImageButton7 = nullptr;
    pCustomImageButton8 = nullptr;

    pCustomImageButton9 = nullptr;
    pCustomImageButton10 = nullptr;
    pCustomImageButton11 = nullptr;
    pCustomImageButton12 = nullptr;

    pCustomImageButton13 = nullptr;
    pCustomImageButton14 = nullptr;
    pCustomImageButton15 = nullptr;
    pCustomImageButton16 = nullptr;

    pCustomImageButton17 = nullptr;
    pCustomImageButton18 = nullptr;
    pCustomImageButton19 = nullptr;

    pCustomImageButton20 = nullptr;
    pCustomImageButton21 = nullptr;
    pCustomImageButton22 = nullptr;

    for (int i = 0; i < 11; i++)
    {
        MSB[i] = nullptr;
        LSB[i] = nullptr;
    }
    //[/Destructor_pre]

    label_MOVE = nullptr;
    label_CHANNEL = nullptr;
    label_TYPE = nullptr;
    label_NO = nullptr;
    label_MIN = nullptr;
    label_MAX = nullptr;
    label_FD1 = nullptr;
    label_FD2 = nullptr;
    label_FD3 = nullptr;
    label_FD4 = nullptr;
    label_FD5 = nullptr;
    label_FD6 = nullptr;
    label_FD7 = nullptr;
    label_FD8 = nullptr;
    label_MOVE2 = nullptr;
    label_CHANNEL2 = nullptr;
    label_TYPE2 = nullptr;
    label_NO2 = nullptr;
    label_MIN2 = nullptr;
    label_MAX2 = nullptr;
    label_FD9 = nullptr;
    label_MOVE3 = nullptr;
    label_CHANNEL3 = nullptr;
    label_TYPE3 = nullptr;
    label_NO3 = nullptr;
    label_MIN3 = nullptr;
    label_MAX3 = nullptr;
    label_EXP = nullptr;
    label_MOVE4 = nullptr;
    label_CHANNEL4 = nullptr;
    label_TYPE4 = nullptr;
    label_NO4 = nullptr;
    label_MIN4 = nullptr;
    label_MAX4 = nullptr;
    label_EXP2 = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    label10 = nullptr;
    label11 = nullptr;
    label12 = nullptr;
    label13 = nullptr;
    label14 = nullptr;
    label15 = nullptr;
    label16 = nullptr;
    label17 = nullptr;
    label18 = nullptr;
    label19 = nullptr;
    FDCP_TY_FD1 = nullptr;
    FDCP_TY_FD2 = nullptr;
    FDCP_TY_FD3 = nullptr;
    FDCP_TY_FD4 = nullptr;
    FDCP_TY_FD5 = nullptr;
    FDCP_TY_FD6 = nullptr;
    FDCP_TY_FD7 = nullptr;
    FDCP_TY_FD8 = nullptr;
    FDCP_TY_FD9 = nullptr;
    FDCP_TY_EXP = nullptr;
    FDCP_TY_FOOT = nullptr;
    FDCP_BEH_FOOT = nullptr;
    FADE_NO1 = nullptr;
    FADE_NO2 = nullptr;
    FADE_NO3 = nullptr;
    FADE_NO4 = nullptr;
    FADE_NO5 = nullptr;
    FADE_NO6 = nullptr;
    FADE_NO7 = nullptr;
    FADE_NO8 = nullptr;
    FADE_NO9 = nullptr;
    FADE_NO10 = nullptr;
    FADE_NO11 = nullptr;
    LSB2 = nullptr;
    MSB2 = nullptr;
    LNMSB2 = nullptr;
    LNLSB2 = nullptr;
    label21 = nullptr;
    LSB1 = nullptr;
    MSB1 = nullptr;
    LNMSB1 = nullptr;
    LNLSB1 = nullptr;
    label20 = nullptr;
    LSB3 = nullptr;
    MSB3 = nullptr;
    LNMSB3 = nullptr;
    LNLSB3 = nullptr;
    label22 = nullptr;
    LSB4 = nullptr;
    MSB4 = nullptr;
    LNMSB4 = nullptr;
    LNLSB4 = nullptr;
    label23 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void FadersAndFootCompactComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xffffab00));
    g.fillRect (31, 35, 609, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (127, 12, 2, 154);

    g.setColour (Colour (0xffffab00));
    g.fillRect (127, 250, 2, 165);

    g.setColour (Colour (0xffffab00));
    g.fillRect (31, 272, 160, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (341, 250, 2, 165);

    g.setColour (Colour (0xffffab00));
    g.fillRect (248, 272, 160, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (560, 250, 2, 175);

    g.setColour (Colour (0xffffab00));
    g.fillRect (469, 272, 160, 2);

    g.setColour (Colour (0xff333333));
    g.fillRect (0, 500, 672, 100);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void FadersAndFootCompactComponent::resized()
{
    label_MOVE->setBounds (32, 8, 64, 24);
    label_CHANNEL->setBounds (32, 38, 85, 26);
    label_TYPE->setBounds (32, 64, 85, 26);
    label_NO->setBounds (32, 90, 85, 26);
    label_MIN->setBounds (32, 116, 85, 26);
    label_MAX->setBounds (32, 142, 85, 26);
    label_FD1->setBounds (144, 8, 48, 24);
    label_FD2->setBounds (208, 8, 48, 24);
    label_FD3->setBounds (272, 8, 48, 24);
    label_FD4->setBounds (336, 8, 48, 24);
    label_FD5->setBounds (400, 8, 48, 24);
    label_FD6->setBounds (464, 8, 48, 24);
    label_FD7->setBounds (528, 8, 48, 24);
    label_FD8->setBounds (592, 8, 48, 24);
    label_MOVE2->setBounds (32, 245, 64, 24);
    label_CHANNEL2->setBounds (32, 274, 88, 26);
    label_TYPE2->setBounds (32, 300, 88, 26);
    label_NO2->setBounds (32, 328, 88, 26);
    label_MIN2->setBounds (32, 354, 88, 26);
    label_MAX2->setBounds (32, 380, 72, 26);
    label_FD9->setBounds (144, 245, 48, 24);
    label_MOVE3->setBounds (246, 245, 64, 24);
    label_CHANNEL3->setBounds (246, 274, 85, 26);
    label_TYPE3->setBounds (246, 300, 85, 26);
    label_NO3->setBounds (246, 328, 77, 26);
    label_MIN3->setBounds (246, 354, 77, 26);
    label_MAX3->setBounds (246, 380, 85, 26);
    label_EXP->setBounds (350, 238, 69, 31);
    label_MOVE4->setBounds (465, 245, 64, 24);
    label_CHANNEL4->setBounds (465, 274, 80, 26);
    label_TYPE4->setBounds (466, 302, 80, 26);
    label_NO4->setBounds (466, 328, 80, 26);
    label_MIN4->setBounds (466, 354, 80, 26);
    label_MAX4->setBounds (466, 380, 80, 26);
    label_EXP2->setBounds (569, 238, 150, 31);
    label->setBounds (466, 406, 88, 26);
    label2->setBounds (0, 500, 664, 2);
    label3->setBounds (32, 64, 609, 1);
    label4->setBounds (33, 90, 609, 1);
    label5->setBounds (32, 116, 609, 1);
    label6->setBounds (32, 142, 609, 1);
    label7->setBounds (32, 300, 160, 1);
    label8->setBounds (32, 328, 160, 1);
    label9->setBounds (32, 354, 160, 1);
    label10->setBounds (32, 380, 160, 1);
    label11->setBounds (245, 300, 160, 1);
    label12->setBounds (245, 328, 160, 1);
    label13->setBounds (245, 354, 160, 1);
    label14->setBounds (245, 380, 160, 1);
    label15->setBounds (466, 300, 160, 1);
    label16->setBounds (466, 328, 160, 1);
    label17->setBounds (466, 354, 160, 1);
    label18->setBounds (466, 380, 160, 1);
    label19->setBounds (466, 406, 160, 1);
    FDCP_TY_FD1->setBounds (129, 65, 65, 24);
    FDCP_TY_FD2->setBounds (192, 65, 65, 24);
    FDCP_TY_FD3->setBounds (256, 65, 65, 24);
    FDCP_TY_FD4->setBounds (320, 65, 65, 24);
    FDCP_TY_FD5->setBounds (384, 65, 65, 24);
    FDCP_TY_FD6->setBounds (448, 65, 65, 24);
    FDCP_TY_FD7->setBounds (512, 65, 65, 24);
    FDCP_TY_FD8->setBounds (576, 65, 65, 24);
    FDCP_TY_FD9->setBounds (129, 301, 65, 24);
    FDCP_TY_EXP->setBounds (343, 301, 65, 24);
    FDCP_TY_FOOT->setBounds (562, 301, 65, 24);
    FDCP_BEH_FOOT->setBounds (562, 407, 65, 25);
    FADE_NO1->setBounds (129, 91, 65, 24);
    FADE_NO2->setBounds (192, 91, 65, 24);
    FADE_NO3->setBounds (256, 91, 65, 24);
    FADE_NO4->setBounds (320, 91, 65, 24);
    FADE_NO5->setBounds (384, 91, 65, 24);
    FADE_NO6->setBounds (448, 91, 65, 24);
    FADE_NO7->setBounds (512, 91, 65, 24);
    FADE_NO8->setBounds (576, 91, 65, 24);
    FADE_NO9->setBounds (129, 329, 65, 24);
    FADE_NO10->setBounds (343, 329, 65, 24);
    FADE_NO11->setBounds (562, 329, 65, 24);
    LSB2->setBounds (32, 408, 85, 26);
    MSB2->setBounds (32, 436, 85, 26);
    LNMSB2->setBounds (32, 435, 160, 1);
    LNLSB2->setBounds (32, 407, 160, 1);
    label21->setBounds (127, 246, 2, 212);
    LSB1->setBounds (32, 170, 85, 26);
    MSB1->setBounds (32, 197, 85, 26);
    LNMSB1->setBounds (32, 196, 613, 1);
    LNLSB1->setBounds (30, 169, 613, 1);
    label20->setBounds (127, 12, 2, 207);
    LSB3->setBounds (247, 408, 85, 26);
    MSB3->setBounds (247, 436, 85, 26);
    LNMSB3->setBounds (247, 435, 160, 1);
    LNLSB3->setBounds (247, 407, 160, 1);
    label22->setBounds (341, 246, 2, 212);
    LSB4->setBounds (466, 436, 85, 26);
    MSB4->setBounds (466, 464, 85, 26);
    LNMSB4->setBounds (466, 463, 160, 1);
    LNLSB4->setBounds (466, 435, 160, 1);
    label23->setBounds (560, 246, 2, 240);
    //[UserResized] Add your own custom resize handling here..
    pfader1 -> setBounds(129,37,64,25);
    pfader2 -> setBounds(192,37,64,25);
    pfader3 -> setBounds(256,37,64,25);
    pfader4 -> setBounds(321,37,64,25);
    pfader5 -> setBounds(385,37,64,25);
    pfader6 -> setBounds(449,37,64,25);
    pfader7 -> setBounds(513,37,64,25);
    pfader8 -> setBounds(577,37,64,25);
    pfader9 -> setBounds(129,275,64,25);
    pfader10 -> setBounds(343,275,64,25);
    pfader11 -> setBounds(562,275,64,25);

    pCustomImageButton1 ->setBounds(129,117,64,24);
    pCustomImageButton2 ->setBounds(192,117,64,24);
    pCustomImageButton3 ->setBounds(256,117,64,24);
    pCustomImageButton4 ->setBounds(320,117,64,24);
    pCustomImageButton5 ->setBounds(384,117,64,24);
    pCustomImageButton6 ->setBounds(448,117,64,24);
    pCustomImageButton7 ->setBounds(512,117,64,24);
    pCustomImageButton8 ->setBounds(576,117,64,24);

    pCustomImageButton9 ->setBounds(129,143,64,24);
    pCustomImageButton10 ->setBounds(192,143,64,24);
    pCustomImageButton11 ->setBounds(256,143,64,24);
    pCustomImageButton12 ->setBounds(320,143,64,24);
    pCustomImageButton13 ->setBounds(384,143,64,24);
    pCustomImageButton14 ->setBounds(448,143,64,24);
    pCustomImageButton15 ->setBounds(512,143,64,24);
    pCustomImageButton16 ->setBounds(576,143,64,24);

    pCustomImageButton17 ->setBounds(129,355,64,24);
    pCustomImageButton18 ->setBounds(343,355,64,24);
    pCustomImageButton19 ->setBounds(562,355,64,24);

    pCustomImageButton20 ->setBounds(129,381,64,24);
    pCustomImageButton21->setBounds(343, 381, 64, 24);
    pCustomImageButton22->setBounds(562, 381, 64, 24);

    for (int i = 0; i < 8; i++)
    {
        MSB[i]->setBounds(129 + 64*i, 170, 64, 24);
        LSB[i]->setBounds(129 + 64 * i, 197, 64, 24);
    }
    MSB[8]->setBounds(129 , 408, 64, 24);
    MSB[9]->setBounds(343 , 408, 64, 24);
    MSB[10]->setBounds(562 , 436, 64, 24);

    LSB[8]->setBounds(129 , 436, 64, 24);
    LSB[9]->setBounds(343 , 436, 64, 24);
    LSB[10]->setBounds(562 , 464, 64, 24);

    
    //[/UserResized]
}

void FadersAndFootCompactComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    pMainComponent->setMyComponent(0);
    Push_or_Turn =1;
	GetCustomBtID();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == FDCP_TY_FD1)
    {
        //[UserButtonCode_FDCP_TY_FD1] -- add your button handler code here..
        MidiLayerNum = 1;
        SetNO_BT(FDCP_TY_FD1);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD1->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD1]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD2)
    {
        //[UserButtonCode_FDCP_TY_FD2] -- add your button handler code here..
        MidiLayerNum =8;
        SetNO_BT(FDCP_TY_FD2);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD2->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD2]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD3)
    {
        //[UserButtonCode_FDCP_TY_FD3] -- add your button handler code here..
        MidiLayerNum = 15;
        SetNO_BT(FDCP_TY_FD3);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD3->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD3]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD4)
    {
        //[UserButtonCode_FDCP_TY_FD4] -- add your button handler code here..
        MidiLayerNum = 22;
        SetNO_BT(FDCP_TY_FD4);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD4->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD4]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD5)
    {
        //[UserButtonCode_FDCP_TY_FD5] -- add your button handler code here..
        MidiLayerNum = 29;
        SetNO_BT(FDCP_TY_FD5);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD5->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD5]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD6)
    {
        //[UserButtonCode_FDCP_TY_FD6] -- add your button handler code here..
        MidiLayerNum =36;
        SetNO_BT(FDCP_TY_FD6);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD6->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD6]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD7)
    {
        //[UserButtonCode_FDCP_TY_FD7] -- add your button handler code here..
        MidiLayerNum =43;
        SetNO_BT(FDCP_TY_FD7);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD7->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD7]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD8)
    {
        //[UserButtonCode_FDCP_TY_FD8] -- add your button handler code here..
        MidiLayerNum = 50;
        SetNO_BT(FDCP_TY_FD8);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD8->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD8]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD9)
    {
        //[UserButtonCode_FDCP_TY_FD9] -- add your button handler code here..
        MidiLayerNum = 57;
        SetNO_BT(FDCP_TY_FD9);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD9->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD9]
    }
    else if (buttonThatWasClicked == FDCP_TY_EXP)
    {
        //[UserButtonCode_FDCP_TY_EXP] -- add your button handler code here..
        MidiLayerNum = 632;
        SetNO_BT(FDCP_TY_EXP);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_EXP->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_EXP]
    }
    else if (buttonThatWasClicked == FDCP_TY_FOOT)
    {
        //[UserButtonCode_FDCP_TY_FOOT] -- add your button handler code here..
        Push_or_Turn =0;
        MidiLayerNum = 639;
        SetNO_BT(FDCP_TY_FOOT);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FOOT->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FOOT]
    }
    else if (buttonThatWasClicked == FDCP_BEH_FOOT)
    {
        //[UserButtonCode_FDCP_BEH_FOOT] -- add your button handler code here..
        if (!(FcBt[10].BT2->getButtonText().compare("MMC") == 0) && !(FcBt[10].BT2->getButtonText().compare("Program") == 0) 
			&& !(FcBt[10].BT2->getButtonText().compare("CC")==0 && (FcBt[10].BT4->getButtonText().compare("Inc/+1")==0 || FcBt[10].BT4->getButtonText().compare("Dec/-1")==0)))
		{
            MidiLayerNum = 643;
            SetNO_BT(FDCP_BEH_FOOT);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, FDCP_BEH_FOOT->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FDCP_BEH_FOOT]
    }
    else if (buttonThatWasClicked == FADE_NO1)
    {
        //[UserButtonCode_FADE_NO1] -- add your button handler code here..
        MidiLayerNum = 2;
		if (FDCP_TY_FD1->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD1->getButtonText().compare("Program") == */)
        {

            SetNO_BT(FADE_NO1);
            num = ConventNO_BTtoInt(FADE_NO1->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO1->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD1->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO1);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO1->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO1]
    }
    else if (buttonThatWasClicked == FADE_NO2)
    {
        //[UserButtonCode_FADE_NO2] -- add your button handler code here..
        MidiLayerNum =9;
		if (FDCP_TY_FD2->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD2->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO2);
            num = ConventNO_BTtoInt(FADE_NO2->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO2->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD2->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO2);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO2->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO2]
    }
    else if (buttonThatWasClicked == FADE_NO3)
    {
        //[UserButtonCode_FADE_NO3] -- add your button handler code here..
        MidiLayerNum = 16;
		if (FDCP_TY_FD3->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD3->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO3);
            num = ConventNO_BTtoInt(FADE_NO3->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO3->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD3->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO3);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO3->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO3]
    }
    else if (buttonThatWasClicked == FADE_NO4)
    {
        //[UserButtonCode_FADE_NO4] -- add your button handler code here..
        MidiLayerNum = 23;
		if (FDCP_TY_FD4->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD4->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO4);
            num = ConventNO_BTtoInt(FADE_NO4->getButtonText());
            CC_VP  = new CC_Viewport_Component ();

            CallOutBox::launchAsynchronously(CC_VP, FADE_NO4->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD4->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO4);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO4->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO4]
    }
    else if (buttonThatWasClicked == FADE_NO5)
    {
        //[UserButtonCode_FADE_NO5] -- add your button handler code here..
        MidiLayerNum = 30;
		if (FDCP_TY_FD5->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD5->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO5);
            num = ConventNO_BTtoInt(FADE_NO5->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO5->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD5->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO5);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO5->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO5]
    }
    else if (buttonThatWasClicked == FADE_NO6)
    {
        //[UserButtonCode_FADE_NO6] -- add your button handler code here..
        MidiLayerNum =37;
		if (FDCP_TY_FD6->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD6->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO6);
            num = ConventNO_BTtoInt(FADE_NO6->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO6->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD6->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO6);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO6->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO6]
    }
    else if (buttonThatWasClicked == FADE_NO7)
    {
        //[UserButtonCode_FADE_NO7] -- add your button handler code here..
        MidiLayerNum =44;
		if (FDCP_TY_FD7->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD7->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO7);
            num = ConventNO_BTtoInt(FADE_NO7->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO7->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD7->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO7);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO7->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO7]
    }
    else if (buttonThatWasClicked == FADE_NO8)
    {
        //[UserButtonCode_FADE_NO8] -- add your button handler code here..
        MidiLayerNum =51;
		if (FDCP_TY_FD8->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD8->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO8);
            num = ConventNO_BTtoInt(FADE_NO8->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO8->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD8->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO8);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO8->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO8]
    }
    else if (buttonThatWasClicked == FADE_NO9)
    {
        //[UserButtonCode_FADE_NO9] -- add your button handler code here..
        MidiLayerNum = 58;
		if (FDCP_TY_FD9->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD9->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO9);
            num = ConventNO_BTtoInt(FADE_NO9->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO9->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD9->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO9);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO9->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO9]
    }
    else if (buttonThatWasClicked == FADE_NO10)
    {
        //[UserButtonCode_FADE_NO10] -- add your button handler code here..
        MidiLayerNum = 633;
		if (FDCP_TY_EXP->getButtonText().compare("CC") == 0 /*|| FDCP_TY_EXP->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO10);
            num = ConventNO_BTtoInt(FADE_NO10->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO10->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_EXP->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO10);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO10->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO10]
    }
    else if (buttonThatWasClicked == FADE_NO11)
    {
        //[UserButtonCode_FADE_NO11] -- add your button handler code here..
        MidiLayerNum = 640;
        if (FDCP_TY_FOOT->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FOOT->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(FADE_NO11);
            num = ConventNO_BTtoInt(FADE_NO11->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO11->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FOOT->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(FADE_NO11);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO11->getScreenBounds(), nullptr);
        }
        else if (FDCP_TY_FOOT->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(FADE_NO11);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, FADE_NO11->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO11]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void FadersAndFootCompactComponent::CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged)
{

}

void FadersAndFootCompactComponent::CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(0);
    pMainComponent->FaderorOtherFlag =0;
	GetCustomBtID();
    for (int i = 0; i < 10; i++)
    {
        if (FcBt[i].BT4 == buttonThatWasClicked || FcBt[i].BT5 == buttonThatWasClicked)
        {
            if (!(FcBt[i].BT2->getButtonText().compare("MMC") == 0) /*&& !(EMBt[i].BT2->getButtonText().compare("Pitch") == 0)*/)
            {
                if (buttonThatWasClicked == pCustomImageButton1)
                {
                    this->MidiLayerNum = 3;
                    SetCurrentCustomBT(pCustomImageButton1);
                    pViewPortComponent = new ViewPortComponent();
                    //CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
                    MyCallOutBox(pViewPortComponent, pCustomImageButton1);
                    //pCustomImageButton1->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton2)
                {
                    this->MidiLayerNum = 10;
                    SetCurrentCustomBT(pCustomImageButton2);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton2);
                    //pCustomImageButton2->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton3)
                {
                    this->MidiLayerNum = 17;
                    SetCurrentCustomBT(pCustomImageButton3);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton3);
                    //pCustomImageButton3->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton4)
                {
                    this->MidiLayerNum = 24;
                    SetCurrentCustomBT(pCustomImageButton4);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton4);
                    //pCustomImageButton4->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton5)
                {
                    this->MidiLayerNum = 31;
                    SetCurrentCustomBT(pCustomImageButton5);
                    pViewPortComponent = new ViewPortComponent();
                    //CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
                    MyCallOutBox(pViewPortComponent, pCustomImageButton5);
                    //pCustomImageButton1->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton6)
                {
                    this->MidiLayerNum = 38;
                    SetCurrentCustomBT(pCustomImageButton6);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton6);
                    //pCustomImageButton2->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton7)
                {
                    this->MidiLayerNum = 45;
                    SetCurrentCustomBT(pCustomImageButton7);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton7);
                    //pCustomImageButton3->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton8)
                {
                    this->MidiLayerNum = 52;
                    SetCurrentCustomBT(pCustomImageButton8);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton8);
                    //pCustomImageButton4->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton9)
                {
                    this->MidiLayerNum = 4;
                    SetCurrentCustomBT(pCustomImageButton9);
                    pViewPortComponent = new ViewPortComponent();
                    //CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
                    MyCallOutBox(pViewPortComponent, pCustomImageButton9);
                    //pCustomImageButton1->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton10)
                {
                    this->MidiLayerNum = 11;
                    SetCurrentCustomBT(pCustomImageButton10);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton10);
                    //pCustomImageButton2->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton11)
                {
                    this->MidiLayerNum = 18;
                    SetCurrentCustomBT(pCustomImageButton11);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton11);
                    //pCustomImageButton3->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton12)
                {
                    this->MidiLayerNum = 25;
                    SetCurrentCustomBT(pCustomImageButton12);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton12);
                    //pCustomImageButton4->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton13)
                {
                    this->MidiLayerNum = 32;
                    SetCurrentCustomBT(pCustomImageButton13);
                    pViewPortComponent = new ViewPortComponent();
                    //CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
                    MyCallOutBox(pViewPortComponent, pCustomImageButton13);
                    //pCustomImageButton1->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton14)
                {
                    this->MidiLayerNum = 39;
                    SetCurrentCustomBT(pCustomImageButton14);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton14);
                    //pCustomImageButton2->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton15)
                {
                    this->MidiLayerNum = 46;
                    SetCurrentCustomBT(pCustomImageButton15);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton15);
                    //pCustomImageButton3->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton16)
                {
                    this->MidiLayerNum = 53;
                    SetCurrentCustomBT(pCustomImageButton16);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton16);
                    //pCustomImageButton4->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton17)
                {
                    this->MidiLayerNum = 59;
                    SetCurrentCustomBT(pCustomImageButton17);
                    pViewPortComponent = new ViewPortComponent();
                    //CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
                    MyCallOutBox(pViewPortComponent, pCustomImageButton17);
                    //pCustomImageButton1->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton18)
                {
                    this->MidiLayerNum = 634;
                    SetCurrentCustomBT(pCustomImageButton18);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton18);
                    //pCustomImageButton2->setToggleState(1,dontSendNotification);
                }
                
                else if (buttonThatWasClicked == pCustomImageButton20)
                {
                    this->MidiLayerNum = 60;
                    SetCurrentCustomBT(pCustomImageButton20);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, pCustomImageButton20);
                    //pCustomImageButton4->setToggleState(1,dontSendNotification);
                }
                else if (buttonThatWasClicked == pCustomImageButton21)
                {
                    this->MidiLayerNum = 635;;
                    SetCurrentCustomBT(pCustomImageButton21);
                    pViewPortComponent = new ViewPortComponent();
                    //CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
                    MyCallOutBox(pViewPortComponent, pCustomImageButton21);
                    //pCustomImageButton1->setToggleState(1,dontSendNotification);
                }
               
            }
        }
    }
	if (buttonThatWasClicked == pCustomImageButton19)
	{
		if (!(FcBt[10].BT2->getButtonText().compare("MMC") == 0) /*&& !(BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0)*/)
		{
			if(FcBt[10].BT2->getButtonText().compare("Note")==0 || FcBt[10].BT2->getButtonText().compare("Pitch")==0)
				pMainComponent->FaderorOtherFlag =0;
			else if(FcBt[10].BT2->getButtonText().compare("CC")==0 || FcBt[10].BT2->getButtonText().compare("Program")==0)
				pMainComponent->FaderorOtherFlag = 1;
			this->MidiLayerNum = 641;
			SetCurrentCustomBT(pCustomImageButton19);
			pViewPortComponent = new ViewPortComponent();

			MyCallOutBox(pViewPortComponent, pCustomImageButton19);
			//pCustomImageButton3->setToggleState(1,dontSendNotification);
		}
	}
	else if (buttonThatWasClicked == pCustomImageButton22)
	{
		if (!(FcBt[10].BT2->getButtonText().compare("MMC") == 0) /*&& !(BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0)*/)
        {
			if(!((FcBt[10].BT2->getButtonText().compare("Program") == 0) && FcBt[10].BT5 == buttonThatWasClicked ))
			{
				if(!(FcBt[10].BT5 == buttonThatWasClicked && (FcBt[10].BT4->getButtonText().compare("Inc/+1")==0 || FcBt[10].BT4->getButtonText().compare("Dec/-1")==0))){
					if (buttonThatWasClicked == pCustomImageButton1)
						pMainComponent->FaderorOtherFlag = 0;
						this->MidiLayerNum = 642;
						SetCurrentCustomBT(pCustomImageButton22);
						pViewPortComponent = new ViewPortComponent();

						MyCallOutBox(pViewPortComponent, pCustomImageButton22);
				}
			}
		}
		//pCustomImageButton2->setToggleState(1,dontSendNotification);
	}

    for (int i = 0; i < 11; i++)
    {
        if (buttonThatWasClicked == MSB[i])
        {
            if (FcBt[i].BT7 == MSB[i])
            {
                if (FcBt[i].BT2->getButtonText().compare("Program") == 0 /*|| BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0*/)
                {
                    pMainComponent->FaderorOtherFlag = 0;
					if(i == 9)
						this->MidiLayerNum = 636;
					else if(i ==10)
						this->MidiLayerNum = 644;
					else
						this->MidiLayerNum = 5 + 7 * i;
                    SetCurrentCustomBT(MSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, MSB[i]);
                }
            }
        }
        else if (buttonThatWasClicked == LSB[i])
        {
            if (FcBt[i].BT8 == LSB[i])
            {
                if (FcBt[i].BT2->getButtonText().compare("Program") == 0)
                {
                    pMainComponent->FaderorOtherFlag = 0;
					if(i == 9)
						this->MidiLayerNum = 637;
					else if(i ==10)
						this->MidiLayerNum = 645;
					else
						this->MidiLayerNum = 6 + 7 * i;
                    SetCurrentCustomBT(LSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, LSB[i]);
                }
            }
        }
    }
}

void FadersAndFootCompactComponent::CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged)
{
    Load_or_SaveFlag =1;
	pMainComponent-> ChangeEditedButtonImClose();
    
	for(int i =0;i<11;i++)
	{
		if(CustomTextButtonThatHasChanged == FcBt[i].BT1)
		{
			if(!(FcBt[i].BT1->GetValue().toString().compare("Off")==0) && !(FcBt[i].BT1->GetValue().toString().compare("Global")==0))
			{
				String s=FcBt[i].BT1->GetValue().toString();
				if(FcBt[i].BT1->GetValue().toString().getLastCharacters(1).compare("*")==0)
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() != FcBt[i].BT1->GetValue().toString().dropLastCharacters(1).getIntValue())					
						FcBt[i].BT1->setButtonText(FcBt[i].BT1->GetValue().toString().dropLastCharacters(1));
					
				}
				else
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() == FcBt[i].BT1->GetValue().toString().getIntValue())		
						FcBt[i].BT1->setButtonText(FcBt[i].BT1->GetValue().toString()+"*");
				}
			}
		}
	}
}

void FadersAndFootCompactComponent::CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(0);
    pMainComponent->GlobalorOFF = 1;
	GetCustomBtID();
     if(buttonThatWasClicked == pfader1)
    {
        MidiLayerNum = 0;
        SetCurrentCustomBT2(pfader1);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader1);
    }
    else if(buttonThatWasClicked == pfader2)
    {
        MidiLayerNum = 7;
        SetCurrentCustomBT2(pfader2);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader2);
    }
    else if(buttonThatWasClicked == pfader3)
    {
        MidiLayerNum = 14;
        SetCurrentCustomBT2(pfader3);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader3);
    }
    else if(buttonThatWasClicked == pfader4)
    {
        MidiLayerNum = 21;
        SetCurrentCustomBT2(pfader4);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader4);
    }
    else if(buttonThatWasClicked == pfader5)
    {
        MidiLayerNum = 28;
        SetCurrentCustomBT2(pfader5);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader5);
    }
    else if(buttonThatWasClicked == pfader6)
    {
        MidiLayerNum = 35;
        SetCurrentCustomBT2(pfader6);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader6);
    }
    else if(buttonThatWasClicked == pfader7)
    {
        MidiLayerNum = 42;
        SetCurrentCustomBT2(pfader7);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader7);
    }
    else if(buttonThatWasClicked == pfader8)
    {
        MidiLayerNum = 49;
        SetCurrentCustomBT2(pfader8);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader8);
    }
    else if(buttonThatWasClicked == pfader9)
    {
        MidiLayerNum = 56;
        SetCurrentCustomBT2(pfader9);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader9);
    }
    else if(buttonThatWasClicked == pfader10)
    {
        MidiLayerNum = 631;
        SetCurrentCustomBT2(pfader10);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader10);
    }
    else if(buttonThatWasClicked == pfader11)
    {
        MidiLayerNum = 638;
        SetCurrentCustomBT2(pfader11);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader11);
    }
}

CallOutBox & FadersAndFootCompactComponent::MyCallOutBox(Component *p,Button* buttonThatWasClicked)
{
    CallOutBox & mycall = CallOutBox::launchAsynchronously(p, buttonThatWasClicked->getScreenBounds(), nullptr);
    return mycall;
}

void FadersAndFootCompactComponent:: SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT = currentbuttonThatWasClicked;
 }

 CustomImageButton* FadersAndFootCompactComponent:: GetCurrentCustomBT()
 {
     return CurrentCustomBT;
 }

 void FadersAndFootCompactComponent:: SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT2 = currentbuttonThatWasClicked;
 }

 CustomTextButton* FadersAndFootCompactComponent:: GetCurrentCustomBT2()
 {
     return CurrentCustomBT2;
 }

 void FadersAndFootCompactComponent::SetNO_BT(Button* buttonThatWasClicked)
 {
     NO_BT = buttonThatWasClicked;
 }
 Button* FadersAndFootCompactComponent::GetNO_BT()
 {
    return NO_BT;
 }

   int FadersAndFootCompactComponent::ConventNO_BTtoInt(String JK)
 {
     /*int r;
     JK = JK.substring (2);
     //BTCO_CH_BT17->setButtonText(JK);
     r = JK.getIntValue();
     return r;*/
     int r;
     //String ss
     String sa = JK.substring(0, 2);
     if (sa.compare("CC") == 0)
     {
         JK = JK.substring(2);
         //BTCO_CH_BT17->setButtonText(JK);
         r = JK.getIntValue();
         return r;
     }
     else
     {
         r = JK.getIntValue();
         return r;
     }
 }

 int FadersAndFootCompactComponent::GetNum()
 {
    return num;
 }

 void FadersAndFootCompactComponent::GetCustomBtID()
 {
	 for(int i=0;i<9;i++)
	 {
         if (!(FcBt[i].BT1->getButtonText().compare("Global") == 0) && !(FcBt[i].BT1->getButtonText().compare("Off") == 0) && !(FcBt[i].BT1->getButtonText().compare("Off*") == 0))
		    ConstMidiLayerMessage[0+i*7] = (unsigned char)(FcBt[i].BT1->getButtonText().getIntValue()-1)*0x01;

		 ConstMidiLayerMessage[3+i*7] = (unsigned char)(FcBt[i].BT4->getButtonText().getIntValue())*0x01;
		 ConstMidiLayerMessage[4+i*7] = (unsigned char)(FcBt[i].BT5->getButtonText().getIntValue())*0x01;

        if (ConstMidiLayerMessage[1 + i * 7] == 0x03 ){
            ConstMidiLayerMessage[5 + i * 7] = (unsigned char)(FcBt[i].BT7->getButtonText().getIntValue()) * 0x01;
            ConstMidiLayerMessage[6 + i * 7] = (unsigned char)(FcBt[i].BT8->getButtonText().getIntValue()) * 0x01;
        }
	 }
	 if (!(FcBt[9].BT1->getButtonText().compare("Global") == 0) && !(FcBt[9].BT1->getButtonText().compare("Off") == 0) && !(FcBt[9].BT1->getButtonText().compare("Off*") == 0))
		ConstMidiLayerMessage[631] = (unsigned char)(FcBt[9].BT1->getButtonText().getIntValue()-1)*0x01;
	 ConstMidiLayerMessage[634] = (unsigned char)(FcBt[9].BT4->getButtonText().getIntValue())*0x01;
	 ConstMidiLayerMessage[635] = (unsigned char)(FcBt[9].BT5->getButtonText().getIntValue())*0x01;

	 if (ConstMidiLayerMessage[632] == 0x03 ){
            ConstMidiLayerMessage[636] = (unsigned char)(FcBt[9].BT7->getButtonText().getIntValue()) * 0x01;
            ConstMidiLayerMessage[637] = (unsigned char)(FcBt[9].BT8->getButtonText().getIntValue()) * 0x01;
	 }


	 if (!(FcBt[10].BT1->getButtonText().compare("Global") == 0) && !(FcBt[10].BT1->getButtonText().compare("Off") == 0) && !(FcBt[10].BT1->getButtonText().compare("Off*") == 0))
	 ConstMidiLayerMessage[638] = (unsigned char)(FcBt[10].BT1->getButtonText().getIntValue()-1)*0x01;
	 if(FcBt[10].BT4->getButtonText().compare("Dec/-1") == 0)
		 ConstMidiLayerMessage[641]=0x80;
     else if(FcBt[10].BT4->getButtonText().compare("Inc/+1") == 0)
		 ConstMidiLayerMessage[641]=0x81;
	 else if(FcBt[10].BT4->getButtonText().compare("Relative") == 0)
		 ConstMidiLayerMessage[641]=0x82;
	 else
		 ConstMidiLayerMessage[641] = (unsigned char)(FcBt[10].BT4->getButtonText().getIntValue())*0x01;

	 if (!(FcBt[10].BT5->getButtonText().compare("-") == 0))
		ConstMidiLayerMessage[642] = (unsigned char)(FcBt[10].BT5->getButtonText().getIntValue())*0x01;

	 if (ConstMidiLayerMessage[639] == 0x03 ){
            ConstMidiLayerMessage[644] = (unsigned char)(FcBt[10].BT7->getButtonText().getIntValue()) * 0x01;
            ConstMidiLayerMessage[645] = (unsigned char)(FcBt[10].BT8->getButtonText().getIntValue()) * 0x01;
	 }
 }

 void FadersAndFootCompactComponent::SetAllButtonState(bool s)
 {
	for(int i = 0;i<11;i++)
	{
		FcBt[i].BT1 ->setEnabled(s);
		FcBt[i].BT2 ->setEnabled(s);
		FcBt[i].BT3 ->setEnabled(s);
		FcBt[i].BT4 ->setEnabled(s);
		FcBt[i].BT5 ->setEnabled(s);
        FcBt[i].BT7->setEnabled(s);
        FcBt[i].BT8->setEnabled(s);
		//FcBt[i].BT6 ->setEnabled(s);
	}
	FcBt[10].BT6 ->setEnabled(s);
 }

 void FadersAndFootCompactComponent::MakeButtonPointToBtGroup()
 {
     FcBt[0].BT1 = pfader1;
     FcBt[0].BT2 = FDCP_TY_FD1;
     FcBt[0].BT3 = FADE_NO1;
     FcBt[0].BT4 = pCustomImageButton1;
     FcBt[0].BT5 = pCustomImageButton9;
     FcBt[0].BT7 = MSB[0];
     FcBt[0].BT8 = LSB[0];

     FcBt[1].BT1 = pfader2;
     FcBt[1].BT2 = FDCP_TY_FD2;
     FcBt[1].BT3 = FADE_NO2;
     FcBt[1].BT4 = pCustomImageButton2;
     FcBt[1].BT5 = pCustomImageButton10;
     FcBt[1].BT7 = MSB[1];
     FcBt[1].BT8 = LSB[1];

     FcBt[2].BT1 = pfader3;
     FcBt[2].BT2 = FDCP_TY_FD3;
     FcBt[2].BT3 = FADE_NO3;
     FcBt[2].BT4 = pCustomImageButton3;
     FcBt[2].BT5 = pCustomImageButton11;
     FcBt[2].BT7 = MSB[2];
     FcBt[2].BT8 = LSB[2];

     FcBt[3].BT1 = pfader4;
     FcBt[3].BT2 = FDCP_TY_FD4;
     FcBt[3].BT3 = FADE_NO4;
     FcBt[3].BT4 = pCustomImageButton4;
     FcBt[3].BT5 = pCustomImageButton12;
     FcBt[3].BT7 = MSB[3];
     FcBt[3].BT8 = LSB[3];

     FcBt[4].BT1 = pfader5;
     FcBt[4].BT2 = FDCP_TY_FD5;
     FcBt[4].BT3 = FADE_NO5;
     FcBt[4].BT4 = pCustomImageButton5;
     FcBt[4].BT5 = pCustomImageButton13;
     FcBt[4].BT7 = MSB[4];
     FcBt[4].BT8 = LSB[4];

     FcBt[5].BT1 = pfader6;
     FcBt[5].BT2 = FDCP_TY_FD6;
     FcBt[5].BT3 = FADE_NO6;
     FcBt[5].BT4 = pCustomImageButton6;
     FcBt[5].BT5 = pCustomImageButton14;
     FcBt[5].BT7 = MSB[5];
     FcBt[5].BT8 = LSB[5];

     FcBt[6].BT1 = pfader7;
     FcBt[6].BT2 = FDCP_TY_FD7;
     FcBt[6].BT3 = FADE_NO7;
     FcBt[6].BT4 = pCustomImageButton7;
     FcBt[6].BT5 = pCustomImageButton15;
     FcBt[6].BT7 = MSB[6];
     FcBt[6].BT8 = LSB[6];

     FcBt[7].BT1 = pfader8;
     FcBt[7].BT2 = FDCP_TY_FD8;
     FcBt[7].BT3 = FADE_NO8;
     FcBt[7].BT4 = pCustomImageButton8;
     FcBt[7].BT5 = pCustomImageButton16;
     FcBt[7].BT7 = MSB[7];
     FcBt[7].BT8 = LSB[7];

     FcBt[8].BT1 = pfader9;
     FcBt[8].BT2 = FDCP_TY_FD9;
     FcBt[8].BT3 = FADE_NO9;
     FcBt[8].BT4 = pCustomImageButton17;
     FcBt[8].BT5 = pCustomImageButton20;
     FcBt[8].BT7 = MSB[8];
     FcBt[8].BT8 = LSB[8];

     FcBt[9].BT1 = pfader10;
     FcBt[9].BT2 = FDCP_TY_EXP;
     FcBt[9].BT3 = FADE_NO10;
     FcBt[9].BT4 = pCustomImageButton18;
     FcBt[9].BT5 = pCustomImageButton21;
     FcBt[9].BT7 = MSB[9];
     FcBt[9].BT8 = LSB[9];

     FcBt[10].BT1 = pfader11;
     FcBt[10].BT2 = FDCP_TY_FOOT;
     FcBt[10].BT3 = FADE_NO11;
     FcBt[10].BT4 = pCustomImageButton19;
     FcBt[10].BT5 = pCustomImageButton22;
     FcBt[10].BT6 = FDCP_BEH_FOOT;
     FcBt[10].BT7 = MSB[10];
     FcBt[10].BT8 = LSB[10];
 }

 void FadersAndFootCompactComponent::UpdateFaderCompactBt(int s)
 {

     for(int i=0;i<9;i++)
     {
         if (ConstMidiLayerMessage[s + 7 * i] == 17*0x01)       FcBt[i].BT1->setButtonText("Global");
         else if (ConstMidiLayerMessage[s + 7 * i] == 18 * 0x01){  
			if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == ConstMidiLayerMessage[s + 7 * i] )
				FcBt[i].BT1->setButtonText("Off*");
			else			
				FcBt[i].BT1->setButtonText("Off");
		 }
		 else{
			if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == ConstMidiLayerMessage[s + 7 * i] )
				FcBt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 7 * i]+0x01)+"*");
			else
				FcBt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 7 * i]+0x01));
		 }

         if(ConstMidiLayerMessage[s+7*i+1] ==0x00) {                        FcBt[i].BT2->setButtonText("CC");           FcBt[i].BT3->setButtonText("CC"+String(ConstMidiLayerMessage[s+7*i+2]));                       }
         else if(ConstMidiLayerMessage[s+7*i+1] ==0x01) {           FcBt[i].BT2->setButtonText("Note");        FcBt[i].BT3->setButtonText(Midimusic[ConstMidiLayerMessage[s+7*i+2]]);   }
         else if(ConstMidiLayerMessage[s+7*i+1] ==0x02) {           FcBt[i].BT2->setButtonText("Pitch");        FcBt[i].BT3->setButtonText("-");                                                                 }
         else if (ConstMidiLayerMessage[s + 7 * i + 1] == 0x03) {   FcBt[i].BT2->setButtonText("Program");   FcBt[i].BT3->setButtonText(/*String(CCBT[ConstMidiLayerMessage[s + 5 * i + 2]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 7 * i + 1] == 0x04) { FcBt[i].BT2->setButtonText("MMC");       FcBt[i].BT3->setButtonText(String(MMC_Functions_e[ConstMidiLayerMessage[s + 7 * i + 2]])); }
         
         if (ConstMidiLayerMessage[s + 7 * i + 1] != 0x04)
         {
             if (ConstMidiLayerMessage[s + 7 * i + 3] == 0x80)             FcBt[i].BT4->setButtonText("Dec/-1");
             else if (ConstMidiLayerMessage[s + 7 * i + 3] == 0x81)             FcBt[i].BT4->setButtonText("Inc/+1");
             else                                                                         FcBt[i].BT4->setButtonText(String(ConstMidiLayerMessage[s + 7 * i + 3]));

             if (ConstMidiLayerMessage[s + 7 * i + 3] == 0x80 || ConstMidiLayerMessage[s + 7 * i + 3] == 0x81)
                 FcBt[i].BT5->setButtonText("-");
             else                   
             {
                 if (ConstMidiLayerMessage[s + 7 * i + 4] == 0x80)             FcBt[i].BT5->setButtonText("Dec/-1");
                 else if (ConstMidiLayerMessage[s + 7 * i + 4] == 0x81)             FcBt[i].BT5->setButtonText("Inc/+1");
                 else                                                                         FcBt[i].BT5->setButtonText(String(ConstMidiLayerMessage[s + 7 * i + 4]));
             }
         }
         else
         {
             FcBt[i].BT4->setButtonText("-");
             FcBt[i].BT5->setButtonText("-");
         }
         if (ConstMidiLayerMessage[s + 7 * i + 1] == 0x03 ) {
             FcBt[i].BT7->setButtonText(String(ConstMidiLayerMessage[s + 7 * i + 5]));
             FcBt[i].BT8->setButtonText(String(ConstMidiLayerMessage[s + 7 * i + 6]));
         }
         else
         {
             FcBt[i].BT7->setButtonText("-");
             FcBt[i].BT8->setButtonText("-");
         }
     }

     if (ConstMidiLayerMessage[631] == 17*0x01)       FcBt[9].BT1->setButtonText("Global");
     else if (ConstMidiLayerMessage[631] == 18 * 0x01){  
	 if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == ConstMidiLayerMessage[631] )
	 	FcBt[9].BT1->setButtonText("Off*");
	 else			
	 	FcBt[9].BT1->setButtonText("Off");
	 }
	 else{
	 if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == ConstMidiLayerMessage[631] )
	 	FcBt[9].BT1->setButtonText(String(ConstMidiLayerMessage[631]+0x01)+"*");
	 else
	 	FcBt[9].BT1->setButtonText(String(ConstMidiLayerMessage[631]+0x01));
	 }

     if(ConstMidiLayerMessage[632] ==0) {                        FcBt[9].BT2->setButtonText("CC");           FcBt[9].BT3->setButtonText("CC"+String(ConstMidiLayerMessage[633]));                       }
     else if(ConstMidiLayerMessage[632] ==0x01) {           FcBt[9].BT2->setButtonText("Note");        FcBt[9].BT3->setButtonText(Midimusic[ConstMidiLayerMessage[633]]);   }
     else if(ConstMidiLayerMessage[632] ==0x02) {           FcBt[9].BT2->setButtonText("Pitch");        FcBt[9].BT3->setButtonText("-");                                                                 }
     else if (ConstMidiLayerMessage[632] == 0x03) { FcBt[9].BT2->setButtonText("Program");   FcBt[9].BT3->setButtonText(/*String(CCBT[ConstMidiLayerMessage[633]])*/"-"); }
     else if (ConstMidiLayerMessage[632] == 0x04) { FcBt[9].BT2->setButtonText("MMC");       FcBt[9].BT3->setButtonText(String(MMC_Functions_e[ConstMidiLayerMessage[633]])); }
     
     if (ConstMidiLayerMessage[633] != 0x04)
     {
         if (ConstMidiLayerMessage[634] == 0x80)             FcBt[9].BT4->setButtonText("Dec/-1");
         else if (ConstMidiLayerMessage[634] == 0x81)             FcBt[9].BT4->setButtonText("Inc/+1");
         else                                                                         FcBt[9].BT4->setButtonText(String(ConstMidiLayerMessage[634]));
         
         if (ConstMidiLayerMessage[634] == 0x80 || ConstMidiLayerMessage[634] == 0x81)
             FcBt[9].BT5->setButtonText("-");
         else
         {
             if (ConstMidiLayerMessage[635] == 0x80)             FcBt[9].BT5->setButtonText("Dec/-1");
             else if (ConstMidiLayerMessage[635] == 0x81)             FcBt[9].BT5->setButtonText("Inc/+1");
             else                                                                         FcBt[9].BT5->setButtonText(String(ConstMidiLayerMessage[635]));
         }
     }
     else
     {
         FcBt[9].BT4->setButtonText("-");
         FcBt[9].BT5->setButtonText("-");
     }
     if (ConstMidiLayerMessage[632] == 0x03 ) {
        FcBt[9].BT7->setButtonText(String(ConstMidiLayerMessage[636]));
        FcBt[9].BT8->setButtonText(String(ConstMidiLayerMessage[637]));
     }
     else
     {
        FcBt[9].BT7->setButtonText("-");
        FcBt[9].BT8->setButtonText("-");
     }

     if (ConstMidiLayerMessage[638] == 17*0x01)       FcBt[10].BT1->setButtonText("Global");
     else if (ConstMidiLayerMessage[638] == 18 * 0x01){  
	 if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == ConstMidiLayerMessage[638] )
	 	FcBt[10].BT1->setButtonText("Off*");
	 else			
	 	FcBt[10].BT1->setButtonText("Off");
	 }
	 else{
	 if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == ConstMidiLayerMessage[638] )
	 	FcBt[10].BT1->setButtonText(String(ConstMidiLayerMessage[638]+0x01)+"*");
	 else
	 	FcBt[10].BT1->setButtonText(String(ConstMidiLayerMessage[638]+0x01));
	 }

     if(ConstMidiLayerMessage[639] ==0) {                   FcBt[10].BT2->setButtonText("CC");          FcBt[10].BT3->setButtonText("CC"+String(ConstMidiLayerMessage[640]));                       }
     else if(ConstMidiLayerMessage[639] ==0x01) {           FcBt[10].BT2->setButtonText("Note");        FcBt[10].BT3->setButtonText(Midimusic[ConstMidiLayerMessage[640]]);   }
     else if(ConstMidiLayerMessage[639] ==0x02) {           FcBt[10].BT2->setButtonText("Pitch");        FcBt[10].BT3->setButtonText("-");                                                                 }
     else if (ConstMidiLayerMessage[639] == 0x03) { FcBt[10].BT2->setButtonText("Program");   FcBt[10].BT3->setButtonText(/*String(CCBT[ConstMidiLayerMessage[640]])*/"-"); }
     else if (ConstMidiLayerMessage[639] == 0x04) { FcBt[10].BT2->setButtonText("MMC");       FcBt[10].BT3->setButtonText(String(MMC_Functions_e[ConstMidiLayerMessage[640]])); }
     
     if (/*MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x02 &&*/ ConstMidiLayerMessage[639] != 0x04)
     {
             if (ConstMidiLayerMessage[641] == 0x80)
			 {
				 if(ConstMidiLayerMessage[639] != 0x01 && ConstMidiLayerMessage[639] != 0x02)
					FcBt[10].BT4->setButtonText("Dec/-1");  
				 else{
					 FcBt[10].BT4->setButtonText("0");  ConstMidiLayerMessage[641]= 0;}				 
			 }
             else if (ConstMidiLayerMessage[641] == 0x81)
			 {
				 if(ConstMidiLayerMessage[639] != 0x01 && ConstMidiLayerMessage[639] != 0x02)
					FcBt[10].BT4->setButtonText("Inc/+1");  
				 else{
					 FcBt[10].BT4->setButtonText("0");  ConstMidiLayerMessage[641 ]= 0;}
			 }
             else  FcBt[10].BT4->setButtonText(String(ConstMidiLayerMessage[641]));
             
             if (ConstMidiLayerMessage[641] == 0x80 || ConstMidiLayerMessage[641] == 0x81 || ConstMidiLayerMessage[639] == 0x03)
                 FcBt[10].BT5->setButtonText("-");
             else{
                 if (ConstMidiLayerMessage[642] == 0x80)             FcBt[10].BT5->setButtonText("Dec/-1");
                 else if (ConstMidiLayerMessage[642] == 0x81)             FcBt[10].BT5->setButtonText("Inc/+1");
                 else                                                                                    FcBt[10].BT5->setButtonText(String(ConstMidiLayerMessage[642]));
             }

			 if(ConstMidiLayerMessage[639] == 0x03)
			 {
				 FcBt[10].BT6->setButtonText("Momentary");
			 }
			 else if(ConstMidiLayerMessage[639] == 0x00 && (ConstMidiLayerMessage[641] == 0x80 || ConstMidiLayerMessage[641] == 0x81))
			 {
				 FcBt[ 10].BT6->setButtonText("Momentary");
				 ConstMidiLayerMessage[643] = 0;
			 }
			 else
			 {
				if (ConstMidiLayerMessage[643] == 0x00) FcBt[10].BT6->setButtonText("Momentary");
				else FcBt[10].BT6->setButtonText("Toggle");
			 }
         }
    else{
        FcBt[10].BT4->setButtonText("-");
        FcBt[10].BT5->setButtonText("-");
        FcBt[10].BT6->setButtonText("-");
     }
     

     if (ConstMidiLayerMessage[639] == 0x03 ) {
		 FcBt[10].BT7->setButtonText(String(ConstMidiLayerMessage[644]));
		 FcBt[10].BT8->setButtonText(String(ConstMidiLayerMessage[645]));
     }
     else
     {
		 FcBt[10].BT7->setButtonText("-");
		 FcBt[10].BT8->setButtonText("-");
     }

	 repaint();
 }
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="FadersAndFootCompactComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="664" initialHeight="535">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="31 35 609 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="127 12 2 154" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="127 250 2 165" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="31 272 160 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="341 250 2 165" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="248 272 160 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="560 250 2 175" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="469 272 160 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="0 500 672 100" fill="solid: ff333333" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="6daef998c1833eb4" memberName="label_MOVE"
         virtualName="" explicitFocusOrder="0" pos="32 8 64 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MOVE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d18f527664b1e19b" memberName="label_CHANNEL"
         virtualName="" explicitFocusOrder="0" pos="32 38 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="CHANNEL" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ce802d9d5f9cd91c" memberName="label_TYPE"
         virtualName="" explicitFocusOrder="0" pos="32 64 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TYPE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f1a6c94c64d04bc4" memberName="label_NO"
         virtualName="" explicitFocusOrder="0" pos="32 90 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="NO." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f57992ce53267e78" memberName="label_MIN"
         virtualName="" explicitFocusOrder="0" pos="32 116 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MIN VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4f62c401154002be" memberName="label_MAX"
         virtualName="" explicitFocusOrder="0" pos="32 142 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MAX VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f190e2c45221d1cf" memberName="label_FD1"
         virtualName="" explicitFocusOrder="0" pos="144 8 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="158fab2e75ce057e" memberName="label_FD2"
         virtualName="" explicitFocusOrder="0" pos="208 8 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="59784a12467c2edd" memberName="label_FD3"
         virtualName="" explicitFocusOrder="0" pos="272 8 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 3" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8c4b98f9bfb3cc4e" memberName="label_FD4"
         virtualName="" explicitFocusOrder="0" pos="336 8 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 4" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d29c323ead8312a0" memberName="label_FD5"
         virtualName="" explicitFocusOrder="0" pos="400 8 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 5" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5012a250ae45e10c" memberName="label_FD6"
         virtualName="" explicitFocusOrder="0" pos="464 8 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 6" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="262b90710eed34aa" memberName="label_FD7"
         virtualName="" explicitFocusOrder="0" pos="528 8 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 7" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="da92fbab385df26" memberName="label_FD8"
         virtualName="" explicitFocusOrder="0" pos="592 8 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 8" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8a5442ebbc2307ac" memberName="label_MOVE2"
         virtualName="" explicitFocusOrder="0" pos="32 245 64 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MOVE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b380b3ad90bbf467" memberName="label_CHANNEL2"
         virtualName="" explicitFocusOrder="0" pos="32 274 88 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="CHANNEL" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5ee9395199c152fa" memberName="label_TYPE2"
         virtualName="" explicitFocusOrder="0" pos="32 300 88 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TYPE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7df9b34ac393f9c7" memberName="label_NO2"
         virtualName="" explicitFocusOrder="0" pos="32 328 88 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="NO." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="44c99e05c9089e66" memberName="label_MIN2"
         virtualName="" explicitFocusOrder="0" pos="32 354 88 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MIN VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="2481022a0a08cd92" memberName="label_MAX2"
         virtualName="" explicitFocusOrder="0" pos="32 380 72 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MAX VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9c8694219236ee63" memberName="label_FD9"
         virtualName="" explicitFocusOrder="0" pos="144 245 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="FD 9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3534bb41203b6d79" memberName="label_MOVE3"
         virtualName="" explicitFocusOrder="0" pos="246 245 64 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MOVE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d72ffb179f3ba0c7" memberName="label_CHANNEL3"
         virtualName="" explicitFocusOrder="0" pos="246 274 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="CHANNEL" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c0024dd1e7519557" memberName="label_TYPE3"
         virtualName="" explicitFocusOrder="0" pos="246 300 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TYPE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a62d421ae147e7df" memberName="label_NO3"
         virtualName="" explicitFocusOrder="0" pos="246 328 77 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="NO." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="fad912097f5b791" memberName="label_MIN3"
         virtualName="" explicitFocusOrder="0" pos="246 354 77 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MIN VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="40aad99cfb5bef13" memberName="label_MAX3"
         virtualName="" explicitFocusOrder="0" pos="246 380 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MAX VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b512533645424c41" memberName="label_EXP"
         virtualName="" explicitFocusOrder="0" pos="350 238 69 31" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="  EXP&#10;PEDAL"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c10373a7e937e599" memberName="label_MOVE4"
         virtualName="" explicitFocusOrder="0" pos="465 245 64 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="PUSH" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b093191bff1e654d" memberName="label_CHANNEL4"
         virtualName="" explicitFocusOrder="0" pos="465 274 80 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="CHANNEL" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5f6507b907ecab73" memberName="label_TYPE4"
         virtualName="" explicitFocusOrder="0" pos="466 302 80 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TYPE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5285b48088e02477" memberName="label_NO4"
         virtualName="" explicitFocusOrder="0" pos="466 328 80 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="NO." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8ac0017ae458b344" memberName="label_MIN4"
         virtualName="" explicitFocusOrder="0" pos="466 354 80 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MIN VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b75d7d94e8bd4cfa" memberName="label_MAX4"
         virtualName="" explicitFocusOrder="0" pos="466 380 80 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MAX VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ae1aeb7818c0e978" memberName="label_EXP2"
         virtualName="" explicitFocusOrder="0" pos="569 238 150 31" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="  FOOT&#10;SWITCH"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="280ddf75152c6e8a" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="466 406 88 26" bkgCol="ffab00" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BEHAVIOR" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d5e6cb99d4d23726" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="0 500 664 2" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e4b35a2fa3a17b7b" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="32 64 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5341d72318556928" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="33 90 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a6617d15bc7b2e63" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="32 116 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="70701aeddec493fb" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="32 142 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="84300360181f7089" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="32 300 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f8de496dd6dee2e0" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="32 328 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5ea3b2cae9c9b630" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="32 354 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="cd0c78ddd22381ff" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="32 380 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="63c1044d25446fdd" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="245 300 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="202b6c3d873d2f39" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="245 328 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4d633f64ce21f1aa" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="245 354 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c0aa3b7d9818588c" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="245 380 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="26f296e20ede27cf" memberName="label15" virtualName=""
         explicitFocusOrder="0" pos="466 300 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e44dc0732887d20b" memberName="label16" virtualName=""
         explicitFocusOrder="0" pos="466 328 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="faacb9bc099331d6" memberName="label17" virtualName=""
         explicitFocusOrder="0" pos="466 354 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f8496f56615c0459" memberName="label18" virtualName=""
         explicitFocusOrder="0" pos="466 380 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="91a2b38da4c4f921" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="466 406 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="7f5a38375d9474f4" memberName="FDCP_TY_FD1"
              virtualName="" explicitFocusOrder="0" pos="129 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cb10ebcdc15fa6f1" memberName="FDCP_TY_FD2"
              virtualName="" explicitFocusOrder="0" pos="192 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d0ca472bf46e2cba" memberName="FDCP_TY_FD3"
              virtualName="" explicitFocusOrder="0" pos="256 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b7bfc7315d20e3b2" memberName="FDCP_TY_FD4"
              virtualName="" explicitFocusOrder="0" pos="320 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pitch"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="46d7276338ce5b69" memberName="FDCP_TY_FD5"
              virtualName="" explicitFocusOrder="0" pos="384 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="27e6e2a3d57a18e9" memberName="FDCP_TY_FD6"
              virtualName="" explicitFocusOrder="0" pos="448 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d011e0f807abab2b" memberName="FDCP_TY_FD7"
              virtualName="" explicitFocusOrder="0" pos="512 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="ed09bd903e3e12cc" memberName="FDCP_TY_FD8"
              virtualName="" explicitFocusOrder="0" pos="576 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="48aaa72da3163238" memberName="FDCP_TY_FD9"
              virtualName="" explicitFocusOrder="0" pos="129 301 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="9e08f43c2c9fd66f" memberName="FDCP_TY_EXP"
              virtualName="" explicitFocusOrder="0" pos="343 301 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="bcd59bf14b913dce" memberName="FDCP_TY_FOOT"
              virtualName="" explicitFocusOrder="0" pos="562 301 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6d140b501739d7d6" memberName="FDCP_BEH_FOOT"
              virtualName="" explicitFocusOrder="0" pos="562 407 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="4577a8f1ad824228" memberName="FADE_NO1"
              virtualName="" explicitFocusOrder="0" pos="129 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="67aa7c0c3e90d995" memberName="FADE_NO2"
              virtualName="" explicitFocusOrder="0" pos="192 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="48b0657a5c3e57b5" memberName="FADE_NO3"
              virtualName="" explicitFocusOrder="0" pos="256 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a93ccd9dc7655b1e" memberName="FADE_NO4"
              virtualName="" explicitFocusOrder="0" pos="320 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="-"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="ad2073dd19c04388" memberName="FADE_NO5"
              virtualName="" explicitFocusOrder="0" pos="384 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="dbd95a58578dfc0f" memberName="FADE_NO6"
              virtualName="" explicitFocusOrder="0" pos="448 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b98a16be8dbc4449" memberName="FADE_NO7"
              virtualName="" explicitFocusOrder="0" pos="512 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="999acd7ddf44f69a" memberName="FADE_NO8"
              virtualName="" explicitFocusOrder="0" pos="576 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="3ecc3b1d27e8dfc6" memberName="FADE_NO9"
              virtualName="" explicitFocusOrder="0" pos="129 329 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a6276fecfa07fbc7" memberName="FADE_NO10"
              virtualName="" explicitFocusOrder="0" pos="343 329 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="f3bb21ddb9002be0" memberName="FADE_NO11"
              virtualName="" explicitFocusOrder="0" pos="562 329 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="e536671b2f934731" memberName="LSB2" virtualName=""
         explicitFocusOrder="0" pos="32 408 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="70084909de4447d4" memberName="MSB2" virtualName=""
         explicitFocusOrder="0" pos="32 436 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8899b1c8e101f420" memberName="LNMSB2" virtualName=""
         explicitFocusOrder="0" pos="32 435 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b5d1018b83de06df" memberName="LNLSB2" virtualName=""
         explicitFocusOrder="0" pos="32 407 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="dc5921623c684e1b" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="127 246 2 212" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="cfecc970f802a60e" memberName="LSB1" virtualName=""
         explicitFocusOrder="0" pos="32 170 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c96aae7277931f8" memberName="MSB1" virtualName=""
         explicitFocusOrder="0" pos="32 197 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="38f4013fb65234b3" memberName="LNMSB1" virtualName=""
         explicitFocusOrder="0" pos="32 196 613 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="92d5dfa8589af6e9" memberName="LNLSB1" virtualName=""
         explicitFocusOrder="0" pos="30 169 613 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b20c8e88efbe8f18" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="127 12 2 207" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1a7c03a33e84e0c3" memberName="LSB3" virtualName=""
         explicitFocusOrder="0" pos="247 408 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7b335425c81f5ce4" memberName="MSB3" virtualName=""
         explicitFocusOrder="0" pos="247 436 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5693b0b354ffe9ee" memberName="LNMSB3" virtualName=""
         explicitFocusOrder="0" pos="247 435 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d0fb7955e2f20a56" memberName="LNLSB3" virtualName=""
         explicitFocusOrder="0" pos="247 407 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3136bc5265301e68" memberName="label22" virtualName=""
         explicitFocusOrder="0" pos="341 246 2 212" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="889c0a17609d8432" memberName="LSB4" virtualName=""
         explicitFocusOrder="0" pos="466 436 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ebf8eb070e0664b3" memberName="MSB4" virtualName=""
         explicitFocusOrder="0" pos="466 464 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e53651c345f38281" memberName="LNMSB4" virtualName=""
         explicitFocusOrder="0" pos="466 463 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d79cc16a0f15c67e" memberName="LNLSB4" virtualName=""
         explicitFocusOrder="0" pos="466 435 160 1" bkgCol="ff444444"
         edTextCol="ff000000" edBkgCol="0" labelText="" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1dfb78baa024031a" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="560 246 2 240" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
