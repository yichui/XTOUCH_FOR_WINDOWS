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
#include "ViewChannelComponent.h"
#include "BackgroundThread.h"
#include "MusicNoteViewComponent.h"
#include "MMCFuntionsViewComponent.h"
//[/Headers]

#include "ButtonsCompact9To16Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
ButtonsCompact9To16Component *BC9TO16 = nullptr;
extern ViewChannelComponent *pViewChannelComponent;
extern PanFanComponent *pPanFanComponent ;
extern Twochoose_Component * pTwochoose_Component;
extern FiveMenuComponent * pFiveComp;
extern CC_Viewport_Component *CC_VP ;
extern ViewPortComponent * pViewPortComponent;
extern MusicNoteViewComponent *pMusicNoteViewComponent;
extern MMCFuntionsViewComponent *pMMCFuntionsViewComponent;
extern DecumoMenuComponent * pDecumoMenuComponent ;
extern MainComponent * pMainComponent;

extern String Midimusic[128];
extern String MMC_Functions_e[9];
extern String CCBT[128];
ButtonGroup BC2Bt[8];
//[/MiscUserDefs]

//==============================================================================
ButtonsCompact9To16Component::ButtonsCompact9To16Component ()
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
                                              "BT 9"));
    label_FD1->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD1->setJustificationType (Justification::centredLeft);
    label_FD1->setEditable (false, false, false);
    label_FD1->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD1->setColour (TextEditor::textColourId, Colours::black);
    label_FD1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD2 = new Label ("new label",
                                              "BT 10"));
    label_FD2->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD2->setJustificationType (Justification::centredLeft);
    label_FD2->setEditable (false, false, false);
    label_FD2->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD2->setColour (TextEditor::textColourId, Colours::black);
    label_FD2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD3 = new Label ("new label",
                                              "BT 11"));
    label_FD3->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD3->setJustificationType (Justification::centredLeft);
    label_FD3->setEditable (false, false, false);
    label_FD3->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD3->setColour (TextEditor::textColourId, Colours::black);
    label_FD3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD4 = new Label ("new label",
                                              "BT 12"));
    label_FD4->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD4->setJustificationType (Justification::centredLeft);
    label_FD4->setEditable (false, false, false);
    label_FD4->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD4->setColour (TextEditor::textColourId, Colours::black);
    label_FD4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD5 = new Label ("new label",
                                              "BT 13"));
    label_FD5->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD5->setJustificationType (Justification::centredLeft);
    label_FD5->setEditable (false, false, false);
    label_FD5->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD5->setColour (TextEditor::textColourId, Colours::black);
    label_FD5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD6 = new Label ("new label",
                                              "BT 14"));
    label_FD6->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD6->setJustificationType (Justification::centredLeft);
    label_FD6->setEditable (false, false, false);
    label_FD6->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD6->setColour (TextEditor::textColourId, Colours::black);
    label_FD6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD7 = new Label ("new label",
                                              "BT 15"));
    label_FD7->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD7->setJustificationType (Justification::centredLeft);
    label_FD7->setEditable (false, false, false);
    label_FD7->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD7->setColour (TextEditor::textColourId, Colours::black);
    label_FD7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD8 = new Label ("new label",
                                              "BT 16"));
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

    addAndMakeVisible (BTCO_CH_BT9 = new TextButton ("new button"));
    BTCO_CH_BT9->setButtonText ("1");
    BTCO_CH_BT9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT9->addListener (this);
    BTCO_CH_BT9->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT10 = new TextButton ("new button"));
    ENCO_CH_BT10->setButtonText ("2");
    ENCO_CH_BT10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT10->addListener (this);
    ENCO_CH_BT10->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT11 = new TextButton ("new button"));
    ENCO_CH_BT11->setButtonText ("3");
    ENCO_CH_BT11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT11->addListener (this);
    ENCO_CH_BT11->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT12 = new TextButton ("new button"));
    ENCO_CH_BT12->setButtonText ("4");
    ENCO_CH_BT12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT12->addListener (this);
    ENCO_CH_BT12->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT13 = new TextButton ("new button"));
    ENCO_CH_BT13->setButtonText ("5");
    ENCO_CH_BT13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT13->addListener (this);
    ENCO_CH_BT13->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT14 = new TextButton ("new button"));
    ENCO_CH_BT14->setButtonText ("6");
    ENCO_CH_BT14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT14->addListener (this);
    ENCO_CH_BT14->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT15 = new TextButton ("new button"));
    ENCO_CH_BT15->setButtonText ("7");
    ENCO_CH_BT15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT15->addListener (this);
    ENCO_CH_BT15->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_BT16 = new TextButton ("new button"));
    ENCO_CH_BT16->setButtonText ("8");
    ENCO_CH_BT16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_BT16->addListener (this);
    ENCO_CH_BT16->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_BT16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_BT16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_BT16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT9 = new TextButton ("new button"));
    BTCP_TY_BT9->setButtonText ("CC");
    BTCP_TY_BT9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT9->addListener (this);
    BTCP_TY_BT9->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT10 = new TextButton ("new button"));
    BTCP_TY_BT10->setButtonText ("Note");
    BTCP_TY_BT10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT10->addListener (this);
    BTCP_TY_BT10->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT11 = new TextButton ("new button"));
    BTCP_TY_BT11->setButtonText ("CC");
    BTCP_TY_BT11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT11->addListener (this);
    BTCP_TY_BT11->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT12 = new TextButton ("new button"));
    BTCP_TY_BT12->setButtonText ("Pitch");
    BTCP_TY_BT12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT12->addListener (this);
    BTCP_TY_BT12->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT13 = new TextButton ("new button"));
    BTCP_TY_BT13->setButtonText ("Note");
    BTCP_TY_BT13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT13->addListener (this);
    BTCP_TY_BT13->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT14 = new TextButton ("new button"));
    BTCP_TY_BT14->setButtonText ("CC");
    BTCP_TY_BT14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT14->addListener (this);
    BTCP_TY_BT14->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT15 = new TextButton ("new button"));
    BTCP_TY_BT15->setButtonText ("CC");
    BTCP_TY_BT15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT15->addListener (this);
    BTCP_TY_BT15->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT16 = new TextButton ("new button"));
    BTCP_TY_BT16->setButtonText ("CC");
    BTCP_TY_BT16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT16->addListener (this);
    BTCP_TY_BT16->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT9 = new TextButton ("new button"));
    BTCP_BEH_BT9->setButtonText ("Momentary");
    BTCP_BEH_BT9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT9->addListener (this);
    BTCP_BEH_BT9->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT10 = new TextButton ("new button"));
    BTCP_BEH_BT10->setButtonText ("Momentary");
    BTCP_BEH_BT10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT10->addListener (this);
    BTCP_BEH_BT10->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT11 = new TextButton ("new button"));
    BTCP_BEH_BT11->setButtonText ("Toggle");
    BTCP_BEH_BT11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT11->addListener (this);
    BTCP_BEH_BT11->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT12 = new TextButton ("new button"));
    BTCP_BEH_BT12->setButtonText ("Momentary");
    BTCP_BEH_BT12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT12->addListener (this);
    BTCP_BEH_BT12->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT13 = new TextButton ("new button"));
    BTCP_BEH_BT13->setButtonText ("Toggle");
    BTCP_BEH_BT13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT13->addListener (this);
    BTCP_BEH_BT13->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT14 = new TextButton ("new button"));
    BTCP_BEH_BT14->setButtonText ("Toggle");
    BTCP_BEH_BT14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT14->addListener (this);
    BTCP_BEH_BT14->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT15 = new TextButton ("new button"));
    BTCP_BEH_BT15->setButtonText ("Momentary");
    BTCP_BEH_BT15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT15->addListener (this);
    BTCP_BEH_BT15->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT16 = new TextButton ("new button"));
    BTCP_BEH_BT16->setButtonText ("Momentary");
    BTCP_BEH_BT16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT16->addListener (this);
    BTCP_BEH_BT16->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

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
    BTCP_NO_BT3->setButtonText ("CC0");
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

     BTCO_CH_BT9->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT10 ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT11 ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT12->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT13->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT14->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT15->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_BT16 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT9 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT10 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT11->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT12 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT13 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT14 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT15 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT16 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT9 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT10 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT11 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT12 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT13 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT14 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT15 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT16->setLookAndFeel(&lookAndFeelV4);

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

ButtonsCompact9To16Component::~ButtonsCompact9To16Component()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
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

    pfader1 = nullptr;
    pfader2 = nullptr;
    pfader3 = nullptr;
    pfader4 = nullptr;

    pfader5 = nullptr;
    pfader6 = nullptr;
    pfader7 = nullptr;
    pfader8 = nullptr;

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
    BTCO_CH_BT9 = nullptr;
    ENCO_CH_BT10 = nullptr;
    ENCO_CH_BT11 = nullptr;
    ENCO_CH_BT12 = nullptr;
    ENCO_CH_BT13 = nullptr;
    ENCO_CH_BT14 = nullptr;
    ENCO_CH_BT15 = nullptr;
    ENCO_CH_BT16 = nullptr;
    BTCP_TY_BT9 = nullptr;
    BTCP_TY_BT10 = nullptr;
    BTCP_TY_BT11 = nullptr;
    BTCP_TY_BT12 = nullptr;
    BTCP_TY_BT13 = nullptr;
    BTCP_TY_BT14 = nullptr;
    BTCP_TY_BT15 = nullptr;
    BTCP_TY_BT16 = nullptr;
    BTCP_BEH_BT9 = nullptr;
    BTCP_BEH_BT10 = nullptr;
    BTCP_BEH_BT11 = nullptr;
    BTCP_BEH_BT12 = nullptr;
    BTCP_BEH_BT13 = nullptr;
    BTCP_BEH_BT14 = nullptr;
    BTCP_BEH_BT15 = nullptr;
    BTCP_BEH_BT16 = nullptr;
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
void ButtonsCompact9To16Component::paint (Graphics& g)
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
    g.fillRect (432, 350, 135, 1);

    g.setColour (Colours::white);
    g.fillRect (432, 364, 135, 1);

    g.setColour (Colours::white);
    g.fillRect (432, 350, 1, 14);

    g.setColour (Colours::white);
    g.fillRect (566, 351, 1, 14);

    g.setColour (Colour (0xffffab00));
    g.fillRect (586, 458, 13, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (602, 458, 13, 9);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ButtonsCompact9To16Component::resized()
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
    label3->setBounds (24, 61, 600, 1);
    label4->setBounds (25, 87, 600, 1);
    label5->setBounds (24, 113, 600, 1);
    label6->setBounds (24, 139, 600, 1);
    label_MAX3->setBounds (24, 165, 85, 26);
    label11->setBounds (24, 165, 600, 1);
    BTCO_CH_BT9->setBounds (121, 34, 65, 25);
    ENCO_CH_BT10->setBounds (185, 34, 65, 25);
    ENCO_CH_BT11->setBounds (249, 34, 65, 25);
    ENCO_CH_BT12->setBounds (313, 34, 65, 25);
    ENCO_CH_BT13->setBounds (377, 34, 65, 25);
    ENCO_CH_BT14->setBounds (441, 34, 65, 25);
    ENCO_CH_BT15->setBounds (505, 34, 65, 25);
    ENCO_CH_BT16->setBounds (569, 34, 65, 25);
    BTCP_TY_BT9->setBounds (121, 62, 65, 24);
    BTCP_TY_BT10->setBounds (184, 62, 65, 24);
    BTCP_TY_BT11->setBounds (248, 62, 65, 24);
    BTCP_TY_BT12->setBounds (312, 62, 65, 24);
    BTCP_TY_BT13->setBounds (376, 62, 65, 24);
    BTCP_TY_BT14->setBounds (440, 62, 65, 24);
    BTCP_TY_BT15->setBounds (504, 62, 65, 24);
    BTCP_TY_BT16->setBounds (568, 62, 65, 24);
    BTCP_BEH_BT9->setBounds (121, 166, 65, 25);
    BTCP_BEH_BT10->setBounds (185, 166, 65, 25);
    BTCP_BEH_BT11->setBounds (249, 166, 65, 25);
    BTCP_BEH_BT12->setBounds (313, 166, 65, 25);
    BTCP_BEH_BT13->setBounds (377, 166, 65, 25);
    BTCP_BEH_BT14->setBounds (441, 166, 65, 25);
    BTCP_BEH_BT15->setBounds (505, 166, 65, 25);
    BTCP_BEH_BT16->setBounds (569, 166, 65, 25);
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

    pfader1 -> setBounds(121,34,64,25);
    pfader2 -> setBounds(185,34,64,25);
    pfader3 -> setBounds(249,34,64,25);
    pfader4 -> setBounds(313,34,64,25);
    pfader5 -> setBounds(377,34,64,25);
    pfader6 -> setBounds(441,34,64,25);
    pfader7 -> setBounds(505,34,64,25);
    pfader8 -> setBounds(569,34,64,25);

    for (int i = 0; i < 8; i++)
    {
        MSB[i]->setBounds(121 + 64 * i, 193, 64, 25);
        LSB[i]->setBounds(121 + 64 * i, 220, 64, 25);

    }

    //[/UserResized]
}

void ButtonsCompact9To16Component::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    pMainComponent->setMyComponent(4);
    Push_or_Turn =0;
	GetCustomBtID();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == BTCO_CH_BT9)
    {
        //[UserButtonCode_BTCO_CH_BT9] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT9]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT10)
    {
        //[UserButtonCode_ENCO_CH_BT10] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT10]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT11)
    {
        //[UserButtonCode_ENCO_CH_BT11] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT11]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT12)
    {
        //[UserButtonCode_ENCO_CH_BT12] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT12]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT13)
    {
        //[UserButtonCode_ENCO_CH_BT13] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT13]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT14)
    {
        //[UserButtonCode_ENCO_CH_BT14] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT14]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT15)
    {
        //[UserButtonCode_ENCO_CH_BT15] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT15]
    }
    else if (buttonThatWasClicked == ENCO_CH_BT16)
    {
        //[UserButtonCode_ENCO_CH_BT16] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_BT16]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT9)
    {
        //[UserButtonCode_BTCP_TY_BT9] -- add your button handler code here..
		Push_or_Turn =0;
        this->MidiLayerNum = BC9_STATR_NO + 1 + BC_COM * 0;
        SetNO_BT(BTCP_TY_BT9);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT9->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT9]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT10)
    {
        //[UserButtonCode_BTCP_TY_BT10] -- add your button handler code here..
		Push_or_Turn =0;
        this->MidiLayerNum = BC9_STATR_NO + 1 + BC_COM * 1;
        SetNO_BT(BTCP_TY_BT10);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT10->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT10]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT11)
    {
        //[UserButtonCode_BTCP_TY_BT11] -- add your button handler code here..
		Push_or_Turn =0;
        this->MidiLayerNum = BC9_STATR_NO + 1 + BC_COM * 2;
        SetNO_BT(BTCP_TY_BT11);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT11->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT11]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT12)
    {
        //[UserButtonCode_BTCP_TY_BT12] -- add your button handler code here..
		Push_or_Turn =0;
        this->MidiLayerNum = BC9_STATR_NO + 1 + BC_COM * 3;
        SetNO_BT(BTCP_TY_BT12);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT12->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT12]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT13)
    {
        //[UserButtonCode_BTCP_TY_BT13] -- add your button handler code here..
		Push_or_Turn =0;
        this->MidiLayerNum = BC9_STATR_NO + 1 + BC_COM * 4;
        SetNO_BT(BTCP_TY_BT13);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT13->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT13]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT14)
    {
        //[UserButtonCode_BTCP_TY_BT14] -- add your button handler code here..
		Push_or_Turn =0;
        this->MidiLayerNum = BC9_STATR_NO + 1 + BC_COM * 5;
        SetNO_BT(BTCP_TY_BT14);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT14->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT14]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT15)
    {
        //[UserButtonCode_BTCP_TY_BT15] -- add your button handler code here..
		Push_or_Turn =0;
        this->MidiLayerNum = BC9_STATR_NO + 1 + BC_COM * 6;
        SetNO_BT(BTCP_TY_BT15);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT15->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT15]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT16)
    {
        //[UserButtonCode_BTCP_TY_BT16] -- add your button handler code here..
		Push_or_Turn =0;
        this->MidiLayerNum = BC9_STATR_NO + 1 + BC_COM * 7;
        SetNO_BT(BTCP_TY_BT16);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT16->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT16]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT9)
    {
        //[UserButtonCode_BTCP_BEH_BT9] -- add your button handler code here..
		if (!(BC2Bt[0].BT2->getButtonText().compare("MMC") == 0) && !(BC2Bt[0].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC2Bt[0].BT2->getButtonText().compare("CC")==0 && (BC2Bt[0].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[0].BT4->getButtonText().compare("Dec/-1")==0))){

			this->MidiLayerNum = BC9_STATR_NO + 5 + BC_COM * 0;
			SetNO_BT(BTCP_BEH_BT9);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT9->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT9]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT10)
    {
        //[UserButtonCode_BTCP_BEH_BT10] -- add your button handler code here..
		if (!(BC2Bt[1].BT2->getButtonText().compare("MMC") == 0) && !(BC2Bt[1].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC2Bt[1].BT2->getButtonText().compare("CC")==0 && (BC2Bt[1].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[1].BT4->getButtonText().compare("Dec/-1")==0))){

			this->MidiLayerNum = BC9_STATR_NO + 5 + BC_COM * 1;
			SetNO_BT(BTCP_BEH_BT10);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT10->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT10]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT11)
    {
        //[UserButtonCode_BTCP_BEH_BT11] -- add your button handler code here..
		if (!(BC2Bt[2].BT2->getButtonText().compare("MMC") == 0) && !(BC2Bt[2].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC2Bt[2].BT2->getButtonText().compare("CC")==0 && (BC2Bt[2].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[2].BT4->getButtonText().compare("Dec/-1")==0))){

			this->MidiLayerNum = BC9_STATR_NO + 5 + BC_COM * 2;
			SetNO_BT(BTCP_BEH_BT11);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT11->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT11]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT12)
    {
        //[UserButtonCode_BTCP_BEH_BT12] -- add your button handler code here..
		if (!(BC2Bt[3].BT2->getButtonText().compare("MMC") == 0) && !(BC2Bt[3].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC2Bt[3].BT2->getButtonText().compare("CC")==0 && (BC2Bt[3].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[3].BT4->getButtonText().compare("Dec/-1")==0))){

			this->MidiLayerNum = BC9_STATR_NO + 5 + BC_COM * 3;
			SetNO_BT(BTCP_BEH_BT12);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT12->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT12]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT13)
    {
        //[UserButtonCode_BTCP_BEH_BT13] -- add your button handler code here..
		if (!(BC2Bt[4].BT2->getButtonText().compare("MMC") == 0) && !(BC2Bt[4].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC2Bt[4].BT2->getButtonText().compare("CC")==0 && (BC2Bt[4].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[4].BT4->getButtonText().compare("Dec/-1")==0))){

			this->MidiLayerNum = BC9_STATR_NO + 5 + BC_COM * 4;
			SetNO_BT(BTCP_BEH_BT13);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT13->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT13]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT14)
    {
        //[UserButtonCode_BTCP_BEH_BT14] -- add your button handler code here..
		if (!(BC2Bt[5].BT2->getButtonText().compare("MMC") == 0) && !(BC2Bt[5].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC2Bt[5].BT2->getButtonText().compare("CC")==0 && (BC2Bt[5].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[5].BT4->getButtonText().compare("Dec/-1")==0))){

			this->MidiLayerNum = BC9_STATR_NO + 5 + BC_COM * 5;
			SetNO_BT(BTCP_BEH_BT14);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT14->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT14]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT15)
    {
        //[UserButtonCode_BTCP_BEH_BT15] -- add your button handler code here..
		if (!(BC2Bt[6].BT2->getButtonText().compare("MMC") == 0) && !(BC2Bt[6].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC2Bt[6].BT2->getButtonText().compare("CC")==0 && (BC2Bt[6].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[6].BT4->getButtonText().compare("Dec/-1")==0))){

			this->MidiLayerNum = BC9_STATR_NO + 5 + BC_COM * 6;
			SetNO_BT(BTCP_BEH_BT15);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT15->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT15]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT16)
    {
        //[UserButtonCode_BTCP_BEH_BT16] -- add your button handler code here..
		if (!(BC2Bt[7].BT2->getButtonText().compare("MMC") == 0) && !(BC2Bt[7].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC2Bt[7].BT2->getButtonText().compare("CC")==0 && (BC2Bt[7].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[7].BT4->getButtonText().compare("Dec/-1")==0))){

			this->MidiLayerNum = BC9_STATR_NO + 5 + BC_COM * 7;
			SetNO_BT(BTCP_BEH_BT16);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT16->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT16]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT1)
    {
        //[UserButtonCode_BTCP_NO_BT1] -- add your button handler code here..
		this->MidiLayerNum = BC9_STATR_NO + 2 + BC_COM * 0;
        if (BTCP_TY_BT9->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT9->getButtonText().compare("Pitch") == 0*/)
        {
            
            SetNO_BT(BTCP_NO_BT1);
            num = ConventNO_BTtoInt(BTCP_NO_BT1->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT9->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT1);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT9->getButtonText().compare("MMC") == 0)
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
        this->MidiLayerNum = BC9_STATR_NO + 2 + BC_COM * 1;
        if (BTCP_TY_BT10->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT10->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT2);
            num = ConventNO_BTtoInt(BTCP_NO_BT2->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT10->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT2);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT10->getButtonText().compare("MMC") == 0)
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
        this->MidiLayerNum = BC9_STATR_NO + 2 + BC_COM * 2;
        if (BTCP_TY_BT11->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT11->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT3);
            num = ConventNO_BTtoInt(BTCP_NO_BT3->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT11->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT3);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT11->getButtonText().compare("MMC") == 0)
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
        this->MidiLayerNum = BC9_STATR_NO + 2 + BC_COM * 3;
        if (BTCP_TY_BT12->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT12->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT4);
            num = ConventNO_BTtoInt(BTCP_NO_BT4->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT12->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT4);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT12->getButtonText().compare("MMC") == 0)
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
        this->MidiLayerNum = BC9_STATR_NO + 2 + BC_COM * 4;
        if (BTCP_TY_BT13->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT13->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT5);
            num = ConventNO_BTtoInt(BTCP_NO_BT5->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT13->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT5);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT13->getButtonText().compare("MMC") == 0)
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
        this->MidiLayerNum = BC9_STATR_NO + 2 + BC_COM * 5;
        if (BTCP_TY_BT14->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT14->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT6);
            num = ConventNO_BTtoInt(BTCP_NO_BT6->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT14->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT6);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT14->getButtonText().compare("MMC") == 0)
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
        this->MidiLayerNum = BC9_STATR_NO + 2 + BC_COM * 6;
        if (BTCP_TY_BT15->getButtonText().compare("CC") == 0/* || BTCP_TY_BT15->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT7);
            num = ConventNO_BTtoInt(BTCP_NO_BT7->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT15->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT7);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT15->getButtonText().compare("MMC") == 0)
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
        this->MidiLayerNum = BC9_STATR_NO + 2 + BC_COM * 7;
        if (BTCP_TY_BT16->getButtonText().compare("CC") == 0/* || BTCP_TY_BT16->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT8);
            num = ConventNO_BTtoInt(BTCP_NO_BT8->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT16->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT8);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT16->getButtonText().compare("MMC") == 0)
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
void ButtonsCompact9To16Component::CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged)
{

    Load_or_SaveFlag =1;
	pMainComponent-> ChangeEditedButtonImClose();
    
	for(int i =0;i<8;i++)
	{
		if(CustomTextButtonThatHasChanged == BC2Bt[i].BT1)
		{
			if(!(BC2Bt[i].BT1->GetValue().toString().compare("Off")==0) && !(BC2Bt[i].BT1->GetValue().toString().compare("Global")==0))
			{
				if(BC2Bt[i].BT1->GetValue().toString().getLastCharacters(1).compare("*")==0)
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() != BC2Bt[i].BT1->GetValue().toString().dropLastCharacters(1).getIntValue())					
						BC2Bt[i].BT1->setButtonText(BC2Bt[i].BT1->GetValue().toString().dropLastCharacters(1));
					
				}
				else
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() == BC2Bt[i].BT1->GetValue().toString().getIntValue())		
						BC2Bt[i].BT1->setButtonText(BC2Bt[i].BT1->GetValue().toString()+"*");
				}
			}
		}
	}

}

void ButtonsCompact9To16Component::CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(4);
    pMainComponent->GlobalorOFF = 1;
	GetCustomBtID();
     if(buttonThatWasClicked == pfader1)
    {
        this->MidiLayerNum = BC9_STATR_NO  + BC_COM * 0;
        SetCurrentCustomBT2(pfader1);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader1);
    }
    else if(buttonThatWasClicked == pfader2)
    {
        this->MidiLayerNum = BC9_STATR_NO  + BC_COM * 1;
        SetCurrentCustomBT2(pfader2);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader2);
    }
    else if(buttonThatWasClicked == pfader3)
    {
        this->MidiLayerNum = BC9_STATR_NO  + BC_COM * 2;
        SetCurrentCustomBT2(pfader3);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader3);
    }
    else if(buttonThatWasClicked == pfader4)
    {
        this->MidiLayerNum = BC9_STATR_NO + BC_COM * 3;
        SetCurrentCustomBT2(pfader4);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader4);
    }
    else if(buttonThatWasClicked == pfader5)
    {
        this->MidiLayerNum = BC9_STATR_NO  + BC_COM * 4;
        SetCurrentCustomBT2(pfader5);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader5);
    }
    else if(buttonThatWasClicked == pfader6)
    {
        this->MidiLayerNum = BC9_STATR_NO + BC_COM * 5;
        SetCurrentCustomBT2(pfader6);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader6);
    }
    else if(buttonThatWasClicked == pfader7)
    {
        this->MidiLayerNum = BC9_STATR_NO + BC_COM * 6;
        SetCurrentCustomBT2(pfader7);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader7);
    }
    else if(buttonThatWasClicked == pfader8)
    {
        this->MidiLayerNum = BC9_STATR_NO + BC_COM * 7;
        SetCurrentCustomBT2(pfader8);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader8);
    }

}

void ButtonsCompact9To16Component:: SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT2 = currentbuttonThatWasClicked;
 }

 CustomTextButton* ButtonsCompact9To16Component:: GetCurrentCustomBT2()
 {
     return CurrentCustomBT2;
 }


void ButtonsCompact9To16Component::CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(4);
    pMainComponent->FaderorOtherFlag =1;
	GetCustomBtID();
    for (int i = 0; i < 8; i++)
    {
        if (BC2Bt[i].BT4 == buttonThatWasClicked || BC2Bt[i].BT5 == buttonThatWasClicked)
        {
            if (!(BC2Bt[i].BT2->getButtonText().compare("MMC") == 0) /*&& !(BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0)*/)
            {
				if(!((BC2Bt[i].BT2->getButtonText().compare("Program") == 0) && BC2Bt[i].BT5 == buttonThatWasClicked ))
				{
					if(!(BC2Bt[i].BT5 == buttonThatWasClicked && (BC2Bt[i].BT4->getButtonText().compare("Inc/+1")==0 || BC2Bt[i].BT4->getButtonText().compare("Dec/-1")==0))){
						if (buttonThatWasClicked == pCustomImageButton1)
						{
							if(BC2Bt[i].BT2->getButtonText().compare("Note")==0 || BC2Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = BC9_STATR_NO + 3 + BC_COM * 0;
							SetCurrentCustomBT(pCustomImageButton1);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton1);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton2)
						{
							if(BC2Bt[i].BT2->getButtonText().compare("Note")==0 || BC2Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = BC9_STATR_NO + 3 + BC_COM * 1;
							SetCurrentCustomBT(pCustomImageButton2);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton2);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton3)
						{
							if(BC2Bt[i].BT2->getButtonText().compare("Note")==0 || BC2Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = BC9_STATR_NO + 3 + BC_COM * 2;
							SetCurrentCustomBT(pCustomImageButton3);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton3);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton4)
						{
							if(BC2Bt[i].BT2->getButtonText().compare("Note")==0 || BC2Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = BC9_STATR_NO + 3 + BC_COM * 3;
							SetCurrentCustomBT(pCustomImageButton4);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton4);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton5)
						{
							if(BC2Bt[i].BT2->getButtonText().compare("Note")==0 || BC2Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = BC9_STATR_NO + 3 + BC_COM * 4;
							SetCurrentCustomBT(pCustomImageButton5);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton5);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton6)
						{
							if(BC2Bt[i].BT2->getButtonText().compare("Note")==0 || BC2Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = BC9_STATR_NO + 3 + BC_COM * 5;
							SetCurrentCustomBT(pCustomImageButton6);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton6);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton7)
						{
							if(BC2Bt[i].BT2->getButtonText().compare("Note")==0 || BC2Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = BC9_STATR_NO + 3 + BC_COM * 6;
							SetCurrentCustomBT(pCustomImageButton7);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton7);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton8)
						{
							if(BC2Bt[i].BT2->getButtonText().compare("Note")==0 || BC2Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							this->MidiLayerNum = BC9_STATR_NO + 3 + BC_COM * 7;
							SetCurrentCustomBT(pCustomImageButton8);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton8);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton9)
						{
							this->MidiLayerNum = BC9_STATR_NO + 4 + BC_COM * 0;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton9);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton9);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton10)
						{
							this->MidiLayerNum = BC9_STATR_NO + 4 + BC_COM * 1;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton10);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton10);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton11)
						{
							this->MidiLayerNum = BC9_STATR_NO + 4 + BC_COM * 2;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton11);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton11);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton12)
						{
							this->MidiLayerNum = BC9_STATR_NO + 4 + BC_COM * 3;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton12);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton12);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton13)
						{
							this->MidiLayerNum = BC9_STATR_NO + 4 + BC_COM * 4;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton13);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton13);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton14)
						{
							this->MidiLayerNum = BC9_STATR_NO + 4 + BC_COM * 5;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton14);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton14);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton15)
						{
							this->MidiLayerNum = BC9_STATR_NO + 4 + BC_COM * 6;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton15);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton15);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton16)
						{
							this->MidiLayerNum = BC9_STATR_NO + 4 + BC_COM * 7;
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
            if (BC2Bt[i].BT7 == MSB[i])
            {
                if (BC2Bt[i].BT2->getButtonText().compare("Program") == 0 /*|| BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0*/)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 389 + 8 * i;
                    SetCurrentCustomBT(MSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, MSB[i]);
                }
            }
        }
        else if (buttonThatWasClicked == LSB[i])
        {
            if (BC2Bt[i].BT8 == LSB[i])
            {
                if (BC2Bt[i].BT2->getButtonText().compare("Program") == 0)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 390 + 8 * i;
                    SetCurrentCustomBT(LSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, LSB[i]);
                }
            }
        }
    }
}

void ButtonsCompact9To16Component::CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged)
{

}

void ButtonsCompact9To16Component::MyCallOutBox(Component *p,Button* buttonThatWasClicked)
{
    /*CallOutBox & mycall = */CallOutBox::launchAsynchronously(p, buttonThatWasClicked->getScreenBounds(), nullptr);
    //windows.add(&mycall);
    //CurrentCustomBT->setState(Button::buttonOver);
    //return mycall;
}

 void ButtonsCompact9To16Component:: SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT = currentbuttonThatWasClicked;
 }


 CustomImageButton* ButtonsCompact9To16Component:: GetCurrentCustomBT()
 {
     return CurrentCustomBT;
 }

 void ButtonsCompact9To16Component::setCustomBTtoggle(bool s)
 {
     CurrentCustomBT->setState(Button::buttonOver);
     //CurrentCustomBT->setToggleState(s,dontSendNotification);
 }

 void ButtonsCompact9To16Component::SetNO_BT(Button* buttonThatWasClicked)
 {
     NO_BT = buttonThatWasClicked;
 }
 Button* ButtonsCompact9To16Component::GetNO_BT()
 {
    return NO_BT;
 }

   int ButtonsCompact9To16Component::ConventNO_BTtoInt(String JK)
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


 int ButtonsCompact9To16Component::GetNum()
 {
    return num;
 }

 void ButtonsCompact9To16Component::GetCustomBtID()
 {
	for(int i=0;i<8;i++)
	 {
		if (!(BC2Bt[i].BT1->getButtonText().compare("Global") == 0) && !(BC2Bt[i].BT1->getButtonText().compare("Off") == 0))
            ConstMidiLayerMessage[BC9_STATR_NO + 0 + i * 8] = (unsigned char)(BC2Bt[i].BT1->getButtonText().getIntValue() - 1) * 0x01;

        if (BC2Bt[i].BT4->getButtonText().compare("Dec/-1") == 0)
            ConstMidiLayerMessage[BC9_STATR_NO + 3 + i * 8] = 0x80;
        else if (BC2Bt[i].BT4->getButtonText().compare("Inc/+1") == 0)
            ConstMidiLayerMessage[BC9_STATR_NO + 3 + i * 8] = 0x81;
        else if (!(BC2Bt[i].BT4->getButtonText().compare("-") == 0))
            ConstMidiLayerMessage[BC9_STATR_NO + 3 + i * 8] = (unsigned char)(BC2Bt[i].BT4->getButtonText().getIntValue()) * 0x01;

        if (!(BC2Bt[i].BT5->getButtonText().compare("-") == 0))
            ConstMidiLayerMessage[BC9_STATR_NO + 4 + i * 8] = (unsigned char)(BC2Bt[i].BT5->getButtonText().getIntValue()) * 0x01;

        if (ConstMidiLayerMessage[BC9_STATR_NO + 1 + i * 8] == 0x03 /*|| ConstMidiLayerMessage[BC9_STATR_NO + 1 + i * 8] == 0x02*/)
        {
            ConstMidiLayerMessage[BC9_STATR_NO + 6 + i * 8] = (unsigned char)(BC2Bt[i].BT7->getButtonText().getIntValue()) * 0x01;
            ConstMidiLayerMessage[BC9_STATR_NO + 7 + i * 8] = (unsigned char)(BC2Bt[i].BT8->getButtonText().getIntValue()) * 0x01;
        }
	 }
 }

 void ButtonsCompact9To16Component::SetAllButtonState(bool s)
 {
	for(int i = 0;i<8;i++)
	{
		BC2Bt[i].BT1 ->setEnabled(s);
		BC2Bt[i].BT2 ->setEnabled(s);
		BC2Bt[i].BT3 ->setEnabled(s);
		BC2Bt[i].BT4 ->setEnabled(s);
		BC2Bt[i].BT5 ->setEnabled(s);
		BC2Bt[i].BT6 ->setEnabled(s);
		BC2Bt[i].BT7 ->setEnabled(s);
		BC2Bt[i].BT8 ->setEnabled(s);
	}
 }

void ButtonsCompact9To16Component::MakeButtonPointToBtGroup()
{
    BC2Bt[0].BT1 = pfader1;
    BC2Bt[0].BT2 = BTCP_TY_BT9;
    BC2Bt[0].BT3 = BTCP_NO_BT1;
    BC2Bt[0].BT4 = pCustomImageButton1;
    BC2Bt[0].BT5 = pCustomImageButton9;
    BC2Bt[0].BT6 = BTCP_BEH_BT9;
	BC2Bt[0].BT7 = MSB[0];
	BC2Bt[0].BT8 = LSB[0];

    BC2Bt[1].BT1 = pfader2;
    BC2Bt[1].BT2 = BTCP_TY_BT10;
    BC2Bt[1].BT3 = BTCP_NO_BT2;
    BC2Bt[1].BT4 = pCustomImageButton2;
    BC2Bt[1].BT5 = pCustomImageButton10;
    BC2Bt[1].BT6 = BTCP_BEH_BT10;
	BC2Bt[1].BT7 = MSB[1];
	BC2Bt[1].BT8 = LSB[1];

    BC2Bt[2].BT1 = pfader3;
    BC2Bt[2].BT2 = BTCP_TY_BT11;
    BC2Bt[2].BT3 = BTCP_NO_BT3;
    BC2Bt[2].BT4 = pCustomImageButton3;
    BC2Bt[2].BT5 = pCustomImageButton11;
    BC2Bt[2].BT6 = BTCP_BEH_BT11;
	BC2Bt[2].BT7 = MSB[2];
	BC2Bt[2].BT8 = LSB[2];

    BC2Bt[3].BT1 = pfader4;
    BC2Bt[3].BT2 = BTCP_TY_BT12;
    BC2Bt[3].BT3 = BTCP_NO_BT4;
    BC2Bt[3].BT4 = pCustomImageButton4;
    BC2Bt[3].BT5 = pCustomImageButton12;
    BC2Bt[3].BT6 = BTCP_BEH_BT12;
	BC2Bt[3].BT7 = MSB[3];
	BC2Bt[3].BT8 = LSB[3];

    BC2Bt[4].BT1 = pfader5;
    BC2Bt[4].BT2 = BTCP_TY_BT13;
    BC2Bt[4].BT3 = BTCP_NO_BT5;
    BC2Bt[4].BT4 = pCustomImageButton5;
    BC2Bt[4].BT5 = pCustomImageButton13;
    BC2Bt[4].BT6 = BTCP_BEH_BT13;
	BC2Bt[4].BT7 = MSB[4];
	BC2Bt[4].BT8 = LSB[4];

    BC2Bt[5].BT1 = pfader6;
    BC2Bt[5].BT2 = BTCP_TY_BT14;
    BC2Bt[5].BT3 = BTCP_NO_BT6;
    BC2Bt[5].BT4 = pCustomImageButton6;
    BC2Bt[5].BT5 = pCustomImageButton14;
    BC2Bt[5].BT6 = BTCP_BEH_BT14;
	BC2Bt[5].BT7 = MSB[5];
	BC2Bt[5].BT8 = LSB[5];

    BC2Bt[6].BT1 = pfader7;
    BC2Bt[6].BT2 = BTCP_TY_BT15;
    BC2Bt[6].BT3 = BTCP_NO_BT7;
    BC2Bt[6].BT4 = pCustomImageButton7;
    BC2Bt[6].BT5 = pCustomImageButton15;
    BC2Bt[6].BT6 = BTCP_BEH_BT15;
	BC2Bt[6].BT7 = MSB[6];
	BC2Bt[6].BT8 = LSB[6];

    BC2Bt[7].BT1 = pfader8;
    BC2Bt[7].BT2 = BTCP_TY_BT16;
    BC2Bt[7].BT3 = BTCP_NO_BT8;
    BC2Bt[7].BT4 = pCustomImageButton8;
    BC2Bt[7].BT5 = pCustomImageButton16;
    BC2Bt[7].BT6 = BTCP_BEH_BT16;
	BC2Bt[7].BT7 = MSB[7];
	BC2Bt[7].BT8 = LSB[7];

}

void ButtonsCompact9To16Component::UpdateBt9TO16(int s)
{
    for(int i=0;i<8;i++)
     {
         if (ConstMidiLayerMessage[s + 8 * i] == 17*0x01)       BC2Bt[i].BT1->setButtonText("Global");
         else if (ConstMidiLayerMessage[s + 8 * i] == 18 * 0x01){  
			if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == ConstMidiLayerMessage[s + 8 * i] )
				BC2Bt[i].BT1->setButtonText("Off*");
			else			
				BC2Bt[i].BT1->setButtonText("Off");
		 }
		 else{
			if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == ConstMidiLayerMessage[s + 8 * i] )
				BC2Bt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i]+0x01)+"*");
			else
				BC2Bt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i]+0x01));
		 }

         if (ConstMidiLayerMessage[s + 8 * i + 1] == 0) { BC2Bt[i].BT2->setButtonText("CC");           BC2Bt[i].BT3->setButtonText("CC" + String(ConstMidiLayerMessage[s + 8 * i + 2])); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x01) { BC2Bt[i].BT2->setButtonText("Note");        BC2Bt[i].BT3->setButtonText(Midimusic[ConstMidiLayerMessage[s + 8 * i + 2]]); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x02) { BC2Bt[i].BT2->setButtonText("Pitch");        BC2Bt[i].BT3->setButtonText( /*String(CCBT[ MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x03) { BC2Bt[i].BT2->setButtonText("Program");   BC2Bt[i].BT3->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x04) { BC2Bt[i].BT2->setButtonText("MMC");       BC2Bt[i].BT3->setButtonText(String(MMC_Functions_e[ConstMidiLayerMessage[s + 8 * i + 2]])); }

         if (/*MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x02 &&*/ ConstMidiLayerMessage[s + 8 * i + 1] != 0x04)
         {
             if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80)
			 {
				 if(ConstMidiLayerMessage[s + 8 * i + 1 ] != 0x01 && ConstMidiLayerMessage[s + 8 * i + 1] != 0x02)
					BC2Bt[i].BT4->setButtonText("Dec/-1");  
				 else{
					 BC2Bt[i].BT4->setButtonText("0");  ConstMidiLayerMessage[s + 8 * i + 3 ]= 0;}				 
			 }
             else if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x81)
			 {
				 if(ConstMidiLayerMessage[s + 8 * i + 1 ] != 0x01 && ConstMidiLayerMessage[s + 8 * i + 1] != 0x02)
					BC2Bt[i].BT4->setButtonText("Inc/+1");  
				 else{
					 BC2Bt[i].BT4->setButtonText("0");  ConstMidiLayerMessage[s + 8 * i + 3 ]= 0;}
			 }
             else                                                                                    BC2Bt[i].BT4->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 3]));
             
             if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x81 || ConstMidiLayerMessage[s + 8 * i + 1] == 0x03)
                 BC2Bt[i].BT5->setButtonText("-");
             else{
                 if (ConstMidiLayerMessage[s + 8 * i + 4] == 0x80)             BC2Bt[i].BT5->setButtonText("Dec/-1");
                 else if (ConstMidiLayerMessage[s + 8 * i + 4] == 0x81)             BC2Bt[i].BT5->setButtonText("Inc/+1");
                 else                                                                                    BC2Bt[i].BT5->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 4]));
             }

			 if(ConstMidiLayerMessage[s + 8 * i + 1] == 0x03)
			 {
				 BC2Bt[i].BT6->setButtonText("Momentary");
				 ConstMidiLayerMessage[s + 8 * i + 5] = 0;
			 }
			 else if(ConstMidiLayerMessage[s + 8 * i + 1] == 0x00 && (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x81))
			 {
				 BC2Bt[ i].BT6->setButtonText("Momentary");
				 ConstMidiLayerMessage[s + 8 * i + 5] = 0;
			 }
			 else
			 {
				if (ConstMidiLayerMessage[s + 8 * i + 5] == 0x00) BC2Bt[i].BT6->setButtonText("Momentary");
				else BC2Bt[i].BT6->setButtonText("Toggle");
			 }
         }
         else{
             BC2Bt[i].BT4->setButtonText("-");
             BC2Bt[i].BT5->setButtonText("-");
             BC2Bt[i].BT6->setButtonText("-");
         }

         if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x03 /*|| MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x02*/) {
             BC2Bt[i].BT7->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 6]));
             BC2Bt[i].BT8->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 7]));
         }
         else{
             BC2Bt[i].BT7->setButtonText("-");
             BC2Bt[i].BT8->setButtonText("-");
         }
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

<JUCER_COMPONENT documentType="Component" className="ButtonsCompact9To16Component"
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
    <RECT pos="432 350 135 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="432 364 135 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="432 350 1 14" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="566 351 1 14" fill="solid: ffffffff" hasStroke="0"/>
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
         edTextCol="ff000000" edBkgCol="0" labelText="BT 9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="158fab2e75ce057e" memberName="label_FD2"
         virtualName="" explicitFocusOrder="0" pos="200 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 10" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="59784a12467c2edd" memberName="label_FD3"
         virtualName="" explicitFocusOrder="0" pos="264 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 11" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8c4b98f9bfb3cc4e" memberName="label_FD4"
         virtualName="" explicitFocusOrder="0" pos="328 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 12" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d29c323ead8312a0" memberName="label_FD5"
         virtualName="" explicitFocusOrder="0" pos="392 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 13" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5012a250ae45e10c" memberName="label_FD6"
         virtualName="" explicitFocusOrder="0" pos="456 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 14" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="262b90710eed34aa" memberName="label_FD7"
         virtualName="" explicitFocusOrder="0" pos="520 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 15" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="da92fbab385df26" memberName="label_FD8"
         virtualName="" explicitFocusOrder="0" pos="584 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 16" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e4b35a2fa3a17b7b" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="24 61 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5341d72318556928" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="25 87 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a6617d15bc7b2e63" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="24 113 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="70701aeddec493fb" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="24 139 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="55a1642e7dd79fe2" memberName="label_MAX3"
         virtualName="" explicitFocusOrder="0" pos="24 165 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BEHAVIOR" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="73ce54ba46fc80f2" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="24 165 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="7b6bfda123f7edce" memberName="BTCO_CH_BT9"
              virtualName="" explicitFocusOrder="0" pos="121 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="982bc114cfe3f94a" memberName="ENCO_CH_BT10"
              virtualName="" explicitFocusOrder="0" pos="185 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="2"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cb054c8a11374f1" memberName="ENCO_CH_BT11"
              virtualName="" explicitFocusOrder="0" pos="249 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="3"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8cb6793d75ebd4f6" memberName="ENCO_CH_BT12"
              virtualName="" explicitFocusOrder="0" pos="313 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="4"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="15c8e97c4ad6429e" memberName="ENCO_CH_BT13"
              virtualName="" explicitFocusOrder="0" pos="377 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="5"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="bfcc1c51bdb45e64" memberName="ENCO_CH_BT14"
              virtualName="" explicitFocusOrder="0" pos="441 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="6"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6a1631d78b7609" memberName="ENCO_CH_BT15"
              virtualName="" explicitFocusOrder="0" pos="505 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="7"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="374ef557916487ef" memberName="ENCO_CH_BT16"
              virtualName="" explicitFocusOrder="0" pos="569 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="8"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5a38375d9474f4" memberName="BTCP_TY_BT9"
              virtualName="" explicitFocusOrder="0" pos="121 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cb10ebcdc15fa6f1" memberName="BTCP_TY_BT10"
              virtualName="" explicitFocusOrder="0" pos="184 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d0ca472bf46e2cba" memberName="BTCP_TY_BT11"
              virtualName="" explicitFocusOrder="0" pos="248 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b7bfc7315d20e3b2" memberName="BTCP_TY_BT12"
              virtualName="" explicitFocusOrder="0" pos="312 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pitch"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="46d7276338ce5b69" memberName="BTCP_TY_BT13"
              virtualName="" explicitFocusOrder="0" pos="376 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="27e6e2a3d57a18e9" memberName="BTCP_TY_BT14"
              virtualName="" explicitFocusOrder="0" pos="440 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d011e0f807abab2b" memberName="BTCP_TY_BT15"
              virtualName="" explicitFocusOrder="0" pos="504 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="ed09bd903e3e12cc" memberName="BTCP_TY_BT16"
              virtualName="" explicitFocusOrder="0" pos="568 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6d140b501739d7d6" memberName="BTCP_BEH_BT9"
              virtualName="" explicitFocusOrder="0" pos="121 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5b22bcd19c7d90" memberName="BTCP_BEH_BT10"
              virtualName="" explicitFocusOrder="0" pos="185 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e583376883a3e049" memberName="BTCP_BEH_BT11"
              virtualName="" explicitFocusOrder="0" pos="249 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b2bd04b50e39565b" memberName="BTCP_BEH_BT12"
              virtualName="" explicitFocusOrder="0" pos="313 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="f76650deded802f3" memberName="BTCP_BEH_BT13"
              virtualName="" explicitFocusOrder="0" pos="377 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8f6db232510d39ac" memberName="BTCP_BEH_BT14"
              virtualName="" explicitFocusOrder="0" pos="441 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a92097d33cc251fc" memberName="BTCP_BEH_BT15"
              virtualName="" explicitFocusOrder="0" pos="505 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cbca9aba128bbdf0" memberName="BTCP_BEH_BT16"
              virtualName="" explicitFocusOrder="0" pos="569 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
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
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC0"
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

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: list2_png, 7003, "Pic/list2.PNG"
static const unsigned char resource_ButtonsCompact9To16Component_list2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,250,0,0,0,218,8,6,0,0,0,143,64,95,11,0,0,0,1,115,82,71,66,0,174,206,
28,233,0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,26,240,73,68,65,84,120,94,237,157,49,174,44,75,82,134,103,37,88,131,129,59,54,207,
121,8,61,33,6,24,12,132,139,132,49,30,56,88,104,208,96,96,140,129,198,96,64,194,99,1,179,1,54,128,4,194,98,1,179,2,22,128,121,185,255,211,137,215,217,241,190,170,204,200,204,234,155,89,29,45,125,186,167,
162,50,178,254,138,204,63,171,186,187,206,185,63,248,252,250,148,36,201,237,193,96,146,36,247,2,131,73,146,220,11,12,38,73,114,47,48,152,36,201,189,192,96,146,36,247,2,131,73,146,220,11,12,38,73,114,47,
48,88,229,47,255,252,15,63,253,234,111,126,242,29,191,248,171,63,253,244,103,127,244,251,216,182,133,111,190,254,234,211,207,126,250,232,79,252,245,95,252,241,167,31,254,240,183,177,125,11,169,241,161,
145,218,182,66,26,117,28,106,219,130,114,213,71,217,231,168,198,87,163,49,247,117,214,246,200,92,208,184,151,253,141,206,5,7,6,15,209,128,252,230,151,63,250,244,127,255,252,91,200,127,252,226,247,190,
157,24,148,75,168,48,191,254,249,143,177,47,241,191,255,244,59,223,158,52,229,30,209,162,49,82,192,43,52,106,82,204,212,40,243,188,163,198,87,211,58,23,34,134,159,237,169,3,48,136,216,9,74,148,95,189,
52,136,58,65,157,168,218,104,127,153,75,104,146,88,123,245,237,39,141,10,160,147,212,254,255,249,199,223,109,42,222,238,26,213,255,76,141,234,251,74,141,98,134,70,245,97,26,245,111,139,198,87,35,205,102,
72,157,131,234,90,238,239,169,243,191,253,237,159,124,87,103,127,167,212,51,95,79,192,224,247,208,1,237,4,207,78,64,251,116,146,106,235,11,81,162,147,176,137,82,91,173,84,0,43,30,237,55,172,104,53,141,
58,246,78,26,207,142,109,6,18,165,121,8,211,168,201,72,251,13,105,51,141,180,223,184,66,163,205,179,154,198,87,163,177,178,115,56,155,51,66,134,212,57,168,54,103,99,108,231,250,239,255,240,7,167,237,180,
207,234,60,96,118,12,62,161,193,137,20,95,194,180,66,169,40,71,39,96,43,95,109,224,13,155,164,42,14,237,215,68,179,162,209,126,207,46,26,165,79,58,207,52,170,77,171,70,155,92,71,19,198,52,214,76,110,148,
26,105,191,136,106,180,197,112,240,10,54,21,91,252,206,22,180,18,51,251,209,92,208,34,169,253,17,79,201,236,103,243,181,2,6,159,176,147,148,56,218,79,216,132,209,228,247,251,108,225,104,157,76,134,77,
24,218,39,243,68,139,208,162,241,104,160,142,176,193,160,125,61,26,109,194,208,164,55,253,81,141,50,229,145,49,173,198,43,107,124,53,102,202,222,249,74,181,28,241,84,180,150,31,96,240,137,158,147,20,154,
244,194,199,37,52,122,146,194,38,148,78,216,239,235,213,168,201,68,171,234,108,141,26,108,197,117,181,42,227,45,28,105,180,43,95,196,148,194,52,250,43,236,136,70,77,104,186,83,177,9,29,213,104,119,71,
173,119,1,87,210,171,69,183,248,202,163,5,240,168,94,53,142,60,213,0,6,191,195,174,108,36,182,134,77,68,31,215,164,237,89,173,109,34,250,21,205,86,186,217,26,123,10,106,171,255,145,198,218,251,59,66,102,
209,196,240,241,94,141,54,166,254,78,198,52,210,66,90,67,147,150,198,84,26,105,145,170,49,50,166,179,177,197,138,246,213,80,158,159,11,54,71,232,78,178,134,93,128,104,95,5,12,126,199,200,224,31,137,234,
29,124,65,133,75,141,207,241,22,118,213,248,37,216,161,206,13,96,240,59,118,186,162,247,92,45,103,95,209,175,208,120,116,69,233,157,128,71,87,148,145,9,104,159,63,248,120,175,198,145,121,55,155,163,59,
170,22,116,14,126,46,28,221,81,181,112,153,209,133,58,214,201,210,190,51,142,222,79,152,216,232,251,95,123,207,67,102,25,209,72,19,209,22,128,232,123,75,77,76,229,121,179,216,2,160,126,203,120,11,87,189,
71,247,26,109,1,152,169,209,22,169,94,141,50,5,237,127,37,246,30,189,119,190,210,98,165,133,163,119,190,246,92,36,63,131,193,39,122,62,45,182,171,131,95,205,132,173,104,180,239,12,77,164,35,29,35,26,105,
101,61,211,127,134,105,60,219,183,178,70,155,72,17,141,102,74,154,208,54,217,163,87,47,105,232,156,208,211,177,5,48,106,76,205,73,229,81,45,109,1,140,44,30,230,155,158,133,248,51,24,124,194,38,148,132,
211,126,143,78,76,19,230,108,82,107,178,169,207,214,21,219,38,211,209,164,54,141,173,131,209,170,81,251,191,164,70,77,246,51,141,118,14,173,26,237,234,116,164,209,140,57,83,163,237,111,157,212,166,49,
186,56,92,137,153,182,181,206,181,58,70,61,37,108,172,163,119,22,31,96,240,123,216,109,98,109,2,104,176,37,72,109,105,133,55,36,86,162,91,38,169,25,72,253,30,77,38,33,109,51,53,74,215,10,26,233,173,138,
97,26,213,54,162,145,246,27,54,169,107,119,10,17,141,118,220,89,26,95,77,100,190,170,22,106,167,5,238,108,46,68,60,101,99,50,176,248,97,16,177,73,170,65,240,6,145,24,197,116,114,106,211,114,59,105,147,
212,218,251,149,74,251,237,4,117,204,179,162,25,165,70,63,249,76,163,29,211,159,3,49,91,99,57,104,186,99,32,141,26,204,136,70,59,39,65,26,117,245,176,59,168,86,141,214,254,72,163,142,243,37,53,126,9,202,
185,160,121,70,115,193,230,159,124,160,237,114,63,81,182,247,117,84,13,20,51,79,117,222,178,27,24,60,164,156,132,66,131,98,66,76,240,217,234,238,81,177,108,128,133,250,46,183,133,138,17,25,248,22,141,
154,88,148,75,180,104,212,32,68,52,150,70,17,163,26,53,169,238,160,81,199,92,209,228,134,230,130,45,212,71,231,112,197,124,141,120,234,0,12,86,209,129,53,40,58,73,157,184,126,30,17,163,73,160,19,86,145,
212,167,38,165,182,253,170,217,138,10,173,213,112,182,70,245,113,181,198,150,43,193,17,164,81,199,232,53,207,149,26,213,215,12,141,95,2,141,121,57,95,245,239,200,92,16,179,61,229,192,96,146,36,247,2,131,
73,146,220,11,12,38,73,114,47,48,152,36,201,189,192,96,146,36,247,2,131,73,146,220,11,12,62,161,143,249,237,59,189,40,202,165,62,169,109,43,212,223,108,141,250,126,152,218,182,160,175,71,124,127,66,113,
106,223,2,125,95,253,174,26,207,80,78,137,190,147,62,154,131,111,6,6,159,72,163,199,56,154,160,138,83,251,22,210,232,109,248,28,29,63,141,254,45,24,124,34,141,30,99,103,19,237,160,241,12,159,163,227,207,
54,186,30,236,209,195,49,190,86,218,86,188,231,193,31,233,212,67,55,254,137,56,197,168,174,29,96,240,137,52,122,140,163,9,234,39,70,4,26,236,119,213,120,134,158,178,83,94,137,158,186,163,182,61,168,47,
123,92,85,111,11,116,60,205,159,210,164,218,223,250,68,155,22,5,105,180,60,123,34,78,88,92,40,62,248,228,32,6,159,152,109,34,65,109,91,161,254,102,107,76,163,199,89,193,232,87,34,147,75,151,12,78,231,
42,20,55,195,215,22,24,25,87,125,169,173,230,32,25,89,49,45,38,118,220,1,179,99,240,137,52,122,140,52,250,131,43,52,126,9,236,60,90,204,86,26,248,236,119,2,172,77,203,29,135,45,50,186,178,211,254,6,48,
248,68,26,61,70,26,253,193,21,26,191,4,186,74,235,214,186,245,138,170,95,110,81,251,163,115,48,227,234,61,61,237,39,236,202,78,117,110,0,131,79,164,209,99,236,108,162,29,52,190,26,189,223,150,158,150,
43,111,137,205,73,186,170,235,106,174,197,195,199,207,208,34,163,197,67,159,7,208,254,10,24,124,34,141,30,35,141,254,224,14,70,183,185,21,125,127,172,171,186,242,232,170,173,184,174,208,62,94,67,183,238,
50,59,237,171,128,193,39,210,232,49,210,232,15,238,96,116,153,43,122,245,53,116,30,126,126,89,77,162,119,8,194,230,57,237,171,128,193,39,102,155,72,80,219,86,168,191,217,26,223,213,68,105,244,239,35,29,
186,213,166,125,53,116,30,126,126,89,77,168,94,53,108,158,211,190,10,24,124,98,182,137,4,181,109,133,250,155,173,241,93,77,180,131,198,87,211,107,46,221,234,43,207,207,175,163,120,11,122,127,222,163,229,
51,24,76,146,45,209,237,176,12,84,66,11,80,4,251,132,60,250,103,157,44,143,142,175,183,2,61,119,9,202,235,252,138,13,131,73,178,37,186,11,144,177,12,125,16,214,115,229,44,177,79,187,35,198,84,142,76,121,
244,222,94,154,162,139,135,206,69,57,61,239,237,63,243,216,248,217,223,253,253,167,255,252,175,255,78,146,101,209,28,45,231,172,199,223,238,203,236,163,70,23,102,178,214,175,182,236,22,251,200,200,182,
120,136,150,63,180,169,54,209,197,198,241,216,248,213,191,252,235,39,189,168,192,73,242,165,209,75,115,180,156,179,30,25,189,68,198,152,97,116,97,230,213,191,50,42,181,81,92,183,214,45,139,130,153,87,
208,237,189,161,197,34,178,40,28,240,216,48,163,151,177,36,89,5,189,106,70,191,26,51,187,76,167,159,101,66,153,84,183,211,218,86,92,251,91,191,35,55,179,43,71,11,147,238,28,236,109,135,22,40,45,84,218,
167,183,0,3,38,23,143,141,52,122,178,50,122,125,105,163,11,153,208,174,218,30,197,207,174,206,132,238,2,100,106,153,217,247,167,152,246,29,221,65,4,120,108,164,209,147,149,209,107,5,163,151,216,213,55,
106,238,35,244,52,157,245,55,242,159,65,0,143,141,52,122,178,50,122,173,102,244,141,120,108,28,25,93,171,139,110,31,122,56,90,233,168,109,43,212,223,108,141,90,77,169,109,11,71,95,127,40,78,237,91,160,
213,253,221,52,234,85,51,58,233,63,154,131,111,198,99,227,200,232,42,150,127,239,208,138,114,125,127,130,218,182,66,253,205,214,168,201,65,109,91,208,135,42,190,63,161,56,181,111,129,38,235,187,105,212,
171,102,116,229,232,152,198,140,239,209,111,194,99,35,141,254,96,230,4,53,86,54,145,177,178,70,189,90,140,94,110,235,248,105,244,111,121,108,164,209,31,188,155,137,140,149,53,234,213,98,116,141,167,161,
175,188,104,124,223,144,199,70,26,253,65,26,61,206,10,70,215,119,205,58,102,9,125,118,240,134,60,54,210,232,15,102,78,80,35,141,30,163,199,232,201,33,143,141,52,250,131,52,122,156,119,51,186,238,30,236,
83,126,253,59,248,228,218,183,15,197,168,94,234,79,232,231,9,15,202,24,143,141,52,250,131,119,51,145,145,70,175,163,79,242,233,41,54,161,184,255,90,176,134,22,136,163,39,237,132,62,103,152,240,246,227,
177,145,70,127,144,70,143,115,119,163,235,234,90,62,123,94,94,197,117,158,229,2,32,237,45,87,99,245,97,231,43,67,171,31,229,201,216,122,142,94,49,237,211,243,240,145,95,105,5,30,27,105,244,7,239,102,34,
99,101,141,122,125,41,163,151,38,151,161,169,141,97,115,241,168,198,134,153,92,253,158,93,177,181,152,216,2,66,53,110,228,177,145,70,127,240,110,38,50,86,214,168,87,205,232,50,133,142,89,50,227,83,119,
251,155,234,173,183,229,54,31,143,230,191,52,233,42,45,147,183,92,249,213,70,237,101,248,150,246,192,99,35,141,254,96,230,4,53,210,232,49,122,140,174,28,141,167,49,227,123,116,25,139,244,212,80,123,153,
147,246,217,194,17,249,0,79,183,238,202,169,221,81,28,240,216,56,50,186,6,171,44,94,4,26,124,65,109,91,161,254,102,107,212,138,75,109,91,56,90,245,21,167,246,45,208,85,233,221,52,234,213,98,244,114,219,
230,69,25,139,34,29,50,216,209,92,62,194,242,232,189,181,174,204,209,133,67,40,79,119,1,180,175,194,99,227,200,232,73,178,2,122,181,24,93,134,52,102,60,235,110,87,95,218,119,134,221,9,248,227,107,241,
163,120,11,189,90,62,243,216,72,163,39,43,163,87,205,232,116,71,18,189,18,123,180,120,244,92,125,5,25,90,122,20,239,209,165,190,210,232,201,173,209,171,102,244,43,208,119,220,186,101,166,125,53,200,232,
122,95,174,184,127,107,210,194,84,163,235,223,36,89,13,155,155,229,156,125,5,102,46,250,12,226,140,51,67,43,174,15,10,125,188,198,192,162,243,216,176,98,230,43,95,171,190,190,132,209,205,176,254,202,92,
195,30,118,161,5,66,134,213,39,242,145,175,202,236,189,125,207,2,241,25,12,38,73,82,160,247,232,50,102,235,215,97,182,56,28,153,210,222,167,183,254,181,88,97,143,201,70,239,44,62,192,96,146,108,137,125,
112,102,232,171,168,232,149,152,144,113,237,1,151,154,209,172,173,56,107,107,198,109,249,94,220,238,14,34,11,131,3,131,73,178,37,50,119,185,173,43,231,12,163,11,251,94,92,6,214,207,254,182,91,219,58,150,
153,188,118,245,87,123,45,28,234,83,166,167,246,210,175,115,82,155,206,91,118,3,131,79,216,135,17,61,28,21,153,218,182,66,253,205,214,104,183,86,61,248,201,102,216,128,245,64,95,197,188,171,198,51,124,
142,142,127,52,7,123,144,25,245,97,88,169,209,40,99,53,147,151,216,119,227,194,30,164,17,118,28,45,26,19,206,1,131,79,204,54,145,160,182,173,80,127,179,53,190,171,137,118,208,120,134,76,163,188,146,158,
175,177,106,216,111,150,149,199,209,177,169,6,45,232,22,95,183,240,101,127,186,202,43,22,249,192,238,4,12,62,145,70,143,161,65,242,253,9,197,169,125,11,175,50,209,14,26,147,46,48,248,68,26,61,70,26,253,
65,26,125,25,48,248,68,26,61,70,26,253,65,26,125,25,48,248,68,26,61,70,26,253,65,26,125,25,48,248,68,26,61,70,26,253,65,26,125,25,48,248,68,26,61,70,26,253,65,26,125,25,48,248,68,26,61,70,26,253,193,171,
141,254,170,175,215,54,4,131,79,164,209,99,28,77,80,197,169,125,11,105,244,54,124,142,142,127,52,7,223,12,12,62,145,70,143,177,179,137,118,208,120,134,207,209,241,175,48,58,61,48,163,237,222,63,201,76,
15,204,136,124,96,198,145,70,143,177,179,198,51,148,83,50,235,151,90,140,150,71,96,117,204,214,71,96,101,226,242,17,88,229,90,127,47,127,4,54,73,146,239,255,82,139,223,63,250,75,45,244,155,110,90,40,109,
17,185,252,151,90,146,228,221,145,105,237,138,59,251,215,84,91,62,44,148,201,213,86,87,127,218,223,0,6,147,36,41,208,85,181,102,220,18,91,24,100,102,218,111,111,105,34,198,181,133,161,85,131,3,131,73,
146,124,96,166,141,190,79,182,171,48,25,83,166,213,194,17,249,160,77,253,168,191,206,91,120,12,38,73,242,129,12,222,115,37,181,5,130,254,130,76,175,97,181,64,232,67,58,218,87,1,131,73,146,124,96,87,95,
218,87,67,134,246,119,2,182,0,244,60,200,99,139,14,237,171,128,193,36,73,62,176,175,187,104,95,13,50,186,189,63,167,175,35,107,164,209,147,228,34,236,123,110,218,119,134,222,127,147,209,143,226,45,244,
106,249,12,6,147,36,249,192,190,63,143,94,129,45,111,185,255,100,49,73,146,239,99,87,224,168,49,101,200,163,247,246,118,101,142,44,30,182,112,208,135,123,13,96,48,73,146,2,123,111,220,106,50,107,127,116,
123,174,79,240,181,8,104,49,104,249,138,205,218,235,138,30,249,74,174,0,131,73,146,20,200,92,246,184,106,205,236,118,181,174,221,1,216,21,186,246,180,157,62,165,183,231,222,123,62,192,251,0,131,85,116,
80,130,218,182,96,43,160,103,224,196,176,191,222,79,79,197,14,26,149,75,125,246,106,84,30,245,183,146,70,130,250,31,209,44,74,179,203,120,50,188,105,214,191,218,54,67,234,43,185,150,43,175,153,93,232,
123,117,189,159,151,233,133,253,134,156,246,233,106,222,251,155,113,31,96,176,138,14,174,194,105,242,11,27,60,106,219,130,153,200,250,179,19,28,25,124,175,81,131,48,50,216,59,104,84,174,250,152,165,81,
121,202,87,63,171,106,36,102,215,181,68,230,84,127,58,134,71,113,237,167,188,35,100,106,123,188,149,80,125,206,174,248,141,96,176,138,4,168,128,182,173,159,21,43,219,68,240,249,54,193,70,77,84,106,212,
64,143,12,246,14,26,125,254,168,70,202,95,77,35,49,187,174,132,110,169,101,106,29,71,87,91,109,83,187,86,116,7,160,26,168,63,187,91,232,124,63,78,96,176,138,47,164,126,86,172,108,19,193,231,207,24,252,
217,131,189,131,70,159,63,170,145,242,87,211,72,204,174,235,13,192,96,21,95,72,111,130,40,59,152,104,7,141,62,127,84,35,229,175,166,145,152,93,215,27,128,193,42,190,144,222,4,81,118,48,209,14,26,125,254,
168,70,202,95,77,35,49,187,174,55,0,131,85,124,33,189,9,162,236,96,162,29,52,250,252,81,141,148,191,154,70,98,118,93,111,0,6,171,248,66,122,19,68,217,193,68,59,104,244,249,163,26,41,127,53,141,196,236,
186,222,0,12,86,241,133,244,38,136,178,131,137,118,208,232,243,71,53,82,254,106,26,137,217,117,189,1,24,172,226,11,233,77,16,101,7,19,237,160,209,231,143,106,164,252,213,52,18,179,235,122,3,48,88,197,
23,210,155,32,202,14,38,218,65,163,207,31,213,72,249,171,105,36,102,215,245,6,96,176,138,47,164,55,65,148,29,76,180,131,70,159,63,170,145,242,87,211,72,204,174,235,13,192,96,21,95,72,111,130,40,59,152,
104,7,141,62,127,84,35,229,175,166,145,152,93,215,27,128,193,42,190,144,222,4,81,118,48,209,14,26,125,254,168,70,202,95,77,35,49,187,174,55,0,131,85,124,33,189,9,162,236,96,162,29,52,250,252,81,141,148,
191,154,70,98,118,93,111,0,6,171,248,66,122,19,68,217,193,68,59,104,244,249,163,26,41,127,53,141,196,236,186,222,0,12,86,241,133,244,38,136,178,131,137,118,208,232,243,71,53,82,254,106,26,137,217,117,
189,1,24,172,226,11,233,77,16,101,7,19,237,160,209,231,143,106,164,252,213,52,18,179,235,122,3,48,88,197,23,210,155,32,202,14,38,218,65,163,207,31,213,72,249,171,105,36,102,215,245,6,96,176,138,47,164,
55,65,148,29,76,180,131,70,159,63,170,145,242,87,211,72,204,174,235,13,192,96,21,95,72,111,130,40,59,152,104,7,141,62,127,84,35,229,175,166,145,152,93,215,27,128,193,42,190,144,222,4,81,118,48,209,14,
26,125,254,168,70,202,95,77,35,49,187,174,55,0,131,85,124,33,189,9,162,236,96,162,29,52,250,252,81,141,148,191,154,70,98,118,93,111,0,6,171,248,66,122,19,68,217,193,68,59,104,244,249,163,26,41,127,53,
141,196,236,186,222,0,12,86,241,133,244,38,136,178,131,137,118,208,232,243,71,53,82,254,106,26,137,217,117,189,1,24,172,226,11,233,77,16,101,7,19,237,160,209,231,143,106,164,252,213,52,18,87,213,181,7,
234,79,127,38,154,218,182,16,253,187,241,31,96,176,138,47,164,55,65,148,29,76,180,131,70,159,63,170,145,242,87,211,72,204,174,171,250,235,133,250,179,185,212,67,121,94,1,48,88,197,31,208,132,151,109,34,
248,252,25,131,239,53,142,14,246,14,26,125,254,168,70,202,95,77,35,49,187,174,234,175,23,234,207,230,82,15,229,121,5,192,96,21,127,64,19,94,182,137,224,243,103,12,190,215,56,58,216,59,104,244,249,163,
26,41,127,53,141,196,236,186,170,191,94,168,63,155,75,61,148,231,21,0,131,85,252,1,77,120,217,38,130,207,159,49,248,94,227,232,96,239,160,209,231,143,106,164,252,213,52,18,179,235,170,254,122,161,254,
108,46,245,80,158,87,0,12,86,241,7,52,225,101,155,8,62,127,198,224,123,141,163,131,189,131,70,159,63,170,145,242,87,211,72,204,174,171,250,235,133,250,179,185,212,67,121,94,1,48,88,197,31,208,132,151,
109,34,248,252,25,131,239,53,142,14,246,14,26,125,254,168,70,202,95,77,35,49,187,174,234,175,23,234,207,230,82,15,229,121,5,192,96,21,127,64,19,94,182,137,224,243,103,12,190,215,56,58,216,59,104,244,249,
163,26,41,127,53,141,196,236,186,170,191,94,168,63,155,75,61,148,231,21,0,131,85,252,1,77,120,217,38,130,207,159,49,248,94,227,232,96,239,160,209,231,143,106,164,252,213,52,18,179,235,170,254,122,161,
254,108,46,245,80,158,87,0,12,86,241,7,52,225,101,155,8,62,127,198,224,123,141,163,131,189,131,70,159,63,170,145,242,87,211,72,204,174,171,250,235,133,250,179,185,212,67,121,94,1,48,136,216,128,180,208,
58,104,148,75,180,14,82,164,128,239,168,177,117,146,68,52,82,62,65,185,68,231,68,190,164,174,6,245,209,10,245,23,209,234,233,172,15,6,145,52,250,57,105,244,115,40,151,232,156,200,151,212,213,160,62,90,
161,254,34,90,61,157,245,193,32,146,70,63,39,141,126,14,229,18,157,19,249,146,186,26,106,223,11,245,247,205,215,95,97,219,22,148,75,125,86,192,32,162,131,80,209,8,181,165,62,60,148,75,164,209,207,161,
92,162,213,68,17,141,148,79,80,46,209,170,209,115,69,93,111,4,6,145,52,250,57,105,244,115,40,151,104,213,232,185,162,174,55,2,131,72,26,253,156,52,250,57,148,75,180,106,244,92,81,215,27,129,65,36,141,
126,78,26,253,28,202,37,90,53,122,174,168,235,141,192,32,146,70,63,39,141,126,14,229,18,173,26,61,87,212,245,70,96,16,73,163,159,147,70,63,135,114,137,86,141,158,43,234,122,35,48,136,164,209,207,73,163,
159,67,185,68,171,70,207,21,117,189,17,24,68,210,232,231,164,209,207,161,92,162,85,163,231,138,186,222,8,12,34,105,244,115,210,232,231,80,46,209,170,209,115,69,93,111,4,6,145,52,250,57,105,244,115,40,
151,104,213,232,185,162,174,55,2,131,72,26,253,156,52,250,57,148,75,180,106,244,92,81,215,27,129,65,36,141,126,78,26,253,28,202,37,90,53,122,174,168,171,161,246,189,80,127,249,172,251,1,105,244,115,40,
151,104,53,81,68,35,229,19,148,75,180,106,244,92,81,87,131,250,104,133,250,139,104,245,116,214,7,131,72,26,253,156,52,250,57,148,75,116,78,228,75,234,106,80,31,173,80,127,17,173,158,206,250,96,16,73,163,
159,147,70,63,135,114,137,206,137,124,73,93,13,234,163,21,234,47,162,213,211,89,31,12,34,105,244,115,210,232,231,80,46,209,57,145,47,169,171,65,125,180,66,253,69,180,122,58,235,131,65,36,141,126,78,26,
253,28,202,37,58,39,242,37,117,53,168,143,86,168,191,136,86,79,103,125,48,136,164,209,207,73,163,159,67,185,68,231,68,190,164,174,6,245,209,10,245,23,209,234,233,172,15,6,171,248,3,154,240,178,77,4,159,
111,139,74,116,64,74,188,70,25,177,213,140,196,14,26,125,254,168,70,202,95,77,35,49,187,174,234,175,23,234,207,230,82,15,229,121,5,192,96,21,127,64,19,94,182,137,224,243,103,12,190,215,56,58,216,59,104,
244,249,163,26,41,127,53,141,196,236,186,170,191,94,168,63,155,75,61,148,231,21,0,131,85,252,1,77,120,217,38,130,207,159,49,248,94,227,232,96,239,160,209,231,143,106,164,252,213,52,18,179,235,170,254,
122,161,254,108,46,245,80,158,87,0,12,86,241,7,52,225,101,155,8,62,127,198,224,123,141,163,131,189,131,70,159,63,170,145,242,87,211,72,204,174,171,250,235,133,250,179,185,212,67,121,94,1,48,88,197,31,
208,132,151,109,34,248,252,25,131,239,53,142,14,246,14,26,125,254,168,70,202,95,77,35,49,187,174,234,175,23,234,207,230,82,15,229,121,5,192,96,21,127,64,19,94,182,137,224,243,103,12,190,215,56,58,216,
59,104,244,249,163,26,41,127,53,141,196,85,117,237,129,250,251,217,79,127,130,109,91,80,46,245,89,1,131,85,124,33,189,9,162,236,96,162,29,52,250,252,81,141,148,191,154,70,98,118,93,111,0,6,171,248,66,
122,19,68,217,193,68,59,104,244,249,163,26,41,127,53,141,196,236,186,222,0,12,86,241,133,244,38,136,178,131,137,118,208,232,243,71,53,82,254,106,26,137,217,117,189,1,24,172,226,11,233,77,16,101,7,19,237,
160,209,231,143,106,164,252,213,52,18,179,235,122,3,48,88,197,23,210,155,32,202,14,38,218,65,163,207,31,213,72,249,171,105,36,102,215,245,6,96,176,138,47,164,55,65,148,29,76,180,131,70,159,63,170,145,
242,87,211,72,204,174,235,13,192,96,21,95,72,111,130,40,59,152,104,7,141,62,127,84,35,229,175,166,145,152,93,215,27,128,193,42,190,144,222,4,81,118,48,209,14,26,125,254,168,70,202,95,77,35,49,187,174,
55,0,131,85,124,33,189,9,162,236,96,162,29,52,250,252,81,141,148,191,154,70,98,118,93,111,0,6,171,248,66,122,19,68,217,193,68,59,104,244,249,163,26,41,127,53,141,196,236,186,222,0,12,86,241,133,244,38,
136,178,131,137,118,208,232,243,71,53,82,254,106,26,137,217,117,189,1,24,172,226,11,233,77,16,101,7,19,237,160,209,231,143,106,164,252,213,52,18,179,235,122,3,48,88,197,23,210,155,32,202,14,38,218,65,
163,207,31,213,72,249,171,105,36,174,170,107,15,212,95,254,82,203,199,246,140,193,159,61,216,59,104,244,249,163,26,41,127,53,141,196,236,186,170,191,94,168,63,155,75,61,148,231,21,0,131,85,252,1,77,120,
217,38,130,207,159,49,248,94,227,232,96,239,160,209,231,143,106,164,252,213,52,18,179,235,170,254,122,161,254,108,46,245,80,158,87,0,12,86,241,7,52,225,101,155,8,62,127,198,224,123,141,163,131,189,131,
70,159,63,170,145,242,87,211,72,204,174,171,250,235,133,250,179,185,212,67,121,94,1,48,88,197,31,208,132,151,109,34,248,252,25,131,239,53,142,14,246,14,26,125,254,168,70,202,95,77,35,49,187,174,234,175,
23,234,207,230,82,15,229,121,5,192,96,21,127,64,19,94,182,137,224,243,103,12,190,215,56,58,216,59,104,244,249,163,26,41,127,53,141,196,236,186,170,191,94,168,63,155,75,61,148,231,21,0,131,85,252,1,77,
120,217,38,130,207,159,49,248,94,227,232,96,239,160,209,231,143,106,164,252,213,52,18,179,235,170,254,122,161,254,108,46,245,80,158,87,0,12,86,241,7,52,225,101,155,8,62,127,198,224,123,141,163,131,189,
131,70,159,63,170,145,242,87,211,72,204,174,171,250,235,133,250,179,185,212,67,121,94,1,48,88,197,31,208,132,151,109,34,248,252,25,131,239,53,142,14,246,14,26,125,254,168,70,202,95,77,35,49,187,174,234,
175,23,234,207,230,82,15,229,121,5,192,96,21,127,64,19,94,182,137,224,243,103,12,190,215,56,58,216,59,104,244,249,163,26,41,127,53,141,196,236,186,170,191,94,168,63,155,75,61,148,231,21,0,131,85,252,1,
77,120,217,38,130,207,159,49,248,94,227,232,96,239,160,209,231,143,106,164,252,213,52,18,179,235,170,254,122,161,254,108,46,245,80,158,87,0,12,86,241,7,52,225,101,155,8,62,127,198,224,123,141,163,131,
189,131,70,159,63,170,145,242,87,211,72,204,174,171,250,235,133,250,179,185,212,67,121,94,1,48,88,197,31,208,132,151,109,34,248,252,25,131,239,53,142,14,246,14,26,125,254,168,70,202,95,77,35,49,187,174,
210,214,11,245,247,205,215,95,97,219,22,148,75,125,86,192,96,21,95,72,111,130,40,59,152,104,7,141,62,127,84,35,229,175,166,145,152,93,215,27,128,193,42,42,164,10,167,98,10,253,172,24,181,109,193,76,100,
253,253,250,231,63,30,30,124,175,241,55,191,252,209,208,96,239,160,81,185,234,99,150,70,51,161,250,89,85,35,49,187,174,55,0,131,85,84,72,130,218,182,160,193,160,254,70,77,228,25,25,236,29,52,42,151,250,
28,53,186,103,37,141,4,245,63,162,249,6,96,48,73,146,123,129,193,36,73,238,5,6,147,36,185,23,24,76,146,228,94,96,48,73,146,123,129,193,36,73,238,5,6,147,36,185,23,24,76,146,228,94,96,48,73,146,123,129,
193,39,142,158,8,107,65,185,212,39,181,109,133,250,155,173,241,232,137,176,22,142,158,192,58,122,34,172,5,122,106,236,93,53,122,174,152,159,30,202,109,133,250,123,133,102,7,6,159,184,66,20,181,109,133,
250,155,173,49,141,30,39,141,206,80,127,175,208,236,192,224,19,87,136,162,182,173,80,127,179,53,166,209,227,164,209,25,234,239,21,154,29,24,124,226,10,81,212,182,21,234,111,182,198,52,122,156,52,58,67,
253,189,66,179,3,131,79,92,33,138,218,182,66,253,205,214,152,70,143,147,70,103,168,191,87,104,118,96,240,137,43,68,81,219,86,168,191,217,26,211,232,113,210,232,12,245,247,10,205,14,12,62,113,133,40,106,
219,10,245,55,91,99,26,61,78,26,157,161,254,94,161,217,129,193,39,174,16,69,109,91,161,254,102,107,76,163,199,73,163,51,212,223,43,52,59,48,248,196,21,162,168,109,43,212,223,108,141,105,244,56,105,116,
134,250,123,133,102,7,6,159,184,66,20,181,109,133,250,155,173,49,141,30,39,141,206,80,127,175,208,236,192,224,19,87,136,162,182,173,80,127,179,53,166,209,227,164,209,25,234,239,21,154,29,24,124,226,10,
81,212,182,21,234,111,182,198,52,122,156,52,58,67,253,189,66,179,3,131,73,146,220,11,12,38,73,114,47,48,152,36,201,189,192,96,146,36,247,2,131,73,146,220,11,12,38,73,114,47,48,152,36,201,189,192,96,146,
36,247,2,131,73,146,220,11,12,38,73,114,47,48,152,36,201,109,248,193,167,255,7,6,255,143,136,213,179,104,187,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* ButtonsCompact9To16Component::list2_png = (const char*) resource_ButtonsCompact9To16Component_list2_png;
const int ButtonsCompact9To16Component::list2_pngSize = 7003;


//[EndFile] You can add extra defines here...
//[/EndFile]
