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
#include "MusicNoteViewComponent.h"
#include "MMCFuntionsViewComponent.h"
#include "BackgroundThread.h"
//[/Headers]

#include "ButtonsCompact25To33Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
extern ViewChannelComponent * pViewChannelComponent;
ButtonsCompact25To33Component *    BC25TO33 = nullptr;
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
ButtonGroup BC4Bt[9];
//[/MiscUserDefs]

//==============================================================================
ButtonsCompact25To33Component::ButtonsCompact25To33Component ()
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
                                              "BT 25"));
    label_FD1->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD1->setJustificationType (Justification::centredLeft);
    label_FD1->setEditable (false, false, false);
    label_FD1->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD1->setColour (TextEditor::textColourId, Colours::black);
    label_FD1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD2 = new Label ("new label",
                                              "BT 26"));
    label_FD2->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD2->setJustificationType (Justification::centredLeft);
    label_FD2->setEditable (false, false, false);
    label_FD2->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD2->setColour (TextEditor::textColourId, Colours::black);
    label_FD2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD3 = new Label ("new label",
                                              "BT 27"));
    label_FD3->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD3->setJustificationType (Justification::centredLeft);
    label_FD3->setEditable (false, false, false);
    label_FD3->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD3->setColour (TextEditor::textColourId, Colours::black);
    label_FD3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD4 = new Label ("new label",
                                              "BT 28"));
    label_FD4->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD4->setJustificationType (Justification::centredLeft);
    label_FD4->setEditable (false, false, false);
    label_FD4->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD4->setColour (TextEditor::textColourId, Colours::black);
    label_FD4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD5 = new Label ("new label",
                                              "BT 29"));
    label_FD5->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD5->setJustificationType (Justification::centredLeft);
    label_FD5->setEditable (false, false, false);
    label_FD5->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD5->setColour (TextEditor::textColourId, Colours::black);
    label_FD5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD6 = new Label ("new label",
                                              "BT 30"));
    label_FD6->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD6->setJustificationType (Justification::centredLeft);
    label_FD6->setEditable (false, false, false);
    label_FD6->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD6->setColour (TextEditor::textColourId, Colours::black);
    label_FD6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD7 = new Label ("new label",
                                              "BT 31"));
    label_FD7->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD7->setJustificationType (Justification::centredLeft);
    label_FD7->setEditable (false, false, false);
    label_FD7->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD7->setColour (TextEditor::textColourId, Colours::black);
    label_FD7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD8 = new Label ("new label",
                                              "BT 32"));
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

    addAndMakeVisible (label_MOVE2 = new Label ("new label",
                                                "PUSH"));
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

    addAndMakeVisible (label2 = new Label ("new label",
                                           String::empty));
    label2->setFont (Font (15.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::backgroundColourId, Colour (0xff444444));
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label7 = new Label ("new label",
                                           String::empty));
    label7->setFont (Font (15.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (Label::backgroundColourId, Colour (0xff444444));
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label8 = new Label ("new label",
                                           String::empty));
    label8->setFont (Font (15.00f, Font::plain));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (Label::backgroundColourId, Colour (0xff444444));
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label9 = new Label ("new label",
                                           String::empty));
    label9->setFont (Font (15.00f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (Label::backgroundColourId, Colour (0xff444444));
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_MAX4 = new Label ("new label",
                                               "BEHAVIOR"));
    label_MAX4->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MAX4->setJustificationType (Justification::centredLeft);
    label_MAX4->setEditable (false, false, false);
    label_MAX4->setColour (Label::textColourId, Colour (0xffffab00));
    label_MAX4->setColour (TextEditor::textColourId, Colours::black);
    label_MAX4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label10 = new Label ("new label",
                                            String::empty));
    label10->setFont (Font (15.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::backgroundColourId, Colour (0xff444444));
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD9 = new Label ("new label",
                                              "BT 33"));
    label_FD9->setFont (Font ("Arial", 15.00f, Font::plain));
    label_FD9->setJustificationType (Justification::centredLeft);
    label_FD9->setEditable (false, false, false);
    label_FD9->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD9->setColour (TextEditor::textColourId, Colours::black);
    label_FD9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (BTCO_CH_BT25 = new TextButton ("new button"));
    BTCO_CH_BT25->setButtonText ("1");
    BTCO_CH_BT25->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT25->addListener (this);
    BTCO_CH_BT25->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT25->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT25->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT25->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT26 = new TextButton ("new button"));
    BTCO_CH_BT26->setButtonText ("2");
    BTCO_CH_BT26->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT26->addListener (this);
    BTCO_CH_BT26->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT26->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT26->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT26->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT27 = new TextButton ("new button"));
    BTCO_CH_BT27->setButtonText ("3");
    BTCO_CH_BT27->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT27->addListener (this);
    BTCO_CH_BT27->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT27->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT27->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT27->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT28 = new TextButton ("new button"));
    BTCO_CH_BT28->setButtonText ("4");
    BTCO_CH_BT28->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT28->addListener (this);
    BTCO_CH_BT28->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT28->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT28->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT28->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT29 = new TextButton ("new button"));
    BTCO_CH_BT29->setButtonText ("5");
    BTCO_CH_BT29->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT29->addListener (this);
    BTCO_CH_BT29->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT29->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT29->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT29->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT30 = new TextButton ("new button"));
    BTCO_CH_BT30->setButtonText ("6");
    BTCO_CH_BT30->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT30->addListener (this);
    BTCO_CH_BT30->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT30->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT30->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT30->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT31 = new TextButton ("new button"));
    BTCO_CH_BT31->setButtonText ("7");
    BTCO_CH_BT31->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT31->addListener (this);
    BTCO_CH_BT31->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT31->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT31->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT31->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT32 = new TextButton ("new button"));
    BTCO_CH_BT32->setButtonText ("8");
    BTCO_CH_BT32->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT32->addListener (this);
    BTCO_CH_BT32->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT32->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT32->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT32->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT25 = new TextButton ("new button"));
    BTCP_TY_BT25->setButtonText ("CC");
    BTCP_TY_BT25->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT25->addListener (this);
    BTCP_TY_BT25->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT25->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT25->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT25->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT26 = new TextButton ("new button"));
    BTCP_TY_BT26->setButtonText ("Note");
    BTCP_TY_BT26->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT26->addListener (this);
    BTCP_TY_BT26->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT26->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT26->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT26->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT27 = new TextButton ("new button"));
    BTCP_TY_BT27->setButtonText ("CC");
    BTCP_TY_BT27->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT27->addListener (this);
    BTCP_TY_BT27->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT27->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT27->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT27->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT28 = new TextButton ("new button"));
    BTCP_TY_BT28->setButtonText ("Pitch");
    BTCP_TY_BT28->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT28->addListener (this);
    BTCP_TY_BT28->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT28->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT28->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT28->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT29 = new TextButton ("new button"));
    BTCP_TY_BT29->setButtonText ("Note");
    BTCP_TY_BT29->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT29->addListener (this);
    BTCP_TY_BT29->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT29->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT29->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT29->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT30 = new TextButton ("new button"));
    BTCP_TY_BT30->setButtonText ("CC");
    BTCP_TY_BT30->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT30->addListener (this);
    BTCP_TY_BT30->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT30->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT30->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT30->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT31 = new TextButton ("new button"));
    BTCP_TY_BT31->setButtonText ("CC");
    BTCP_TY_BT31->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT31->addListener (this);
    BTCP_TY_BT31->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT31->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT31->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT31->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT32 = new TextButton ("new button"));
    BTCP_TY_BT32->setButtonText ("CC");
    BTCP_TY_BT32->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT32->addListener (this);
    BTCP_TY_BT32->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT32->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT32->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT32->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT25 = new TextButton ("new button"));
    BTCP_BEH_BT25->setButtonText ("Momentary");
    BTCP_BEH_BT25->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT25->addListener (this);
    BTCP_BEH_BT25->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT25->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT25->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT25->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT26 = new TextButton ("new button"));
    BTCP_BEH_BT26->setButtonText ("Momentary");
    BTCP_BEH_BT26->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT26->addListener (this);
    BTCP_BEH_BT26->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT26->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT26->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT26->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT27 = new TextButton ("new button"));
    BTCP_BEH_BT27->setButtonText ("Toggle");
    BTCP_BEH_BT27->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT27->addListener (this);
    BTCP_BEH_BT27->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT27->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT27->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT27->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT28 = new TextButton ("new button"));
    BTCP_BEH_BT28->setButtonText ("Momentary");
    BTCP_BEH_BT28->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT28->addListener (this);
    BTCP_BEH_BT28->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT28->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT28->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT28->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT29 = new TextButton ("new button"));
    BTCP_BEH_BT29->setButtonText ("Toggle");
    BTCP_BEH_BT29->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT29->addListener (this);
    BTCP_BEH_BT29->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT29->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT29->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT29->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT30 = new TextButton ("new button"));
    BTCP_BEH_BT30->setButtonText ("Toggle");
    BTCP_BEH_BT30->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT30->addListener (this);
    BTCP_BEH_BT30->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT30->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT30->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT30->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT31 = new TextButton ("new button"));
    BTCP_BEH_BT31->setButtonText ("Momentary");
    BTCP_BEH_BT31->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT31->addListener (this);
    BTCP_BEH_BT31->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT31->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT31->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT31->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT32 = new TextButton ("new button"));
    BTCP_BEH_BT32->setButtonText ("Momentary");
    BTCP_BEH_BT32->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT32->addListener (this);
    BTCP_BEH_BT32->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT32->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT32->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT32->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCO_CH_BT33 = new TextButton ("new button"));
    BTCO_CH_BT33->setButtonText ("33");
    BTCO_CH_BT33->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCO_CH_BT33->addListener (this);
    BTCO_CH_BT33->setColour (TextButton::buttonColourId, Colours::black);
    BTCO_CH_BT33->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCO_CH_BT33->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCO_CH_BT33->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_TY_BT33 = new TextButton ("new button"));
    BTCP_TY_BT33->setButtonText ("CC");
    BTCP_TY_BT33->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_TY_BT33->addListener (this);
    BTCP_TY_BT33->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_TY_BT33->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_TY_BT33->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_TY_BT33->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (BTCP_BEH_BT33 = new TextButton ("new button"));
    BTCP_BEH_BT33->setButtonText ("Momentary");
    BTCP_BEH_BT33->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_BEH_BT33->addListener (this);
    BTCP_BEH_BT33->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_BEH_BT33->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_BEH_BT33->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_BEH_BT33->setColour (TextButton::textColourOffId, Colour (0xffffab00));

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

    addAndMakeVisible (BTCP_NO_BT9 = new TextButton ("new button"));
    BTCP_NO_BT9->setButtonText ("CC1");
    BTCP_NO_BT9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    BTCP_NO_BT9->addListener (this);
    BTCP_NO_BT9->setColour (TextButton::buttonColourId, Colours::black);
    BTCP_NO_BT9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    BTCP_NO_BT9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    BTCP_NO_BT9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

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

    addAndMakeVisible (label13 = new Label ("new label",
                                            "label text"));
    label13->setFont (Font (15.00f, Font::plain));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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

    addAndMakeVisible (pCustomImageButton17=new CustomImageButton ("0"));
    pCustomImageButton17->addListener (this);

    addAndMakeVisible (pCustomImageButton18=new CustomImageButton ("120"));
    pCustomImageButton18->addListener (this);

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

    addAndMakeVisible (pfader9=new CustomTextButton ("1"));
    pfader9->addListener (this);

     BTCO_CH_BT25 ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT26 ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT27 ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT28 ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT29 ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT30 ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT31 ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT32 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT25->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT26 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT27 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT28->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT29 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT30 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT31 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT32 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT25 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT26 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT27 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT28 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT29 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT30 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT31 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT32 ->setLookAndFeel(&lookAndFeelV4);
    BTCO_CH_BT33 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_TY_BT33 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_BEH_BT33 ->setLookAndFeel(&lookAndFeelV4);

    BTCP_NO_BT1 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT2 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT3 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT4 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT5 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT6 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT7 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT8 ->setLookAndFeel(&lookAndFeelV4);
    BTCP_NO_BT9 ->setLookAndFeel(&lookAndFeelV4);

    for (int i = 0; i < 9; i++)
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

ButtonsCompact25To33Component::~ButtonsCompact25To33Component()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    for (int i = 0; i < 9; i++)
    {
        MSB[i] = nullptr;
        LSB[i] = nullptr;
    }

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

    pfader1 = nullptr;
    pfader2 = nullptr;
    pfader3 = nullptr;
    pfader4 = nullptr;

    pfader5 = nullptr;
    pfader6 = nullptr;
    pfader7 = nullptr;
    pfader8 = nullptr;
    pfader9 =nullptr;
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
    label_MOVE2 = nullptr;
    label_CHANNEL2 = nullptr;
    label_TYPE2 = nullptr;
    label_NO2 = nullptr;
    label_MIN2 = nullptr;
    label_MAX2 = nullptr;
    label2 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    label_MAX4 = nullptr;
    label10 = nullptr;
    label_FD9 = nullptr;
    BTCO_CH_BT25 = nullptr;
    BTCO_CH_BT26 = nullptr;
    BTCO_CH_BT27 = nullptr;
    BTCO_CH_BT28 = nullptr;
    BTCO_CH_BT29 = nullptr;
    BTCO_CH_BT30 = nullptr;
    BTCO_CH_BT31 = nullptr;
    BTCO_CH_BT32 = nullptr;
    BTCP_TY_BT25 = nullptr;
    BTCP_TY_BT26 = nullptr;
    BTCP_TY_BT27 = nullptr;
    BTCP_TY_BT28 = nullptr;
    BTCP_TY_BT29 = nullptr;
    BTCP_TY_BT30 = nullptr;
    BTCP_TY_BT31 = nullptr;
    BTCP_TY_BT32 = nullptr;
    BTCP_BEH_BT25 = nullptr;
    BTCP_BEH_BT26 = nullptr;
    BTCP_BEH_BT27 = nullptr;
    BTCP_BEH_BT28 = nullptr;
    BTCP_BEH_BT29 = nullptr;
    BTCP_BEH_BT30 = nullptr;
    BTCP_BEH_BT31 = nullptr;
    BTCP_BEH_BT32 = nullptr;
    BTCO_CH_BT33 = nullptr;
    BTCP_TY_BT33 = nullptr;
    BTCP_BEH_BT33 = nullptr;
    BTCP_NO_BT1 = nullptr;
    BTCP_NO_BT2 = nullptr;
    BTCP_NO_BT3 = nullptr;
    BTCP_NO_BT4 = nullptr;
    BTCP_NO_BT5 = nullptr;
    BTCP_NO_BT6 = nullptr;
    BTCP_NO_BT7 = nullptr;
    BTCP_NO_BT8 = nullptr;
    BTCP_NO_BT9 = nullptr;
    LSB1 = nullptr;
    MSB1 = nullptr;
    LNMSB1 = nullptr;
    LNLSB1 = nullptr;
    LSB2 = nullptr;
    MSB2 = nullptr;
    LNMSB2 = nullptr;
    LNLSB2 = nullptr;
    label13 = nullptr;
    label12 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ButtonsCompact25To33Component::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xffffab00));
    g.fillRect (23, 32, 609, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (23, 281, 160, 2);

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
    g.fillRect (432, 455, 153, 1);

    g.setColour (Colours::white);
    g.fillRect (432, 469, 153, 1);

    g.setColour (Colours::white);
    g.fillRect (432, 455, 1, 14);

    g.setColour (Colours::white);
    g.fillRect (584, 455, 1, 14);

    g.setColour (Colour (0xffffab00));
    g.fillRect (586, 458, 13, 9);

    g.setColour (Colour (0xffffab00));
    g.fillRect (602, 458, 13, 9);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ButtonsCompact25To33Component::resized()
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
    label_MOVE2->setBounds (24, 254, 64, 24);
    label_CHANNEL2->setBounds (24, 284, 85, 26);
    label_TYPE2->setBounds (24, 310, 85, 26);
    label_NO2->setBounds (24, 336, 85, 26);
    label_MIN2->setBounds (24, 362, 85, 26);
    label_MAX2->setBounds (24, 388, 85, 26);
    label2->setBounds (24, 310, 160, 1);
    label7->setBounds (25, 336, 160, 1);
    label8->setBounds (24, 362, 160, 1);
    label9->setBounds (24, 388, 160, 1);
    label_MAX4->setBounds (24, 414, 85, 26);
    label10->setBounds (24, 414, 160, 1);
    label_FD9->setBounds (136, 254, 48, 24);
    BTCO_CH_BT25->setBounds (121, 34, 65, 25);
    BTCO_CH_BT26->setBounds (185, 34, 65, 25);
    BTCO_CH_BT27->setBounds (249, 34, 65, 25);
    BTCO_CH_BT28->setBounds (313, 34, 65, 25);
    BTCO_CH_BT29->setBounds (377, 34, 65, 25);
    BTCO_CH_BT30->setBounds (441, 34, 65, 25);
    BTCO_CH_BT31->setBounds (505, 34, 65, 25);
    BTCO_CH_BT32->setBounds (569, 34, 65, 25);
    BTCP_TY_BT25->setBounds (121, 62, 65, 24);
    BTCP_TY_BT26->setBounds (184, 62, 65, 24);
    BTCP_TY_BT27->setBounds (248, 62, 65, 24);
    BTCP_TY_BT28->setBounds (312, 62, 65, 24);
    BTCP_TY_BT29->setBounds (376, 62, 65, 24);
    BTCP_TY_BT30->setBounds (440, 62, 65, 24);
    BTCP_TY_BT31->setBounds (504, 62, 65, 24);
    BTCP_TY_BT32->setBounds (568, 62, 65, 24);
    BTCP_BEH_BT25->setBounds (121, 166, 65, 25);
    BTCP_BEH_BT26->setBounds (185, 166, 65, 25);
    BTCP_BEH_BT27->setBounds (249, 166, 65, 25);
    BTCP_BEH_BT28->setBounds (313, 166, 65, 25);
    BTCP_BEH_BT29->setBounds (377, 166, 65, 25);
    BTCP_BEH_BT30->setBounds (441, 166, 65, 25);
    BTCP_BEH_BT31->setBounds (505, 166, 65, 25);
    BTCP_BEH_BT32->setBounds (569, 166, 65, 25);
    BTCO_CH_BT33->setBounds (121, 283, 65, 25);
    BTCP_TY_BT33->setBounds (121, 311, 65, 24);
    BTCP_BEH_BT33->setBounds (121, 415, 65, 25);
    BTCP_NO_BT1->setBounds (121, 88, 65, 24);
    BTCP_NO_BT2->setBounds (184, 88, 65, 24);
    BTCP_NO_BT3->setBounds (248, 88, 65, 24);
    BTCP_NO_BT4->setBounds (312, 88, 65, 24);
    BTCP_NO_BT5->setBounds (376, 88, 65, 24);
    BTCP_NO_BT6->setBounds (440, 88, 65, 24);
    BTCP_NO_BT7->setBounds (504, 88, 65, 24);
    BTCP_NO_BT8->setBounds (568, 88, 65, 24);
    BTCP_NO_BT9->setBounds (121, 337, 65, 24);
    LSB1->setBounds (24, 193, 85, 26);
    MSB1->setBounds (24, 220, 85, 26);
    LNMSB1->setBounds (24, 219, 613, 1);
    LNLSB1->setBounds (24, 192, 613, 1);
    LSB2->setBounds (24, 442, 85, 26);
    MSB2->setBounds (24, 470, 85, 26);
    LNMSB2->setBounds (24, 469, 160, 1);
    LNLSB2->setBounds (24, 441, 160, 1);
    label13->setBounds (119, 258, 2, 233);
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
    pfader9 -> setBounds(121,283,65,25);
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

    pCustomImageButton17 ->setBounds(121,363,64,25);
    pCustomImageButton18 ->setBounds(121,389,64,25);

    for (int i = 0; i < 8; i++)
    {
        MSB[i]->setBounds(121 + 64 * i, 193, 64, 25);
        LSB[i]->setBounds(121 + 64 * i, 220, 64, 25);

    }

    MSB[8]->setBounds(121 , 442, 64, 25);
    LSB[8]->setBounds(121 , 470, 64, 25);
    //[/UserResized]
}

void ButtonsCompact25To33Component::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    pMainComponent->setMyComponent(6);
    Push_or_Turn =0;
	GetCustomBtID();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == BTCO_CH_BT25)
    {
        //[UserButtonCode_BTCO_CH_BT25] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT25]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT26)
    {
        //[UserButtonCode_BTCO_CH_BT26] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT26]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT27)
    {
        //[UserButtonCode_BTCO_CH_BT27] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT27]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT28)
    {
        //[UserButtonCode_BTCO_CH_BT28] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT28]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT29)
    {
        //[UserButtonCode_BTCO_CH_BT29] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT29]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT30)
    {
        //[UserButtonCode_BTCO_CH_BT30] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT30]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT31)
    {
        //[UserButtonCode_BTCO_CH_BT31] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT31]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT32)
    {
        //[UserButtonCode_BTCO_CH_BT32] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT32]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT25)
    {
        //[UserButtonCode_BTCP_TY_BT25] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 0;
        SetNO_BT(BTCP_TY_BT25);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT25->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT25]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT26)
    {
        //[UserButtonCode_BTCP_TY_BT26] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 1;
        SetNO_BT(BTCP_TY_BT26);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT26->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT26]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT27)
    {
        //[UserButtonCode_BTCP_TY_BT27] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 2;
        SetNO_BT(BTCP_TY_BT27);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT27->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT27]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT28)
    {
        //[UserButtonCode_BTCP_TY_BT28] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 3;
        SetNO_BT(BTCP_TY_BT28);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT28->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT28]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT29)
    {
        //[UserButtonCode_BTCP_TY_BT29] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 4;
        SetNO_BT(BTCP_TY_BT29);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT29->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT29]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT30)
    {
        //[UserButtonCode_BTCP_TY_BT30] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 5;
        SetNO_BT(BTCP_TY_BT30);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT30->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT30]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT31)
    {
        //[UserButtonCode_BTCP_TY_BT31] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 6;
        SetNO_BT(BTCP_TY_BT31);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT31->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT31]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT32)
    {
        //[UserButtonCode_BTCP_TY_BT32] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 7;
        SetNO_BT(BTCP_TY_BT32);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT32->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT32]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT25)
    {
        //[UserButtonCode_BTCP_BEH_BT25] -- add your button handler code here..
		if (!(BC4Bt[0].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[0].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[0].BT2->getButtonText().compare("CC")==0 && (BC4Bt[0].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[0].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 0;
			SetNO_BT(BTCP_BEH_BT25);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT25->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT25]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT26)
    {
        //[UserButtonCode_BTCP_BEH_BT26] -- add your button handler code here..
		if (!(BC4Bt[1].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[1].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[1].BT2->getButtonText().compare("CC")==0 && (BC4Bt[1].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[1].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 1;
			SetNO_BT(BTCP_BEH_BT26);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT26->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT26]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT27)
    {
        //[UserButtonCode_BTCP_BEH_BT27] -- add your button handler code here..
		if (!(BC4Bt[2].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[2].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[2].BT2->getButtonText().compare("CC")==0 && (BC4Bt[2].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[2].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 2;
			SetNO_BT(BTCP_BEH_BT27);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT27->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT27]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT28)
    {
        //[UserButtonCode_BTCP_BEH_BT28] -- add your button handler code here..
		if (!(BC4Bt[3].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[3].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[3].BT2->getButtonText().compare("CC")==0 && (BC4Bt[3].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[3].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 3;
			SetNO_BT(BTCP_BEH_BT28);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT28->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT28]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT29)
    {
        //[UserButtonCode_BTCP_BEH_BT29] -- add your button handler code here..
		if (!(BC4Bt[4].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[4].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[4].BT2->getButtonText().compare("CC")==0 && (BC4Bt[4].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[4].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 4;
			SetNO_BT(BTCP_BEH_BT29);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT29->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT29]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT30)
    {
        //[UserButtonCode_BTCP_BEH_BT30] -- add your button handler code here..
		if (!(BC4Bt[5].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[5].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[5].BT2->getButtonText().compare("CC")==0 && (BC4Bt[5].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[5].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 5;
			SetNO_BT(BTCP_BEH_BT30);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT30->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT30]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT31)
    {
        //[UserButtonCode_BTCP_BEH_BT31] -- add your button handler code here..
		if (!(BC4Bt[6].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[6].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[6].BT2->getButtonText().compare("CC")==0 && (BC4Bt[6].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[6].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 6;
			SetNO_BT(BTCP_BEH_BT31);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT31->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT31]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT32)
    {
        //[UserButtonCode_BTCP_BEH_BT32] -- add your button handler code here..
		if (!(BC4Bt[7].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[7].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[7].BT2->getButtonText().compare("CC")==0 && (BC4Bt[7].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[7].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 7;
			SetNO_BT(BTCP_BEH_BT32);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT32->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT32]
    }
    else if (buttonThatWasClicked == BTCO_CH_BT33)
    {
        //[UserButtonCode_BTCO_CH_BT33] -- add your button handler code here..
        //[/UserButtonCode_BTCO_CH_BT33]
    }
    else if (buttonThatWasClicked == BTCP_TY_BT33)
    {
        //[UserButtonCode_BTCP_TY_BT33] -- add your button handler code here..
		Push_or_Turn =0;
        MidiLayerNum =BC25_STATR_NO + 1 + BC_COM * 8;
        SetNO_BT(BTCP_TY_BT33);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, BTCP_TY_BT33->getScreenBounds(), nullptr);
        //[/UserButtonCode_BTCP_TY_BT33]
    }
    else if (buttonThatWasClicked == BTCP_BEH_BT33)
    {
        //[UserButtonCode_BTCP_BEH_BT33] -- add your button handler code here..
		if (!(BC4Bt[8].BT2->getButtonText().compare("MMC") == 0) && !(BC4Bt[8].BT2->getButtonText().compare("Program") == 0) 
			&& !(BC4Bt[8].BT2->getButtonText().compare("CC")==0 && (BC4Bt[8].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[8].BT4->getButtonText().compare("Dec/-1")==0))){

			MidiLayerNum =BC25_STATR_NO + 5 + BC_COM * 8;
			SetNO_BT(BTCP_BEH_BT33);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, BTCP_BEH_BT33->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_BTCP_BEH_BT33]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT1)
    {
        //[UserButtonCode_BTCP_NO_BT1] -- add your button handler code here..
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 0;
        if (BTCP_TY_BT25->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT25->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT1);
            num = ConventNO_BTtoInt(BTCP_NO_BT1->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT25->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT1);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT1->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT25->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 1;
        if (BTCP_TY_BT26->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT26->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT2);
            num = ConventNO_BTtoInt(BTCP_NO_BT2->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT26->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT2);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT2->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT26->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 2;
        if (BTCP_TY_BT27->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT27->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT3);
            num = ConventNO_BTtoInt(BTCP_NO_BT3->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT27->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT3);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT3->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT27->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 3;
        if (BTCP_TY_BT28->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT28->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT4);
            num = ConventNO_BTtoInt(BTCP_NO_BT4->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT28->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT4);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT4->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT28->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 4;
        if (BTCP_TY_BT29->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT29->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT5);
            num = ConventNO_BTtoInt(BTCP_NO_BT5->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT29->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT5);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT5->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT29->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 5;
        if (BTCP_TY_BT30->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT30->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT6);
            num = ConventNO_BTtoInt(BTCP_NO_BT6->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT30->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT6);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT6->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT30->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 6;
        if (BTCP_TY_BT31->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT31->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT7);
            num = ConventNO_BTtoInt(BTCP_NO_BT7->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT31->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT7);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT7->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT31->getButtonText().compare("MMC") == 0)
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
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 7;
        if (BTCP_TY_BT32->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT32->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT8);
            num = ConventNO_BTtoInt(BTCP_NO_BT8->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT32->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT8);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT32->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT8);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT8->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT8]
    }
    else if (buttonThatWasClicked == BTCP_NO_BT9)
    {
        //[UserButtonCode_BTCP_NO_BT9] -- add your button handler code here..
        MidiLayerNum =BC25_STATR_NO + 2 + BC_COM * 8;
        if (BTCP_TY_BT33->getButtonText().compare("CC") == 0 /*|| BTCP_TY_BT33->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(BTCP_NO_BT9);
            num = ConventNO_BTtoInt(BTCP_NO_BT9->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, BTCP_NO_BT9->getScreenBounds(), nullptr);
        }
        else if(BTCP_TY_BT33->getButtonText().compare("Note")==0)
        {
            SetNO_BT(BTCP_NO_BT9);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, BTCP_NO_BT9->getScreenBounds(), nullptr);
        }
        else if (BTCP_TY_BT33->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(BTCP_NO_BT9);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, BTCP_NO_BT9->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_BTCP_NO_BT9]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void ButtonsCompact25To33Component::CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged)
{
    Load_or_SaveFlag =1;
	pMainComponent-> ChangeEditedButtonImClose();
    
	for(int i =0;i<9;i++)
	{
		if(CustomTextButtonThatHasChanged == BC4Bt[i].BT1)
		{
			if(!(BC4Bt[i].BT1->GetValue().toString().compare("Off")==0) && !(BC4Bt[i].BT1->GetValue().toString().compare("Global")==0))
			{
				if(BC4Bt[i].BT1->GetValue().toString().getLastCharacters(1).compare("*")==0)
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() != BC4Bt[i].BT1->GetValue().toString().dropLastCharacters(1).getIntValue())					
						BC4Bt[i].BT1->setButtonText(BC4Bt[i].BT1->GetValue().toString().dropLastCharacters(1));
					
				}
				else
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() == BC4Bt[i].BT1->GetValue().toString().getIntValue())		
						BC4Bt[i].BT1->setButtonText(BC4Bt[i].BT1->GetValue().toString()+"*");
				}
			}
		}
	}

}

void ButtonsCompact25To33Component::CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(6);
    pMainComponent->GlobalorOFF = 1;
	GetCustomBtID();
     if(buttonThatWasClicked == pfader1)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 0;
        SetCurrentCustomBT2(pfader1);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader1);
    }
    else if(buttonThatWasClicked == pfader2)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 1;
        SetCurrentCustomBT2(pfader2);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader2);
    }
    else if(buttonThatWasClicked == pfader3)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 2;
        SetCurrentCustomBT2(pfader3);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader3);
    }
    else if(buttonThatWasClicked == pfader4)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 3;
        SetCurrentCustomBT2(pfader4);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader4);
    }
    else if(buttonThatWasClicked == pfader5)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 4;
        SetCurrentCustomBT2(pfader5);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader5);
    }
    else if(buttonThatWasClicked == pfader6)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 5;
        SetCurrentCustomBT2(pfader6);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader6);
    }
    else if(buttonThatWasClicked == pfader7)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 6;
        SetCurrentCustomBT2(pfader7);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader7);
    }
    else if(buttonThatWasClicked == pfader8)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 7;
        SetCurrentCustomBT2(pfader8);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader8);
    }
    else if(buttonThatWasClicked == pfader9)
    {
        MidiLayerNum =BC25_STATR_NO + 0 + BC_COM * 8;
        SetCurrentCustomBT2(pfader9);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader9);
    }
}

void ButtonsCompact25To33Component:: SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT2 = currentbuttonThatWasClicked;
 }

 CustomTextButton* ButtonsCompact25To33Component:: GetCurrentCustomBT2()
 {
     return CurrentCustomBT2;
 }

void ButtonsCompact25To33Component::CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(6);
    pMainComponent->FaderorOtherFlag =1;
	GetCustomBtID();
    for (int i = 0; i < 9; i++)
    {
        if (BC4Bt[i].BT4 == buttonThatWasClicked || BC4Bt[i].BT5 == buttonThatWasClicked)
        {
            if (!(BC4Bt[i].BT2->getButtonText().compare("MMC") == 0) /*&& !(BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0)*/)
            {
				if(!((BC4Bt[i].BT2->getButtonText().compare("Program") == 0) && BC4Bt[i].BT5 == buttonThatWasClicked ))
				{
					if(!(BC4Bt[i].BT5 == buttonThatWasClicked && (BC4Bt[i].BT4->getButtonText().compare("Inc/+1")==0 || BC4Bt[i].BT4->getButtonText().compare("Dec/-1")==0))){
						if (buttonThatWasClicked == pCustomImageButton1)
						{
							if(BC4Bt[i].BT2->getButtonText().compare("Note")==0 || BC4Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 0;
							SetCurrentCustomBT(pCustomImageButton1);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton1);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton2)
						{
							if(BC4Bt[i].BT2->getButtonText().compare("Note")==0 || BC4Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 1;
							SetCurrentCustomBT(pCustomImageButton2);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton2);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton3)
						{
							if(BC4Bt[i].BT2->getButtonText().compare("Note")==0 || BC4Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 2;
							SetCurrentCustomBT(pCustomImageButton3);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton3);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton4)
						{
							if(BC4Bt[i].BT2->getButtonText().compare("Note")==0 || BC4Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 3;
							SetCurrentCustomBT(pCustomImageButton4);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton4);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton5)
						{
							if(BC4Bt[i].BT2->getButtonText().compare("Note")==0 || BC4Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 4;
							SetCurrentCustomBT(pCustomImageButton5);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton5);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton6)
						{
							if(BC4Bt[i].BT2->getButtonText().compare("Note")==0 || BC4Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 5;
							SetCurrentCustomBT(pCustomImageButton6);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton6);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton7)
						{
							if(BC4Bt[i].BT2->getButtonText().compare("Note")==0 || BC4Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 6;
							SetCurrentCustomBT(pCustomImageButton7);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton7);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton8)
						{
							if(BC4Bt[i].BT2->getButtonText().compare("Note")==0 || BC4Bt[i].BT2->getButtonText().compare("Pitch")==0)
								pMainComponent->FaderorOtherFlag =0;
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 7;
							SetCurrentCustomBT(pCustomImageButton8);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton8);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton9)
						{

							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 0;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton9);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton9);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton10)
						{
							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 1;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton10);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton10);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton11)
						{
							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 2;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton11);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton11);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton12)
						{
							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 3;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton12);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton12);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton13)
						{
							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 4;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton13);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton13);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton14)
						{
							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 5;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton14);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton14);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton15)
						{
							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 6;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton15);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton15);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton16)
						{
							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 7;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton16);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton16);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton17)
						{
							MidiLayerNum =BC25_STATR_NO + 3 + BC_COM * 8;
							//pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton17);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton17);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton18)
						{
							MidiLayerNum =BC25_STATR_NO + 4 + BC_COM * 8;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton18);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton18);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
					}
				}
			}
		}
	}

    for (int i = 0; i < 9; i++)
    {
        if (buttonThatWasClicked == MSB[i])
        {
            if (BC4Bt[i].BT7 == MSB[i])
            {
                if (BC4Bt[i].BT2->getButtonText().compare("Program") == 0 /*|| BM1Bt[i].BT2->getButtonText().compare("Pitch") == 0*/)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 517 + 8 * i;
                    SetCurrentCustomBT(MSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, MSB[i]);
                }
            }
        }
        else if (buttonThatWasClicked == LSB[i])
        {
            if (BC4Bt[i].BT8 == LSB[i])
            {
                if (BC4Bt[i].BT2->getButtonText().compare("Program") == 0)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 518 + 8 * i;
                    SetCurrentCustomBT(LSB[i]);
                    pViewPortComponent = new ViewPortComponent();

                    MyCallOutBox(pViewPortComponent, LSB[i]);
                }
            }
        }
    }
}

void ButtonsCompact25To33Component::CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged)
{

}

void ButtonsCompact25To33Component::MyCallOutBox(Component *p,Button* buttonThatWasClicked)
{
    /*CallOutBox & mycall = */CallOutBox::launchAsynchronously(p, buttonThatWasClicked->getScreenBounds(), nullptr);
    //windows.add(&mycall);
    //CurrentCustomBT->setState(Button::buttonOver);
    //return mycall;
}

 void ButtonsCompact25To33Component:: SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT = currentbuttonThatWasClicked;
 }


 CustomImageButton* ButtonsCompact25To33Component:: GetCurrentCustomBT()
 {
     return CurrentCustomBT;
 }

 void ButtonsCompact25To33Component::setCustomBTtoggle(bool s)
 {
     CurrentCustomBT->setState(Button::buttonOver);
     //CurrentCustomBT->setToggleState(s,dontSendNotification);
 }

  void ButtonsCompact25To33Component::SetNO_BT(Button* buttonThatWasClicked)
 {
     NO_BT = buttonThatWasClicked;
 }
 Button* ButtonsCompact25To33Component::GetNO_BT()
 {
    return NO_BT;
 }

  int ButtonsCompact25To33Component::ConventNO_BTtoInt(String JK)
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

 int ButtonsCompact25To33Component::GetNum()
 {
    return num;
 }

 void ButtonsCompact25To33Component::GetCustomBtID()
 {
	for(int i=0;i<9;i++)
	 {
		if (!(BC4Bt[i].BT1->getButtonText().compare("Global") == 0) && !(BC4Bt[i].BT1->getButtonText().compare("Off") == 0))
            ConstMidiLayerMessage[ BC25_STATR_NO + 0 + i * 8] = (unsigned char)(BC4Bt[i].BT1->getButtonText().getIntValue() - 1) * 0x01;

        if (BC4Bt[i].BT4->getButtonText().compare("Dec/-1") == 0)
            ConstMidiLayerMessage[ BC25_STATR_NO + 3 + i * 8] = 0x80;
        else if (BC4Bt[i].BT4->getButtonText().compare("Inc/+1") == 0)
            ConstMidiLayerMessage[ BC25_STATR_NO + 3 + i * 8] = 0x81;
        else if (!(BC4Bt[i].BT4->getButtonText().compare("-") == 0))
            ConstMidiLayerMessage[ BC25_STATR_NO + 3 + i * 8] = (unsigned char)(BC4Bt[i].BT4->getButtonText().getIntValue()) * 0x01;

        if (!(BC4Bt[i].BT5->getButtonText().compare("-") == 0))
            ConstMidiLayerMessage[ BC25_STATR_NO + 4 + i * 8] = (unsigned char)(BC4Bt[i].BT5->getButtonText().getIntValue()) * 0x01;

        if (ConstMidiLayerMessage[ BC25_STATR_NO + 1 + i * 8] == 0x03 || ConstMidiLayerMessage[BC25_STATR_NO + 1 + i * 8] == 0x02)
        { 
            ConstMidiLayerMessage[ BC25_STATR_NO + 6 + i * 8] = (unsigned char)(BC4Bt[i].BT7->getButtonText().getIntValue()) * 0x01;
            ConstMidiLayerMessage[ BC25_STATR_NO + 7 + i * 8] = (unsigned char)(BC4Bt[i].BT8->getButtonText().getIntValue()) * 0x01;
        }
	 }
 }

 void ButtonsCompact25To33Component::SetAllButtonState(bool s)
 {
	for(int i = 0;i<9;i++)
	{
		BC4Bt[i].BT1 ->setEnabled(s);
		BC4Bt[i].BT2 ->setEnabled(s);
		BC4Bt[i].BT3 ->setEnabled(s);
		BC4Bt[i].BT4 ->setEnabled(s);
		BC4Bt[i].BT5 ->setEnabled(s);
		BC4Bt[i].BT6 ->setEnabled(s);
		BC4Bt[i].BT7 ->setEnabled(s);
		BC4Bt[i].BT8 ->setEnabled(s);
	}
 }

 void ButtonsCompact25To33Component::MakeButtonPointToBtGroup()
{
    BC4Bt[0].BT1 = pfader1;
    BC4Bt[0].BT2 = BTCP_TY_BT25;
    BC4Bt[0].BT3 = BTCP_NO_BT1;
    BC4Bt[0].BT4 = pCustomImageButton1;
    BC4Bt[0].BT5 = pCustomImageButton9;
    BC4Bt[0].BT6 = BTCP_BEH_BT25;
	BC4Bt[0].BT7 = MSB[0];
	BC4Bt[0].BT8 = LSB[0];

    BC4Bt[1].BT1 = pfader2;
    BC4Bt[1].BT2 = BTCP_TY_BT26;
    BC4Bt[1].BT3 = BTCP_NO_BT2;
    BC4Bt[1].BT4 = pCustomImageButton2;
    BC4Bt[1].BT5 = pCustomImageButton10;
    BC4Bt[1].BT6 = BTCP_BEH_BT26;
	BC4Bt[1].BT7 = MSB[1];
	BC4Bt[1].BT8 = LSB[1];

    BC4Bt[2].BT1 = pfader3;
    BC4Bt[2].BT2 = BTCP_TY_BT27;
    BC4Bt[2].BT3 = BTCP_NO_BT3;
    BC4Bt[2].BT4 = pCustomImageButton3;
    BC4Bt[2].BT5 = pCustomImageButton11;
    BC4Bt[2].BT6 = BTCP_BEH_BT27;
	BC4Bt[2].BT7 = MSB[2];
	BC4Bt[2].BT8 = LSB[2];

    BC4Bt[3].BT1 = pfader4;
    BC4Bt[3].BT2 = BTCP_TY_BT28;
    BC4Bt[3].BT3 = BTCP_NO_BT4;
    BC4Bt[3].BT4 = pCustomImageButton4;
    BC4Bt[3].BT5 = pCustomImageButton12;
    BC4Bt[3].BT6 = BTCP_BEH_BT28;
	BC4Bt[3].BT7 = MSB[3];
	BC4Bt[3].BT8 = LSB[3];

    BC4Bt[4].BT1 = pfader5;
    BC4Bt[4].BT2 = BTCP_TY_BT29;
    BC4Bt[4].BT3 = BTCP_NO_BT5;
    BC4Bt[4].BT4 = pCustomImageButton5;
    BC4Bt[4].BT5 = pCustomImageButton13;
    BC4Bt[4].BT6 = BTCP_BEH_BT29;
	BC4Bt[4].BT7 = MSB[4];
	BC4Bt[4].BT8 = LSB[4];

    BC4Bt[5].BT1 = pfader6;
    BC4Bt[5].BT2 = BTCP_TY_BT30;
    BC4Bt[5].BT3 = BTCP_NO_BT6;
    BC4Bt[5].BT4 = pCustomImageButton6;
    BC4Bt[5].BT5 = pCustomImageButton14;
    BC4Bt[5].BT6 = BTCP_BEH_BT30;
	BC4Bt[5].BT7 = MSB[5];
	BC4Bt[5].BT8 = LSB[5];

    BC4Bt[6].BT1 = pfader7;
    BC4Bt[6].BT2 = BTCP_TY_BT31;
    BC4Bt[6].BT3 = BTCP_NO_BT7;
    BC4Bt[6].BT4 = pCustomImageButton7;
    BC4Bt[6].BT5 = pCustomImageButton15;
    BC4Bt[6].BT6 = BTCP_BEH_BT31;
	BC4Bt[6].BT7 = MSB[6];
	BC4Bt[6].BT8 = LSB[6];

    BC4Bt[7].BT1 = pfader8;
    BC4Bt[7].BT2 = BTCP_TY_BT32;
    BC4Bt[7].BT3 = BTCP_NO_BT8;
    BC4Bt[7].BT4 = pCustomImageButton8;
    BC4Bt[7].BT5 = pCustomImageButton16;
    BC4Bt[7].BT6 = BTCP_BEH_BT32;
	BC4Bt[7].BT7 = MSB[7];
	BC4Bt[7].BT8 = LSB[7];

    BC4Bt[8].BT1 = pfader9;
    BC4Bt[8].BT2 = BTCP_TY_BT33;
    BC4Bt[8].BT3 = BTCP_NO_BT9;
    BC4Bt[8].BT4 = pCustomImageButton17;
    BC4Bt[8].BT5 = pCustomImageButton18;
    BC4Bt[8].BT6 = BTCP_BEH_BT33;
	BC4Bt[8].BT7 = MSB[8];
	BC4Bt[8].BT8 = LSB[8];
}

void ButtonsCompact25To33Component::UpdateBt25TO33(int s)
{
    for(int i=0;i<9;i++)
     {
         if (ConstMidiLayerMessage[s + 8 * i] == 17*0x01)       BC4Bt[i].BT1->setButtonText("Global");
         else if (ConstMidiLayerMessage[s + 8 * i] == 18 * 0x01){  
			if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == ConstMidiLayerMessage[s + 8 * i] )
				BC4Bt[i].BT1->setButtonText("Off*");
			else			
				BC4Bt[i].BT1->setButtonText("Off");
		 }
		 else{
			if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == ConstMidiLayerMessage[s + 8 * i] )
				BC4Bt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i]+0x01)+"*");
			else
				BC4Bt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i]+0x01));
		 }

         if (ConstMidiLayerMessage[s + 8 * i + 1] == 0) { BC4Bt[i].BT2->setButtonText("CC");           BC4Bt[i].BT3->setButtonText("CC" + String(ConstMidiLayerMessage[s + 8 * i + 2])); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x01) { BC4Bt[i].BT2->setButtonText("Note");        BC4Bt[i].BT3->setButtonText(Midimusic[ConstMidiLayerMessage[s + 8 * i + 2]]); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x02) { BC4Bt[i].BT2->setButtonText("Pitch");        BC4Bt[i].BT3->setButtonText( /*String(CCBT[ MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x03) { BC4Bt[i].BT2->setButtonText("Program");   BC4Bt[i].BT3->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x04) { BC4Bt[i].BT2->setButtonText("MMC");       BC4Bt[i].BT3->setButtonText(String(MMC_Functions_e[ConstMidiLayerMessage[s + 8 * i + 2]])); }

         if (/*MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x02 &&*/ ConstMidiLayerMessage[s + 8 * i + 1] != 0x04)
         {
             if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80)
			 {
				 if(ConstMidiLayerMessage[s + 8 * i + 1 ] != 0x01 && ConstMidiLayerMessage[s + 8 * i + 1] != 0x02)
					BC4Bt[i].BT4->setButtonText("Dec/-1");  
				 else{
					 BC4Bt[i].BT4->setButtonText("0");  ConstMidiLayerMessage[s + 8 * i + 3 ]= 0;}				 
			 }
             else if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x81)
			 {
				 if(ConstMidiLayerMessage[s + 8 * i + 1 ] != 0x01 && ConstMidiLayerMessage[s + 8 * i + 1] != 0x02)
					BC4Bt[i].BT4->setButtonText("Inc/+1");  
				 else{
					 BC4Bt[i].BT4->setButtonText("0");  ConstMidiLayerMessage[s + 8 * i + 3 ]= 0;}
			 }
             else                                                                                    BC4Bt[i].BT4->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 3]));
             
             if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x81 || ConstMidiLayerMessage[s + 8 * i + 1] == 0x03)
                 BC4Bt[i].BT5->setButtonText("-");
             else{
                 if (ConstMidiLayerMessage[s + 8 * i + 4] == 0x80)             BC4Bt[i].BT5->setButtonText("Dec/-1");
                 else if (ConstMidiLayerMessage[s + 8 * i + 4] == 0x81)             BC4Bt[i].BT5->setButtonText("Inc/+1");
                 else                                                                                    BC4Bt[i].BT5->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 4]));
             }

			 if(ConstMidiLayerMessage[s + 8 * i + 1] == 0x03)
			 {
				 BC4Bt[i].BT6->setButtonText("Momentary");
				 ConstMidiLayerMessage[s + 8 * i + 5] = 0;
			 }
			 else if(ConstMidiLayerMessage[s + 8 * i + 1] == 0x00 && (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x81))
			 {
				 BC4Bt[ i].BT6->setButtonText("Momentary");
				 ConstMidiLayerMessage[s + 8 * i + 5] = 0;
			 }
			 else
			 {
				if (ConstMidiLayerMessage[s + 8 * i + 5] == 0x00) BC4Bt[i].BT6->setButtonText("Momentary");
				else BC4Bt[i].BT6->setButtonText("Toggle");
			 }
         }
         else{
             BC4Bt[i].BT4->setButtonText("-");
             BC4Bt[i].BT5->setButtonText("-");
             BC4Bt[i].BT6->setButtonText("-");
         }

         if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x03 /*|| MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x02*/) {
             BC4Bt[i].BT7->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 6]));
             BC4Bt[i].BT8->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 7]));
         }
         else{
             BC4Bt[i].BT7->setButtonText("-");
             BC4Bt[i].BT8->setButtonText("-");
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

<JUCER_COMPONENT documentType="Component" className="ButtonsCompact25To33Component"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="664" initialHeight="535">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="23 32 609 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="23 281 160 2" fill="solid: ffffab00" hasStroke="1" stroke="5, mitered, butt"
          strokeColour="solid: 578c9e"/>
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
    <RECT pos="432 455 153 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="432 469 153 1" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="432 455 1 14" fill="solid: ffffffff" hasStroke="0"/>
    <RECT pos="584 455 1 14" fill="solid: ffffffff" hasStroke="0"/>
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
         edTextCol="ff000000" edBkgCol="0" labelText="BT 25" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="158fab2e75ce057e" memberName="label_FD2"
         virtualName="" explicitFocusOrder="0" pos="200 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 26" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="59784a12467c2edd" memberName="label_FD3"
         virtualName="" explicitFocusOrder="0" pos="264 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 27" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8c4b98f9bfb3cc4e" memberName="label_FD4"
         virtualName="" explicitFocusOrder="0" pos="328 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 28" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d29c323ead8312a0" memberName="label_FD5"
         virtualName="" explicitFocusOrder="0" pos="392 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 29" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5012a250ae45e10c" memberName="label_FD6"
         virtualName="" explicitFocusOrder="0" pos="456 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 30" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="262b90710eed34aa" memberName="label_FD7"
         virtualName="" explicitFocusOrder="0" pos="520 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 31" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="da92fbab385df26" memberName="label_FD8"
         virtualName="" explicitFocusOrder="0" pos="584 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 32" editableSingleClick="0"
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
  <LABEL name="new label" id="3e8f40e5b3442b65" memberName="label_MOVE2"
         virtualName="" explicitFocusOrder="0" pos="24 254 64 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="PUSH" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8e50c10913eeadac" memberName="label_CHANNEL2"
         virtualName="" explicitFocusOrder="0" pos="24 284 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="CHANNEL" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="80b89b7ecdc2acbc" memberName="label_TYPE2"
         virtualName="" explicitFocusOrder="0" pos="24 310 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TYPE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="353b0c17edc219b0" memberName="label_NO2"
         virtualName="" explicitFocusOrder="0" pos="24 336 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="NO." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d4c0536c8c74a8b0" memberName="label_MIN2"
         virtualName="" explicitFocusOrder="0" pos="24 362 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MIN VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9c8bc8201584ec97" memberName="label_MAX2"
         virtualName="" explicitFocusOrder="0" pos="24 388 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MAX VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e96ac3ec315169d0" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="24 310 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4b523cd0f815cca3" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="25 336 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c47a951bd5bd3c80" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="24 362 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4fc411214113750f" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="24 388 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b3c07fdf866eaf0d" memberName="label_MAX4"
         virtualName="" explicitFocusOrder="0" pos="24 414 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BEHAVIOR" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="81db8bdd57e4c63f" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="24 414 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7ac508a49f07ae60" memberName="label_FD9"
         virtualName="" explicitFocusOrder="0" pos="136 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="BT 33" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="15" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="374ef557916487ef" memberName="BTCO_CH_BT25"
              virtualName="" explicitFocusOrder="0" pos="121 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e67a1382dbf1ca89" memberName="BTCO_CH_BT26"
              virtualName="" explicitFocusOrder="0" pos="185 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="2"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="78c21f4c44037f1e" memberName="BTCO_CH_BT27"
              virtualName="" explicitFocusOrder="0" pos="249 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="3"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="48f6e40454ed60d8" memberName="BTCO_CH_BT28"
              virtualName="" explicitFocusOrder="0" pos="313 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="4"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="1fb3d08fa1e19c0b" memberName="BTCO_CH_BT29"
              virtualName="" explicitFocusOrder="0" pos="377 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="5"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="13bcd992f45f3c8f" memberName="BTCO_CH_BT30"
              virtualName="" explicitFocusOrder="0" pos="441 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="6"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a29b6f1376e81c8e" memberName="BTCO_CH_BT31"
              virtualName="" explicitFocusOrder="0" pos="505 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="7"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="662a860a7266c9f" memberName="BTCO_CH_BT32"
              virtualName="" explicitFocusOrder="0" pos="569 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="8"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5a38375d9474f4" memberName="BTCP_TY_BT25"
              virtualName="" explicitFocusOrder="0" pos="121 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cb10ebcdc15fa6f1" memberName="BTCP_TY_BT26"
              virtualName="" explicitFocusOrder="0" pos="184 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d0ca472bf46e2cba" memberName="BTCP_TY_BT27"
              virtualName="" explicitFocusOrder="0" pos="248 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b7bfc7315d20e3b2" memberName="BTCP_TY_BT28"
              virtualName="" explicitFocusOrder="0" pos="312 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pitch"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="46d7276338ce5b69" memberName="BTCP_TY_BT29"
              virtualName="" explicitFocusOrder="0" pos="376 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="27e6e2a3d57a18e9" memberName="BTCP_TY_BT30"
              virtualName="" explicitFocusOrder="0" pos="440 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d011e0f807abab2b" memberName="BTCP_TY_BT31"
              virtualName="" explicitFocusOrder="0" pos="504 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="ed09bd903e3e12cc" memberName="BTCP_TY_BT32"
              virtualName="" explicitFocusOrder="0" pos="568 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6d140b501739d7d6" memberName="BTCP_BEH_BT25"
              virtualName="" explicitFocusOrder="0" pos="121 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5b22bcd19c7d90" memberName="BTCP_BEH_BT26"
              virtualName="" explicitFocusOrder="0" pos="185 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e583376883a3e049" memberName="BTCP_BEH_BT27"
              virtualName="" explicitFocusOrder="0" pos="249 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b2bd04b50e39565b" memberName="BTCP_BEH_BT28"
              virtualName="" explicitFocusOrder="0" pos="313 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="f76650deded802f3" memberName="BTCP_BEH_BT29"
              virtualName="" explicitFocusOrder="0" pos="377 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8f6db232510d39ac" memberName="BTCP_BEH_BT30"
              virtualName="" explicitFocusOrder="0" pos="441 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a92097d33cc251fc" memberName="BTCP_BEH_BT31"
              virtualName="" explicitFocusOrder="0" pos="505 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cbca9aba128bbdf0" memberName="BTCP_BEH_BT32"
              virtualName="" explicitFocusOrder="0" pos="569 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="97743373851b76ea" memberName="BTCO_CH_BT33"
              virtualName="" explicitFocusOrder="0" pos="121 283 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="33"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="9848a347f129264e" memberName="BTCP_TY_BT33"
              virtualName="" explicitFocusOrder="0" pos="121 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="57f9d842057ec621" memberName="BTCP_BEH_BT33"
              virtualName="" explicitFocusOrder="0" pos="121 415 65 25" bgColOff="ff000000"
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
  <TEXTBUTTON name="new button" id="a49db9c1e8920354" memberName="BTCP_NO_BT9"
              virtualName="" explicitFocusOrder="0" pos="121 337 65 24" bgColOff="ff000000"
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
  <LABEL name="new label" id="e536671b2f934731" memberName="LSB2" virtualName=""
         explicitFocusOrder="0" pos="24 442 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="70084909de4447d4" memberName="MSB2" virtualName=""
         explicitFocusOrder="0" pos="24 470 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8899b1c8e101f420" memberName="LNMSB2" virtualName=""
         explicitFocusOrder="0" pos="24 469 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b5d1018b83de06df" memberName="LNLSB2" virtualName=""
         explicitFocusOrder="0" pos="24 441 160 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="aada429f22255d12" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="119 258 2 233" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
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
