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
#include "DecumoMenuComponent.h"
#include "MainComponent.h"
#include "CC_Viewport_Component.h"
#include "FiveMenuComponent.h"
#include "Twochoose_Component.h"
#include "PanFanComponent.h"
#include "SixthChannelComponent.h"
#include "ViewChannelComponent.h"
#include "MMCFuntionsViewComponent.h"
#include "MusicNoteViewComponent.h"
#include "BackgroundThread.h"
//[/Headers]

#include "ButtonsMini1To8Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
ButtonsMini1To8Component * BM1TO8 = nullptr;
extern MMCFuntionsViewComponent *pMMCFuntionsViewComponent;
extern  MusicNoteViewComponent *pMusicNoteViewComponent;
extern SixthChannelComponent *pSixthChannelComponent;
extern ViewChannelComponent *pViewChannelComponent;
extern PanFanComponent *pPanFanComponent ;
extern Twochoose_Component * pTwochoose_Component;
extern FiveMenuComponent * pFiveComp;
extern CC_Viewport_Component *CC_VP ;
extern ViewPortComponent * pViewPortComponent;
extern DecumoMenuComponent * pDecumoMenuComponent ;
extern MainComponent * pMainComponent;

extern String  Midimusic[128];
extern String MMC_Functions_e[9];
extern String CCBT[128];
ButtonGroup BM1Bt[8];
//[/MiscUserDefs]

//==============================================================================
ButtonsMini1To8Component::ButtonsMini1To8Component ()
{
    addAndMakeVisible (label_MOVE = new Label ("new label",
                                               "PUSH"));
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
                                              "BT 1"));
    label_FD1->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD1->setJustificationType (Justification::centredLeft);
    label_FD1->setEditable (false, false, false);
    label_FD1->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD1->setColour (TextEditor::textColourId, Colours::black);
    label_FD1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD2 = new Label ("new label",
                                              "BT 2"));
    label_FD2->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD2->setJustificationType (Justification::centredLeft);
    label_FD2->setEditable (false, false, false);
    label_FD2->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD2->setColour (TextEditor::textColourId, Colours::black);
    label_FD2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD3 = new Label ("new label",
                                              "BT 3"));
    label_FD3->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD3->setJustificationType (Justification::centredLeft);
    label_FD3->setEditable (false, false, false);
    label_FD3->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD3->setColour (TextEditor::textColourId, Colours::black);
    label_FD3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD4 = new Label ("new label",
                                              "BT 4"));
    label_FD4->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD4->setJustificationType (Justification::centredLeft);
    label_FD4->setEditable (false, false, false);
    label_FD4->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD4->setColour (TextEditor::textColourId, Colours::black);
    label_FD4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD5 = new Label ("new label",
                                              "BT 5"));
    label_FD5->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD5->setJustificationType (Justification::centredLeft);
    label_FD5->setEditable (false, false, false);
    label_FD5->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD5->setColour (TextEditor::textColourId, Colours::black);
    label_FD5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD6 = new Label ("new label",
                                              "BT 6"));
    label_FD6->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD6->setJustificationType (Justification::centredLeft);
    label_FD6->setEditable (false, false, false);
    label_FD6->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD6->setColour (TextEditor::textColourId, Colours::black);
    label_FD6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD7 = new Label ("new label",
                                              "BT 7"));
    label_FD7->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD7->setJustificationType (Justification::centredLeft);
    label_FD7->setEditable (false, false, false);
    label_FD7->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD7->setColour (TextEditor::textColourId, Colours::black);
    label_FD7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD8 = new Label ("new label",
                                              "BT 8"));
    label_FD8->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD8->setJustificationType (Justification::centredLeft);
    label_FD8->setEditable (false, false, false);
    label_FD8->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD8->setColour (TextEditor::textColourId, Colours::black);
    label_FD8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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

    addAndMakeVisible (label_MAX3 = new Label ("new label",
                                               "BEHAVIOR"));
    label_MAX3->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MAX3->setJustificationType (Justification::centredLeft);
    label_MAX3->setEditable (false, false, false);
    label_MAX3->setColour (Label::textColourId, Colour (0xffffab00));
    label_MAX3->setColour (TextEditor::textColourId, Colours::black);
    label_MAX3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label11 = new Label ("new label",
                                            String::empty));
    label11->setFont (Font (15.00f, Font::plain));
    label11->setJustificationType (Justification::centredLeft);
    label11->setEditable (false, false, false);
    label11->setColour (Label::backgroundColourId, Colour (0xff444444));
    label11->setColour (TextEditor::textColourId, Colours::black);
    label11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (BTCO_CH_BT1 = new TextButton ("new button"));
    BTCO_CH_BT1->setButtonText ("1");
    BTCO_CH_BT1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT1->addListener (this);
    BTCO_CH_BT1->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT2 = new TextButton ("new button"));
    ENCO_CH_BT2->setButtonText ("2");
    ENCO_CH_BT2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT2->addListener (this);
    ENCO_CH_BT2->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT2->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT2->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT3 = new TextButton ("new button"));
    ENCO_CH_BT3->setButtonText ("3");
    ENCO_CH_BT3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT3->addListener (this);
    ENCO_CH_BT3->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT3->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT3->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT3->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT4 = new TextButton ("new button"));
    ENCO_CH_BT4->setButtonText ("4");
    ENCO_CH_BT4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT4->addListener (this);
    ENCO_CH_BT4->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT4->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT4->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT4->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT5 = new TextButton ("new button"));
    ENCO_CH_BT5->setButtonText ("5");
    ENCO_CH_BT5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT5->addListener (this);
    ENCO_CH_BT5->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT5->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT5->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT5->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT6 = new TextButton ("new button"));
    ENCO_CH_BT6->setButtonText ("6");
    ENCO_CH_BT6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT6->addListener (this);
    ENCO_CH_BT6->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT6->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT6->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT6->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT7 = new TextButton ("new button"));
    ENCO_CH_BT7->setButtonText ("7");
    ENCO_CH_BT7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT7->addListener (this);
    ENCO_CH_BT7->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT7->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT7->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT7->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT8 = new TextButton ("new button"));
    ENCO_CH_BT8->setButtonText ("8");
    ENCO_CH_BT8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT8->addListener (this);
    ENCO_CH_BT8->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT8->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT8->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT8->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT1 = new TextButton ("new button"));
    BTCP_TY_BT1->setButtonText ("CC");
    BTCP_TY_BT1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT1->addListener (this);
    BTCP_TY_BT1->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT2 = new TextButton ("new button"));
    BTCP_TY_BT2->setButtonText ("Note");
    BTCP_TY_BT2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT2->addListener (this);
    BTCP_TY_BT2->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT2->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT2->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT3 = new TextButton ("new button"));
    BTCP_TY_BT3->setButtonText ("CC");
    BTCP_TY_BT3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT3->addListener (this);
    BTCP_TY_BT3->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT3->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT3->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT3->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT4 = new TextButton ("new button"));
    BTCP_TY_BT4->setButtonText ("Pitch");
    BTCP_TY_BT4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT4->addListener (this);
    BTCP_TY_BT4->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT4->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT4->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT4->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT5 = new TextButton ("new button"));
    BTCP_TY_BT5->setButtonText ("Note");
    BTCP_TY_BT5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT5->addListener (this);
    BTCP_TY_BT5->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT5->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT5->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT5->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT6 = new TextButton ("new button"));
    BTCP_TY_BT6->setButtonText ("CC");
    BTCP_TY_BT6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT6->addListener (this);
    BTCP_TY_BT6->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT6->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT6->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT6->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT7 = new TextButton ("new button"));
    BTCP_TY_BT7->setButtonText ("CC");
    BTCP_TY_BT7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT7->addListener (this);
    BTCP_TY_BT7->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT7->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT7->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT7->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT8 = new TextButton ("new button"));
    BTCP_TY_BT8->setButtonText ("CC");
    BTCP_TY_BT8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT8->addListener (this);
    BTCP_TY_BT8->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT8->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT8->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT8->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT1 = new TextButton ("new button"));
    BTCP_BEH_BT1->setButtonText ("Momentary");
    BTCP_BEH_BT1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT1->addListener (this);
    BTCP_BEH_BT1->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT2 = new TextButton ("new button"));
    BTCP_BEH_BT2->setButtonText ("Momentary");
    BTCP_BEH_BT2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT2->addListener (this);
    BTCP_BEH_BT2->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT2->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT2->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT3 = new TextButton ("new button"));
    BTCP_BEH_BT3->setButtonText ("Toggle");
    BTCP_BEH_BT3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT3->addListener (this);
    BTCP_BEH_BT3->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT3->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT3->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT3->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT4 = new TextButton ("new button"));
    BTCP_BEH_BT4->setButtonText ("Momentary");
    BTCP_BEH_BT4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT4->addListener (this);
    BTCP_BEH_BT4->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT4->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT4->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT4->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT5 = new TextButton ("new button"));
    BTCP_BEH_BT5->setButtonText ("Toggle");
    BTCP_BEH_BT5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT5->addListener (this);
    BTCP_BEH_BT5->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT5->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT5->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT5->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT6 = new TextButton ("new button"));
    BTCP_BEH_BT6->setButtonText ("Toggle");
    BTCP_BEH_BT6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT6->addListener (this);
    BTCP_BEH_BT6->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT6->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT6->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT6->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT7 = new TextButton ("new button"));
    BTCP_BEH_BT7->setButtonText ("Momentary");
    BTCP_BEH_BT7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT7->addListener (this);
    BTCP_BEH_BT7->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT7->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT7->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT7->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT8 = new TextButton ("new button"));
    BTCP_BEH_BT8->setButtonText ("Momentary");
    BTCP_BEH_BT8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT8->addListener (this);
    BTCP_BEH_BT8->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT8->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT8->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT8->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT1 = new TextButton ("new button"));
    BTCP_NO_BT1->setButtonText ("CC0");
    BTCP_NO_BT1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT1->addListener (this);
    BTCP_NO_BT1->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT2 = new TextButton ("new button"));
    BTCP_NO_BT2->setButtonText ("C0");
    BTCP_NO_BT2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT2->addListener (this);
    BTCP_NO_BT2->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT2->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT2->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT3 = new TextButton ("new button"));
    BTCP_NO_BT3->setButtonText ("C1");
    BTCP_NO_BT3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT3->addListener (this);
    BTCP_NO_BT3->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT3->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT3->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT3->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT4 = new TextButton ("new button"));
    BTCP_NO_BT4->setButtonText ("-");
    BTCP_NO_BT4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT4->addListener (this);
    BTCP_NO_BT4->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT4->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT4->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT4->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT5 = new TextButton ("new button"));
    BTCP_NO_BT5->setButtonText ("C0");
    BTCP_NO_BT5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT5->addListener (this);
    BTCP_NO_BT5->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT5->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT5->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT5->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT6 = new TextButton ("new button"));
    BTCP_NO_BT6->setButtonText ("CC1");
    BTCP_NO_BT6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT6->addListener (this);
    BTCP_NO_BT6->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT6->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT6->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT6->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT7 = new TextButton ("new button"));
    BTCP_NO_BT7->setButtonText ("C4");
    BTCP_NO_BT7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT7->addListener (this);
    BTCP_NO_BT7->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT7->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT7->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT7->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT8 = new TextButton ("new button"));
    BTCP_NO_BT8->setButtonText ("-");
    BTCP_NO_BT8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT8->addListener (this);
    BTCP_NO_BT8->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT8->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT8->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT8->setColour (TextButton::textColourOffId, Colour (0xffffab00));

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

    addAndMakeVisible (label12 = new Label ("new label",
                                            "label text"));
    label12->setFont (Font (15.00f, Font::plain));
    label12->setJustificationType (Justification::centredLeft);
    label12->setEditable (false, false, false);
    label12->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label12->setColour (TextEditor::textColourId, Colours::black);
    label12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
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


     BTCO_CH_BT1  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT2 ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT3  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT4  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT5  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT6  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT7  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT8  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT1  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT2  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT3  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT4  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT5  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT6  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT7  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT8  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT1  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT2  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT3  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT4  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT5  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT6  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT7  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT8  ->setLookAndFeel(&lookAndFeelV4);

    BTCP_NO_BT1 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT2 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT3 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT4 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT5 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT6 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT7 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT8 ->setLookAndFeel(&lookAndFeelV4);


    for (int i = 0; i < 8; i++)
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

ButtonsMini1To8Component::~ButtonsMini1To8Component()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    for (int i = 0; i < 8; i++)
    {
        MSB[i] = nullptr;
        LSB[i] = nullptr;
    }

    pfader1 = nullptr;
    pfader2 = nullptr;
    pfader3 = nullptr;
    pfader4 = nullptr;

    pfader5 = nullptr;
    pfader6 = nullptr;
    pfader7 = nullptr;
    pfader8 = nullptr;

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
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label_MAX3 = nullptr;
    label11 = nullptr;
    BTCO_CH_BT1 = nullptr;
    ENCO_CH_BT2 = nullptr;
    ENCO_CH_BT3 = nullptr;
    ENCO_CH_BT4 = nullptr;
    ENCO_CH_BT5 = nullptr;
    ENCO_CH_BT6 = nullptr;
    ENCO_CH_BT7 = nullptr;
    ENCO_CH_BT8 = nullptr;
    BTCP_TY_BT1 = nullptr;
    BTCP_TY_BT2 = nullptr;
    BTCP_TY_BT3 = nullptr;
    BTCP_TY_BT4 = nullptr;
    BTCP_TY_BT5 = nullptr;
    BTCP_TY_BT6 = nullptr;
    BTCP_TY_BT7 = nullptr;
    BTCP_TY_BT8 = nullptr;
    BTCP_BEH_BT1 = nullptr;
    BTCP_BEH_BT2 = nullptr;
    BTCP_BEH_BT3 = nullptr;
    BTCP_BEH_BT4 = nullptr;
    BTCP_BEH_BT5 = nullptr;
    BTCP_BEH_BT6 = nullptr;
    BTCP_BEH_BT7 = nullptr;
    BTCP_BEH_BT8 = nullptr;
    BTCP_NO_BT1 = nullptr;
    BTCP_NO_BT2 = nullptr;
    BTCP_NO_BT3 = nullptr;
    BTCP_NO_BT4 = nullptr;
    BTCP_NO_BT5 = nullptr;
    BTCP_NO_BT6 = nullptr;
    BTCP_NO_BT7 = nullptr;
    BTCP_NO_BT8 = nullptr;
    LSB1 = nullptr;
    MSB1 = nullptr;
    LNMSB1 = nullptr;
    LNLSB1 = nullptr;
    label12 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ButtonsMini1To8Component::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xffffab00));
    g.fillRect (23, 32, 609, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (119, 12, 2, 164);

    g.setColour (Colour (0xffffab00));
    g.fillRect (505, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (457, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (473, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (489, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (537, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (521, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (553, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (569, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (457.0f, 359.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (458.0f, 360.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (473.0f, 359.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (474.0f, 360.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (489.0f, 359.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (490.0f, 360.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (505.0f, 359.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (506.0f, 360.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (521.0f, 359.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (522.0f, 360.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (537.0f, 359.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (538.0f, 360.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (553.0f, 359.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (554.0f, 360.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (569.0f, 359.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (570.0f, 360.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillRect (505, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (457, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (473, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (489, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (537, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (521, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (553, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (569, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (612, 366, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (609, 377, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (609, 393, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (593, 359, 1, 45);

    g.setColour (Colour (0xffffab00));
    g.fillRect (597, 359, 1, 45);

    g.setColour (Colour (0xffffab00));
    g.fillRect (593, 359, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (594, 403, 4, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (592, 373, 7, 15);

    g.setColour (Colours::white);
    g.fillRect (451, 374, 135, 1);

    g.setColour (Colours::white);
    g.fillRect (451, 388, 135, 1);

    g.setColour (Colours::white);
    g.fillRect (451, 374, 1, 14);

    g.setColour (Colours::white);
    g.fillRect (585, 374, 1, 14);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ButtonsMini1To8Component::resized()
{
    label_MOVE->setBounds (24, 5, 64, 24);
    label_CHANNEL->setBounds (24, 35, 85, 26);
    label_TYPE->setBounds (24, 61, 85, 26);
    label_NO->setBounds (24, 87, 85, 26);
    label_MIN->setBounds (24, 113, 85, 26);
    label_MAX->setBounds (24, 139, 85, 26);
    label_FD1->setBounds (136, 5, 48, 24);
    label_FD2->setBounds (200, 5, 48, 24);
    label_FD3->setBounds (264, 5, 48, 24);
    label_FD4->setBounds (328, 5, 48, 24);
    label_FD5->setBounds (392, 5, 48, 24);
    label_FD6->setBounds (456, 5, 48, 24);
    label_FD7->setBounds (520, 5, 48, 24);
    label_FD8->setBounds (584, 5, 48, 24);
    label3->setBounds (24, 61, 609, 1);
    label4->setBounds (25, 87, 609, 1);
    label5->setBounds (24, 113, 609, 1);
    label6->setBounds (24, 139, 609, 1);
    label_MAX3->setBounds (24, 165, 85, 26);
    label11->setBounds (24, 165, 609, 1);
    BTCO_CH_BT1->setBounds (121, 34, 65, 25);
    ENCO_CH_BT2->setBounds (185, 34, 65, 25);
    ENCO_CH_BT3->setBounds (249, 34, 65, 25);
    ENCO_CH_BT4->setBounds (313, 34, 65, 25);
    ENCO_CH_BT5->setBounds (377, 34, 65, 25);
    ENCO_CH_BT6->setBounds (441, 34, 65, 25);
    ENCO_CH_BT7->setBounds (505, 34, 65, 25);
    ENCO_CH_BT8->setBounds (569, 34, 65, 25);
    BTCP_TY_BT1->setBounds (121, 62, 65, 24);
    BTCP_TY_BT2->setBounds (184, 62, 65, 24);
    BTCP_TY_BT3->setBounds (248, 62, 65, 24);
    BTCP_TY_BT4->setBounds (312, 62, 65, 24);
    BTCP_TY_BT5->setBounds (376, 62, 65, 24);
    BTCP_TY_BT6->setBounds (440, 62, 65, 24);
    BTCP_TY_BT7->setBounds (504, 62, 65, 24);
    BTCP_TY_BT8->setBounds (568, 62, 65, 24);
    BTCP_BEH_BT1->setBounds (121, 166, 65, 25);
    BTCP_BEH_BT2->setBounds (185, 166, 65, 25);
    BTCP_BEH_BT3->setBounds (249, 166, 65, 25);
    BTCP_BEH_BT4->setBounds (313, 166, 65, 25);
    BTCP_BEH_BT5->setBounds (377, 166, 65, 25);
    BTCP_BEH_BT6->setBounds (441, 166, 65, 25);
    BTCP_BEH_BT7->setBounds (505, 166, 65, 25);
    BTCP_BEH_BT8->setBounds (569, 166, 65, 25);
    BTCP_NO_BT1->setBounds (121, 88, 65, 24);
    BTCP_NO_BT2->setBounds (184, 88, 65, 24);
    BTCP_NO_BT3->setBounds (248, 88, 65, 24);
    BTCP_NO_BT4->setBounds (312, 88, 65, 24);
    BTCP_NO_BT5->setBounds (376, 88, 65, 24);
    BTCP_NO_BT6->setBounds (440, 88, 65, 24);
    BTCP_NO_BT7->setBounds (504, 88, 65, 24);
    BTCP_NO_BT8->setBounds (568, 88, 65, 24);
    LSB1->setBounds (24, 193, 85, 26);
    MSB1->setBounds (24, 220, 85, 26);
    LNMSB1->setBounds (24, 219, 613, 1);
    LNLSB1->setBounds (24, 192, 613, 1);
    label12->setBounds (119, 9, 2, 233);
    //[UserResized] Add your own custom resize handling here..
    pfader1 -> setBounds(121,34,64,25);
    pfader2 -> setBounds(185,34,64,25);
    pfader3 -> setBounds(249,34,64,25);
    pfader4 -> setBounds(313,34,64,25);
    pfader5 -> setBounds(377,34,64,25);
    pfader6 -> setBounds(441,34,64,25);
    pfader7 -> setBounds(505,34,64,25);
    pfader8 -> setBounds(569,34,64,25);

    pCustomImageButton1 ->setBounds(121,114,64,25);
    pCustomImageButton2 ->setBounds(184,114,64,25);
    pCustomImageButton3 ->setBounds(248,114,64,25);
    pCustomImageButton4 ->setBounds(312,114,64,25);
    pCustomImageButton5 ->setBounds(376,114,64,25);
    pCustomImageButton6 ->setBounds(440,114,64,25);
    pCustomImageButton7 ->setBounds(504,114,64,25);
    pCustomImageButton8 ->setBounds(568,114,64,25);

    pCustomImageButton9 ->setBounds(121,140,64,25);
    pCustomImageButton10 ->setBounds(184,140,64,25);
    pCustomImageButton11 ->setBounds(248,140,64,25);
    pCustomImageButton12 ->setBounds(312,140,64,25);
    pCustomImageButton13 ->setBounds(376,140,64,25);
    pCustomImageButton14 ->setBounds(440,140,64,25);
    pCustomImageButton15 ->setBounds(504,140,64,25);
    pCustomImageButton16 ->setBounds(568,140,64,25);

    for (int i = 0; i < 8; i++)
    {
        MSB[i]->setBounds(121 + 64 * i, 193, 64, 25);
        LSB[i]->setBounds(121 + 64 * i, 220, 64, 25);

    }
    //[/UserResized]
}

void ButtonsMini1To8Component::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    pMainComponent->setMyComponent(2);
    GetCustomBtID();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == BTCO_CH_BT1)
    {
        //[UserButtonCode_BTCO_CH_BT1] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT1]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT2)
    {
        //[UserButtonCode_ENCO_CH_BT2] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT2]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT3)
    {
        //[UserButtonCode_ENCO_CH_BT3] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT3]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT4)
    {
        //[UserButtonCode_ENCO_CH_BT4] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT4]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT5)
    {
        //[UserButtonCode_ENCO_CH_BT5] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT5]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT6)
    {
        //[UserButtonCode_ENCO_CH_BT6] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT6]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT7)
    {
        //[UserButtonCode_ENCO_CH_BT7] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT7]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT8)
    {
        //[UserButtonCode_ENCO_CH_BT8] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT8]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT1)
    {
        //[UserButtonCode_BTCP_TY_BT1] -- add your button handler code here..
        Push_or_Turn =0;
        this->MidiLayerNum = 136;
        this->SetNextBT(BTCP_NO_BT1);
        SetNO_BT(BTCP_TY_BT1);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT1->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT1]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT2)
    {
        //[UserButtonCode_BTCP_TY_BT2] -- add your button handler code here..
        Push_or_Turn =0;
        this->MidiLayerNum = 144;
        this->SetNextBT(BTCP_NO_BT2);
        SetNO_BT(BTCP_TY_BT2);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT2->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT2]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT3)
    {
        //[UserButtonCode_BTCP_TY_BT3] -- add your button handler code here..
        Push_or_Turn =0;
        this->MidiLayerNum = 152;
        this->SetNextBT(BTCP_NO_BT3);
        SetNO_BT(BTCP_TY_BT3);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT3->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT3]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT4)
    {
        //[UserButtonCode_BTCP_TY_BT4] -- add your button handler code here..
        Push_or_Turn =0;
        this->MidiLayerNum = 160;
        this->SetNextBT(BTCP_NO_BT4);
        SetNO_BT(BTCP_TY_BT4);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT4->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT4]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT5)
    {
        //[UserButtonCode_BTCP_TY_BT5] -- add your button handler code here..
        Push_or_Turn =0;
        this->MidiLayerNum = 168;
        this->SetNextBT(BTCP_NO_BT5);
        SetNO_BT(BTCP_TY_BT5);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT5->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT5]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT6)
    {
        //[UserButtonCode_BTCP_TY_BT6] -- add your button handler code here..
        Push_or_Turn =0;
        this->MidiLayerNum = 176;
        this->SetNextBT(BTCP_NO_BT6);
        SetNO_BT(BTCP_TY_BT6);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT6->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT6]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT7)
    {
        //[UserButtonCode_BTCP_TY_BT7] -- add your button handler code here..
        Push_or_Turn =0;
        this->MidiLayerNum = 184;
        this->SetNextBT(BTCP_NO_BT7);
        SetNO_BT(BTCP_TY_BT7);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT7->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT7]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT8)
    {
        //[UserButtonCode_BTCP_TY_BT8] -- add your button handler code here..
        Push_or_Turn =0;
        this->MidiLayerNum = 192;
        this->SetNextBT(BTCP_NO_BT8);
        SetNO_BT(BTCP_TY_BT8);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT8->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT8]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT1)
    {
        //[UserButtonCode_BTCP_BEH_BT1] -- add your button handler code here..
        if (!(BM1Bt[0].BT2->getButtonText().compare("MMC") == 0) && !(BM1Bt[0].BT2->getButtonText().compare("Program") == 0) 
			&& !(BM1Bt[0].BT2->getButtonText().compare("CC")==0 && (BM1Bt[0].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[0].BT4->getButtonText().compare("Dec/-1")==0))){
            this->MidiLayerNum = 140;
            SetNO_BT(BTCP_BEH_BT1);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT1->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_BEH_BT1]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT2)
    {
        //[UserButtonCode_BTCP_BEH_BT2] -- add your button handler code here..
        if (!(BM1Bt[1].BT2->getButtonText().compare("MMC") == 0) && !(BM1Bt[1].BT2->getButtonText().compare("Program") == 0)
			&& !(BM1Bt[1].BT2->getButtonText().compare("CC")==0 && (BM1Bt[1].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[1].BT4->getButtonText().compare("Dec/-1")==0))){
            this->MidiLayerNum = 148;
            SetNO_BT(BTCP_BEH_BT2);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT2->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_BEH_BT2]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT3)
    {
        //[UserButtonCode_BTCP_BEH_BT3] -- add your button handler code here..
        if (!(BM1Bt[2].BT2->getButtonText().compare("MMC") == 0) && !(BM1Bt[2].BT2->getButtonText().compare("Program") == 0)
			&& !(BM1Bt[2].BT2->getButtonText().compare("CC")==0 && (BM1Bt[2].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[2].BT4->getButtonText().compare("Dec/-1")==0))){
            this->MidiLayerNum = 156;
            SetNO_BT(BTCP_BEH_BT3);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT3->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_BEH_BT3]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT4)
    {
        //[UserButtonCode_BTCP_BEH_BT4] -- add your button handler code here..
        if (!(BM1Bt[3].BT2->getButtonText().compare("MMC") == 0) && !(BM1Bt[3].BT2->getButtonText().compare("Program") == 0)
			&& !(BM1Bt[3].BT2->getButtonText().compare("CC")==0 && (BM1Bt[3].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[3].BT4->getButtonText().compare("Dec/-1")==0))){
            this->MidiLayerNum = 164;
            SetNO_BT(BTCP_BEH_BT4);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT4->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_BEH_BT4]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT5)
    {
        //[UserButtonCode_BTCP_BEH_BT5] -- add your button handler code here..
        if (!(BM1Bt[4].BT2->getButtonText().compare("MMC") == 0) && !(BM1Bt[4].BT2->getButtonText().compare("Program") == 0)
			&& !(BM1Bt[4].BT2->getButtonText().compare("CC")==0 && (BM1Bt[4].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[4].BT4->getButtonText().compare("Dec/-1")==0))){
            this->MidiLayerNum = 172;
            SetNO_BT(BTCP_BEH_BT5);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT5->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_BEH_BT5]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT6)
    {
        //[UserButtonCode_BTCP_BEH_BT6] -- add your button handler code here..
        if (!(BM1Bt[5].BT2->getButtonText().compare("MMC") == 0) && !(BM1Bt[5].BT2->getButtonText().compare("Program") == 0)
			&& !(BM1Bt[5].BT2->getButtonText().compare("CC")==0 && (BM1Bt[5].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[5].BT4->getButtonText().compare("Dec/-1")==0))){
            this->MidiLayerNum = 180;
            SetNO_BT(BTCP_BEH_BT6);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT6->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_BEH_BT6]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT7)
    {
        //[UserButtonCode_BTCP_BEH_BT7] -- add your button handler code here..
        if (!(BM1Bt[6].BT2->getButtonText().compare("MMC") == 0) && !(BM1Bt[6].BT2->getButtonText().compare("Program") == 0)
			&& !(BM1Bt[6].BT2->getButtonText().compare("CC")==0 && (BM1Bt[6].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[6].BT4->getButtonText().compare("Dec/-1")==0))){
            this->MidiLayerNum = 188;
            SetNO_BT(BTCP_BEH_BT7);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT7->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_BEH_BT7]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT8)
    {
        //[UserButtonCode_BTCP_BEH_BT8] -- add your button handler code here..
        if (!(BM1Bt[7].BT2->getButtonText().compare("MMC") == 0) && !(BM1Bt[7].BT2->getButtonText().compare("Program") == 0)
			&& !(BM1Bt[7].BT2->getButtonText().compare("CC")==0 && (BM1Bt[7].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[7].BT4->getButtonText().compare("Dec/-1")==0))){
            this->MidiLayerNum = 196;
            SetNO_BT(BTCP_BEH_BT8);
            pTwochoose_Component = new Twochoose_Component();
            CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT8->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_BEH_BT8]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT1)
    {
        //[UserButtonCode_BTCP_NO_BT1] -- add your button handler code here..
        this->MidiLayerNum = 137;
        if (BTCP_TY_BT1->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT1->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT1);
            num = ConventNO_BTtoInt(BTCP_NO_BT1->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT1->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(BTCP_NO_BT1);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT1->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT1);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT1]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT2)
    {
        //[UserButtonCode_BTCP_NO_BT2] -- add your button handler code here..
        this->MidiLayerNum = 145;
        if (BTCP_TY_BT2->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT2->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT2);
            num = ConventNO_BTtoInt(BTCP_NO_BT2->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT2->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(BTCP_NO_BT2);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT2->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT2);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT2]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT3)
    {
        //[UserButtonCode_BTCP_NO_BT3] -- add your button handler code here..
        this->MidiLayerNum = 153;
        if (BTCP_TY_BT3->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT3->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT3);
            num = ConventNO_BTtoInt(BTCP_NO_BT3->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT3->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(BTCP_NO_BT3);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT3->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT3);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT3]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT4)
    {
        //[UserButtonCode_BTCP_NO_BT4] -- add your button handler code here..
        this->MidiLayerNum = 161;
        if (BTCP_TY_BT4->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT4->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT4);
            num = ConventNO_BTtoInt(BTCP_NO_BT4->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT4->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(BTCP_NO_BT4);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT4->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT4);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT4]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT5)
    {
        //[UserButtonCode_BTCP_NO_BT5] -- add your button handler code here..
        this->MidiLayerNum = 169;
        if (BTCP_TY_BT5->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT5->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT5);
            num = ConventNO_BTtoInt(BTCP_NO_BT5->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT5->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(BTCP_NO_BT5);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT5->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT5);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT5]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT6)
    {
        //[UserButtonCode_BTCP_NO_BT6] -- add your button handler code here..
        this->MidiLayerNum = 177;
        if (BTCP_TY_BT6->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT6->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT6);
            num = ConventNO_BTtoInt(BTCP_NO_BT6->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT6->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(BTCP_NO_BT6);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT6->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT6);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT6]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT7)
    {
        //[UserButtonCode_BTCP_NO_BT7] -- add your button handler code here..
        this->MidiLayerNum = 185;
        if (BTCP_TY_BT7->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT7->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT7);
            num = ConventNO_BTtoInt(BTCP_NO_BT7->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT7->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(BTCP_NO_BT7);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT7->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT7);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT7]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT8)
    {
        //[UserButtonCode_BTCP_NO_BT8] -- add your button handler code here..
        this->MidiLayerNum = 193;
        if (BTCP_TY_BT8->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT8->getButtonText().compare("Program") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT8);
            num = ConventNO_BTtoInt(BTCP_NO_BT8->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT8->getButtonText().compare("Note") == 0)
        {
            SetNO_BT(BTCP_NO_BT8);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT8->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT8);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT8]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void ButtonsMini1To8Component::CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged)
{
    Load_or_SaveFlag =1;
	//Load_or_SaveFlag =1;
	pMainComponent-> ChangeEditedButtonImClose();
    /*if(CustomTextButtonThatHasChanged == pfader1)
    {
        MiniConstMidiLayerMessage[101] =(unsigned char)( pfader1->GetValue().toString().getIntValue()*0x01-1);

    }
    else if(CustomTextButtonThatHasChanged == pfader2)
    {
        MiniConstMidiLayerMessage[107] =(unsigned char) (pfader2->GetValue().toString().getIntValue()*0x01-1);
    }
    else if(CustomTextButtonThatHasChanged == pfader3)
    {
        MiniConstMidiLayerMessage[113] =(unsigned char) (pfader3->GetValue().toString().getIntValue()*0x01-1);
    }
    else if(CustomTextButtonThatHasChanged == pfader4)
    {
        MiniConstMidiLayerMessage[119] =(unsigned char) (pfader4->GetValue().toString().getIntValue()*0x01-1);
    }
    else if(CustomTextButtonThatHasChanged == pfader5)
    {
        MiniConstMidiLayerMessage[125] =(unsigned char) (pfader5->GetValue().toString().getIntValue()*0x01-1);
    }
    else if(CustomTextButtonThatHasChanged == pfader6)
    {
        MiniConstMidiLayerMessage[131] = (unsigned char) (pfader6->GetValue().toString().getIntValue()*0x01-1);
    }
    else if(CustomTextButtonThatHasChanged == pfader7)
    {
        MiniConstMidiLayerMessage[137] = (unsigned char)(pfader7->GetValue().toString().getIntValue()*0x01-1);
    }
    else if(CustomTextButtonThatHasChanged == pfader8)
    {
        MiniConstMidiLayerMessage[143] = (unsigned char) (pfader8->GetValue().toString().getIntValue()*0x01-1);
    }*/
	for(int i =0;i<8;i++)
	{
		if(CustomTextButtonThatHasChanged == BM1Bt[i].BT1)
		{
			if(!(BM1Bt[i].BT1->GetValue().toString().compare("Off")==0) && !(BM1Bt[i].BT1->GetValue().toString().compare("Global")==0))
			{
				if(BM1Bt[i].BT1->GetValue().toString().getLastCharacters(1).compare("*")==0)
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() != BM1Bt[i].BT1->GetValue().toString().dropLastCharacters(1).getIntValue())					
						BM1Bt[i].BT1->setButtonText(BM1Bt[i].BT1->GetValue().toString().dropLastCharacters(1));
					
				}
				else
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() == BM1Bt[i].BT1->GetValue().toString().getIntValue())		
						BM1Bt[i].BT1->setButtonText(BM1Bt[i].BT1->GetValue().toString()+"*");
				}
			}
		}
	}
}

void ButtonsMini1To8Component::CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(2);
    pMainComponent->GlobalorOFF = 1;
    GetCustomBtID();
     if(buttonThatWasClicked == pfader1)
    {
        this->MidiLayerNum = 135;
        SetCurrentCustomBT2(pfader1);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader1);
    }
    else if(buttonThatWasClicked == pfader2)
    {
        this->MidiLayerNum = 143;
        SetCurrentCustomBT2(pfader2);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader2);
    }
    else if(buttonThatWasClicked == pfader3)
    {
        this->MidiLayerNum = 151;
        SetCurrentCustomBT2(pfader3);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader3);
    }
    else if(buttonThatWasClicked == pfader4)
    {
        this->MidiLayerNum = 159;
        SetCurrentCustomBT2(pfader4);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader4);
    }
    else if(buttonThatWasClicked == pfader5)
    {
        this->MidiLayerNum = 167;
        SetCurrentCustomBT2(pfader5);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader5);
    }
    else if(buttonThatWasClicked == pfader6)
    {
        this->MidiLayerNum = 175;
        SetCurrentCustomBT2(pfader6);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader6);
    }
    else if(buttonThatWasClicked == pfader7)
    {
        this->MidiLayerNum = 183;
        SetCurrentCustomBT2(pfader7);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader7);
    }
    else if(buttonThatWasClicked == pfader8)
    {
        this->MidiLayerNum = 191;
        SetCurrentCustomBT2(pfader8);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader8);
    }

}

void ButtonsMini1To8Component:: SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT2 = currentbuttonThatWasClicked;
 }

 CustomTextButton* ButtonsMini1To8Component:: GetCurrentCustomBT2()
 {
     return CurrentCustomBT2;
 }

void ButtonsMini1To8Component::CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(2);
    pMainComponent->FaderorOtherFlag =1;
    GetCustomBtID();
    for (int i = 0; i < 8; i++)
    {
        if (BM1Bt[i].BT4 == buttonThatWasClicked || BM1Bt[i].BT5 == buttonThatWasClicked)
        {
            if (!(BM1Bt[i].BT2->getButtonText().compare("MMC") == 0) /*&& !(BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0)*/)
            {
				if(!((BM1Bt[i].BT2->getButtonText().compare("Program") == 0) && BM1Bt[i].BT5 == buttonThatWasClicked ))
				{
					if(!(BM1Bt[i].BT5 == buttonThatWasClicked && (BM1Bt[i].BT4->getButtonText().compare("Inc/+1")==0 || BM1Bt[i].BT4->getButtonText().compare("Dec/-1")==0))){
						if (buttonThatWasClicked == pCustomImageButton1)
						{
							if(BM1Bt[i].BT2->getButtonText().compare("Note")==0 || BM1Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = 138;
							SetCurrentCustomBT(pCustomImageButton1);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent, pCustomImageButton1);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton2)
						{
							if(BM1Bt[i].BT2->getButtonText().compare("Note")==0 || BM1Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = 146;
							SetCurrentCustomBT(pCustomImageButton2);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton2);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton3)
						{
							if(BM1Bt[i].BT2->getButtonText().compare("Note")==0 || BM1Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = 154;
							SetCurrentCustomBT(pCustomImageButton3);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton3);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton4)
						{
							if(BM1Bt[i].BT2->getButtonText().compare("Note")==0 || BM1Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = 162;
							SetCurrentCustomBT(pCustomImageButton4);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton4);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton5)
						{
							if(BM1Bt[i].BT2->getButtonText().compare("Note")==0 || BM1Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = 170;
							SetCurrentCustomBT(pCustomImageButton5);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent, pCustomImageButton5);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton6)
						{
							if(BM1Bt[i].BT2->getButtonText().compare("Note")==0 || BM1Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = 178;
							SetCurrentCustomBT(pCustomImageButton6);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton6);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton7)
						{
							if(BM1Bt[i].BT2->getButtonText().compare("Note")==0 || BM1Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = 186;
							SetCurrentCustomBT(pCustomImageButton7);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton7);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton8)
						{
							if(BM1Bt[i].BT2->getButtonText().compare("Note")==0 || BM1Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = 194;
							SetCurrentCustomBT(pCustomImageButton8);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton8);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton9)
						{
							pMainComponent->FaderorOtherFlag = 0;
							this->MidiLayerNum = 139;
							SetCurrentCustomBT(pCustomImageButton9);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent, pCustomImageButton9);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton10)
						{
							pMainComponent->FaderorOtherFlag = 0;
							this->MidiLayerNum = 147;
							SetCurrentCustomBT(pCustomImageButton10);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton10);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton11)
						{
							pMainComponent->FaderorOtherFlag = 0;
							this->MidiLayerNum = 155;
							SetCurrentCustomBT(pCustomImageButton11);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton11);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton12)
						{
							pMainComponent->FaderorOtherFlag = 0;
							this->MidiLayerNum = 163;
							SetCurrentCustomBT(pCustomImageButton12);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton12);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton13)
						{
							pMainComponent->FaderorOtherFlag = 0;
							this->MidiLayerNum = 171;
							SetCurrentCustomBT(pCustomImageButton13);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent, pCustomImageButton13);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton14)
						{
							pMainComponent->FaderorOtherFlag = 0;
							this->MidiLayerNum = 179;
							SetCurrentCustomBT(pCustomImageButton14);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton14);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton15)
						{
							pMainComponent->FaderorOtherFlag = 0;
							this->MidiLayerNum = 187;
							SetCurrentCustomBT(pCustomImageButton15);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton15);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton16)
						{
							pMainComponent->FaderorOtherFlag = 0;
							this->MidiLayerNum = 195;
							SetCurrentCustomBT(pCustomImageButton16);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent, pCustomImageButton16);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
					}
				}
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        if (buttonThatWasClicked == MSB[i])
        {
            if (BM1Bt[i].BT7 == MSB[i])
            {
                if (BM1Bt[i].BT2->getButtonText().compare("Program") == 0 /*|| BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0*/)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 141 + 8 * i;
                    SetCurrentCustomBT(MSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, MSB[i]);
                }
            }
        }
        else if (buttonThatWasClicked == LSB[i])
        {
            if (BM1Bt[i].BT8 == LSB[i])
            {
                if (BM1Bt[i].BT2->getButtonText().compare("Program") == 0)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 142 + 8 * i;
                    SetCurrentCustomBT(LSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, LSB[i]);
                }
            }
        }
    }
}

void ButtonsMini1To8Component::CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged)
{
    Load_or_SaveFlag =1;
	
	pMainComponent-> ChangeEditedButtonImClose();
     /*if (CustomImageButtonThatHasChanged == pCustomImageButton1)
     {
         MiniConstMidiLayerMessage[104] = (unsigned char)( pCustomImageButton1->GetValue().toString().getIntValue());
     }
     else if (CustomImageButtonThatHasChanged == pCustomImageButton2)
     {
        MiniConstMidiLayerMessage[110] = (unsigned char)( pCustomImageButton2->GetValue().toString().getIntValue());
     }
     else if (CustomImageButtonThatHasChanged == pCustomImageButton3)
     {
        MiniConstMidiLayerMessage[116] = (unsigned char)( pCustomImageButton3->GetValue().toString().getIntValue());
     }
     else if (CustomImageButtonThatHasChanged == pCustomImageButton4)
     {
        MiniConstMidiLayerMessage[122] =  (unsigned char)( pCustomImageButton4->GetValue().toString().getIntValue());
     }
     else if (CustomImageButtonThatHasChanged == pCustomImageButton5)
     {
        MiniConstMidiLayerMessage[128] =  (unsigned char)( pCustomImageButton5->GetValue().toString().getIntValue());
     }
     else if (CustomImageButtonThatHasChanged == pCustomImageButton6)
     {
         MiniConstMidiLayerMessage[134] =  (unsigned char)( pCustomImageButton6->GetValue().toString().getIntValue());
     }
     else if (CustomImageButtonThatHasChanged == pCustomImageButton7)
     {
         MiniConstMidiLayerMessage[140] =  (unsigned char)( pCustomImageButton7->GetValue().toString().getIntValue());
     }
     else if (CustomImageButtonThatHasChanged == pCustomImageButton8)
    {
        MiniConstMidiLayerMessage[146] = (unsigned char)( pCustomImageButton8->GetValue().toString().getIntValue());
    }
    else if (CustomImageButtonThatHasChanged == pCustomImageButton9)
    {
        MiniConstMidiLayerMessage[105] =  (unsigned char)( pCustomImageButton9->GetValue().toString().getIntValue());
     }
    else if (CustomImageButtonThatHasChanged == pCustomImageButton10)
    {
        MiniConstMidiLayerMessage[111] =  (unsigned char)( pCustomImageButton10->GetValue().toString().getIntValue());
    }
    else if (CustomImageButtonThatHasChanged == pCustomImageButton11)
    {
        MiniConstMidiLayerMessage[117] =  (unsigned char)( pCustomImageButton11->GetValue().toString().getIntValue());
    }
    else if (CustomImageButtonThatHasChanged == pCustomImageButton12)
    {
        MiniConstMidiLayerMessage[123] =  (unsigned char)( pCustomImageButton12->GetValue().toString().getIntValue());
    }
    else if (CustomImageButtonThatHasChanged == pCustomImageButton13)
    {
        MiniConstMidiLayerMessage[129] =  (unsigned char)( pCustomImageButton13->GetValue().toString().getIntValue());
    }
    else if (CustomImageButtonThatHasChanged == pCustomImageButton14)
    {
       MiniConstMidiLayerMessage[135] =  (unsigned char)( pCustomImageButton14->GetValue().toString().getIntValue());
    }
    else if (CustomImageButtonThatHasChanged == pCustomImageButton15)
    {
        MiniConstMidiLayerMessage[141] =  (unsigned char)( pCustomImageButton15->GetValue().toString().getIntValue());
    }
    else if (CustomImageButtonThatHasChanged == pCustomImageButton16)
    {
        MiniConstMidiLayerMessage[147] =  (unsigned char)( pCustomImageButton16->GetValue().toString().getIntValue());
    }*/
}

void ButtonsMini1To8Component::MyCallOutBox(Component *p,Button* buttonThatWasClicked)
{
    /*CallOutBox & mycall = */CallOutBox::launchAsynchronously(p, buttonThatWasClicked->getScreenBounds(), nullptr);
    //windows.add(&mycall);

    //return mycall;
}

 void ButtonsMini1To8Component:: SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT = currentbuttonThatWasClicked;
 }


 CustomImageButton* ButtonsMini1To8Component:: GetCurrentCustomBT()
 {
     return CurrentCustomBT;
 }

 void ButtonsMini1To8Component::setCustomBTtoggle(bool s)
 {
     CurrentCustomBT->setState(Button::buttonOver);
     //CurrentCustomBT->setToggleState(s,dontSendNotification);
 }

 void ButtonsMini1To8Component::SetNO_BT(Button* buttonThatWasClicked)
 {
     NO_BT = buttonThatWasClicked;
 }

 Button* ButtonsMini1To8Component::GetNO_BT()
 {
    return NO_BT;
 }

 void ButtonsMini1To8Component::SetNextBT(Button *s)
{
    Next_BT = s;
}
Button* ButtonsMini1To8Component::GetNextBT()
{
    return Next_BT;
}

 int ButtonsMini1To8Component::ConventNO_BTtoInt(String JK)
 {
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

 int ButtonsMini1To8Component::GetNum()
 {
    return num;
 }

 CustomImageButton * ButtonsMini1To8Component:: GetCustomBT(CustomImageButton *s)
{
    if(s == pCustomImageButton1)
        return pCustomImageButton9;
    else if(s == pCustomImageButton2)
        return pCustomImageButton10;
    else if(s == pCustomImageButton3)
        return pCustomImageButton11;
    else if(s == pCustomImageButton4)
        return pCustomImageButton12;
    else if(s == pCustomImageButton5)
        return pCustomImageButton13;
    else if(s == pCustomImageButton6)
        return pCustomImageButton14;
    else if(s == pCustomImageButton7)
        return pCustomImageButton15;
    else if(s == pCustomImageButton8)
        return pCustomImageButton16;

}

 void ButtonsMini1To8Component::SetAllButtonState(bool s)
 {
     for (int i = 0; i<8; i++)
     {
         BM1Bt[i].BT1->setEnabled(s);
         BM1Bt[i].BT2->setEnabled(s);
         BM1Bt[i].BT3->setEnabled(s);
         BM1Bt[i].BT4->setEnabled(s);
         BM1Bt[i].BT5->setEnabled(s);
         BM1Bt[i].BT6->setEnabled(s);
         BM1Bt[i].BT7->setEnabled(s);
         BM1Bt[i].BT8->setEnabled(s);
     }
	/*pfader1 ->setEnabled(s);
	pfader2 ->setEnabled(s);
	pfader3 ->setEnabled(s);
	pfader4 ->setEnabled(s);
	pfader5 ->setEnabled(s);
	pfader6 ->setEnabled(s);
	pfader7 ->setEnabled(s);
	pfader8 ->setEnabled(s);

	pCustomImageButton1 ->setEnabled(s);
	pCustomImageButton2 ->setEnabled(s);
	pCustomImageButton3 ->setEnabled(s);
	pCustomImageButton4 ->setEnabled(s);
	pCustomImageButton5 ->setEnabled(s);
	pCustomImageButton6 ->setEnabled(s);
	pCustomImageButton7 ->setEnabled(s);
	pCustomImageButton8 ->setEnabled(s);
	pCustomImageButton9 ->setEnabled(s);
	pCustomImageButton10 ->setEnabled(s);
	pCustomImageButton11 ->setEnabled(s);
	pCustomImageButton12 ->setEnabled(s);
	pCustomImageButton13 ->setEnabled(s);
	pCustomImageButton14 ->setEnabled(s);
	pCustomImageButton15 ->setEnabled(s);
	pCustomImageButton16 ->setEnabled(s);

	BTCO_CH_BT1 ->setEnabled(s);
    ENCO_CH_BT2 ->setEnabled(s);
    ENCO_CH_BT3 ->setEnabled(s);
    ENCO_CH_BT4 ->setEnabled(s);
    ENCO_CH_BT5 ->setEnabled(s);
    ENCO_CH_BT6 ->setEnabled(s);
    ENCO_CH_BT7 ->setEnabled(s);
    ENCO_CH_BT8 ->setEnabled(s);
    BTCP_TY_BT1 ->setEnabled(s);
    BTCP_TY_BT2 ->setEnabled(s);
    BTCP_TY_BT3 ->setEnabled(s);
    BTCP_TY_BT4 ->setEnabled(s);
    BTCP_TY_BT5 ->setEnabled(s);
    BTCP_TY_BT6 ->setEnabled(s);
    BTCP_TY_BT7 ->setEnabled(s);
    BTCP_TY_BT8 ->setEnabled(s);
    BTCP_BEH_BT1 ->setEnabled(s);
    BTCP_BEH_BT2 ->setEnabled(s);
    BTCP_BEH_BT3 ->setEnabled(s);
    BTCP_BEH_BT4 ->setEnabled(s);
    BTCP_BEH_BT5 ->setEnabled(s);
    BTCP_BEH_BT6 ->setEnabled(s);
    BTCP_BEH_BT7 ->setEnabled(s);
    BTCP_BEH_BT8 ->setEnabled(s);
    BTCP_NO_BT1 ->setEnabled(s);
    BTCP_NO_BT2 ->setEnabled(s);
    BTCP_NO_BT3 ->setEnabled(s);
    BTCP_NO_BT4 ->setEnabled(s);
    BTCP_NO_BT5 ->setEnabled(s);
    BTCP_NO_BT6 ->setEnabled(s);
    BTCP_NO_BT7 ->setEnabled(s);
    BTCP_NO_BT8 ->setEnabled(s);*/


 }

 void ButtonsMini1To8Component::MakeButtonPointToBtGroup()
 {
     BM1Bt[0].BT1 = pfader1;
     BM1Bt[0].BT2 = BTCP_TY_BT1;
     BM1Bt[0].BT3 = BTCP_NO_BT1;
     BM1Bt[0].BT4 = pCustomImageButton1;
     BM1Bt[0].BT5 = pCustomImageButton9;
     BM1Bt[0].BT6 = BTCP_BEH_BT1;
     BM1Bt[0].BT7 = MSB[0];
     BM1Bt[0].BT8 = LSB[0];

     BM1Bt[1].BT1 = pfader2;
     BM1Bt[1].BT2 = BTCP_TY_BT2;
     BM1Bt[1].BT3 = BTCP_NO_BT2;
     BM1Bt[1].BT4 = pCustomImageButton2;
     BM1Bt[1].BT5 = pCustomImageButton10;
     BM1Bt[1].BT6 = BTCP_BEH_BT2;
     BM1Bt[1].BT7 = MSB[1];
     BM1Bt[1].BT8 = LSB[1];

     BM1Bt[2].BT1 = pfader3;
     BM1Bt[2].BT2 = BTCP_TY_BT3;
     BM1Bt[2].BT3 = BTCP_NO_BT3;
     BM1Bt[2].BT4 = pCustomImageButton3;
     BM1Bt[2].BT5 = pCustomImageButton11;
     BM1Bt[2].BT6 = BTCP_BEH_BT3;
     BM1Bt[2].BT7 = MSB[2];
     BM1Bt[2].BT8 = LSB[2];

     BM1Bt[3].BT1 = pfader4;
     BM1Bt[3].BT2 = BTCP_TY_BT4;
     BM1Bt[3].BT3 = BTCP_NO_BT4;
     BM1Bt[3].BT4 = pCustomImageButton4;
     BM1Bt[3].BT5 = pCustomImageButton12;
     BM1Bt[3].BT6 = BTCP_BEH_BT4;
     BM1Bt[3].BT7 = MSB[3];
     BM1Bt[3].BT8 = LSB[3];

     BM1Bt[4].BT1 = pfader5;
     BM1Bt[4].BT2 = BTCP_TY_BT5;
     BM1Bt[4].BT3 = BTCP_NO_BT5;
     BM1Bt[4].BT4 = pCustomImageButton5;
     BM1Bt[4].BT5 = pCustomImageButton13;
     BM1Bt[4].BT6 = BTCP_BEH_BT5;
     BM1Bt[4].BT7 = MSB[4];
     BM1Bt[4].BT8 = LSB[4];

     BM1Bt[5].BT1 = pfader6;
     BM1Bt[5].BT2 = BTCP_TY_BT6;
     BM1Bt[5].BT3 = BTCP_NO_BT6;
     BM1Bt[5].BT4 = pCustomImageButton6;
     BM1Bt[5].BT5 = pCustomImageButton14;
     BM1Bt[5].BT6 = BTCP_BEH_BT6;
     BM1Bt[5].BT7 = MSB[5];
     BM1Bt[5].BT8 = LSB[5];

     BM1Bt[6].BT1 = pfader7;
     BM1Bt[6].BT2 = BTCP_TY_BT7;
     BM1Bt[6].BT3 = BTCP_NO_BT7;
     BM1Bt[6].BT4 = pCustomImageButton7;
     BM1Bt[6].BT5 = pCustomImageButton15;
     BM1Bt[6].BT6 = BTCP_BEH_BT7;
     BM1Bt[6].BT7 = MSB[6];
     BM1Bt[6].BT8 = LSB[6];

     BM1Bt[7].BT1 = pfader8;
     BM1Bt[7].BT2 = BTCP_TY_BT8;
     BM1Bt[7].BT3 = BTCP_NO_BT8;
     BM1Bt[7].BT4 = pCustomImageButton8; 
     BM1Bt[7].BT5 = pCustomImageButton16;
     BM1Bt[7].BT6 = BTCP_BEH_BT8;
     BM1Bt[7].BT7 = MSB[7];
     BM1Bt[7].BT8 = LSB[7];

 }

 void ButtonsMini1To8Component::UpdateMiniBt1TO8(int s)
 {
     for (int i = 0; i<8; i++)
     {
         //BM1Bt[i].BT1->setButtonText(String(MiniConstMidiLayerMessage[s + 6 * i] + 1));
         if (MiniConstMidiLayerMessage[s + 8 * i] == 17 * 0x01)       BM1Bt[i].BT1->setButtonText("Global");
         else if (MiniConstMidiLayerMessage[s + 8 * i] == 18 * 0x01){  
			if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == MiniConstMidiLayerMessage[s + 8 * i] )
				BM1Bt[i].BT1->setButtonText("Off*");
			else			
				BM1Bt[i].BT1->setButtonText("Off");
		 }
		 else{
			if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == MiniConstMidiLayerMessage[s + 8 * i] )
				BM1Bt[i].BT1->setButtonText(String(MiniConstMidiLayerMessage[s + 8 * i]+0x01)+"*");
			else
				BM1Bt[i].BT1->setButtonText(String(MiniConstMidiLayerMessage[s + 8 * i]+0x01));
		 }

         if (MiniConstMidiLayerMessage[s + 8 * i + 1] == 0) { BM1Bt[i].BT2->setButtonText("CC");           BM1Bt[i].BT3->setButtonText("CC" + String(MiniConstMidiLayerMessage[s + 8 * i + 2])); }
         else if (MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x01) { BM1Bt[i].BT2->setButtonText("Note");        BM1Bt[i].BT3->setButtonText(Midimusic[MiniConstMidiLayerMessage[s + 8 * i + 2]]); }
         else if (MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x02) { BM1Bt[i].BT2->setButtonText("Pitch");        BM1Bt[i].BT3->setButtonText( /*String(CCBT[ MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x03) { BM1Bt[i].BT2->setButtonText("Program");   BM1Bt[i].BT3->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x04) { BM1Bt[i].BT2->setButtonText("MMC");       BM1Bt[i].BT3->setButtonText(String(MMC_Functions_e[MiniConstMidiLayerMessage[s + 8 * i + 2]])); }

         if (/*MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x02 &&*/ MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x04)
         {
             if (MiniConstMidiLayerMessage[s + 8 * i + 3] == 0x80)
			 {
				 if(MiniConstMidiLayerMessage[s + 8 * i + 1 ] != 0x01 && MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x02)
					BM1Bt[i].BT4->setButtonText("Dec/-1");  
				 else{
					 BM1Bt[i].BT4->setButtonText("0");  MiniConstMidiLayerMessage[s + 8 * i + 3 ]= 0;}				 
			 }
             else if (MiniConstMidiLayerMessage[s + 8 * i + 3] == 0x81)
			 {
				 if(MiniConstMidiLayerMessage[s + 8 * i + 1 ] != 0x01 && MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x02)
					BM1Bt[i].BT4->setButtonText("Inc/+1");  
				 else{
					 BM1Bt[i].BT4->setButtonText("0");  MiniConstMidiLayerMessage[s + 8 * i + 3 ]= 0;}
			 }
             else                                                                                    BM1Bt[i].BT4->setButtonText(String(MiniConstMidiLayerMessage[s + 8 * i + 3]));
             
             if (MiniConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || MiniConstMidiLayerMessage[s + 8 * i + 3] == 0x81 || MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x03)
                 BM1Bt[i].BT5->setButtonText("-");
             else{
                 if (MiniConstMidiLayerMessage[s + 8 * i + 4] == 0x80)             BM1Bt[i].BT5->setButtonText("Dec/-1");
                 else if (MiniConstMidiLayerMessage[s + 8 * i + 4] == 0x81)             BM1Bt[i].BT5->setButtonText("Inc/+1");
                 else                                                                                    BM1Bt[i].BT5->setButtonText(String(MiniConstMidiLayerMessage[s + 8 * i + 4]));
             }

			 if(MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x03)
			 {
				 BM1Bt[i].BT6->setButtonText("Momentary");
			 }
			 else if(MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x00 && (MiniConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || MiniConstMidiLayerMessage[s + 8 * i + 3] == 0x81))
			 {
				 BM1Bt[ i].BT6->setButtonText("Momentary");
				 MiniConstMidiLayerMessage[s + 8 * i + 5] = 0;
			 }
			 else
			 {
				if (MiniConstMidiLayerMessage[s + 8 * i + 5] == 0x00) BM1Bt[i].BT6->setButtonText("Momentary");
				else BM1Bt[i].BT6->setButtonText("Toggle");
			 }
         }
         else{
             BM1Bt[i].BT4->setButtonText("-");
             BM1Bt[i].BT5->setButtonText("-");
             BM1Bt[i].BT6->setButtonText("-");
         }

         if (MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x03 /*|| MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x02*/) {
             BM1Bt[i].BT7->setButtonText(String(MiniConstMidiLayerMessage[s + 8 * i + 6]));
             BM1Bt[i].BT8->setButtonText(String(MiniConstMidiLayerMessage[s + 8 * i + 7]));
         }
         else{
             BM1Bt[i].BT7->setButtonText("-");
             BM1Bt[i].BT8->setButtonText("-");
         }
     }
    

    repaint();
 }

void ButtonsMini1To8Component::GetCustomBtID()
{
    for (int i = 0; i<8; i++)
    {
        if (!(BM1Bt[i].BT1->getButtonText().compare("Global") == 0) && !(BM1Bt[i].BT1->getButtonText().compare("Off") == 0) && !(BM1Bt[i].BT1->getButtonText().compare("Off*") == 0))
            if(BM1Bt[i].BT1->getButtonText().getIntValue() >0 && BM1Bt[i].BT1->getButtonText().getIntValue() <17)
				MiniConstMidiLayerMessage[135 + 0 + i * 8] = (unsigned char)(GetintValue(BM1Bt[i].BT1->getButtonText()))*0x01;

        if (BM1Bt[i].BT4->getButtonText().compare("Dec/-1") == 0)
            MiniConstMidiLayerMessage[135 + 3 + i * 8] = 0x80;
        else if (BM1Bt[i].BT4->getButtonText().compare("Inc/+1") == 0)
            MiniConstMidiLayerMessage[135 + 3 + i * 8] = 0x81;
        else if (!(BM1Bt[i].BT4->getButtonText().compare("-") == 0))
            MiniConstMidiLayerMessage[135 + 3 + i * 8] = (unsigned char)(BM1Bt[i].BT4->getButtonText().getIntValue()) * 0x01;

        if (!(BM1Bt[i].BT5->getButtonText().compare("-") == 0))
            MiniConstMidiLayerMessage[135 + 4 + i * 8] = (unsigned char)(BM1Bt[i].BT5->getButtonText().getIntValue()) * 0x01;

        if (MiniConstMidiLayerMessage[135 + 1 + i * 8] == 0x03 || MiniConstMidiLayerMessage[135 + 1 + i * 8] == 0x02)
        {
            MiniConstMidiLayerMessage[135 + 6 + i * 8] = (unsigned char)(BM1Bt[i].BT7->getButtonText().getIntValue()) * 0x01;
            MiniConstMidiLayerMessage[135 + 7 + i * 8] = (unsigned char)(BM1Bt[i].BT8->getButtonText().getIntValue()) * 0x01;
        }
    }
    
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ButtonsMini1To8Component"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="664" initialHeight="535">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="23 32 609 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="119 12 2 164" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="505 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="457 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="473 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="489 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="537 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="521 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="553 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="569 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="457 359 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="458 360 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="473 359 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="474 360 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="489 359 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="490 360 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="505 359 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="506 360 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="521 359 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="522 360 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="537 359 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="538 360 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="553 359 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="554 360 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="569 359 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="570 360 10 10" fill="solid: ff000000" hasStroke="0"/>
    <RECT pos="505 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="457 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="473 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="489 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="537 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="521 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="553 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="569 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="612 366 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="609 377 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="609 393 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="593 359 1 45" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="597 359 1 45" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="593 359 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="594 403 4 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="592 373 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="451 374 135 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="451 388 135 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="451 374 1 14" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="585 374 1 14" fill="solid: ffffffff" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="6daef998c1833eb4" memberName="label_MOVE"
         virtualName="" explicitFocusOrder="0" pos="24 5 64 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="PUSH" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d18f527664b1e19b" memberName="label_CHANNEL"
         virtualName="" explicitFocusOrder="0" pos="24 35 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="CHANNEL" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ce802d9d5f9cd91c" memberName="label_TYPE"
         virtualName="" explicitFocusOrder="0" pos="24 61 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TYPE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f1a6c94c64d04bc4" memberName="label_NO"
         virtualName="" explicitFocusOrder="0" pos="24 87 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="NO." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f57992ce53267e78" memberName="label_MIN"
         virtualName="" explicitFocusOrder="0" pos="24 113 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MIN VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4f62c401154002be" memberName="label_MAX"
         virtualName="" explicitFocusOrder="0" pos="24 139 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MAX VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f190e2c45221d1cf" memberName="label_FD1"
         virtualName="" explicitFocusOrder="0" pos="136 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="158fab2e75ce057e" memberName="label_FD2"
         virtualName="" explicitFocusOrder="0" pos="200 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 2" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="59784a12467c2edd" memberName="label_FD3"
         virtualName="" explicitFocusOrder="0" pos="264 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 3" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8c4b98f9bfb3cc4e" memberName="label_FD4"
         virtualName="" explicitFocusOrder="0" pos="328 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 4" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d29c323ead8312a0" memberName="label_FD5"
         virtualName="" explicitFocusOrder="0" pos="392 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 5" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5012a250ae45e10c" memberName="label_FD6"
         virtualName="" explicitFocusOrder="0" pos="456 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 6" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="262b90710eed34aa" memberName="label_FD7"
         virtualName="" explicitFocusOrder="0" pos="520 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 7" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="da92fbab385df26" memberName="label_FD8"
         virtualName="" explicitFocusOrder="0" pos="584 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 8" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e4b35a2fa3a17b7b" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="24 61 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5341d72318556928" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="25 87 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a6617d15bc7b2e63" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="24 113 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="70701aeddec493fb" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="24 139 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="55a1642e7dd79fe2" memberName="label_MAX3"
         virtualName="" explicitFocusOrder="0" pos="24 165 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BEHAVIOR" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="73ce54ba46fc80f2" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="24 165 609 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="7b6bfda123f7edce" memberName="BTCO_CH_BT1"
              virtualName="" explicitFocusOrder="0" pos="121 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="982bc114cfe3f94a" memberName="ENCO_CH_BT2"
              virtualName="" explicitFocusOrder="0" pos="185 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="2"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cb054c8a11374f1" memberName="ENCO_CH_BT3"
              virtualName="" explicitFocusOrder="0" pos="249 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="3"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8cb6793d75ebd4f6" memberName="ENCO_CH_BT4"
              virtualName="" explicitFocusOrder="0" pos="313 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="4"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="15c8e97c4ad6429e" memberName="ENCO_CH_BT5"
              virtualName="" explicitFocusOrder="0" pos="377 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="5"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="bfcc1c51bdb45e64" memberName="ENCO_CH_BT6"
              virtualName="" explicitFocusOrder="0" pos="441 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="6"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6a1631d78b7609" memberName="ENCO_CH_BT7"
              virtualName="" explicitFocusOrder="0" pos="505 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="7"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="374ef557916487ef" memberName="ENCO_CH_BT8"
              virtualName="" explicitFocusOrder="0" pos="569 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="8"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5a38375d9474f4" memberName="BTCP_TY_BT1"
              virtualName="" explicitFocusOrder="0" pos="121 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cb10ebcdc15fa6f1" memberName="BTCP_TY_BT2"
              virtualName="" explicitFocusOrder="0" pos="184 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d0ca472bf46e2cba" memberName="BTCP_TY_BT3"
              virtualName="" explicitFocusOrder="0" pos="248 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b7bfc7315d20e3b2" memberName="BTCP_TY_BT4"
              virtualName="" explicitFocusOrder="0" pos="312 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pitch"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="46d7276338ce5b69" memberName="BTCP_TY_BT5"
              virtualName="" explicitFocusOrder="0" pos="376 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="27e6e2a3d57a18e9" memberName="BTCP_TY_BT6"
              virtualName="" explicitFocusOrder="0" pos="440 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d011e0f807abab2b" memberName="BTCP_TY_BT7"
              virtualName="" explicitFocusOrder="0" pos="504 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="ed09bd903e3e12cc" memberName="BTCP_TY_BT8"
              virtualName="" explicitFocusOrder="0" pos="568 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6d140b501739d7d6" memberName="BTCP_BEH_BT1"
              virtualName="" explicitFocusOrder="0" pos="121 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5b22bcd19c7d90" memberName="BTCP_BEH_BT2"
              virtualName="" explicitFocusOrder="0" pos="185 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e583376883a3e049" memberName="BTCP_BEH_BT3"
              virtualName="" explicitFocusOrder="0" pos="249 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b2bd04b50e39565b" memberName="BTCP_BEH_BT4"
              virtualName="" explicitFocusOrder="0" pos="313 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="f76650deded802f3" memberName="BTCP_BEH_BT5"
              virtualName="" explicitFocusOrder="0" pos="377 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8f6db232510d39ac" memberName="BTCP_BEH_BT6"
              virtualName="" explicitFocusOrder="0" pos="441 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a92097d33cc251fc" memberName="BTCP_BEH_BT7"
              virtualName="" explicitFocusOrder="0" pos="505 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cbca9aba128bbdf0" memberName="BTCP_BEH_BT8"
              virtualName="" explicitFocusOrder="0" pos="569 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6fa660fa9e731394" memberName="BTCP_NO_BT1"
              virtualName="" explicitFocusOrder="0" pos="121 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC0"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7514009def66599b" memberName="BTCP_NO_BT2"
              virtualName="" explicitFocusOrder="0" pos="184 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="C0"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e339edfcf9e716e6" memberName="BTCP_NO_BT3"
              virtualName="" explicitFocusOrder="0" pos="248 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="C1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="285ce95e2d51d0e1" memberName="BTCP_NO_BT4"
              virtualName="" explicitFocusOrder="0" pos="312 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="-"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="88c81e4fee62d761" memberName="BTCP_NO_BT5"
              virtualName="" explicitFocusOrder="0" pos="376 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="C0"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b8d5e9c6f026f9f8" memberName="BTCP_NO_BT6"
              virtualName="" explicitFocusOrder="0" pos="440 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="233c5e8aa5b1be8b" memberName="BTCP_NO_BT7"
              virtualName="" explicitFocusOrder="0" pos="504 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="C4"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="36732bd09ae7ed22" memberName="BTCP_NO_BT8"
              virtualName="" explicitFocusOrder="0" pos="568 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="-"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="cfecc970f802a60e" memberName="LSB1" virtualName=""
         explicitFocusOrder="0" pos="24 193 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c96aae7277931f8" memberName="MSB1" virtualName=""
         explicitFocusOrder="0" pos="24 220 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="38f4013fb65234b3" memberName="LNMSB1" virtualName=""
         explicitFocusOrder="0" pos="24 219 613 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="92d5dfa8589af6e9" memberName="LNLSB1" virtualName=""
         explicitFocusOrder="0" pos="24 192 613 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7271a738bd95d8d9" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="119 9 2 233" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
