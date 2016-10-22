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
#include "CC_Viewport_Component.h"
#include "FiveMenuComponent.h"
#include "Twochoose_Component.h"
#include "PanFanComponent.h"
#include "SixthChannelComponent.h"
#include "ViewChannelComponent.h"
#include "BackgroundThread.h"
#include "MusicNoteViewComponent.h"
#include "MMCFuntionsViewComponent.h"
//[/Headers]

#include "ButtonsCompact17To24Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
ButtonsCompact17To24Component * BC17TO24 = nullptr;
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

extern String Midimusic[128];
extern String MMC_Functions_e[9];
extern String CCBT[128];
ButtonGroup BC3Bt[8];
extern MainComponent * pMainComponent;
//[/MiscUserDefs]

//==============================================================================
ButtonsCompact17To24Component::ButtonsCompact17To24Component ()
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
                                              "BT 17"));
    label_FD1->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD1->setJustificationType (Justification::centredLeft);
    label_FD1->setEditable (false, false, false);
    label_FD1->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD1->setColour (TextEditor::textColourId, Colours::black);
    label_FD1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD2 = new Label ("new label",
                                              "BT 18"));
    label_FD2->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD2->setJustificationType (Justification::centredLeft);
    label_FD2->setEditable (false, false, false);
    label_FD2->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD2->setColour (TextEditor::textColourId, Colours::black);
    label_FD2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD3 = new Label ("new label",
                                              "BT 19"));
    label_FD3->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD3->setJustificationType (Justification::centredLeft);
    label_FD3->setEditable (false, false, false);
    label_FD3->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD3->setColour (TextEditor::textColourId, Colours::black);
    label_FD3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD4 = new Label ("new label",
                                              "BT 20"));
    label_FD4->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD4->setJustificationType (Justification::centredLeft);
    label_FD4->setEditable (false, false, false);
    label_FD4->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD4->setColour (TextEditor::textColourId, Colours::black);
    label_FD4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD5 = new Label ("new label",
                                              "BT 21"));
    label_FD5->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD5->setJustificationType (Justification::centredLeft);
    label_FD5->setEditable (false, false, false);
    label_FD5->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD5->setColour (TextEditor::textColourId, Colours::black);
    label_FD5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD6 = new Label ("new label",
                                              "BT 22"));
    label_FD6->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD6->setJustificationType (Justification::centredLeft);
    label_FD6->setEditable (false, false, false);
    label_FD6->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD6->setColour (TextEditor::textColourId, Colours::black);
    label_FD6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD7 = new Label ("new label",
                                              "BT 23"));
    label_FD7->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD7->setJustificationType (Justification::centredLeft);
    label_FD7->setEditable (false, false, false);
    label_FD7->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD7->setColour (TextEditor::textColourId, Colours::black);
    label_FD7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD8 = new Label ("new label",
                                              "BT 24"));
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

    addAndMakeVisible (BTCP_BEH_BT17 = new TextButton ("new button"));
    BTCP_BEH_BT17->setButtonText ("Momentary");
    BTCP_BEH_BT17->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT17->addListener (this);
    BTCP_BEH_BT17->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT17->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT17->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT17->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT18 = new TextButton ("new button"));
    BTCP_BEH_BT18->setButtonText ("Momentary");
    BTCP_BEH_BT18->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT18->addListener (this);
    BTCP_BEH_BT18->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT18->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT18->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT18->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT19 = new TextButton ("new button"));
    BTCP_BEH_BT19->setButtonText ("Toggle");
    BTCP_BEH_BT19->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT19->addListener (this);
    BTCP_BEH_BT19->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT19->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT19->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT19->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT20 = new TextButton ("new button"));
    BTCP_BEH_BT20->setButtonText ("Momentary");
    BTCP_BEH_BT20->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT20->addListener (this);
    BTCP_BEH_BT20->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT20->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT20->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT20->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT21 = new TextButton ("new button"));
    BTCP_BEH_BT21->setButtonText ("Toggle");
    BTCP_BEH_BT21->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT21->addListener (this);
    BTCP_BEH_BT21->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT21->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT21->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT21->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT22 = new TextButton ("new button"));
    BTCP_BEH_BT22->setButtonText ("Toggle");
    BTCP_BEH_BT22->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT22->addListener (this);
    BTCP_BEH_BT22->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT22->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT22->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT22->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT23 = new TextButton ("new button"));
    BTCP_BEH_BT23->setButtonText ("Momentary");
    BTCP_BEH_BT23->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT23->addListener (this);
    BTCP_BEH_BT23->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT23->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT23->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT23->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT24 = new TextButton ("new button"));
    BTCP_BEH_BT24->setButtonText ("Momentary");
    BTCP_BEH_BT24->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT24->addListener (this);
    BTCP_BEH_BT24->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT24->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT24->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT24->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT17 = new TextButton ("new button"));
    BTCO_CH_BT17->setButtonText ("1");
    BTCO_CH_BT17->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT17->addListener (this);
    BTCO_CH_BT17->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT17->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT17->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT17->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT18 = new TextButton ("new button"));
    ENCO_CH_BT18->setButtonText ("2");
    ENCO_CH_BT18->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT18->addListener (this);
    ENCO_CH_BT18->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT18->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT18->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT18->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT19 = new TextButton ("new button"));
    ENCO_CH_BT19->setButtonText ("3");
    ENCO_CH_BT19->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT19->addListener (this);
    ENCO_CH_BT19->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT19->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT19->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT19->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT20 = new TextButton ("new button"));
    ENCO_CH_BT20->setButtonText ("4");
    ENCO_CH_BT20->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT20->addListener (this);
    ENCO_CH_BT20->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT20->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT20->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT20->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT21 = new TextButton ("new button"));
    ENCO_CH_BT21->setButtonText ("5");
    ENCO_CH_BT21->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT21->addListener (this);
    ENCO_CH_BT21->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT21->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT21->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT21->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT22 = new TextButton ("new button"));
    ENCO_CH_BT22->setButtonText ("6");
    ENCO_CH_BT22->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT22->addListener (this);
    ENCO_CH_BT22->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT22->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT22->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT22->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT23 = new TextButton ("new button"));
    ENCO_CH_BT23->setButtonText ("7");
    ENCO_CH_BT23->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT23->addListener (this);
    ENCO_CH_BT23->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT23->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT23->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT23->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT24 = new TextButton ("new button"));
    ENCO_CH_BT24->setButtonText ("8");
    ENCO_CH_BT24->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT24->addListener (this);
    ENCO_CH_BT24->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT24->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT24->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT24->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT17 = new TextButton ("new button"));
    BTCP_TY_BT17->setButtonText ("CC");
    BTCP_TY_BT17->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT17->addListener (this);
    BTCP_TY_BT17->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT17->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT17->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT17->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT18 = new TextButton ("new button"));
    BTCP_TY_BT18->setButtonText ("Note");
    BTCP_TY_BT18->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT18->addListener (this);
    BTCP_TY_BT18->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT18->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT18->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT18->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT19 = new TextButton ("new button"));
    BTCP_TY_BT19->setButtonText ("CC");
    BTCP_TY_BT19->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT19->addListener (this);
    BTCP_TY_BT19->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT19->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT19->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT19->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT20 = new TextButton ("new button"));
    BTCP_TY_BT20->setButtonText ("Pitch");
    BTCP_TY_BT20->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT20->addListener (this);
    BTCP_TY_BT20->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT20->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT20->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT20->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT21 = new TextButton ("new button"));
    BTCP_TY_BT21->setButtonText ("Note");
    BTCP_TY_BT21->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT21->addListener (this);
    BTCP_TY_BT21->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT21->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT21->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT21->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT22 = new TextButton ("new button"));
    BTCP_TY_BT22->setButtonText ("CC");
    BTCP_TY_BT22->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT22->addListener (this);
    BTCP_TY_BT22->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT22->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT22->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT22->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT23 = new TextButton ("new button"));
    BTCP_TY_BT23->setButtonText ("CC");
    BTCP_TY_BT23->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT23->addListener (this);
    BTCP_TY_BT23->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT23->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT23->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT23->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT24 = new TextButton ("new button"));
    BTCP_TY_BT24->setButtonText ("CC");
    BTCP_TY_BT24->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT24->addListener (this);
    BTCP_TY_BT24->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT24->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT24->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT24->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT1 = new TextButton ("new button"));
    BTCP_NO_BT1->setButtonText ("CC1");
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
    BTCP_NO_BT3->setButtonText ("CC1");
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
    BTCP_NO_BT7->setButtonText ("CC1");
    BTCP_NO_BT7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT7->addListener (this);
    BTCP_NO_BT7->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT7->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT7->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT7->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_NO_BT8 = new TextButton ("new button"));
    BTCP_NO_BT8->setButtonText ("CC1");
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
                                         "MSB"));
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

    BTCP_BEH_BT17  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT18  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT19  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT20  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT21  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT22 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT23  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT24  ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT17  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT18  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT19  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT20  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT21  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT22  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT23  ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT24  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT17  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT18  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT19  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT20  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT21  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT22  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT23  ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT24  ->setLookAndFeel(&lookAndFeelV4);

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

ButtonsCompact17To24Component::~ButtonsCompact17To24Component()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
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

    for (int i = 0; i < 8; i++)
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
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label_MAX3 = nullptr;
    label11 = nullptr;
    BTCP_BEH_BT17 = nullptr;
    BTCP_BEH_BT18 = nullptr;
    BTCP_BEH_BT19 = nullptr;
    BTCP_BEH_BT20 = nullptr;
    BTCP_BEH_BT21 = nullptr;
    BTCP_BEH_BT22 = nullptr;
    BTCP_BEH_BT23 = nullptr;
    BTCP_BEH_BT24 = nullptr;
    BTCO_CH_BT17 = nullptr;
    ENCO_CH_BT18 = nullptr;
    ENCO_CH_BT19 = nullptr;
    ENCO_CH_BT20 = nullptr;
    ENCO_CH_BT21 = nullptr;
    ENCO_CH_BT22 = nullptr;
    ENCO_CH_BT23 = nullptr;
    ENCO_CH_BT24 = nullptr;
    BTCP_TY_BT17 = nullptr;
    BTCP_TY_BT18 = nullptr;
    BTCP_TY_BT19 = nullptr;
    BTCP_TY_BT20 = nullptr;
    BTCP_TY_BT21 = nullptr;
    BTCP_TY_BT22 = nullptr;
    BTCP_TY_BT23 = nullptr;
    BTCP_TY_BT24 = nullptr;
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
void ButtonsCompact17To24Component::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xffffab00));
    g.fillRect (23, 32, 609, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (486, 337, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (438, 337, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (454, 337, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (442, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (446, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (442, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (442, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (441, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillRect (586, 401, 13, 10);

    g.setColour (Colour (0xffffab00));
    g.fillRect (470, 337, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (518, 337, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (502, 337, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (534, 337, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (550, 337, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (438.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (439.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (454.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (455.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (470.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (471.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (486.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (487.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (502.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (503.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (518.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (519.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (534.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (535.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (550.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (551.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillRect (486, 353, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (438, 353, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (454, 353, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (470, 353, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (518, 353, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (502, 353, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (534, 353, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (550, 353, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (486, 369, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (438, 369, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (454, 369, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (470, 369, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (518, 369, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (502, 369, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (534, 369, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (550, 369, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (458, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (462, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (458, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (458, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (457, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillRect (474, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (478, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (474, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (474, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (473, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillRect (490, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (494, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (490, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (490, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (489, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillRect (506, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (510, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (506, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (506, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (505, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillRect (522, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (526, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (522, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (522, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (521, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillRect (538, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (542, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (538, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (538, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (537, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillRect (554, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (558, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (554, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (554, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (553, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillRect (602, 401, 13, 10);

    g.setColour (Colour (0xffffab00));
    g.fillRect (586, 419, 13, 10);

    g.setColour (Colour (0xffffab00));
    g.fillRect (602, 419, 13, 10);

    g.setColour (Colour (0xffffab00));
    g.fillRect (586, 437, 13, 10);

    g.setColour (Colour (0xffffab00));
    g.fillRect (602, 437, 13, 10);

    g.setColour (Colour (0xffffab00));
    g.fillRect (570, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (574, 386, 1, 67);

    g.setColour (Colour (0xffffab00));
    g.fillRect (570, 386, 5, 1);

    g.setColour (Colour (0xffffab00));
    g.fillRect (570, 451, 5, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (569, 409, 7, 15);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (586.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (587.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (602.0f, 319.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (603.0f, 320.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (586.0f, 337.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (587.0f, 338.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (602.0f, 337.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (603.0f, 338.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (586.0f, 355.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (587.0f, 356.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (602.0f, 355.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (603.0f, 356.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (586.0f, 373.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (587.0f, 374.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillEllipse (602.0f, 373.0f, 12.0f, 12.0f);

    g.setColour (Colours::black);
    g.fillEllipse (603.0f, 374.0f, 10.0f, 10.0f);

    g.setColour (Colour (0xffffab00));
    g.fillRect (486, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (438, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (454, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (470, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (518, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (502, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (534, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (550, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (567, 458, 12, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (571, 336, 4, 4);

    g.setColour (Colour (0xffffab00));
    g.fillRect (571, 344, 4, 4);

    g.setColour (Colour (0xffffab00));
    g.fillRect (571, 352, 4, 4);

    g.setColour (Colour (0xffffab00));
    g.fillRect (571, 360, 4, 4);

    g.setColour (Colour (0xffffab00));
    g.fillRect (571, 368, 4, 4);

    g.setColour (Colour (0xffffab00));
    g.fillRect (571, 376, 4, 4);

    g.setColour (Colours::white);
    g.fillRect (432, 366, 135, 1);

    g.setColour (Colours::white);
    g.fillRect (432, 380, 135, 1);

    g.setColour (Colours::white);
    g.fillRect (432, 366, 1, 14);

    g.setColour (Colours::white);
    g.fillRect (566, 366, 1, 14);

    g.setColour (Colour (0xffffab00));
    g.fillRect (586, 458, 13, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (602, 458, 13, 9);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ButtonsCompact17To24Component::resized()
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
    BTCP_BEH_BT17->setBounds (121, 166, 65, 25);
    BTCP_BEH_BT18->setBounds (185, 166, 65, 25);
    BTCP_BEH_BT19->setBounds (249, 166, 65, 25);
    BTCP_BEH_BT20->setBounds (313, 166, 65, 25);
    BTCP_BEH_BT21->setBounds (377, 166, 65, 25);
    BTCP_BEH_BT22->setBounds (441, 166, 65, 25);
    BTCP_BEH_BT23->setBounds (505, 166, 65, 25);
    BTCP_BEH_BT24->setBounds (569, 166, 65, 25);
    BTCO_CH_BT17->setBounds (121, 34, 65, 25);
    ENCO_CH_BT18->setBounds (185, 34, 65, 25);
    ENCO_CH_BT19->setBounds (249, 34, 65, 25);
    ENCO_CH_BT20->setBounds (313, 34, 65, 25);
    ENCO_CH_BT21->setBounds (377, 34, 65, 25);
    ENCO_CH_BT22->setBounds (441, 34, 65, 25);
    ENCO_CH_BT23->setBounds (505, 34, 65, 25);
    ENCO_CH_BT24->setBounds (569, 34, 65, 25);
    BTCP_TY_BT17->setBounds (121, 62, 65, 24);
    BTCP_TY_BT18->setBounds (184, 62, 65, 24);
    BTCP_TY_BT19->setBounds (248, 62, 65, 24);
    BTCP_TY_BT20->setBounds (312, 62, 65, 24);
    BTCP_TY_BT21->setBounds (376, 62, 65, 24);
    BTCP_TY_BT22->setBounds (440, 62, 65, 24);
    BTCP_TY_BT23->setBounds (504, 62, 65, 24);
    BTCP_TY_BT24->setBounds (568, 62, 65, 24);
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

void ButtonsCompact17To24Component::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    pMainComponent->setMyComponent(5);
	GetCustomBtID();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == BTCP_BEH_BT17)
    {
        //[UserButtonCode_BTCP_BEH_BT17] -- add your button handler code here..
		if (!(BC3Bt[0].BT2->getButtonText().compare("MMC") == 0) && !(BC3Bt[0].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC3Bt[0].BT2->getButtonText().compare("CC")==0 && (BC3Bt[0].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[0].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC17_STATR_NO + 5 + BC_COM * 0;
			SetNO_BT(BTCP_BEH_BT17);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT17->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT17]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT18)
    {
        //[UserButtonCode_BTCP_BEH_BT18] -- add your button handler code here..
		if (!(BC3Bt[1].BT2->getButtonText().compare("MMC") == 0) && !(BC3Bt[1].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC3Bt[1].BT2->getButtonText().compare("CC")==0 && (BC3Bt[1].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[1].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC17_STATR_NO + 5 + BC_COM * 1;
			SetNO_BT(BTCP_BEH_BT18);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT18->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT18]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT19)
    {
        //[UserButtonCode_BTCP_BEH_BT19] -- add your button handler code here..
		if (!(BC3Bt[2].BT2->getButtonText().compare("MMC") == 0) && !(BC3Bt[2].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC3Bt[2].BT2->getButtonText().compare("CC")==0 && (BC3Bt[2].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[2].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC17_STATR_NO + 5 + BC_COM * 2;
			SetNO_BT(BTCP_BEH_BT19);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT19->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT19]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT20)
    {
        //[UserButtonCode_BTCP_BEH_BT20] -- add your button handler code here..
		if (!(BC3Bt[3].BT2->getButtonText().compare("MMC") == 0) && !(BC3Bt[3].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC3Bt[3].BT2->getButtonText().compare("CC")==0 && (BC3Bt[3].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[3].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC17_STATR_NO + 5 + BC_COM * 3;
			SetNO_BT(BTCP_BEH_BT20);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT20->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT20]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT21)
    {
        //[UserButtonCode_BTCP_BEH_BT21] -- add your button handler code here..
		if (!(BC3Bt[4].BT2->getButtonText().compare("MMC") == 0) && !(BC3Bt[4].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC3Bt[4].BT2->getButtonText().compare("CC")==0 && (BC3Bt[4].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[4].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC17_STATR_NO + 5 + BC_COM * 4;
			SetNO_BT(BTCP_BEH_BT21);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT21->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT21]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT22)
    {
        //[UserButtonCode_BTCP_BEH_BT22] -- add your button handler code here..
		if (!(BC3Bt[5].BT2->getButtonText().compare("MMC") == 0) && !(BC3Bt[5].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC3Bt[5].BT2->getButtonText().compare("CC")==0 && (BC3Bt[5].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[5].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC17_STATR_NO + 5 + BC_COM * 5;
			SetNO_BT(BTCP_BEH_BT22);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT22->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT22]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT23)
    {
        //[UserButtonCode_BTCP_BEH_BT23] -- add your button handler code here..
		if (!(BC3Bt[6].BT2->getButtonText().compare("MMC") == 0) && !(BC3Bt[6].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC3Bt[6].BT2->getButtonText().compare("CC")==0 && (BC3Bt[6].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[6].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC17_STATR_NO + 5 + BC_COM * 6;
			SetNO_BT(BTCP_BEH_BT23);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT23->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT23]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT24)
    {
        //[UserButtonCode_BTCP_BEH_BT24] -- add your button handler code here..
		if (!(BC3Bt[7].BT2->getButtonText().compare("MMC") == 0) && !(BC3Bt[7].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC3Bt[7].BT2->getButtonText().compare("CC")==0 && (BC3Bt[7].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[7].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC17_STATR_NO + 5 + BC_COM * 7;
			SetNO_BT(BTCP_BEH_BT24);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT24->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT24]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT17)
    {
        //[UserButtonCode_BTCO_CH_BT17] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT17]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT18)
    {
        //[UserButtonCode_ENCO_CH_BT18] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT18]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT19)
    {
        //[UserButtonCode_ENCO_CH_BT19] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT19]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT20)
    {
        //[UserButtonCode_ENCO_CH_BT20] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT20]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT21)
    {
        //[UserButtonCode_ENCO_CH_BT21] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT21]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT22)
    {
        //[UserButtonCode_ENCO_CH_BT22] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT22]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT23)
    {
        //[UserButtonCode_ENCO_CH_BT23] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT23]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT24)
    {
        //[UserButtonCode_ENCO_CH_BT24] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT24]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT17)
    {
        //[UserButtonCode_BTCP_TY_BT17] -- add your button handler code here..
        MidiLayerNum = BC17_STATR_NO + 1 + BC_COM * 0;
        Push_or_Turn =0;
        SetNO_BT(BTCP_TY_BT17);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT17->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT17]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT18)
    {
        //[UserButtonCode_BTCP_TY_BT18] -- add your button handler code here..
        MidiLayerNum =BC17_STATR_NO + 1 + BC_COM * 1;
        Push_or_Turn =0;
        SetNO_BT(BTCP_TY_BT18);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT18->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT18]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT19)
    {
        //[UserButtonCode_BTCP_TY_BT19] -- add your button handler code here..
        MidiLayerNum =BC17_STATR_NO + 1 + BC_COM * 2;
        Push_or_Turn =0;
        SetNO_BT(BTCP_TY_BT19);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT19->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT19]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT20)
    {
        //[UserButtonCode_BTCP_TY_BT20] -- add your button handler code here..
        MidiLayerNum =BC17_STATR_NO + 1 + BC_COM * 3;
        Push_or_Turn =0;
        SetNO_BT(BTCP_TY_BT20);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT20->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT20]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT21)
    {
        //[UserButtonCode_BTCP_TY_BT21] -- add your button handler code here..
        MidiLayerNum =BC17_STATR_NO + 1 + BC_COM * 4;
        Push_or_Turn =0;
        SetNO_BT(BTCP_TY_BT21);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT21->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT21]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT22)
    {
        //[UserButtonCode_BTCP_TY_BT22] -- add your button handler code here..
        MidiLayerNum =BC17_STATR_NO + 1 + BC_COM * 5;
        Push_or_Turn =0;
        SetNO_BT(BTCP_TY_BT22);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT22->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT22]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT23)
    {
        //[UserButtonCode_BTCP_TY_BT23] -- add your button handler code here..
        MidiLayerNum =BC17_STATR_NO + 1 + BC_COM * 6;
        Push_or_Turn =0;
        SetNO_BT(BTCP_TY_BT23);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT23->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT23]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT24)
    {
        //[UserButtonCode_BTCP_TY_BT24] -- add your button handler code here..
        MidiLayerNum =BC17_STATR_NO + 1 + BC_COM * 7;
        Push_or_Turn =0;
        SetNO_BT(BTCP_TY_BT24);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT24->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT24]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT1)
    {
        //[UserButtonCode_BTCP_NO_BT1] -- add your button handler code here..
        MidiLayerNum =BC17_STATR_NO + 2 + BC_COM * 0;
        if (BTCP_TY_BT17->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT17->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT1);
            num = ConventNO_BTtoInt(BTCP_NO_BT1->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT17->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT1);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT17->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC17_STATR_NO + 2 + BC_COM * 1;
        if (BTCP_TY_BT18->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT18->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT2);
            num = ConventNO_BTtoInt(BTCP_NO_BT2->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT18->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT2);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT18->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC17_STATR_NO + 2 + BC_COM * 2;
        if (BTCP_TY_BT19->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT19->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT3);
            num = ConventNO_BTtoInt(BTCP_NO_BT3->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT19->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT3);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT19->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC17_STATR_NO + 2 + BC_COM * 3;
        if (BTCP_TY_BT20->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT20->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT4);
            num = ConventNO_BTtoInt(BTCP_NO_BT4->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT20->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT4);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT20->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC17_STATR_NO + 2 + BC_COM * 4;
        if (BTCP_TY_BT21->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT21->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT5);
            num = ConventNO_BTtoInt(BTCP_NO_BT5->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT21->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT5);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT21->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC17_STATR_NO + 2 + BC_COM * 5;
        if (BTCP_TY_BT22->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT22->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT6);
            num = ConventNO_BTtoInt(BTCP_NO_BT6->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT22->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT6);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT22->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC17_STATR_NO + 2 + BC_COM * 6;
        if (BTCP_TY_BT23->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT23->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT7);
            num = ConventNO_BTtoInt(BTCP_NO_BT7->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT23->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT7);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT23->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC17_STATR_NO + 2 + BC_COM * 7;
        if (BTCP_TY_BT24->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT24->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT8);
            num = ConventNO_BTtoInt(BTCP_NO_BT8->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT24->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT8);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT24->getButtonText().compare("MMC") == 0)
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
void ButtonsCompact17To24Component::CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged)
{
    Load_or_SaveFlag =1;
	pMainComponent-> ChangeEditedButtonImClose();
    
	for(int i =0;i<8;i++)
	{
		if(CustomTextButtonThatHasChanged == BC3Bt[i].BT1)
		{
			if(!(BC3Bt[i].BT1->GetValue().toString().compare("Off")==0) && !(BC3Bt[i].BT1->GetValue().toString().compare("Global")==0))
			{
				if(BC3Bt[i].BT1->GetValue().toString().getLastCharacters(1).compare("*")==0)
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() != BC3Bt[i].BT1->GetValue().toString().dropLastCharacters(1).getIntValue())					
						BC3Bt[i].BT1->setButtonText(BC3Bt[i].BT1->GetValue().toString().dropLastCharacters(1));
					
				}
				else
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() == BC3Bt[i].BT1->GetValue().toString().getIntValue())		
						BC3Bt[i].BT1->setButtonText(BC3Bt[i].BT1->GetValue().toString()+"*");
				}
			}
		}
	}

}

void ButtonsCompact17To24Component::CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(5);
    pMainComponent->GlobalorOFF = 1;
	GetCustomBtID();
     if(buttonThatWasClicked == pfader1)
    {
        MidiLayerNum = BC17_STATR_NO + 0 + BC_COM * 0;
        SetCurrentCustomBT2(pfader1);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader1);
    }
    else if(buttonThatWasClicked == pfader2)
    {
        MidiLayerNum = BC17_STATR_NO + 0 + BC_COM * 1;
        SetCurrentCustomBT2(pfader2);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader2);
    }
    else if(buttonThatWasClicked == pfader3)
    {
        MidiLayerNum =BC17_STATR_NO + 0 + BC_COM * 2;
        SetCurrentCustomBT2(pfader3);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader3);
    }
    else if(buttonThatWasClicked == pfader4)
    {
        MidiLayerNum =BC17_STATR_NO + 0 + BC_COM * 3;
        SetCurrentCustomBT2(pfader4);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader4);
    }
    else if(buttonThatWasClicked == pfader5)
    {
        MidiLayerNum =BC17_STATR_NO + 0 + BC_COM * 4;
        SetCurrentCustomBT2(pfader5);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader5);
    }
    else if(buttonThatWasClicked == pfader6)
    {
        MidiLayerNum =BC17_STATR_NO + 0 + BC_COM * 5;
        SetCurrentCustomBT2(pfader6);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader6);
    }
    else if(buttonThatWasClicked == pfader7)
    {
        MidiLayerNum =BC17_STATR_NO + 0 + BC_COM * 6;
        SetCurrentCustomBT2(pfader7);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader7);
    }
    else if(buttonThatWasClicked == pfader8)
    {
        MidiLayerNum =BC17_STATR_NO + 0 + BC_COM * 7;
        SetCurrentCustomBT2(pfader8);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader8);
    }

}

void ButtonsCompact17To24Component:: SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT2 = currentbuttonThatWasClicked;
 }

 CustomTextButton* ButtonsCompact17To24Component:: GetCurrentCustomBT2()
 {
     return CurrentCustomBT2;
 }

void ButtonsCompact17To24Component::CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked)
{
    pMainComponent->FaderorOtherFlag =1;
    pMainComponent->setMyComponent(5);
	GetCustomBtID();
    for (int i = 0; i < 8; i++)
    {
        if (BC3Bt[i].BT4 == buttonThatWasClicked || BC3Bt[i].BT5 == buttonThatWasClicked)
        {
            if (!(BC3Bt[i].BT2->getButtonText().compare("MMC") == 0) /*&& !(BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0)*/)
            {
				if(!((BC3Bt[i].BT2->getButtonText().compare("Program") == 0) && BC3Bt[i].BT5 == buttonThatWasClicked ))
				{
					if(!(BC3Bt[i].BT5 == buttonThatWasClicked && (BC3Bt[i].BT4->getButtonText().compare("Inc/+1")==0 || BC3Bt[i].BT4->getButtonText().compare("Dec/-1")==0))){
						if (buttonThatWasClicked == pCustomImageButton1)
						{
							if(BC3Bt[i].BT2->getButtonText().compare("Note")==0 || BC3Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum = BC17_STATR_NO + 3 + BC_COM * 0;
							SetCurrentCustomBT(pCustomImageButton1);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton1);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton2)
						{
							if(BC3Bt[i].BT2->getButtonText().compare("Note")==0 || BC3Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC17_STATR_NO + 3 + BC_COM * 1;
							SetCurrentCustomBT(pCustomImageButton2);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton2);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton3)
						{
							if(BC3Bt[i].BT2->getButtonText().compare("Note")==0 || BC3Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC17_STATR_NO + 3 + BC_COM * 2;
							SetCurrentCustomBT(pCustomImageButton3);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton3);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton4)
						{
							if(BC3Bt[i].BT2->getButtonText().compare("Note")==0 || BC3Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC17_STATR_NO + 3 + BC_COM * 3;
							SetCurrentCustomBT(pCustomImageButton4);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton4);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton5)
						{
							if(BC3Bt[i].BT2->getButtonText().compare("Note")==0 || BC3Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC17_STATR_NO + 3 + BC_COM * 4;
							SetCurrentCustomBT(pCustomImageButton5);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton5);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton6)
						{
							if(BC3Bt[i].BT2->getButtonText().compare("Note")==0 || BC3Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC17_STATR_NO + 3 + BC_COM * 5;
							SetCurrentCustomBT(pCustomImageButton6);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton6);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton7)
						{
							if(BC3Bt[i].BT2->getButtonText().compare("Note")==0 || BC3Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC17_STATR_NO + 3 + BC_COM * 6;
							SetCurrentCustomBT(pCustomImageButton7);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton7);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton8)
						{
							if(BC3Bt[i].BT2->getButtonText().compare("Note")==0 || BC3Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC17_STATR_NO + 3 + BC_COM * 7;
							SetCurrentCustomBT(pCustomImageButton8);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton8);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton9)
						{
							MidiLayerNum =BC17_STATR_NO + 4 + BC_COM * 0;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton9);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton9);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton10)
						{
							MidiLayerNum =BC17_STATR_NO + 4 + BC_COM * 1;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton10);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton10);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton11)
						{
							MidiLayerNum =BC17_STATR_NO + 4 + BC_COM * 2;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton11);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton11);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton12)
						{
							MidiLayerNum =BC17_STATR_NO + 4 + BC_COM * 3;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton12);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton12);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton13)
						{
							MidiLayerNum =BC17_STATR_NO + 4 + BC_COM * 4;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton13);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton13);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton14)
						{
							MidiLayerNum =BC17_STATR_NO + 4 + BC_COM * 5;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton14);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton14);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton15)
						{
							MidiLayerNum =BC17_STATR_NO + 4 + BC_COM * 6;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton15);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton15);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton16)
						{
							MidiLayerNum =BC17_STATR_NO + 4 + BC_COM * 7;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton16);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton16);
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
            if (BC3Bt[i].BT7 == MSB[i])
            {
                if (BC3Bt[i].BT2->getButtonText().compare("Program") == 0 /*|| BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0*/)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 453 + 8 * i;
                    SetCurrentCustomBT(MSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, MSB[i]);
                }
            }
        }
        else if (buttonThatWasClicked == LSB[i])
        {
            if (BC3Bt[i].BT8 == LSB[i])
            {
                if (BC3Bt[i].BT2->getButtonText().compare("Program") == 0)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 454 + 8 * i;
                    SetCurrentCustomBT(LSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, LSB[i]);
                }
            }
        }
    }
}

void ButtonsCompact17To24Component::CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged)
{

}

void ButtonsCompact17To24Component::MyCallOutBox(Component *p,Button* buttonThatWasClicked)
{
    /*CallOutBox & mycall = */CallOutBox::launchAsynchronously(p, buttonThatWasClicked->getScreenBounds(), nullptr);
    //windows.add(&mycall);
    //CurrentCustomBT->setState(Button::buttonOver);
    //return mycall;
}

 void ButtonsCompact17To24Component:: SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT = currentbuttonThatWasClicked;
 }


 CustomImageButton* ButtonsCompact17To24Component:: GetCurrentCustomBT()
 {
     return CurrentCustomBT;
 }

 void ButtonsCompact17To24Component::setCustomBTtoggle(bool s)
 {
     CurrentCustomBT->setState(Button::buttonOver);
     //CurrentCustomBT->setToggleState(s,dontSendNotification);
 }

 void ButtonsCompact17To24Component::SetNO_BT(Button* buttonThatWasClicked)
 {
     NO_BT = buttonThatWasClicked;
 }
 Button* ButtonsCompact17To24Component::GetNO_BT()
 {
    return NO_BT;
 }
 int ButtonsCompact17To24Component::ConventNO_BTtoInt(String JK)
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

int ButtonsCompact17To24Component::GetNum()
{
   return num;
}


void ButtonsCompact17To24Component::GetCustomBtID()
 {
	for(int i=0;i<8;i++)
	 {
		if (!(BC3Bt[i].BT1->getButtonText().compare("Global") == 0) && !(BC3Bt[i].BT1->getButtonText().compare("Off") == 0))
            ConstMidiLayerMessage[BC17_STATR_NO + 0 + i * 8] = (unsigned char)(BC3Bt[i].BT1->getButtonText().getIntValue() - 1) * 0x01;

        if (BC3Bt[i].BT4->getButtonText().compare("Dec/-1") == 0)
            ConstMidiLayerMessage[BC17_STATR_NO + 3 + i * 8] = 0x80;
        else if (BC3Bt[i].BT4->getButtonText().compare("Inc/+1") == 0)
            ConstMidiLayerMessage[BC17_STATR_NO + 3 + i * 8] = 0x81;
        else if (!(BC3Bt[i].BT4->getButtonText().compare("-") == 0))
            ConstMidiLayerMessage[BC17_STATR_NO + 3 + i * 8] = (unsigned char)(BC3Bt[i].BT4->getButtonText().getIntValue()) * 0x01;

        if (!(BC3Bt[i].BT5->getButtonText().compare("-") == 0))
            ConstMidiLayerMessage[BC17_STATR_NO + 4 + i * 8] = (unsigned char)(BC3Bt[i].BT5->getButtonText().getIntValue()) * 0x01;

        if (ConstMidiLayerMessage[BC17_STATR_NO + 1 + i * 8] == 0x03 || ConstMidiLayerMessage[BC17_STATR_NO + 1 + i * 8] == 0x02)
        {
            ConstMidiLayerMessage[BC17_STATR_NO + 6 + i * 8] = (unsigned char)(BC3Bt[i].BT7->getButtonText().getIntValue()) * 0x01;
            ConstMidiLayerMessage[BC17_STATR_NO + 7 + i * 8] = (unsigned char)(BC3Bt[i].BT8->getButtonText().getIntValue()) * 0x01;
        }
	 }
 }

 void ButtonsCompact17To24Component::SetAllButtonState(bool s)
 {
	for(int i = 0;i<8;i++)
	{
		BC3Bt[i].BT1 ->setEnabled(s);
		BC3Bt[i].BT2 ->setEnabled(s);
		BC3Bt[i].BT3 ->setEnabled(s);
		BC3Bt[i].BT4 ->setEnabled(s);
		BC3Bt[i].BT5 ->setEnabled(s);
		BC3Bt[i].BT6 ->setEnabled(s);
		BC3Bt[i].BT7 ->setEnabled(s);
		BC3Bt[i].BT8 ->setEnabled(s);
	}
 }

void ButtonsCompact17To24Component::MakeButtonPointToBtGroup()
{
    BC3Bt[0].BT1 = pfader1;
    BC3Bt[0].BT2 = BTCP_TY_BT17;
    BC3Bt[0].BT3 = BTCP_NO_BT1;
    BC3Bt[0].BT4 = pCustomImageButton1;
    BC3Bt[0].BT5 = pCustomImageButton9;
    BC3Bt[0].BT6 = BTCP_BEH_BT17;
	BC3Bt[0].BT7 = MSB[0];
	BC3Bt[0].BT8 = LSB[0];

    BC3Bt[1].BT1 = pfader2;
    BC3Bt[1].BT2 = BTCP_TY_BT18;
    BC3Bt[1].BT3 = BTCP_NO_BT2;
    BC3Bt[1].BT4 = pCustomImageButton2;
    BC3Bt[1].BT5 = pCustomImageButton10;
    BC3Bt[1].BT6 = BTCP_BEH_BT18;
	BC3Bt[1].BT7 = MSB[1];
	BC3Bt[1].BT8 = LSB[1];

    BC3Bt[2].BT1 = pfader3;
    BC3Bt[2].BT2 = BTCP_TY_BT19;
    BC3Bt[2].BT3 = BTCP_NO_BT3;
    BC3Bt[2].BT4 = pCustomImageButton3;
    BC3Bt[2].BT5 = pCustomImageButton11;
    BC3Bt[2].BT6 = BTCP_BEH_BT19;
	BC3Bt[2].BT7 = MSB[2];
	BC3Bt[2].BT8 = LSB[2];

    BC3Bt[3].BT1 = pfader4;
    BC3Bt[3].BT2 = BTCP_TY_BT20;
    BC3Bt[3].BT3 = BTCP_NO_BT4;
    BC3Bt[3].BT4 = pCustomImageButton4;
    BC3Bt[3].BT5 = pCustomImageButton12;
    BC3Bt[3].BT6 = BTCP_BEH_BT20;
	BC3Bt[3].BT7 = MSB[3];
	BC3Bt[3].BT8 = LSB[3];

    BC3Bt[4].BT1 = pfader5;
    BC3Bt[4].BT2 = BTCP_TY_BT21;
    BC3Bt[4].BT3 = BTCP_NO_BT5;
    BC3Bt[4].BT4 = pCustomImageButton5;
    BC3Bt[4].BT5 = pCustomImageButton13;
    BC3Bt[4].BT6 = BTCP_BEH_BT21;
	BC3Bt[4].BT7 = MSB[4];
	BC3Bt[4].BT8 = LSB[4];

    BC3Bt[5].BT1 = pfader6;
    BC3Bt[5].BT2 = BTCP_TY_BT22;
    BC3Bt[5].BT3 = BTCP_NO_BT6;
    BC3Bt[5].BT4 = pCustomImageButton6;
    BC3Bt[5].BT5 = pCustomImageButton14;
    BC3Bt[5].BT6 = BTCP_BEH_BT22;
	BC3Bt[5].BT7 = MSB[5];
	BC3Bt[5].BT8 = LSB[5];

    BC3Bt[6].BT1 = pfader7;
    BC3Bt[6].BT2 = BTCP_TY_BT23;
    BC3Bt[6].BT3 = BTCP_NO_BT7;
    BC3Bt[6].BT4 = pCustomImageButton7;
    BC3Bt[6].BT5 = pCustomImageButton15;
    BC3Bt[6].BT6 = BTCP_BEH_BT23;
	BC3Bt[6].BT7 = MSB[6];
	BC3Bt[6].BT8 = LSB[6];

    BC3Bt[7].BT1 = pfader8;
    BC3Bt[7].BT2 = BTCP_TY_BT24;
    BC3Bt[7].BT3 = BTCP_NO_BT8;
    BC3Bt[7].BT4 = pCustomImageButton8;
    BC3Bt[7].BT5 = pCustomImageButton16;
    BC3Bt[7].BT6 = BTCP_BEH_BT24;
	BC3Bt[7].BT7 = MSB[7];
	BC3Bt[7].BT8 = LSB[7];

}

void ButtonsCompact17To24Component::UpdateBt17TO24(int s )
{
    for(int i=0;i<8;i++)
     {
		 if (ConstMidiLayerMessage[s + 8 * i] == 17*0x01)       BC3Bt[i].BT1->setButtonText("Global");
         else if (ConstMidiLayerMessage[s + 8 * i] == 18 * 0x01){  
			if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == ConstMidiLayerMessage[s + 8 * i] )
				BC3Bt[i].BT1->setButtonText("Off*");
			else			
				BC3Bt[i].BT1->setButtonText("Off");
		 }
		 else{
			if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == ConstMidiLayerMessage[s + 8 * i] )
				BC3Bt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i]+0x01)+"*");
			else
				BC3Bt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i]+0x01));
		 }

         if (ConstMidiLayerMessage[s + 8 * i + 1] == 0) { BC3Bt[i].BT2->setButtonText("CC");           BC3Bt[i].BT3->setButtonText("CC" + String(ConstMidiLayerMessage[s + 8 * i + 2])); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x01) { BC3Bt[i].BT2->setButtonText("Note");        BC3Bt[i].BT3->setButtonText(Midimusic[ConstMidiLayerMessage[s + 8 * i + 2]]); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x02) { BC3Bt[i].BT2->setButtonText("Pitch");        BC3Bt[i].BT3->setButtonText( /*String(CCBT[ MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x03) { BC3Bt[i].BT2->setButtonText("Program");   BC3Bt[i].BT3->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x04) { BC3Bt[i].BT2->setButtonText("MMC");       BC3Bt[i].BT3->setButtonText(String(MMC_Functions_e[ConstMidiLayerMessage[s + 8 * i + 2]])); }

         if (/*MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x02 &&*/ ConstMidiLayerMessage[s + 8 * i + 1] != 0x04)
         {
             if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80)
			 {
				 if(ConstMidiLayerMessage[s + 8 * i + 1 ] != 0x01 && ConstMidiLayerMessage[s + 8 * i + 1] != 0x02)
					BC3Bt[i].BT4->setButtonText("Dec/-1");  
				 else{
					 BC3Bt[i].BT4->setButtonText("0");  ConstMidiLayerMessage[s + 8 * i + 3 ]= 0;}				 
			 }
             else if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x81)
			 {
				 if(ConstMidiLayerMessage[s + 8 * i + 1 ] != 0x01 && ConstMidiLayerMessage[s + 8 * i + 1] != 0x02)
					BC3Bt[i].BT4->setButtonText("Inc/+1");  
				 else{
					 BC3Bt[i].BT4->setButtonText("0");  ConstMidiLayerMessage[s + 8 * i + 3 ]= 0;}
			 }
             else                                                                                    BC3Bt[i].BT4->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 3]));
             
             if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x81 || ConstMidiLayerMessage[s + 8 * i + 1] == 0x03)
                 BC3Bt[i].BT5->setButtonText("-");
             else{
                 if (ConstMidiLayerMessage[s + 8 * i + 4] == 0x80)             BC3Bt[i].BT5->setButtonText("Dec/-1");
                 else if (ConstMidiLayerMessage[s + 8 * i + 4] == 0x81)             BC3Bt[i].BT5->setButtonText("Inc/+1");
                 else                                                                                    BC3Bt[i].BT5->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 4]));
             }

			 if(ConstMidiLayerMessage[s + 8 * i + 1] == 0x03)
			 {
				 BC3Bt[i].BT6->setButtonText("Momentary");
				 ConstMidiLayerMessage[s + 8 * i + 5] = 0;
			 }
			 else if(ConstMidiLayerMessage[s + 8 * i + 1] == 0x00 && (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x81))
			 {
				 BC3Bt[ i].BT6->setButtonText("Momentary");
				 ConstMidiLayerMessage[s + 8 * i + 5] = 0;
			 }
			 else
			 {
				if (ConstMidiLayerMessage[s + 8 * i + 5] == 0x00) BC3Bt[i].BT6->setButtonText("Momentary");
				else BC3Bt[i].BT6->setButtonText("Toggle");
			 }
         }
         else{
             BC3Bt[i].BT4->setButtonText("-");
             BC3Bt[i].BT5->setButtonText("-");
             BC3Bt[i].BT6->setButtonText("-");
         }

         if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x03 /*|| MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x02*/) {
             BC3Bt[i].BT7->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 6]));
             BC3Bt[i].BT8->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 7]));
         }
         else{
             BC3Bt[i].BT7->setButtonText("-");
             BC3Bt[i].BT8->setButtonText("-");
         }
     }
	repaint();
    /*pfader1->setButtonText(String(ConstMidiLayerMessage[333]+1));
    if(ConstMidiLayerMessage[334] ==0) BTCP_TY_BT17->setButtonText("CC");
    else if(ConstMidiLayerMessage[334] ==0x01) BTCP_TY_BT17->setButtonText("Note");
    else if(ConstMidiLayerMessage[334] ==0x02) BTCP_TY_BT17->setButtonText("Pitch");
    else if(ConstMidiLayerMessage[334] ==0x03) BTCP_TY_BT17->setButtonText("Program");
    else if(ConstMidiLayerMessage[334] ==0x04) BTCP_TY_BT17->setButtonText("MMC");
    BTCP_NO_BT1 ->setButtonText("CC"+String(ConstMidiLayerMessage[335]));
    pCustomImageButton1->setButtonText(String(ConstMidiLayerMessage[336]));
    pCustomImageButton9->setButtonText(String(ConstMidiLayerMessage[337]));
    if(ConstMidiLayerMessage[338] == 0x00) BTCP_BEH_BT17->setButtonText("Momentary");
    else BTCP_BEH_BT17->setButtonText("Toggle");

    pfader2->setButtonText(String(ConstMidiLayerMessage[339]+1));
    if(ConstMidiLayerMessage[340] ==0) BTCP_TY_BT18->setButtonText("CC");
    else if(ConstMidiLayerMessage[340] ==0x01) BTCP_TY_BT18->setButtonText("Note");
    else if(ConstMidiLayerMessage[340] ==0x02) BTCP_TY_BT18->setButtonText("Pitch");
    else if(ConstMidiLayerMessage[340] ==0x03) BTCP_TY_BT18->setButtonText("Program");
    else if(ConstMidiLayerMessage[340] ==0x04) BTCP_TY_BT18->setButtonText("MMC");
    BTCP_NO_BT2 ->setButtonText("CC"+String(ConstMidiLayerMessage[341]));
    pCustomImageButton2->setButtonText(String(ConstMidiLayerMessage[342]));
    pCustomImageButton10->setButtonText(String(ConstMidiLayerMessage[343]));
    if(ConstMidiLayerMessage[344] == 0x00) BTCP_BEH_BT18->setButtonText("Momentary");
    else BTCP_BEH_BT18->setButtonText("Toggle");

    pfader3->setButtonText(String(ConstMidiLayerMessage[345]+1));
    if(ConstMidiLayerMessage[346] ==0) BTCP_TY_BT19->setButtonText("CC");
    else if(ConstMidiLayerMessage[346] ==0x01) BTCP_TY_BT19->setButtonText("Note");
    else if(ConstMidiLayerMessage[346] ==0x02) BTCP_TY_BT19->setButtonText("Pitch");
    else if(ConstMidiLayerMessage[346] ==0x03) BTCP_TY_BT19->setButtonText("Program");
    else if(ConstMidiLayerMessage[346] ==0x04) BTCP_TY_BT19->setButtonText("MMC");
    BTCP_NO_BT3 ->setButtonText("CC"+String(ConstMidiLayerMessage[347]));
    pCustomImageButton3->setButtonText(String(ConstMidiLayerMessage[348]));
    pCustomImageButton11->setButtonText(String(ConstMidiLayerMessage[349]));
    if(ConstMidiLayerMessage[350] == 0x00) BTCP_BEH_BT19->setButtonText("Momentary");
    else BTCP_BEH_BT19->setButtonText("Toggle");

    pfader4->setButtonText(String(ConstMidiLayerMessage[351]+1));
    if(ConstMidiLayerMessage[352] ==0) BTCP_TY_BT20->setButtonText("CC");
    else if(ConstMidiLayerMessage[352] ==0x01) BTCP_TY_BT20->setButtonText("Note");
    else if(ConstMidiLayerMessage[352] ==0x02) BTCP_TY_BT20->setButtonText("Pitch");
    else if(ConstMidiLayerMessage[352] ==0x03) BTCP_TY_BT20->setButtonText("Program");
    else if(ConstMidiLayerMessage[352] ==0x04) BTCP_TY_BT20->setButtonText("MMC");
    BTCP_NO_BT4 ->setButtonText("CC"+String(ConstMidiLayerMessage[353]));
    pCustomImageButton4->setButtonText(String(ConstMidiLayerMessage[354]));
    pCustomImageButton12->setButtonText(String(ConstMidiLayerMessage[355]));
    if(ConstMidiLayerMessage[356] == 0x00) BTCP_BEH_BT19->setButtonText("Momentary");
    else BTCP_BEH_BT19->setButtonText("Toggle");

    pfader5->setButtonText(String(ConstMidiLayerMessage[357]+1));
    if(ConstMidiLayerMessage[358] ==0) BTCP_TY_BT21->setButtonText("CC");
    else if(ConstMidiLayerMessage[358] ==0x01) BTCP_TY_BT21->setButtonText("Note");
    else if(ConstMidiLayerMessage[358] ==0x02) BTCP_TY_BT21->setButtonText("Pitch");
    else if(ConstMidiLayerMessage[358] ==0x03) BTCP_TY_BT21->setButtonText("Program");
    else if(ConstMidiLayerMessage[358] ==0x04) BTCP_TY_BT21->setButtonText("MMC");
    BTCP_NO_BT5->setButtonText("CC"+String(ConstMidiLayerMessage[359]));
    pCustomImageButton5->setButtonText(String(ConstMidiLayerMessage[360]));
    pCustomImageButton13->setButtonText(String(ConstMidiLayerMessage[361]));
    if(ConstMidiLayerMessage[362] == 0x00) BTCP_BEH_BT21->setButtonText("Momentary");
    else BTCP_BEH_BT21->setButtonText("Toggle");

    pfader6->setButtonText(String(ConstMidiLayerMessage[363]+1));
    if(ConstMidiLayerMessage[364] ==0) BTCP_TY_BT22->setButtonText("CC");
    else if(ConstMidiLayerMessage[364] ==0x01) BTCP_TY_BT22->setButtonText("Note");
    else if(ConstMidiLayerMessage[364] ==0x02) BTCP_TY_BT22->setButtonText("Pitch");
    else if(ConstMidiLayerMessage[364] ==0x03) BTCP_TY_BT22->setButtonText("Program");
    else if(ConstMidiLayerMessage[364] ==0x04) BTCP_TY_BT22->setButtonText("MMC");
    BTCP_NO_BT6 ->setButtonText("CC"+String(ConstMidiLayerMessage[365]));
    pCustomImageButton6->setButtonText(String(ConstMidiLayerMessage[366]));
    pCustomImageButton14->setButtonText(String(ConstMidiLayerMessage[367]));
    if(ConstMidiLayerMessage[368] == 0x00) BTCP_BEH_BT22->setButtonText("Momentary");
    else BTCP_BEH_BT22->setButtonText("Toggle");

    pfader7->setButtonText(String(ConstMidiLayerMessage[369]+1));
    if(ConstMidiLayerMessage[370] ==0) BTCP_TY_BT23->setButtonText("CC");
    else if(ConstMidiLayerMessage[370] ==0x01) BTCP_TY_BT23->setButtonText("Note");
    else if(ConstMidiLayerMessage[370] ==0x02) BTCP_TY_BT23->setButtonText("Pitch");
    else if(ConstMidiLayerMessage[370] ==0x03) BTCP_TY_BT23->setButtonText("Program");
    else if(ConstMidiLayerMessage[370] ==0x04) BTCP_TY_BT23->setButtonText("MMC");
    BTCP_NO_BT7 ->setButtonText("CC"+String(ConstMidiLayerMessage[371]));
    pCustomImageButton7->setButtonText(String(ConstMidiLayerMessage[372]));
    pCustomImageButton15->setButtonText(String(ConstMidiLayerMessage[373]));
    if(ConstMidiLayerMessage[374] == 0x00) BTCP_BEH_BT23->setButtonText("Momentary");
    else BTCP_BEH_BT23->setButtonText("Toggle");

    pfader8->setButtonText(String(ConstMidiLayerMessage[375]+1));
    if(ConstMidiLayerMessage[376] ==0) BTCP_TY_BT24->setButtonText("CC");
    else if(ConstMidiLayerMessage[376] ==0x01) BTCP_TY_BT24->setButtonText("Note");
    else if(ConstMidiLayerMessage[376] ==0x02) BTCP_TY_BT24->setButtonText("Pitch");
    else if(ConstMidiLayerMessage[376] ==0x03) BTCP_TY_BT24->setButtonText("Program");
    else if(ConstMidiLayerMessage[376] ==0x04) BTCP_TY_BT24->setButtonText("MMC");
    BTCP_NO_BT8->setButtonText("CC"+String(ConstMidiLayerMessage[377]));
    pCustomImageButton8->setButtonText(String(ConstMidiLayerMessage[378]));
    pCustomImageButton16->setButtonText(String(ConstMidiLayerMessage[379]));
    if(ConstMidiLayerMessage[380] == 0x00) BTCP_BEH_BT24->setButtonText("Momentary");
    else BTCP_BEH_BT24->setButtonText("Toggle");*/
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="ButtonsCompact17To24Component"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="664" initialHeight="535">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="23 32 609 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="486 337 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="438 337 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="454 337 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="442 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="446 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="442 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="442 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="441 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="586 401 13 10" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="470 337 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="518 337 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="502 337 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="534 337 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="550 337 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="438 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="439 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="454 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="455 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="470 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="471 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="486 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="487 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="502 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="503 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="518 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="519 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="534 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="535 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="550 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="551 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <RECT pos="486 353 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="438 353 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="454 353 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="470 353 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="518 353 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="502 353 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="534 353 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="550 353 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="486 369 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="438 369 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="454 369 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="470 369 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="518 369 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="502 369 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="534 369 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="550 369 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="458 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="462 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="458 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="458 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="457 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="474 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="478 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="474 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="474 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="473 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="490 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="494 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="490 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="490 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="489 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="506 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="510 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="506 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="506 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="505 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="522 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="526 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="522 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="522 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="521 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="538 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="542 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="538 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="538 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="537 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="554 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="558 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="554 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="554 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="553 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="602 401 13 10" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="586 419 13 10" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="602 419 13 10" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="586 437 13 10" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="602 437 13 10" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="570 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="574 386 1 67" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="570 386 5 1" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="570 451 5 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="569 409 7 15" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="586 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="587 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="602 319 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="603 320 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="586 337 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="587 338 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="602 337 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="603 338 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="586 355 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="587 356 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="602 355 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="603 356 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="586 373 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="587 374 10 10" fill="solid: ff000000" hasStroke="0"/>
    <ELLIPSE pos="602 373 12 12" fill="solid: ffffab00" hasStroke="0"/>
    <ELLIPSE pos="603 374 10 10" fill="solid: ff000000" hasStroke="0"/>
    <RECT pos="486 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="438 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="454 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="470 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="518 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="502 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="534 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="550 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="567 458 12 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="571 336 4 4" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="571 344 4 4" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="571 352 4 4" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="571 360 4 4" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="571 368 4 4" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="571 376 4 4" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="432 366 135 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="432 380 135 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="432 366 1 14" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="566 366 1 14" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="586 458 13 9" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="602 458 13 9" fill="solid: ffffab00" hasStroke="0"/>
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
         edTextCol="ff000000" edBkgCol="0" labelText="BT 17" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="158fab2e75ce057e" memberName="label_FD2"
         virtualName="" explicitFocusOrder="0" pos="200 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 18" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="59784a12467c2edd" memberName="label_FD3"
         virtualName="" explicitFocusOrder="0" pos="264 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 19" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8c4b98f9bfb3cc4e" memberName="label_FD4"
         virtualName="" explicitFocusOrder="0" pos="328 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 20" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d29c323ead8312a0" memberName="label_FD5"
         virtualName="" explicitFocusOrder="0" pos="392 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 21" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5012a250ae45e10c" memberName="label_FD6"
         virtualName="" explicitFocusOrder="0" pos="456 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 22" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="262b90710eed34aa" memberName="label_FD7"
         virtualName="" explicitFocusOrder="0" pos="520 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 23" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="da92fbab385df26" memberName="label_FD8"
         virtualName="" explicitFocusOrder="0" pos="584 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 24" editableSingleClick="0"
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
  <TEXTBUTTON name="new button" id="6d140b501739d7d6" memberName="BTCP_BEH_BT17"
              virtualName="" explicitFocusOrder="0" pos="121 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5b22bcd19c7d90" memberName="BTCP_BEH_BT18"
              virtualName="" explicitFocusOrder="0" pos="185 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e583376883a3e049" memberName="BTCP_BEH_BT19"
              virtualName="" explicitFocusOrder="0" pos="249 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b2bd04b50e39565b" memberName="BTCP_BEH_BT20"
              virtualName="" explicitFocusOrder="0" pos="313 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="f76650deded802f3" memberName="BTCP_BEH_BT21"
              virtualName="" explicitFocusOrder="0" pos="377 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8f6db232510d39ac" memberName="BTCP_BEH_BT22"
              virtualName="" explicitFocusOrder="0" pos="441 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a92097d33cc251fc" memberName="BTCP_BEH_BT23"
              virtualName="" explicitFocusOrder="0" pos="505 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cbca9aba128bbdf0" memberName="BTCP_BEH_BT24"
              virtualName="" explicitFocusOrder="0" pos="569 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7b6bfda123f7edce" memberName="BTCO_CH_BT17"
              virtualName="" explicitFocusOrder="0" pos="121 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="982bc114cfe3f94a" memberName="ENCO_CH_BT18"
              virtualName="" explicitFocusOrder="0" pos="185 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="2"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cb054c8a11374f1" memberName="ENCO_CH_BT19"
              virtualName="" explicitFocusOrder="0" pos="249 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="3"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8cb6793d75ebd4f6" memberName="ENCO_CH_BT20"
              virtualName="" explicitFocusOrder="0" pos="313 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="4"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="15c8e97c4ad6429e" memberName="ENCO_CH_BT21"
              virtualName="" explicitFocusOrder="0" pos="377 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="5"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="bfcc1c51bdb45e64" memberName="ENCO_CH_BT22"
              virtualName="" explicitFocusOrder="0" pos="441 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="6"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6a1631d78b7609" memberName="ENCO_CH_BT23"
              virtualName="" explicitFocusOrder="0" pos="505 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="7"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="374ef557916487ef" memberName="ENCO_CH_BT24"
              virtualName="" explicitFocusOrder="0" pos="569 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="8"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5a38375d9474f4" memberName="BTCP_TY_BT17"
              virtualName="" explicitFocusOrder="0" pos="121 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cb10ebcdc15fa6f1" memberName="BTCP_TY_BT18"
              virtualName="" explicitFocusOrder="0" pos="184 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d0ca472bf46e2cba" memberName="BTCP_TY_BT19"
              virtualName="" explicitFocusOrder="0" pos="248 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b7bfc7315d20e3b2" memberName="BTCP_TY_BT20"
              virtualName="" explicitFocusOrder="0" pos="312 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pitch"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="46d7276338ce5b69" memberName="BTCP_TY_BT21"
              virtualName="" explicitFocusOrder="0" pos="376 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="27e6e2a3d57a18e9" memberName="BTCP_TY_BT22"
              virtualName="" explicitFocusOrder="0" pos="440 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d011e0f807abab2b" memberName="BTCP_TY_BT23"
              virtualName="" explicitFocusOrder="0" pos="504 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="ed09bd903e3e12cc" memberName="BTCP_TY_BT24"
              virtualName="" explicitFocusOrder="0" pos="568 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6fa660fa9e731394" memberName="BTCP_NO_BT1"
              virtualName="" explicitFocusOrder="0" pos="121 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7514009def66599b" memberName="BTCP_NO_BT2"
              virtualName="" explicitFocusOrder="0" pos="184 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="C0"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e339edfcf9e716e6" memberName="BTCP_NO_BT3"
              virtualName="" explicitFocusOrder="0" pos="248 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
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
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="36732bd09ae7ed22" memberName="BTCP_NO_BT8"
              virtualName="" explicitFocusOrder="0" pos="568 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="cfecc970f802a60e" memberName="LSB1" virtualName=""
         explicitFocusOrder="0" pos="24 193 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c96aae7277931f8" memberName="MSB1" virtualName=""
         explicitFocusOrder="0" pos="24 220 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
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
