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
#include "MusicNoteViewComponent.h"
#include "MMCFuntionsViewComponent.h"
#include "BackgroundThread.h"
//[/Headers]

#include "EncodersCompact9To16Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
extern SixthChannelComponent *pSixthChannelComponent;
extern ViewChannelComponent *pViewChannelComponent;
extern PanFanComponent *pPanFanComponent ;
extern Twochoose_Component * pTwochoose_Component;
extern FiveMenuComponent * pFiveComp;
extern CC_Viewport_Component *CC_VP ;
extern ViewPortComponent * pViewPortComponent;
extern EncodersCompact9To16Component * pEncodersCompact9To16Component ;
extern DecumoMenuComponent * pDecumoMenuComponent ;
extern MainComponent * pMainComponent;
extern MusicNoteViewComponent *pMusicNoteViewComponent;
extern MMCFuntionsViewComponent *pMMCFuntionsViewComponent;

extern String Midimusic[128];
extern String MMC_Functions_e[9];
extern String CCBT[128];
ButtonGroup EC2Bt[16];
//[/MiscUserDefs]

//==============================================================================
EncodersCompact9To16Component::EncodersCompact9To16Component ()
{
    addAndMakeVisible (label_MOVE = new Label ("new label",
                                               "PUSH"));
    label_MOVE->setFont (Font ("Arial", 16.00f, Font::plain));
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
                                              "EN 9"));
    label_FD1->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD1->setJustificationType (Justification::centredLeft);
    label_FD1->setEditable (false, false, false);
    label_FD1->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD1->setColour (TextEditor::textColourId, Colours::black);
    label_FD1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD2 = new Label ("new label",
                                              "EN 10"));
    label_FD2->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD2->setJustificationType (Justification::centredLeft);
    label_FD2->setEditable (false, false, false);
    label_FD2->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD2->setColour (TextEditor::textColourId, Colours::black);
    label_FD2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD3 = new Label ("new label",
                                              "EN 11"));
    label_FD3->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD3->setJustificationType (Justification::centredLeft);
    label_FD3->setEditable (false, false, false);
    label_FD3->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD3->setColour (TextEditor::textColourId, Colours::black);
    label_FD3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD4 = new Label ("new label",
                                              "EN 12"));
    label_FD4->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD4->setJustificationType (Justification::centredLeft);
    label_FD4->setEditable (false, false, false);
    label_FD4->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD4->setColour (TextEditor::textColourId, Colours::black);
    label_FD4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD5 = new Label ("new label",
                                              "EN 13"));
    label_FD5->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD5->setJustificationType (Justification::centredLeft);
    label_FD5->setEditable (false, false, false);
    label_FD5->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD5->setColour (TextEditor::textColourId, Colours::black);
    label_FD5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD6 = new Label ("new label",
                                              "EN 14"));
    label_FD6->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD6->setJustificationType (Justification::centredLeft);
    label_FD6->setEditable (false, false, false);
    label_FD6->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD6->setColour (TextEditor::textColourId, Colours::black);
    label_FD6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD7 = new Label ("new label",
                                              "EN 15"));
    label_FD7->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD7->setJustificationType (Justification::centredLeft);
    label_FD7->setEditable (false, false, false);
    label_FD7->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD7->setColour (TextEditor::textColourId, Colours::black);
    label_FD7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD8 = new Label ("new label",
                                              "EN 16"));
    label_FD8->setFont (Font ("Arial", 16.00f, Font::plain));
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

    addAndMakeVisible (label_MOVE2 = new Label ("new label",
                                                "TURN"));
    label_MOVE2->setFont (Font ("Arial", 16.00f, Font::plain));
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
                                              "EN 9"));
    label_FD9->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD9->setJustificationType (Justification::centredLeft);
    label_FD9->setEditable (false, false, false);
    label_FD9->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD9->setColour (TextEditor::textColourId, Colours::black);
    label_FD9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD10 = new Label ("new label",
                                               "EN 10"));
    label_FD10->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD10->setJustificationType (Justification::centredLeft);
    label_FD10->setEditable (false, false, false);
    label_FD10->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD10->setColour (TextEditor::textColourId, Colours::black);
    label_FD10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD11 = new Label ("new label",
                                               "EN11"));
    label_FD11->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD11->setJustificationType (Justification::centredLeft);
    label_FD11->setEditable (false, false, false);
    label_FD11->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD11->setColour (TextEditor::textColourId, Colours::black);
    label_FD11->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD12 = new Label ("new label",
                                               "EN 12"));
    label_FD12->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD12->setJustificationType (Justification::centredLeft);
    label_FD12->setEditable (false, false, false);
    label_FD12->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD12->setColour (TextEditor::textColourId, Colours::black);
    label_FD12->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD13 = new Label ("new label",
                                               "EN 13"));
    label_FD13->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD13->setJustificationType (Justification::centredLeft);
    label_FD13->setEditable (false, false, false);
    label_FD13->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD13->setColour (TextEditor::textColourId, Colours::black);
    label_FD13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD14 = new Label ("new label",
                                               "EN 14"));
    label_FD14->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD14->setJustificationType (Justification::centredLeft);
    label_FD14->setEditable (false, false, false);
    label_FD14->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD14->setColour (TextEditor::textColourId, Colours::black);
    label_FD14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD15 = new Label ("new label",
                                               "EN 15"));
    label_FD15->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD15->setJustificationType (Justification::centredLeft);
    label_FD15->setEditable (false, false, false);
    label_FD15->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD15->setColour (TextEditor::textColourId, Colours::black);
    label_FD15->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_FD16 = new Label ("new label",
                                               "EN 16"));
    label_FD16->setFont (Font ("Arial", 16.00f, Font::plain));
    label_FD16->setJustificationType (Justification::centredLeft);
    label_FD16->setEditable (false, false, false);
    label_FD16->setColour (Label::textColourId, Colour (0xffffab00));
    label_FD16->setColour (TextEditor::textColourId, Colours::black);
    label_FD16->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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

    addAndMakeVisible (label_MAX4 = new Label ("new label",
                                               "LED RING"));
    label_MAX4->setFont (Font ("Arial", 14.00f, Font::plain));
    label_MAX4->setJustificationType (Justification::centredLeft);
    label_MAX4->setEditable (false, false, false);
    label_MAX4->setColour (Label::textColourId, Colour (0xffffab00));
    label_MAX4->setColour (TextEditor::textColourId, Colours::black);
    label_MAX4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label13 = new Label ("new label",
                                            String::empty));
    label13->setFont (Font (15.00f, Font::plain));
    label13->setJustificationType (Justification::centredLeft);
    label13->setEditable (false, false, false);
    label13->setColour (Label::backgroundColourId, Colour (0xff444444));
    label13->setColour (TextEditor::textColourId, Colours::black);
    label13->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (ENCO_CH_EN9 = new TextButton ("new button"));
    ENCO_CH_EN9->setButtonText ("1");
    ENCO_CH_EN9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_EN9->addListener (this);
    ENCO_CH_EN9->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_EN9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_EN9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_EN9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_EN10 = new TextButton ("new button"));
    ENCO_CH_EN10->setButtonText ("2");
    ENCO_CH_EN10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_EN10->addListener (this);
    ENCO_CH_EN10->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_EN10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_EN10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_EN10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_EN11 = new TextButton ("new button"));
    ENCO_CH_EN11->setButtonText ("3");
    ENCO_CH_EN11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_EN11->addListener (this);
    ENCO_CH_EN11->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_EN11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_EN11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_EN11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_EN12 = new TextButton ("new button"));
    ENCO_CH_EN12->setButtonText ("4");
    ENCO_CH_EN12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_EN12->addListener (this);
    ENCO_CH_EN12->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_EN12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_EN12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_EN12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_EN13 = new TextButton ("new button"));
    ENCO_CH_EN13->setButtonText ("5");
    ENCO_CH_EN13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_EN13->addListener (this);
    ENCO_CH_EN13->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_EN13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_EN13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_EN13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_EN14 = new TextButton ("new button"));
    ENCO_CH_EN14->setButtonText ("6");
    ENCO_CH_EN14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_EN14->addListener (this);
    ENCO_CH_EN14->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_EN14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_EN14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_EN14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_EN15 = new TextButton ("new button"));
    ENCO_CH_EN15->setButtonText ("7");
    ENCO_CH_EN15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_EN15->addListener (this);
    ENCO_CH_EN15->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_EN15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_EN15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_EN15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCO_CH_EN16 = new TextButton ("new button"));
    ENCO_CH_EN16->setButtonText ("8");
    ENCO_CH_EN16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCO_CH_EN16->addListener (this);
    ENCO_CH_EN16->setColour (TextButton::buttonColourId, Colours::black);
    ENCO_CH_EN16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCO_CH_EN16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCO_CH_EN16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_TY_EN9 = new TextButton ("new button"));
    ECO_TY_EN9->setButtonText ("CC");
    ECO_TY_EN9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_TY_EN9->addListener (this);
    ECO_TY_EN9->setColour (TextButton::buttonColourId, Colours::black);
    ECO_TY_EN9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_TY_EN9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_TY_EN9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_TY_EN10 = new TextButton ("new button"));
    ECO_TY_EN10->setButtonText ("CC");
    ECO_TY_EN10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_TY_EN10->addListener (this);
    ECO_TY_EN10->setColour (TextButton::buttonColourId, Colours::black);
    ECO_TY_EN10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_TY_EN10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_TY_EN10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_TY_EN11 = new TextButton ("new button"));
    ECO_TY_EN11->setButtonText ("Note");
    ECO_TY_EN11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_TY_EN11->addListener (this);
    ECO_TY_EN11->setColour (TextButton::buttonColourId, Colours::black);
    ECO_TY_EN11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_TY_EN11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_TY_EN11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_TY_EN12 = new TextButton ("new button"));
    ECO_TY_EN12->setButtonText ("Pitch");
    ECO_TY_EN12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_TY_EN12->addListener (this);
    ECO_TY_EN12->setColour (TextButton::buttonColourId, Colours::black);
    ECO_TY_EN12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_TY_EN12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_TY_EN12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_TY_EN13 = new TextButton ("new button"));
    ECO_TY_EN13->setButtonText ("CC");
    ECO_TY_EN13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_TY_EN13->addListener (this);
    ECO_TY_EN13->setColour (TextButton::buttonColourId, Colours::black);
    ECO_TY_EN13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_TY_EN13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_TY_EN13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_TY_EN14 = new TextButton ("new button"));
    ECO_TY_EN14->setButtonText ("CC");
    ECO_TY_EN14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_TY_EN14->addListener (this);
    ECO_TY_EN14->setColour (TextButton::buttonColourId, Colours::black);
    ECO_TY_EN14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_TY_EN14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_TY_EN14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_TY_EN15 = new TextButton ("new button"));
    ECO_TY_EN15->setButtonText ("CC");
    ECO_TY_EN15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_TY_EN15->addListener (this);
    ECO_TY_EN15->setColour (TextButton::buttonColourId, Colours::black);
    ECO_TY_EN15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_TY_EN15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_TY_EN15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_TY_EN16 = new TextButton ("new button"));
    ECO_TY_EN16->setButtonText ("CC");
    ECO_TY_EN16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_TY_EN16->addListener (this);
    ECO_TY_EN16->setColour (TextButton::buttonColourId, Colours::black);
    ECO_TY_EN16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_TY_EN16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_TY_EN16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_BEH_EN9 = new TextButton ("new button"));
    ECO_BEH_EN9->setButtonText ("Momentary");
    ECO_BEH_EN9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_BEH_EN9->addListener (this);
    ECO_BEH_EN9->setColour (TextButton::buttonColourId, Colours::black);
    ECO_BEH_EN9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_BEH_EN9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_BEH_EN9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_BEH_EN2 = new TextButton ("new button"));
    ECO_BEH_EN2->setButtonText ("Momentary");
    ECO_BEH_EN2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_BEH_EN2->addListener (this);
    ECO_BEH_EN2->setColour (TextButton::buttonColourId, Colours::black);
    ECO_BEH_EN2->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_BEH_EN2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_BEH_EN2->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_BEH_EN3 = new TextButton ("new button"));
    ECO_BEH_EN3->setButtonText ("Toggle");
    ECO_BEH_EN3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_BEH_EN3->addListener (this);
    ECO_BEH_EN3->setColour (TextButton::buttonColourId, Colours::black);
    ECO_BEH_EN3->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_BEH_EN3->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_BEH_EN3->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_BEH_EN4 = new TextButton ("new button"));
    ECO_BEH_EN4->setButtonText ("Momentary");
    ECO_BEH_EN4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_BEH_EN4->addListener (this);
    ECO_BEH_EN4->setColour (TextButton::buttonColourId, Colours::black);
    ECO_BEH_EN4->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_BEH_EN4->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_BEH_EN4->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_BEH_EN5 = new TextButton ("new button"));
    ECO_BEH_EN5->setButtonText ("Toggle");
    ECO_BEH_EN5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_BEH_EN5->addListener (this);
    ECO_BEH_EN5->setColour (TextButton::buttonColourId, Colours::black);
    ECO_BEH_EN5->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_BEH_EN5->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_BEH_EN5->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_BEH_EN6 = new TextButton ("new button"));
    ECO_BEH_EN6->setButtonText ("Momentary");
    ECO_BEH_EN6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_BEH_EN6->addListener (this);
    ECO_BEH_EN6->setColour (TextButton::buttonColourId, Colours::black);
    ECO_BEH_EN6->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_BEH_EN6->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_BEH_EN6->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_BEH_EN7 = new TextButton ("new button"));
    ECO_BEH_EN7->setButtonText ("Momentary");
    ECO_BEH_EN7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_BEH_EN7->addListener (this);
    ECO_BEH_EN7->setColour (TextButton::buttonColourId, Colours::black);
    ECO_BEH_EN7->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_BEH_EN7->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_BEH_EN7->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_BEH_EN8 = new TextButton ("new button"));
    ECO_BEH_EN8->setButtonText ("Momentary");
    ECO_BEH_EN8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_BEH_EN8->addListener (this);
    ECO_BEH_EN8->setColour (TextButton::buttonColourId, Colours::black);
    ECO_BEH_EN8->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_BEH_EN8->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_BEH_EN8->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_LR_EN10 = new TextButton ("new button"));
    ECO_LR_EN10->setButtonText ("Single");
    ECO_LR_EN10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_LR_EN10->addListener (this);
    ECO_LR_EN10->setColour (TextButton::buttonColourId, Colours::black);
    ECO_LR_EN10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_LR_EN10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_LR_EN10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_LR_EN11 = new TextButton ("new button"));
    ECO_LR_EN11->setButtonText ("Spread");
    ECO_LR_EN11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_LR_EN11->addListener (this);
    ECO_LR_EN11->setColour (TextButton::buttonColourId, Colours::black);
    ECO_LR_EN11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_LR_EN11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_LR_EN11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_LR_EN12 = new TextButton ("new button"));
    ECO_LR_EN12->setButtonText ("Fan");
    ECO_LR_EN12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_LR_EN12->addListener (this);
    ECO_LR_EN12->setColour (TextButton::buttonColourId, Colours::black);
    ECO_LR_EN12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_LR_EN12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_LR_EN12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_LR_EN13 = new TextButton ("new button"));
    ECO_LR_EN13->setButtonText ("Trim");
    ECO_LR_EN13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_LR_EN13->addListener (this);
    ECO_LR_EN13->setColour (TextButton::buttonColourId, Colours::black);
    ECO_LR_EN13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_LR_EN13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_LR_EN13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_LR_EN14 = new TextButton ("new button"));
    ECO_LR_EN14->setButtonText ("Pan");
    ECO_LR_EN14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_LR_EN14->addListener (this);
    ECO_LR_EN14->setColour (TextButton::buttonColourId, Colours::black);
    ECO_LR_EN14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_LR_EN14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_LR_EN14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_LR_EN15 = new TextButton ("new button"));
    ECO_LR_EN15->setButtonText ("Fan");
    ECO_LR_EN15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_LR_EN15->addListener (this);
    ECO_LR_EN15->setColour (TextButton::buttonColourId, Colours::black);
    ECO_LR_EN15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_LR_EN15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_LR_EN15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_LR_EN16 = new TextButton ("new button"));
    ECO_LR_EN16->setButtonText ("Pan");
    ECO_LR_EN16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_LR_EN16->addListener (this);
    ECO_LR_EN16->setColour (TextButton::buttonColourId, Colours::black);
    ECO_LR_EN16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_LR_EN16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_LR_EN16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECO_LR_EN17 = new TextButton ("new button"));
    ECO_LR_EN17->setButtonText ("Pan");
    ECO_LR_EN17->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECO_LR_EN17->addListener (this);
    ECO_LR_EN17->setColour (TextButton::buttonColourId, Colours::black);
    ECO_LR_EN17->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECO_LR_EN17->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECO_LR_EN17->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCOT_CH_EN9 = new TextButton ("new button"));
    ENCOT_CH_EN9->setButtonText ("1");
    ENCOT_CH_EN9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCOT_CH_EN9->addListener (this);
    ENCOT_CH_EN9->setColour (TextButton::buttonColourId, Colours::black);
    ENCOT_CH_EN9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCOT_CH_EN9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCOT_CH_EN9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCOT_CH_EN10 = new TextButton ("new button"));
    ENCOT_CH_EN10->setButtonText ("2");
    ENCOT_CH_EN10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCOT_CH_EN10->addListener (this);
    ENCOT_CH_EN10->setColour (TextButton::buttonColourId, Colours::black);
    ENCOT_CH_EN10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCOT_CH_EN10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCOT_CH_EN10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCOT_CH_EN11 = new TextButton ("new button"));
    ENCOT_CH_EN11->setButtonText ("3");
    ENCOT_CH_EN11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCOT_CH_EN11->addListener (this);
    ENCOT_CH_EN11->setColour (TextButton::buttonColourId, Colours::black);
    ENCOT_CH_EN11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCOT_CH_EN11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCOT_CH_EN11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCOT_CH_EN12 = new TextButton ("new button"));
    ENCOT_CH_EN12->setButtonText ("4");
    ENCOT_CH_EN12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCOT_CH_EN12->addListener (this);
    ENCOT_CH_EN12->setColour (TextButton::buttonColourId, Colours::black);
    ENCOT_CH_EN12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCOT_CH_EN12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCOT_CH_EN12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCOT_CH_EN13 = new TextButton ("new button"));
    ENCOT_CH_EN13->setButtonText ("5");
    ENCOT_CH_EN13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCOT_CH_EN13->addListener (this);
    ENCOT_CH_EN13->setColour (TextButton::buttonColourId, Colours::black);
    ENCOT_CH_EN13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCOT_CH_EN13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCOT_CH_EN13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCOT_CH_EN14 = new TextButton ("new button"));
    ENCOT_CH_EN14->setButtonText ("6");
    ENCOT_CH_EN14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCOT_CH_EN14->addListener (this);
    ENCOT_CH_EN14->setColour (TextButton::buttonColourId, Colours::black);
    ENCOT_CH_EN14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCOT_CH_EN14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCOT_CH_EN14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCOT_CH_EN15 = new TextButton ("new button"));
    ENCOT_CH_EN15->setButtonText ("7");
    ENCOT_CH_EN15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCOT_CH_EN15->addListener (this);
    ENCOT_CH_EN15->setColour (TextButton::buttonColourId, Colours::black);
    ENCOT_CH_EN15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCOT_CH_EN15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCOT_CH_EN15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ENCOT_CH_EN16 = new TextButton ("new button"));
    ENCOT_CH_EN16->setButtonText ("8");
    ENCOT_CH_EN16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ENCOT_CH_EN16->addListener (this);
    ENCOT_CH_EN16->setColour (TextButton::buttonColourId, Colours::black);
    ENCOT_CH_EN16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ENCOT_CH_EN16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ENCOT_CH_EN16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_TY_EN9 = new TextButton ("new button"));
    ECOT_TY_EN9->setButtonText ("CC");
    ECOT_TY_EN9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_TY_EN9->addListener (this);
    ECOT_TY_EN9->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_TY_EN9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_TY_EN9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_TY_EN9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_TY_EN10 = new TextButton ("new button"));
    ECOT_TY_EN10->setButtonText ("CC");
    ECOT_TY_EN10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_TY_EN10->addListener (this);
    ECOT_TY_EN10->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_TY_EN10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_TY_EN10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_TY_EN10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_TY_EN11 = new TextButton ("new button"));
    ECOT_TY_EN11->setButtonText ("Note");
    ECOT_TY_EN11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_TY_EN11->addListener (this);
    ECOT_TY_EN11->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_TY_EN11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_TY_EN11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_TY_EN11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_TY_EN12 = new TextButton ("new button"));
    ECOT_TY_EN12->setButtonText ("Pitch");
    ECOT_TY_EN12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_TY_EN12->addListener (this);
    ECOT_TY_EN12->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_TY_EN12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_TY_EN12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_TY_EN12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_TY_EN13 = new TextButton ("new button"));
    ECOT_TY_EN13->setButtonText ("CC");
    ECOT_TY_EN13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_TY_EN13->addListener (this);
    ECOT_TY_EN13->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_TY_EN13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_TY_EN13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_TY_EN13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_TY_EN14 = new TextButton ("new button"));
    ECOT_TY_EN14->setButtonText ("CC");
    ECOT_TY_EN14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_TY_EN14->addListener (this);
    ECOT_TY_EN14->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_TY_EN14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_TY_EN14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_TY_EN14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_TY_EN15 = new TextButton ("new button"));
    ECOT_TY_EN15->setButtonText ("CC");
    ECOT_TY_EN15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_TY_EN15->addListener (this);
    ECOT_TY_EN15->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_TY_EN15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_TY_EN15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_TY_EN15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_TY_EN16 = new TextButton ("new button"));
    ECOT_TY_EN16->setButtonText ("CC");
    ECOT_TY_EN16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_TY_EN16->addListener (this);
    ECOT_TY_EN16->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_TY_EN16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_TY_EN16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_TY_EN16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOP_NO_EN9 = new TextButton ("new button"));
    ECOP_NO_EN9->setButtonText ("CC1");
    ECOP_NO_EN9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOP_NO_EN9->addListener (this);
    ECOP_NO_EN9->setColour (TextButton::buttonColourId, Colours::black);
    ECOP_NO_EN9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOP_NO_EN9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOP_NO_EN9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOP_NO_EN10 = new TextButton ("new button"));
    ECOP_NO_EN10->setButtonText ("CC1");
    ECOP_NO_EN10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOP_NO_EN10->addListener (this);
    ECOP_NO_EN10->setColour (TextButton::buttonColourId, Colours::black);
    ECOP_NO_EN10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOP_NO_EN10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOP_NO_EN10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOP_NO_EN11 = new TextButton ("new button"));
    ECOP_NO_EN11->setButtonText ("C0");
    ECOP_NO_EN11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOP_NO_EN11->addListener (this);
    ECOP_NO_EN11->setColour (TextButton::buttonColourId, Colours::black);
    ECOP_NO_EN11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOP_NO_EN11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOP_NO_EN11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOP_NO_EN12 = new TextButton ("new button"));
    ECOP_NO_EN12->setButtonText ("-");
    ECOP_NO_EN12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOP_NO_EN12->addListener (this);
    ECOP_NO_EN12->setColour (TextButton::buttonColourId, Colours::black);
    ECOP_NO_EN12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOP_NO_EN12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOP_NO_EN12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOP_NO_EN13 = new TextButton ("new button"));
    ECOP_NO_EN13->setButtonText ("CC1");
    ECOP_NO_EN13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOP_NO_EN13->addListener (this);
    ECOP_NO_EN13->setColour (TextButton::buttonColourId, Colours::black);
    ECOP_NO_EN13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOP_NO_EN13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOP_NO_EN13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOP_NO_EN14 = new TextButton ("new button"));
    ECOP_NO_EN14->setButtonText ("CC1");
    ECOP_NO_EN14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOP_NO_EN14->addListener (this);
    ECOP_NO_EN14->setColour (TextButton::buttonColourId, Colours::black);
    ECOP_NO_EN14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOP_NO_EN14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOP_NO_EN14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOP_NO_EN15 = new TextButton ("new button"));
    ECOP_NO_EN15->setButtonText ("CC1");
    ECOP_NO_EN15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOP_NO_EN15->addListener (this);
    ECOP_NO_EN15->setColour (TextButton::buttonColourId, Colours::black);
    ECOP_NO_EN15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOP_NO_EN15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOP_NO_EN15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOP_NO_EN16 = new TextButton ("new button"));
    ECOP_NO_EN16->setButtonText ("CC1");
    ECOP_NO_EN16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOP_NO_EN16->addListener (this);
    ECOP_NO_EN16->setColour (TextButton::buttonColourId, Colours::black);
    ECOP_NO_EN16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOP_NO_EN16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOP_NO_EN16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_NO_EN9 = new TextButton ("new button"));
    ECOT_NO_EN9->setButtonText ("CC1");
    ECOT_NO_EN9->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_NO_EN9->addListener (this);
    ECOT_NO_EN9->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_NO_EN9->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_NO_EN9->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_NO_EN9->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_NO_EN10 = new TextButton ("new button"));
    ECOT_NO_EN10->setButtonText ("CC1");
    ECOT_NO_EN10->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_NO_EN10->addListener (this);
    ECOT_NO_EN10->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_NO_EN10->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_NO_EN10->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_NO_EN10->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_NO_EN11 = new TextButton ("new button"));
    ECOT_NO_EN11->setButtonText ("C0");
    ECOT_NO_EN11->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_NO_EN11->addListener (this);
    ECOT_NO_EN11->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_NO_EN11->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_NO_EN11->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_NO_EN11->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_NO_EN12 = new TextButton ("new button"));
    ECOT_NO_EN12->setButtonText ("-");
    ECOT_NO_EN12->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_NO_EN12->addListener (this);
    ECOT_NO_EN12->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_NO_EN12->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_NO_EN12->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_NO_EN12->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_NO_EN13 = new TextButton ("new button"));
    ECOT_NO_EN13->setButtonText ("CC1");
    ECOT_NO_EN13->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_NO_EN13->addListener (this);
    ECOT_NO_EN13->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_NO_EN13->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_NO_EN13->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_NO_EN13->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_NO_EN14 = new TextButton ("new button"));
    ECOT_NO_EN14->setButtonText ("CC1");
    ECOT_NO_EN14->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_NO_EN14->addListener (this);
    ECOT_NO_EN14->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_NO_EN14->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_NO_EN14->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_NO_EN14->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_NO_EN15 = new TextButton ("new button"));
    ECOT_NO_EN15->setButtonText ("CC1");
    ECOT_NO_EN15->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_NO_EN15->addListener (this);
    ECOT_NO_EN15->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_NO_EN15->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_NO_EN15->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_NO_EN15->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (ECOT_NO_EN16 = new TextButton ("new button"));
    ECOT_NO_EN16->setButtonText ("CC1");
    ECOT_NO_EN16->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    ECOT_NO_EN16->addListener (this);
    ECOT_NO_EN16->setColour (TextButton::buttonColourId, Colours::black);
    ECOT_NO_EN16->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    ECOT_NO_EN16->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    ECOT_NO_EN16->setColour (TextButton::textColourOffId, Colour (0xffffab00));

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

    addAndMakeVisible (label10 = new Label ("new label",
                                            "label text"));
    label10->setFont (Font (15.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    ENCO_CH_EN9->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_EN10->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_EN11 ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_EN12 ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_EN13 ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_EN14 ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_EN15 ->setLookAndFeel(&lookAndFeelV4);
    ENCO_CH_EN16 ->setLookAndFeel(&lookAndFeelV4);
    ECO_TY_EN9 ->setLookAndFeel(&lookAndFeelV4);
    ECO_TY_EN10 ->setLookAndFeel(&lookAndFeelV4);
    ECO_TY_EN11 ->setLookAndFeel(&lookAndFeelV4);
    ECO_TY_EN12 ->setLookAndFeel(&lookAndFeelV4);
    ECO_TY_EN13 ->setLookAndFeel(&lookAndFeelV4);
    ECO_TY_EN14 ->setLookAndFeel(&lookAndFeelV4);
    ECO_TY_EN15 ->setLookAndFeel(&lookAndFeelV4);
    ECO_TY_EN16 ->setLookAndFeel(&lookAndFeelV4);
    ECO_BEH_EN9 ->setLookAndFeel(&lookAndFeelV4);
    ECO_BEH_EN2 ->setLookAndFeel(&lookAndFeelV4);
    ECO_BEH_EN3 ->setLookAndFeel(&lookAndFeelV4);
    ECO_BEH_EN4 ->setLookAndFeel(&lookAndFeelV4);
    ECO_BEH_EN5 ->setLookAndFeel(&lookAndFeelV4);
    ECO_BEH_EN6 ->setLookAndFeel(&lookAndFeelV4);
    ECO_BEH_EN7 ->setLookAndFeel(&lookAndFeelV4);
    ECO_BEH_EN8 ->setLookAndFeel(&lookAndFeelV4);
    ECO_LR_EN10 ->setLookAndFeel(&lookAndFeelV4);
    ECO_LR_EN11 ->setLookAndFeel(&lookAndFeelV4);
    ECO_LR_EN12 ->setLookAndFeel(&lookAndFeelV4);
    ECO_LR_EN13 ->setLookAndFeel(&lookAndFeelV4);
    ECO_LR_EN14 ->setLookAndFeel(&lookAndFeelV4);
    ECO_LR_EN15 ->setLookAndFeel(&lookAndFeelV4);
    ECO_LR_EN16 ->setLookAndFeel(&lookAndFeelV4);
    ECO_LR_EN17 ->setLookAndFeel(&lookAndFeelV4);
    ENCOT_CH_EN9 ->setLookAndFeel(&lookAndFeelV4);
    ENCOT_CH_EN10 ->setLookAndFeel(&lookAndFeelV4);
    ENCOT_CH_EN11 ->setLookAndFeel(&lookAndFeelV4);
    ENCOT_CH_EN12 ->setLookAndFeel(&lookAndFeelV4);
    ENCOT_CH_EN13 ->setLookAndFeel(&lookAndFeelV4);
    ENCOT_CH_EN14 ->setLookAndFeel(&lookAndFeelV4);
    ENCOT_CH_EN15 ->setLookAndFeel(&lookAndFeelV4);
    ENCOT_CH_EN16 ->setLookAndFeel(&lookAndFeelV4);
    ECOT_TY_EN9 ->setLookAndFeel(&lookAndFeelV4);
    ECOT_TY_EN10->setLookAndFeel(&lookAndFeelV4);
    ECOT_TY_EN11->setLookAndFeel(&lookAndFeelV4);
    ECOT_TY_EN12 ->setLookAndFeel(&lookAndFeelV4);
    ECOT_TY_EN13 ->setLookAndFeel(&lookAndFeelV4);
    ECOT_TY_EN14 ->setLookAndFeel(&lookAndFeelV4);
    ECOT_TY_EN15 ->setLookAndFeel(&lookAndFeelV4);
    ECOT_TY_EN16 ->setLookAndFeel(&lookAndFeelV4);

    ECOP_NO_EN9  ->setLookAndFeel(&lookAndFeelV4);
    ECOP_NO_EN10  ->setLookAndFeel(&lookAndFeelV4);
    ECOP_NO_EN11  ->setLookAndFeel(&lookAndFeelV4);
    ECOP_NO_EN12 ->setLookAndFeel(&lookAndFeelV4);
    ECOP_NO_EN13  ->setLookAndFeel(&lookAndFeelV4);
    ECOP_NO_EN14  ->setLookAndFeel(&lookAndFeelV4);
    ECOP_NO_EN15  ->setLookAndFeel(&lookAndFeelV4);
    ECOP_NO_EN16  ->setLookAndFeel(&lookAndFeelV4);
    ECOT_NO_EN9  ->setLookAndFeel(&lookAndFeelV4);
    ECOT_NO_EN10  ->setLookAndFeel(&lookAndFeelV4);
    ECOT_NO_EN11  ->setLookAndFeel(&lookAndFeelV4);
    ECOT_NO_EN12 ->setLookAndFeel(&lookAndFeelV4);
    ECOT_NO_EN13 ->setLookAndFeel(&lookAndFeelV4);
    ECOT_NO_EN14  ->setLookAndFeel(&lookAndFeelV4);
    ECOT_NO_EN15  ->setLookAndFeel(&lookAndFeelV4);
    ECOT_NO_EN16  ->setLookAndFeel(&lookAndFeelV4);

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

    addAndMakeVisible (pfader12=new CustomTextButton ("11"));
    pfader12->addListener (this);

    addAndMakeVisible (pfader13=new CustomTextButton ("1"));
    pfader13->addListener (this);

    addAndMakeVisible (pfader14=new CustomTextButton ("2"));
    pfader14->addListener (this);

    addAndMakeVisible (pfader15=new CustomTextButton ("11"));
    pfader15->addListener (this);

    addAndMakeVisible (pfader16=new CustomTextButton ("1"));
    pfader16->addListener (this);

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

    addAndMakeVisible (pCustomImageButton20=new CustomImageButton ("0"));
    pCustomImageButton20->addListener (this);

    addAndMakeVisible (pCustomImageButton21=new CustomImageButton ("0"));
    pCustomImageButton21->addListener (this);

    addAndMakeVisible (pCustomImageButton22=new CustomImageButton ("12"));
    pCustomImageButton22->addListener (this);

    addAndMakeVisible (pCustomImageButton23=new CustomImageButton ("0"));
    pCustomImageButton23->addListener (this);

    addAndMakeVisible (pCustomImageButton24=new CustomImageButton ("120"));
    pCustomImageButton24->addListener (this);

    addAndMakeVisible (pCustomImageButton25=new CustomImageButton ("110"));
    pCustomImageButton25->addListener (this);

    addAndMakeVisible (pCustomImageButton26=new CustomImageButton ("122"));
    pCustomImageButton26->addListener (this);

    addAndMakeVisible (pCustomImageButton27=new CustomImageButton ("110"));
    pCustomImageButton27->addListener (this);

    addAndMakeVisible (pCustomImageButton28=new CustomImageButton ("110"));
    pCustomImageButton28->addListener (this);

    addAndMakeVisible (pCustomImageButton29=new CustomImageButton ("124"));
    pCustomImageButton29->addListener (this);

    addAndMakeVisible (pCustomImageButton30=new CustomImageButton ("124"));
    pCustomImageButton30->addListener (this);

    addAndMakeVisible (pCustomImageButton31=new CustomImageButton ("110"));
    pCustomImageButton31->addListener (this);

    addAndMakeVisible (pCustomImageButton32=new CustomImageButton ("127"));
    pCustomImageButton32->addListener (this);

    for (int i = 0; i < 16; i++)
    {
        addAndMakeVisible(MSB[i] = new CustomImageButton("-"));
        MSB[i]->addListener(this);

        addAndMakeVisible(LSB[i] = new CustomImageButton("-"));
        LSB[i]->addListener(this);
    }

    MakeButtonPointToBtGroup();
    //[/UserPreSize]

    setSize (664, 500);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

EncodersCompact9To16Component::~EncodersCompact9To16Component()
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

    pfader9 = nullptr;
    pfader10 = nullptr;
    pfader11 = nullptr;

    pfader12 = nullptr;
    pfader13 = nullptr;

    pfader14 = nullptr;
    pfader15 = nullptr;
    pfader16 = nullptr;

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
    pCustomImageButton23 = nullptr;
    pCustomImageButton24 = nullptr;

    pCustomImageButton25 = nullptr;
    pCustomImageButton26 = nullptr;
    pCustomImageButton27 = nullptr;
    pCustomImageButton28 = nullptr;
    pCustomImageButton29 = nullptr;
    pCustomImageButton30 = nullptr;
    pCustomImageButton31 = nullptr;
    pCustomImageButton32 = nullptr;

    for (int i = 0; i < 16; i++)
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
    label_MOVE2 = nullptr;
    label_CHANNEL2 = nullptr;
    label_TYPE2 = nullptr;
    label_NO2 = nullptr;
    label_MIN2 = nullptr;
    label_MAX2 = nullptr;
    label_FD9 = nullptr;
    label_FD10 = nullptr;
    label_FD11 = nullptr;
    label_FD12 = nullptr;
    label_FD13 = nullptr;
    label_FD14 = nullptr;
    label_FD15 = nullptr;
    label_FD16 = nullptr;
    label2 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    label_MAX3 = nullptr;
    label11 = nullptr;
    label_MAX4 = nullptr;
    label13 = nullptr;
    ENCO_CH_EN9 = nullptr;
    ENCO_CH_EN10 = nullptr;
    ENCO_CH_EN11 = nullptr;
    ENCO_CH_EN12 = nullptr;
    ENCO_CH_EN13 = nullptr;
    ENCO_CH_EN14 = nullptr;
    ENCO_CH_EN15 = nullptr;
    ENCO_CH_EN16 = nullptr;
    ECO_TY_EN9 = nullptr;
    ECO_TY_EN10 = nullptr;
    ECO_TY_EN11 = nullptr;
    ECO_TY_EN12 = nullptr;
    ECO_TY_EN13 = nullptr;
    ECO_TY_EN14 = nullptr;
    ECO_TY_EN15 = nullptr;
    ECO_TY_EN16 = nullptr;
    ECO_BEH_EN9 = nullptr;
    ECO_BEH_EN2 = nullptr;
    ECO_BEH_EN3 = nullptr;
    ECO_BEH_EN4 = nullptr;
    ECO_BEH_EN5 = nullptr;
    ECO_BEH_EN6 = nullptr;
    ECO_BEH_EN7 = nullptr;
    ECO_BEH_EN8 = nullptr;
    ECO_LR_EN10 = nullptr;
    ECO_LR_EN11 = nullptr;
    ECO_LR_EN12 = nullptr;
    ECO_LR_EN13 = nullptr;
    ECO_LR_EN14 = nullptr;
    ECO_LR_EN15 = nullptr;
    ECO_LR_EN16 = nullptr;
    ECO_LR_EN17 = nullptr;
    ENCOT_CH_EN9 = nullptr;
    ENCOT_CH_EN10 = nullptr;
    ENCOT_CH_EN11 = nullptr;
    ENCOT_CH_EN12 = nullptr;
    ENCOT_CH_EN13 = nullptr;
    ENCOT_CH_EN14 = nullptr;
    ENCOT_CH_EN15 = nullptr;
    ENCOT_CH_EN16 = nullptr;
    ECOT_TY_EN9 = nullptr;
    ECOT_TY_EN10 = nullptr;
    ECOT_TY_EN11 = nullptr;
    ECOT_TY_EN12 = nullptr;
    ECOT_TY_EN13 = nullptr;
    ECOT_TY_EN14 = nullptr;
    ECOT_TY_EN15 = nullptr;
    ECOT_TY_EN16 = nullptr;
    ECOP_NO_EN9 = nullptr;
    ECOP_NO_EN10 = nullptr;
    ECOP_NO_EN11 = nullptr;
    ECOP_NO_EN12 = nullptr;
    ECOP_NO_EN13 = nullptr;
    ECOP_NO_EN14 = nullptr;
    ECOP_NO_EN15 = nullptr;
    ECOP_NO_EN16 = nullptr;
    ECOT_NO_EN9 = nullptr;
    ECOT_NO_EN10 = nullptr;
    ECOT_NO_EN11 = nullptr;
    ECOT_NO_EN12 = nullptr;
    ECOT_NO_EN13 = nullptr;
    ECOT_NO_EN14 = nullptr;
    ECOT_NO_EN15 = nullptr;
    ECOT_NO_EN16 = nullptr;
    LSB1 = nullptr;
    MSB1 = nullptr;
    LNMSB1 = nullptr;
    LNLSB1 = nullptr;
    label12 = nullptr;
    LSB2 = nullptr;
    MSB2 = nullptr;
    LNMSB2 = nullptr;
    LNLSB2 = nullptr;
    label10 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void EncodersCompact9To16Component::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xffffab00));
    g.fillRect (23, 32, 613, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (23, 281, 613, 2);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void EncodersCompact9To16Component::resized()
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
    label_MOVE2->setBounds (24, 254, 64, 24);
    label_CHANNEL2->setBounds (24, 284, 85, 26);
    label_TYPE2->setBounds (24, 310, 85, 26);
    label_NO2->setBounds (24, 336, 85, 26);
    label_MIN2->setBounds (24, 362, 85, 26);
    label_MAX2->setBounds (24, 388, 85, 26);
    label_FD9->setBounds (136, 254, 48, 24);
    label_FD10->setBounds (200, 254, 48, 24);
    label_FD11->setBounds (264, 254, 48, 24);
    label_FD12->setBounds (328, 254, 48, 24);
    label_FD13->setBounds (392, 254, 48, 24);
    label_FD14->setBounds (456, 254, 48, 24);
    label_FD15->setBounds (520, 254, 48, 24);
    label_FD16->setBounds (584, 254, 48, 24);
    label2->setBounds (24, 310, 600, 1);
    label7->setBounds (25, 336, 600, 1);
    label8->setBounds (24, 362, 600, 1);
    label9->setBounds (24, 388, 600, 1);
    label_MAX3->setBounds (24, 165, 85, 26);
    label11->setBounds (24, 165, 600, 1);
    label_MAX4->setBounds (24, 414, 85, 26);
    label13->setBounds (24, 414, 600, 1);
    ENCO_CH_EN9->setBounds (121, 34, 65, 25);
    ENCO_CH_EN10->setBounds (185, 34, 65, 25);
    ENCO_CH_EN11->setBounds (250, 34, 65, 25);
    ENCO_CH_EN12->setBounds (314, 34, 65, 25);
    ENCO_CH_EN13->setBounds (378, 34, 65, 25);
    ENCO_CH_EN14->setBounds (442, 34, 65, 25);
    ENCO_CH_EN15->setBounds (506, 34, 65, 25);
    ENCO_CH_EN16->setBounds (570, 34, 64, 25);
    ECO_TY_EN9->setBounds (121, 62, 65, 24);
    ECO_TY_EN10->setBounds (185, 62, 65, 24);
    ECO_TY_EN11->setBounds (250, 62, 65, 24);
    ECO_TY_EN12->setBounds (314, 62, 65, 24);
    ECO_TY_EN13->setBounds (378, 62, 65, 24);
    ECO_TY_EN14->setBounds (442, 62, 65, 24);
    ECO_TY_EN15->setBounds (506, 62, 65, 24);
    ECO_TY_EN16->setBounds (570, 62, 65, 24);
    ECO_BEH_EN9->setBounds (121, 166, 65, 25);
    ECO_BEH_EN2->setBounds (185, 166, 65, 25);
    ECO_BEH_EN3->setBounds (250, 166, 65, 25);
    ECO_BEH_EN4->setBounds (314, 166, 65, 25);
    ECO_BEH_EN5->setBounds (378, 166, 65, 25);
    ECO_BEH_EN6->setBounds (442, 166, 65, 25);
    ECO_BEH_EN7->setBounds (506, 166, 65, 25);
    ECO_BEH_EN8->setBounds (570, 166, 65, 25);
    ECO_LR_EN10->setBounds (121, 415, 65, 25);
    ECO_LR_EN11->setBounds (185, 415, 65, 25);
    ECO_LR_EN12->setBounds (250, 415, 65, 25);
    ECO_LR_EN13->setBounds (314, 415, 65, 25);
    ECO_LR_EN14->setBounds (378, 415, 65, 25);
    ECO_LR_EN15->setBounds (442, 415, 65, 25);
    ECO_LR_EN16->setBounds (506, 415, 65, 25);
    ECO_LR_EN17->setBounds (570, 415, 65, 25);
    ENCOT_CH_EN9->setBounds (121, 283, 65, 25);
    ENCOT_CH_EN10->setBounds (185, 283, 65, 25);
    ENCOT_CH_EN11->setBounds (250, 283, 65, 25);
    ENCOT_CH_EN12->setBounds (314, 283, 65, 25);
    ENCOT_CH_EN13->setBounds (378, 283, 65, 25);
    ENCOT_CH_EN14->setBounds (442, 283, 65, 25);
    ENCOT_CH_EN15->setBounds (506, 283, 65, 25);
    ENCOT_CH_EN16->setBounds (570, 283, 64, 25);
    ECOT_TY_EN9->setBounds (121, 311, 65, 24);
    ECOT_TY_EN10->setBounds (185, 311, 65, 24);
    ECOT_TY_EN11->setBounds (250, 311, 65, 24);
    ECOT_TY_EN12->setBounds (314, 311, 65, 24);
    ECOT_TY_EN13->setBounds (378, 311, 65, 24);
    ECOT_TY_EN14->setBounds (442, 311, 65, 24);
    ECOT_TY_EN15->setBounds (506, 311, 65, 24);
    ECOT_TY_EN16->setBounds (570, 311, 65, 24);
    ECOP_NO_EN9->setBounds (121, 88, 65, 24);
    ECOP_NO_EN10->setBounds (185, 88, 65, 24);
    ECOP_NO_EN11->setBounds (250, 88, 65, 24);
    ECOP_NO_EN12->setBounds (314, 88, 65, 24);
    ECOP_NO_EN13->setBounds (378, 88, 65, 24);
    ECOP_NO_EN14->setBounds (442, 88, 65, 24);
    ECOP_NO_EN15->setBounds (506, 88, 65, 24);
    ECOP_NO_EN16->setBounds (570, 88, 65, 24);
    ECOT_NO_EN9->setBounds (121, 337, 65, 24);
    ECOT_NO_EN10->setBounds (185, 337, 65, 24);
    ECOT_NO_EN11->setBounds (250, 337, 65, 24);
    ECOT_NO_EN12->setBounds (314, 337, 65, 24);
    ECOT_NO_EN13->setBounds (378, 337, 65, 24);
    ECOT_NO_EN14->setBounds (442, 337, 65, 24);
    ECOT_NO_EN15->setBounds (506, 337, 65, 24);
    ECOT_NO_EN16->setBounds (570, 337, 65, 24);
    LSB1->setBounds (24, 192, 85, 26);
    MSB1->setBounds (24, 219, 85, 26);
    LNMSB1->setBounds (24, 218, 613, 1);
    LNLSB1->setBounds (24, 191, 613, 1);
    label12->setBounds (119, 9, 2, 233);
    LSB2->setBounds (24, 441, 85, 26);
    MSB2->setBounds (24, 469, 85, 26);
    LNMSB2->setBounds (24, 468, 613, 1);
    LNLSB2->setBounds (24, 440, 613, 1);
    label10->setBounds (119, 258, 2, 233);
    //[UserResized] Add your own custom resize handling here..
    pfader1 -> setBounds(121,34,64,25);
    pfader2 -> setBounds(185,34,64,25);
    pfader3 -> setBounds(249,34,64,25);
    pfader4 -> setBounds(313,34,64,25);
    pfader5 -> setBounds(377,34,64,25);
    pfader6 -> setBounds(441,34,64,25);
    pfader7 -> setBounds(505,34,64,25);
    pfader8 -> setBounds(569,34,64,25);

    pfader9 -> setBounds(121,283,64,26);
    pfader10->setBounds(185, 283, 64, 26);
    pfader11->setBounds(249, 283, 64, 26);
    pfader12->setBounds(313, 283, 64, 26);
    pfader13->setBounds(377, 283, 64, 26);
    pfader14->setBounds(441, 283, 64, 26);
    pfader15->setBounds(505, 283, 64, 26);
    pfader16->setBounds(569, 283, 64, 26);

    pCustomImageButton1 ->setBounds(121,114,64,25);
    pCustomImageButton2 ->setBounds(185,114,64,25);
    pCustomImageButton3 ->setBounds(250,114,64,25);
    pCustomImageButton4 ->setBounds(314,114,64,25);
    pCustomImageButton5 ->setBounds(378,114,64,25);
    pCustomImageButton6 ->setBounds(442,114,64,25);
    pCustomImageButton7 ->setBounds(506,114,64,25);
    pCustomImageButton8 ->setBounds(570,114,64,25);

    pCustomImageButton9 ->setBounds(121,140,64,25);
    pCustomImageButton10 ->setBounds(185,140,64,25);
    pCustomImageButton11 ->setBounds(250,140,64,25);
    pCustomImageButton12 ->setBounds(314,140,64,25);
    pCustomImageButton13 ->setBounds(378,140,64,25);
    pCustomImageButton14 ->setBounds(442,140,64,25);
    pCustomImageButton15 ->setBounds(506,140,64,25);
    pCustomImageButton16 ->setBounds(570,140,64,25);

    pCustomImageButton17 ->setBounds(121,363,64,25);
    pCustomImageButton18->setBounds(185, 363, 64, 25);
    pCustomImageButton19->setBounds(250, 363, 64, 25);
    pCustomImageButton20->setBounds(314, 363, 64, 25);
    pCustomImageButton21->setBounds(378, 363, 64, 25);
    pCustomImageButton22->setBounds(442, 363, 64, 25);
    pCustomImageButton23->setBounds(506, 363, 64, 25);
    pCustomImageButton24->setBounds(570, 363, 64, 25);

    pCustomImageButton25 ->setBounds(121,389,64,25);
    pCustomImageButton26->setBounds(185, 389, 64, 25);
    pCustomImageButton27->setBounds(250, 389, 64, 25);
    pCustomImageButton28->setBounds(314, 389, 64, 25);
    pCustomImageButton29->setBounds(378, 389, 64, 25);
    pCustomImageButton30->setBounds(442, 389, 64, 25);
    pCustomImageButton31->setBounds(506, 389, 64, 25);
    pCustomImageButton32->setBounds(570, 389, 64, 25);

    for (int i = 0; i < 16; i++)
    {
        if (i < 8)
        {
            MSB[i]->setBounds(121 + 64 * i, 441, 65, 25);
            LSB[i]->setBounds(121 + 64 * i, 469, 65, 25);
        }
        else if (i>7 && i<16)
        {
            MSB[i]->setBounds(121 + 64 * (i - 8), 192, 65, 25);
            LSB[i]->setBounds(121 + 64 * (i - 8), 219, 65, 25);
        }
    }
    //[/UserResized]
}

void EncodersCompact9To16Component::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    pMainComponent->setMyComponent(2);
	GetCustomBtID();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == ENCO_CH_EN9)
    {
        //[UserButtonCode_ENCO_CH_EN9] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_EN9]
    }
    else if (buttonThatWasClicked == ENCO_CH_EN10)
    {
        //[UserButtonCode_ENCO_CH_EN10] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_EN10]
    }
    else if (buttonThatWasClicked == ENCO_CH_EN11)
    {
        //[UserButtonCode_ENCO_CH_EN11] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_EN11]
    }
    else if (buttonThatWasClicked == ENCO_CH_EN12)
    {
        //[UserButtonCode_ENCO_CH_EN12] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_EN12]
    }
    else if (buttonThatWasClicked == ENCO_CH_EN13)
    {
        //[UserButtonCode_ENCO_CH_EN13] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_EN13]
    }
    else if (buttonThatWasClicked == ENCO_CH_EN14)
    {
        //[UserButtonCode_ENCO_CH_EN14] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_EN14]
    }
    else if (buttonThatWasClicked == ENCO_CH_EN15)
    {
        //[UserButtonCode_ENCO_CH_EN15] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_EN15]
    }
    else if (buttonThatWasClicked == ENCO_CH_EN16)
    {
        //[UserButtonCode_ENCO_CH_EN16] -- add your button handler code here..
        //[/UserButtonCode_ENCO_CH_EN16]
    }
    else if (buttonThatWasClicked == ECO_TY_EN9)
    {
        //[UserButtonCode_ECO_TY_EN9] -- add your button handler code here..
        Push_or_Turn =0;
        this-> MidiLayerNum = 256;
        SetNO_BT(ECO_TY_EN9);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECO_TY_EN9->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECO_TY_EN9]
    }
    else if (buttonThatWasClicked == ECO_TY_EN10)
    {
        //[UserButtonCode_ECO_TY_EN10] -- add your button handler code here..
        Push_or_Turn =0;
        this-> MidiLayerNum = 264;
        SetNO_BT(ECO_TY_EN10);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECO_TY_EN10->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECO_TY_EN10]
    }
    else if (buttonThatWasClicked == ECO_TY_EN11)
    {
        //[UserButtonCode_ECO_TY_EN11] -- add your button handler code here..
        Push_or_Turn =0;
        this-> MidiLayerNum = 272;
        SetNO_BT(ECO_TY_EN11);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECO_TY_EN11->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECO_TY_EN11]
    }
    else if (buttonThatWasClicked == ECO_TY_EN12)
    {
        //[UserButtonCode_ECO_TY_EN12] -- add your button handler code here..
        Push_or_Turn =0;
        this-> MidiLayerNum = 280;
        SetNO_BT(ECO_TY_EN12);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECO_TY_EN12->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECO_TY_EN12]
    }
    else if (buttonThatWasClicked == ECO_TY_EN13)
    {
        //[UserButtonCode_ECO_TY_EN13] -- add your button handler code here..
        Push_or_Turn =0;
        this-> MidiLayerNum = 288;
        SetNO_BT(ECO_TY_EN13);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECO_TY_EN13->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECO_TY_EN13]
    }
    else if (buttonThatWasClicked == ECO_TY_EN14)
    {
        //[UserButtonCode_ECO_TY_EN14] -- add your button handler code here..
        Push_or_Turn =0;
        this-> MidiLayerNum = 296;
        SetNO_BT(ECO_TY_EN14);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECO_TY_EN14->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECO_TY_EN14]
    }
    else if (buttonThatWasClicked == ECO_TY_EN15)
    {
        //[UserButtonCode_ECO_TY_EN15] -- add your button handler code here..
        Push_or_Turn =0;
        this-> MidiLayerNum = 304;
        SetNO_BT(ECO_TY_EN15);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECO_TY_EN15->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECO_TY_EN15]
    }
    else if (buttonThatWasClicked == ECO_TY_EN16)
    {
        //[UserButtonCode_ECO_TY_EN16] -- add your button handler code here..
        Push_or_Turn =0;
        this-> MidiLayerNum = 312;
        SetNO_BT(ECO_TY_EN16);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECO_TY_EN16->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECO_TY_EN16]
    }
    else if (buttonThatWasClicked == ECO_BEH_EN9)
    {
        //[UserButtonCode_ECO_BEH_EN9] -- add your button handler code here..
		if (!(EC2Bt[8].BT2->getButtonText().compare("MMC") == 0) && !(EC2Bt[8].BT2->getButtonText().compare("Program") == 0) 
			&& !(EC2Bt[8].BT2->getButtonText().compare("CC")==0 && (EC2Bt[8].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[8].BT4->getButtonText().compare("Dec/-1")==0))){
			
			this-> MidiLayerNum = 260;
			SetNO_BT(ECO_BEH_EN9);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, ECO_BEH_EN9->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_BEH_EN9]
    }
    else if (buttonThatWasClicked == ECO_BEH_EN2)
    {
        //[UserButtonCode_ECO_BEH_EN2] -- add your button handler code here..
		if (!(EC2Bt[9].BT2->getButtonText().compare("MMC") == 0) && !(EC2Bt[9].BT2->getButtonText().compare("Program") == 0) 
			&& !(EC2Bt[9].BT2->getButtonText().compare("CC")==0 && (EC2Bt[9].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[9].BT4->getButtonText().compare("Dec/-1")==0))){
			
			this-> MidiLayerNum = 268;
			SetNO_BT(ECO_BEH_EN2);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, ECO_BEH_EN2->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_BEH_EN2]
    }
    else if (buttonThatWasClicked == ECO_BEH_EN3)
    {
        //[UserButtonCode_ECO_BEH_EN3] -- add your button handler code here..
		if (!(EC2Bt[10].BT2->getButtonText().compare("MMC") == 0) && !(EC2Bt[10].BT2->getButtonText().compare("Program") == 0) 
			&& !(EC2Bt[10].BT2->getButtonText().compare("CC")==0 && (EC2Bt[10].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[10].BT4->getButtonText().compare("Dec/-1")==0))){
			
			this-> MidiLayerNum = 276;
			SetNO_BT(ECO_BEH_EN3);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, ECO_BEH_EN3->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_BEH_EN3]
    }
    else if (buttonThatWasClicked == ECO_BEH_EN4)
    {
        //[UserButtonCode_ECO_BEH_EN4] -- add your button handler code here..
		if (!(EC2Bt[11].BT2->getButtonText().compare("MMC") == 0) && !(EC2Bt[11].BT2->getButtonText().compare("Program") == 0) 
			&& !(EC2Bt[11].BT2->getButtonText().compare("CC")==0 && (EC2Bt[11].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[11].BT4->getButtonText().compare("Dec/-1")==0))){
			
			this-> MidiLayerNum = 284;
			SetNO_BT(ECO_BEH_EN4);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, ECO_BEH_EN4->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_BEH_EN4]
    }
    else if (buttonThatWasClicked == ECO_BEH_EN5)
    {
        //[UserButtonCode_ECO_BEH_EN5] -- add your button handler code here..
		if (!(EC2Bt[12].BT2->getButtonText().compare("MMC") == 0) && !(EC2Bt[12].BT2->getButtonText().compare("Program") == 0) 
			&& !(EC2Bt[12].BT2->getButtonText().compare("CC")==0 && (EC2Bt[12].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[12].BT4->getButtonText().compare("Dec/-1")==0))){
			
			this-> MidiLayerNum = 292;
			SetNO_BT(ECO_BEH_EN5);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, ECO_BEH_EN5->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_BEH_EN5]
    }
    else if (buttonThatWasClicked == ECO_BEH_EN6)
    {
        //[UserButtonCode_ECO_BEH_EN6] -- add your button handler code here..
		if (!(EC2Bt[13].BT2->getButtonText().compare("MMC") == 0) && !(EC2Bt[13].BT2->getButtonText().compare("Program") == 0) 
			&& !(EC2Bt[13].BT2->getButtonText().compare("CC")==0 && (EC2Bt[13].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[13].BT4->getButtonText().compare("Dec/-1")==0))){
			
			this-> MidiLayerNum = 300;
			SetNO_BT(ECO_BEH_EN6);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, ECO_BEH_EN6->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_BEH_EN6]
    }
    else if (buttonThatWasClicked == ECO_BEH_EN7)
    {
        //[UserButtonCode_ECO_BEH_EN7] -- add your button handler code here..
		if (!(EC2Bt[14].BT2->getButtonText().compare("MMC") == 0) && !(EC2Bt[14].BT2->getButtonText().compare("Program") == 0) 
			&& !(EC2Bt[14].BT2->getButtonText().compare("CC")==0 && (EC2Bt[14].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[14].BT4->getButtonText().compare("Dec/-1")==0))){
			
			this-> MidiLayerNum = 308;
			SetNO_BT(ECO_BEH_EN7);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, ECO_BEH_EN7->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_BEH_EN7]
    }
    else if (buttonThatWasClicked == ECO_BEH_EN8)
    {
        //[UserButtonCode_ECO_BEH_EN8] -- add your button handler code here..
		if (!(EC2Bt[15].BT2->getButtonText().compare("MMC") == 0) && !(EC2Bt[15].BT2->getButtonText().compare("Program") == 0) 
			&& !(EC2Bt[15].BT2->getButtonText().compare("CC")==0 && (EC2Bt[15].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[15].BT4->getButtonText().compare("Dec/-1")==0))){
			
			this-> MidiLayerNum = 316;
			SetNO_BT(ECO_BEH_EN8);
			pTwochoose_Component  = new Twochoose_Component();
			CallOutBox::launchAsynchronously(pTwochoose_Component, ECO_BEH_EN8->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_BEH_EN8]
    }
    else if (buttonThatWasClicked == ECO_LR_EN10)
    {
        //[UserButtonCode_ECO_LR_EN10] -- add your button handler code here..
		if (!(EC2Bt[0].BT2->getButtonText().compare("MMC") == 0)){
			this-> MidiLayerNum = 196;
			SetNO_BT(ECO_LR_EN10);
			pPanFanComponent  = new PanFanComponent();
			CallOutBox::launchAsynchronously(pPanFanComponent, ECO_LR_EN10->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_LR_EN10]
    }
    else if (buttonThatWasClicked == ECO_LR_EN11)
    {
        //[UserButtonCode_ECO_LR_EN11] -- add your button handler code here..
		if (!(EC2Bt[1].BT2->getButtonText().compare("MMC") == 0)){
			this-> MidiLayerNum = 204;
			SetNO_BT(ECO_LR_EN11);
			pPanFanComponent  = new PanFanComponent();
			CallOutBox::launchAsynchronously(pPanFanComponent, ECO_LR_EN11->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_LR_EN11]
    }
    else if (buttonThatWasClicked == ECO_LR_EN12)
    {
        //[UserButtonCode_ECO_LR_EN12] -- add your button handler code here..
		if (!(EC2Bt[2].BT2->getButtonText().compare("MMC") == 0)){
			this-> MidiLayerNum = 212;
			SetNO_BT(ECO_LR_EN12);
			pPanFanComponent  = new PanFanComponent();
			CallOutBox::launchAsynchronously(pPanFanComponent, ECO_LR_EN12->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_LR_EN12]
    }
    else if (buttonThatWasClicked == ECO_LR_EN13)
    {
        //[UserButtonCode_ECO_LR_EN13] -- add your button handler code here..
		if (!(EC2Bt[3].BT2->getButtonText().compare("MMC") == 0)){
			this-> MidiLayerNum = 220;
			SetNO_BT(ECO_LR_EN13);
			pPanFanComponent  = new PanFanComponent();
			CallOutBox::launchAsynchronously(pPanFanComponent, ECO_LR_EN13->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_LR_EN13]
    }
    else if (buttonThatWasClicked == ECO_LR_EN14)
    {
        //[UserButtonCode_ECO_LR_EN14] -- add your button handler code here..
		if (!(EC2Bt[4].BT2->getButtonText().compare("MMC") == 0)){
			this-> MidiLayerNum = 228;
			SetNO_BT(ECO_LR_EN14);
			pPanFanComponent  = new PanFanComponent();
			CallOutBox::launchAsynchronously(pPanFanComponent, ECO_LR_EN14->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_LR_EN14]
    }
    else if (buttonThatWasClicked == ECO_LR_EN15)
    {
        //[UserButtonCode_ECO_LR_EN15] -- add your button handler code here..
		if (!(EC2Bt[5].BT2->getButtonText().compare("MMC") == 0)){
			this-> MidiLayerNum = 236;
			SetNO_BT(ECO_LR_EN15);
			pPanFanComponent  = new PanFanComponent();
			CallOutBox::launchAsynchronously(pPanFanComponent, ECO_LR_EN15->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_LR_EN15]
    }
    else if (buttonThatWasClicked == ECO_LR_EN16)
    {
        //[UserButtonCode_ECO_LR_EN16] -- add your button handler code here..
		if (!(EC2Bt[6].BT2->getButtonText().compare("MMC") == 0)){
			this-> MidiLayerNum = 244;
			SetNO_BT(ECO_LR_EN16);
			pPanFanComponent  = new PanFanComponent();
			CallOutBox::launchAsynchronously(pPanFanComponent, ECO_LR_EN16->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_LR_EN16]
    }
    else if (buttonThatWasClicked == ECO_LR_EN17)
    {
        //[UserButtonCode_ECO_LR_EN17] -- add your button handler code here..
		if (!(EC2Bt[7].BT2->getButtonText().compare("MMC") == 0)){
			this-> MidiLayerNum = 252;
			SetNO_BT(ECO_LR_EN17);
			pPanFanComponent  = new PanFanComponent();
			CallOutBox::launchAsynchronously(pPanFanComponent, ECO_LR_EN17->getScreenBounds(), nullptr);
		}
        //[/UserButtonCode_ECO_LR_EN17]
    }
    else if (buttonThatWasClicked == ENCOT_CH_EN9)
    {
        //[UserButtonCode_ENCOT_CH_EN9] -- add your button handler code here..
        //[/UserButtonCode_ENCOT_CH_EN9]
    }
    else if (buttonThatWasClicked == ENCOT_CH_EN10)
    {
        //[UserButtonCode_ENCOT_CH_EN10] -- add your button handler code here..
        //[/UserButtonCode_ENCOT_CH_EN10]
    }
    else if (buttonThatWasClicked == ENCOT_CH_EN11)
    {
        //[UserButtonCode_ENCOT_CH_EN11] -- add your button handler code here..
        //[/UserButtonCode_ENCOT_CH_EN11]
    }
    else if (buttonThatWasClicked == ENCOT_CH_EN12)
    {
        //[UserButtonCode_ENCOT_CH_EN12] -- add your button handler code here..
        //[/UserButtonCode_ENCOT_CH_EN12]
    }
    else if (buttonThatWasClicked == ENCOT_CH_EN13)
    {
        //[UserButtonCode_ENCOT_CH_EN13] -- add your button handler code here..
        //[/UserButtonCode_ENCOT_CH_EN13]
    }
    else if (buttonThatWasClicked == ENCOT_CH_EN14)
    {
        //[UserButtonCode_ENCOT_CH_EN14] -- add your button handler code here..
        //[/UserButtonCode_ENCOT_CH_EN14]
    }
    else if (buttonThatWasClicked == ENCOT_CH_EN15)
    {
        //[UserButtonCode_ENCOT_CH_EN15] -- add your button handler code here..
        //[/UserButtonCode_ENCOT_CH_EN15]
    }
    else if (buttonThatWasClicked == ENCOT_CH_EN16)
    {
        //[UserButtonCode_ENCOT_CH_EN16] -- add your button handler code here..
        //[/UserButtonCode_ENCOT_CH_EN16]
    }
    else if (buttonThatWasClicked == ECOT_TY_EN9)
    {
        //[UserButtonCode_ECOT_TY_EN9] -- add your button handler code here..
        this-> MidiLayerNum = 192;
        Push_or_Turn =1;
        SetNO_BT(ECOT_TY_EN9);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECOT_TY_EN9->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECOT_TY_EN9]
    }
    else if (buttonThatWasClicked == ECOT_TY_EN10)
    {
        //[UserButtonCode_ECOT_TY_EN10] -- add your button handler code here..
        this-> MidiLayerNum = 200;
        Push_or_Turn =1;
        SetNO_BT(ECOT_TY_EN10);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECOT_TY_EN10->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECOT_TY_EN10]
    }
    else if (buttonThatWasClicked == ECOT_TY_EN11)
    {
        //[UserButtonCode_ECOT_TY_EN11] -- add your button handler code here..
        this-> MidiLayerNum = 208;
        Push_or_Turn =1;
        SetNO_BT(ECOT_TY_EN11);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECOT_TY_EN11->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECOT_TY_EN11]
    }
    else if (buttonThatWasClicked == ECOT_TY_EN12)
    {
        //[UserButtonCode_ECOT_TY_EN12] -- add your button handler code here..
        this-> MidiLayerNum = 216;
        Push_or_Turn =1;
        SetNO_BT(ECOT_TY_EN12);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECOT_TY_EN12->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECOT_TY_EN12]
    }
    else if (buttonThatWasClicked == ECOT_TY_EN13)
    {
        //[UserButtonCode_ECOT_TY_EN13] -- add your button handler code here..
        this-> MidiLayerNum = 224;
        Push_or_Turn =1;
        SetNO_BT(ECOT_TY_EN13);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECOT_TY_EN13->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECOT_TY_EN13]
    }
    else if (buttonThatWasClicked == ECOT_TY_EN14)
    {
        //[UserButtonCode_ECOT_TY_EN14] -- add your button handler code here..
        this-> MidiLayerNum = 232;
        Push_or_Turn =1;
        SetNO_BT(ECOT_TY_EN14);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECOT_TY_EN14->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECOT_TY_EN14]
    }
    else if (buttonThatWasClicked == ECOT_TY_EN15)
    {
        //[UserButtonCode_ECOT_TY_EN15] -- add your button handler code here..
        this-> MidiLayerNum = 240;
        Push_or_Turn =1;
        SetNO_BT(ECOT_TY_EN15);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECOT_TY_EN15->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECOT_TY_EN15]
    }
    else if (buttonThatWasClicked == ECOT_TY_EN16)
    {
        //[UserButtonCode_ECOT_TY_EN16] -- add your button handler code here..
        this-> MidiLayerNum = 248;
        Push_or_Turn =1;
        SetNO_BT(ECOT_TY_EN16);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, ECOT_TY_EN16->getScreenBounds(), nullptr);
        //[/UserButtonCode_ECOT_TY_EN16]
    }
    else if (buttonThatWasClicked == ECOP_NO_EN9)
    {
        //[UserButtonCode_ECOP_NO_EN9] -- add your button handler code here..
        this-> MidiLayerNum = 257;
        if (ECO_TY_EN9->getButtonText().compare("CC") == 0 /*|| ECO_TY_EN9->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOP_NO_EN9);
            num = ConventNO_BTtoInt(ECOP_NO_EN9->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOP_NO_EN9->getScreenBounds(), nullptr);
        }
        else if(ECO_TY_EN9->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOP_NO_EN9);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOP_NO_EN9->getScreenBounds(), nullptr);
        }
        else if (ECO_TY_EN9->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(ECOP_NO_EN9);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, ECOP_NO_EN9->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOP_NO_EN9]
    }
    else if (buttonThatWasClicked == ECOP_NO_EN10)
    {
        //[UserButtonCode_ECOP_NO_EN10] -- add your button handler code here..
        this-> MidiLayerNum = 265;
        if (ECO_TY_EN10->getButtonText().compare("CC") == 0 /*|| ECO_TY_EN10->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOP_NO_EN10);
            num = ConventNO_BTtoInt(ECOP_NO_EN10->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOP_NO_EN10->getScreenBounds(), nullptr);
        }
        else if(ECO_TY_EN10->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOP_NO_EN10);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOP_NO_EN10->getScreenBounds(), nullptr);
        }
        else if (ECO_TY_EN10->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(ECOP_NO_EN10);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, ECOP_NO_EN10->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOP_NO_EN10]
    }
    else if (buttonThatWasClicked == ECOP_NO_EN11)
    {
        //[UserButtonCode_ECOP_NO_EN11] -- add your button handler code here..
        this-> MidiLayerNum = 273;
        if (ECO_TY_EN11->getButtonText().compare("CC") == 0 /*|| ECO_TY_EN11->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOP_NO_EN11);
            num = ConventNO_BTtoInt(ECOP_NO_EN11->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOP_NO_EN11->getScreenBounds(), nullptr);
        }
        else if(ECO_TY_EN11->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOP_NO_EN11);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOP_NO_EN11->getScreenBounds(), nullptr);
        }
        else if (ECO_TY_EN11->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(ECOP_NO_EN11);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, ECOP_NO_EN11->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOP_NO_EN11]
    }
    else if (buttonThatWasClicked == ECOP_NO_EN12)
    {
        //[UserButtonCode_ECOP_NO_EN12] -- add your button handler code here..
        this-> MidiLayerNum = 281;
        if (ECO_TY_EN12->getButtonText().compare("CC") == 0 /*|| ECO_TY_EN12->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOP_NO_EN12);
            num = ConventNO_BTtoInt(ECOP_NO_EN12->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOP_NO_EN12->getScreenBounds(), nullptr);
        }
        else if(ECO_TY_EN12->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOP_NO_EN12);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOP_NO_EN12->getScreenBounds(), nullptr);
        }
        else if (ECO_TY_EN12->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(ECOP_NO_EN12);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, ECOP_NO_EN12->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOP_NO_EN12]
    }
    else if (buttonThatWasClicked == ECOP_NO_EN13)
    {
        //[UserButtonCode_ECOP_NO_EN13] -- add your button handler code here..
        this-> MidiLayerNum = 289;
        if (ECO_TY_EN13->getButtonText().compare("CC") == 0 /*|| ECO_TY_EN13->getButtonText().compare("Pitch") == 0*/)
        {
             SetNO_BT(ECOP_NO_EN13);
             num = ConventNO_BTtoInt(ECOP_NO_EN13->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOP_NO_EN13->getScreenBounds(), nullptr);
        }
        else if(ECO_TY_EN13->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOP_NO_EN13);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOP_NO_EN13->getScreenBounds(), nullptr);
        }
        else if (ECO_TY_EN13->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(ECOP_NO_EN13);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, ECOP_NO_EN13->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOP_NO_EN13]
    }
    else if (buttonThatWasClicked == ECOP_NO_EN14)
    {
        //[UserButtonCode_ECOP_NO_EN14] -- add your button handler code here..
        this-> MidiLayerNum = 297;
        if (ECO_TY_EN14->getButtonText().compare("CC") == 0 /*|| ECO_TY_EN14->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOP_NO_EN14);
            num = ConventNO_BTtoInt(ECOP_NO_EN14->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOP_NO_EN14->getScreenBounds(), nullptr);
        }
        else if(ECO_TY_EN14->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOP_NO_EN14);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOP_NO_EN14->getScreenBounds(), nullptr);
        }
        else if (ECO_TY_EN14->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(ECOP_NO_EN14);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, ECOP_NO_EN14->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOP_NO_EN14]
    }
    else if (buttonThatWasClicked == ECOP_NO_EN15)
    {
        //[UserButtonCode_ECOP_NO_EN15] -- add your button handler code here..
        this-> MidiLayerNum = 305;
        if (ECO_TY_EN15->getButtonText().compare("CC") == 0 /*|| ECO_TY_EN15->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOP_NO_EN15);
            num = ConventNO_BTtoInt(ECOP_NO_EN15->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOP_NO_EN15->getScreenBounds(), nullptr);
        }
        else if(ECO_TY_EN15->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOP_NO_EN15);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOP_NO_EN15->getScreenBounds(), nullptr);
        }
        else if (ECO_TY_EN15->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(ECOP_NO_EN15);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, ECOP_NO_EN15->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOP_NO_EN15]
    }
    else if (buttonThatWasClicked == ECOP_NO_EN16)
    {
        //[UserButtonCode_ECOP_NO_EN16] -- add your button handler code here..
        this-> MidiLayerNum = 313;
        if (ECO_TY_EN16->getButtonText().compare("CC") == 0 /*|| ECO_TY_EN16->getButtonText().compare("Pitch") == 0*/)
        {
        SetNO_BT(ECOP_NO_EN16);
        num = ConventNO_BTtoInt(ECOP_NO_EN16->getButtonText());
        CC_VP  = new CC_Viewport_Component ();
        CallOutBox::launchAsynchronously(CC_VP, ECOP_NO_EN16->getScreenBounds(), nullptr);
        }
        else if(ECO_TY_EN16->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOP_NO_EN16);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOP_NO_EN16->getScreenBounds(), nullptr);
        }
        else if (ECO_TY_EN16->getButtonText().compare("MMC") == 0)
        {
            SetNO_BT(ECOP_NO_EN16);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, ECOP_NO_EN16->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOP_NO_EN16]
    }
    else if (buttonThatWasClicked == ECOT_NO_EN9)
    {
        //[UserButtonCode_ECOT_NO_EN9] -- add your button handler code here..
        this-> MidiLayerNum = 193;
        if (ECOT_TY_EN9->getButtonText().compare("CC") == 0 /*|| ECOT_TY_EN9->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOT_NO_EN9);
            num = ConventNO_BTtoInt(ECOT_NO_EN9->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOT_NO_EN9->getScreenBounds(), nullptr);
        }
        else if(ECOT_TY_EN9->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOT_NO_EN9);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOT_NO_EN9->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOT_NO_EN9]
    }
    else if (buttonThatWasClicked == ECOT_NO_EN10)
    {
        //[UserButtonCode_ECOT_NO_EN10] -- add your button handler code here..
        this-> MidiLayerNum = 201;
        if (ECOT_TY_EN10->getButtonText().compare("CC") == 0 /*|| ECOT_TY_EN10->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOT_NO_EN10);
            num = ConventNO_BTtoInt(ECOT_NO_EN10->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOT_NO_EN10->getScreenBounds(), nullptr);
        }
        else if(ECOT_TY_EN10->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOT_NO_EN10);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOT_NO_EN10->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOT_NO_EN10]
    }
    else if (buttonThatWasClicked == ECOT_NO_EN11)
    {
        //[UserButtonCode_ECOT_NO_EN11] -- add your button handler code here..
        this-> MidiLayerNum = 209;
        if (ECOT_TY_EN11->getButtonText().compare("CC") == 0 /*|| ECOT_TY_EN10->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOT_NO_EN11);
            num = ConventNO_BTtoInt(ECOT_NO_EN11->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOT_NO_EN11->getScreenBounds(), nullptr);
        }
        else if(ECOT_TY_EN11->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOT_NO_EN11);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOT_NO_EN11->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOT_NO_EN11]
    }
    else if (buttonThatWasClicked == ECOT_NO_EN12)
    {
        //[UserButtonCode_ECOT_NO_EN12] -- add your button handler code here..
        this-> MidiLayerNum = 217;
        if (ECOT_TY_EN12->getButtonText().compare("CC") == 0 /*|| ECOT_TY_EN12->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOT_NO_EN12);
            num = ConventNO_BTtoInt(ECOT_NO_EN12->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOT_NO_EN12->getScreenBounds(), nullptr);
        }
        else if(ECOT_TY_EN12->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOT_NO_EN12);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOT_NO_EN12->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOT_NO_EN12]
    }
    else if (buttonThatWasClicked == ECOT_NO_EN13)
    {
        //[UserButtonCode_ECOT_NO_EN13] -- add your button handler code here..
        this-> MidiLayerNum = 225;
        if (ECOT_TY_EN13->getButtonText().compare("CC") == 0 /*|| ECOT_TY_EN13->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOT_NO_EN13);
            num = ConventNO_BTtoInt(ECOT_NO_EN13->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOT_NO_EN13->getScreenBounds(), nullptr);
        }
        else if(ECOT_TY_EN13->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOT_NO_EN13);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOT_NO_EN13->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOT_NO_EN13]
    }
    else if (buttonThatWasClicked == ECOT_NO_EN14)
    {
        //[UserButtonCode_ECOT_NO_EN14] -- add your button handler code here..
        this-> MidiLayerNum = 233;
        if (ECOT_TY_EN14->getButtonText().compare("CC") == 0 /*|| ECOT_TY_EN14->getButtonText().compare("Pitch") == 0*/)
        {

            SetNO_BT(ECOT_NO_EN14);
            num = ConventNO_BTtoInt(ECOT_NO_EN14->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOT_NO_EN14->getScreenBounds(), nullptr);
        }
        else if(ECOT_TY_EN14->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOT_NO_EN14);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOT_NO_EN14->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOT_NO_EN14]
    }
    else if (buttonThatWasClicked == ECOT_NO_EN15)
    {
        //[UserButtonCode_ECOT_NO_EN15] -- add your button handler code here..
        this-> MidiLayerNum = 241;
        if (ECOT_TY_EN15->getButtonText().compare("CC") == 0 /*|| ECOT_TY_EN15->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOT_NO_EN15);
            num = ConventNO_BTtoInt(ECOT_NO_EN15->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOT_NO_EN15->getScreenBounds(), nullptr);
        }
        else if(ECOT_TY_EN15->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOT_NO_EN15);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOT_NO_EN15->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOT_NO_EN15]
    }
    else if (buttonThatWasClicked == ECOT_NO_EN16)
    {
        //[UserButtonCode_ECOT_NO_EN16] -- add your button handler code here..
        this-> MidiLayerNum = 249;
        if (ECOT_TY_EN16->getButtonText().compare("CC") == 0 /*|| ECOT_TY_EN16->getButtonText().compare("Pitch") == 0*/)
        {
            SetNO_BT(ECOT_NO_EN16);
            num = ConventNO_BTtoInt(ECOT_NO_EN16->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, ECOT_NO_EN16->getScreenBounds(), nullptr);
        }
        else if(ECOT_TY_EN16->getButtonText().compare("Note")==0)
        {
            SetNO_BT(ECOT_NO_EN16);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, ECOT_NO_EN16->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_ECOT_NO_EN16]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void EncodersCompact9To16Component::CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged)
{
    Load_or_SaveFlag =1;
	pMainComponent-> ChangeEditedButtonImClose();
    
	for(int i =0;i<16;i++)
	{
		if(CustomTextButtonThatHasChanged == EC2Bt[i].BT1)
		{
			if(!(EC2Bt[i].BT1->GetValue().toString().compare("Off")==0) && !(EC2Bt[i].BT1->GetValue().toString().compare("Global")==0))
			{
				if(EC2Bt[i].BT1->GetValue().toString().getLastCharacters(1).compare("*")==0)
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() != EC2Bt[i].BT1->GetValue().toString().dropLastCharacters(1).getIntValue())					
						EC2Bt[i].BT1->setButtonText(EC2Bt[i].BT1->GetValue().toString().dropLastCharacters(1));
					
				}
				else
				{
					if(pGlobalCompactComponent->GetBT_CH2Num() == EC2Bt[i].BT1->GetValue().toString().getIntValue())		
						EC2Bt[i].BT1->setButtonText(EC2Bt[i].BT1->GetValue().toString()+"*");
				}
			}
		}
	}
}

void EncodersCompact9To16Component::CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(2);
    pMainComponent->GlobalorOFF = 1;
	GetCustomBtID();
     if(buttonThatWasClicked == pfader1)
    {
        this-> MidiLayerNum = 255;
        SetCurrentCustomBT2(pfader1);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader1);
    }
    else if(buttonThatWasClicked == pfader2)
    {
        this-> MidiLayerNum = 263;
        SetCurrentCustomBT2(pfader2);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader2);
    }
    else if(buttonThatWasClicked == pfader3)
    {
        this-> MidiLayerNum = 271;
        SetCurrentCustomBT2(pfader3);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader3);
    }
    else if(buttonThatWasClicked == pfader4)
    {
        this-> MidiLayerNum = 279;
        SetCurrentCustomBT2(pfader4);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader4);
    }
    else if(buttonThatWasClicked == pfader5)
    {
        this-> MidiLayerNum = 287;
        SetCurrentCustomBT2(pfader5);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader5);
    }
    else if(buttonThatWasClicked == pfader6)
    {
        this-> MidiLayerNum = 295;
        SetCurrentCustomBT2(pfader6);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader6);
    }
    else if(buttonThatWasClicked == pfader7)
    {
        this-> MidiLayerNum = 303;
        SetCurrentCustomBT2(pfader7);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader7);
    }
    else if(buttonThatWasClicked == pfader8)
    {
        this-> MidiLayerNum = 311;
        SetCurrentCustomBT2(pfader8);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader8);
    }
    else if(buttonThatWasClicked == pfader9)
    {
        this-> MidiLayerNum = 191;
        SetCurrentCustomBT2(pfader9);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader9);
    }
    else if(buttonThatWasClicked == pfader10)
    {
        this-> MidiLayerNum = 199;
        SetCurrentCustomBT2(pfader10);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader10);
    }
    else if(buttonThatWasClicked == pfader11)
    {
        this-> MidiLayerNum = 207;
        SetCurrentCustomBT2(pfader11);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader11);
    }
    else if(buttonThatWasClicked == pfader12)
    {
        this-> MidiLayerNum = 215;
        SetCurrentCustomBT2(pfader12);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader12);
    }
    else if(buttonThatWasClicked == pfader13)
    {
        this-> MidiLayerNum = 223;
        SetCurrentCustomBT2(pfader13);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader13);
    }

    else if(buttonThatWasClicked == pfader14)
    {
        this-> MidiLayerNum = 231;
        SetCurrentCustomBT2(pfader14);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader14);
    }
    else if(buttonThatWasClicked == pfader15)
    {
        this-> MidiLayerNum = 239;
        SetCurrentCustomBT2(pfader15);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader15);
    }
    else if(buttonThatWasClicked == pfader16)
    {
        this-> MidiLayerNum = 247;
        SetCurrentCustomBT2(pfader16);
        pViewChannelComponent = new ViewChannelComponent();
        MyCallOutBox(pViewChannelComponent,pfader16);
    }
}

void EncodersCompact9To16Component:: SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT2 = currentbuttonThatWasClicked;
 }

 CustomTextButton* EncodersCompact9To16Component:: GetCurrentCustomBT2()
 {
     return CurrentCustomBT2;
 }

void EncodersCompact9To16Component::CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked)
{
    pMainComponent->FaderorOtherFlag =1;
    pMainComponent->setMyComponent(2);
	GetCustomBtID();
	for (int i = 0; i < 16; i++)
    {
        if (EC2Bt[i].BT4 == buttonThatWasClicked || EC2Bt[i].BT5 == buttonThatWasClicked)
        {
            if (!(EC2Bt[i].BT2->getButtonText().compare("MMC") == 0) /*&& !(EMBt[i].BT2->getButtonText().compare("Program") == 0)*/)
            {
				if(!((EC2Bt[i].BT2->getButtonText().compare("Program") == 0) && EC2Bt[i].BT5 == buttonThatWasClicked && i>7) )
				{
					if(!(EC2Bt[i].BT5 == buttonThatWasClicked && (EC2Bt[i].BT4->getButtonText().compare("Inc/+1")==0 || EC2Bt[i].BT4->getButtonText().compare("Dec/-1")==0 
						|| EC2Bt[i].BT4->getButtonText().compare("Relative1")==0 || EC2Bt[i].BT4->getButtonText().compare("Relative2")==0|| EC2Bt[i].BT4->getButtonText().compare("Relative3")==0))){
					
						if (buttonThatWasClicked == pCustomImageButton1)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("Note") == 0 || EC2Bt[i].BT2->getButtonText().compare("Pitch") == 0)
								pMainComponent->FaderorOtherFlag =0;
							this-> MidiLayerNum = 258;
							SetCurrentCustomBT(pCustomImageButton1);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton1);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton2)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("Note") == 0 || EC2Bt[i].BT2->getButtonText().compare("Pitch") == 0)
								pMainComponent->FaderorOtherFlag =0;
							this-> MidiLayerNum = 266;
							SetCurrentCustomBT(pCustomImageButton2);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton2);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton3)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("Note") == 0 || EC2Bt[i].BT2->getButtonText().compare("Pitch") == 0)
								pMainComponent->FaderorOtherFlag =0;
							this-> MidiLayerNum = 274;
							SetCurrentCustomBT(pCustomImageButton3);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton3);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton4)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("Note") == 0 || EC2Bt[i].BT2->getButtonText().compare("Pitch") == 0)
								pMainComponent->FaderorOtherFlag =0;
							this-> MidiLayerNum = 282;
							SetCurrentCustomBT(pCustomImageButton4);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton4);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton5)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("Note") == 0 || EC2Bt[i].BT2->getButtonText().compare("Pitch") == 0)
								pMainComponent->FaderorOtherFlag =0;
							this-> MidiLayerNum = 290;
							SetCurrentCustomBT(pCustomImageButton5);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton5);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton6)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("Note") == 0 || EC2Bt[i].BT2->getButtonText().compare("Pitch") == 0)
								pMainComponent->FaderorOtherFlag =0;
							this-> MidiLayerNum = 298;
							SetCurrentCustomBT(pCustomImageButton6);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton6);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton7)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("Note") == 0 || EC2Bt[i].BT2->getButtonText().compare("Pitch") == 0)
								pMainComponent->FaderorOtherFlag =0;
							this-> MidiLayerNum = 306;
							SetCurrentCustomBT(pCustomImageButton7);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton7);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton8)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("Note") == 0 || EC2Bt[i].BT2->getButtonText().compare("Pitch") == 0)
								pMainComponent->FaderorOtherFlag =0;
							this-> MidiLayerNum = 314;
							SetCurrentCustomBT(pCustomImageButton8);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton8);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton9)
						{
							this-> MidiLayerNum = 259;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton9);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton9);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton10)
						{
							this-> MidiLayerNum = 267;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton10);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton10);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton11)
						{
							this-> MidiLayerNum = 275;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton11);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton11);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton12)
						{
							this-> MidiLayerNum = 283;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton12);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton12);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton13)
						{
							this-> MidiLayerNum = 291;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton13);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton13);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton14)
						{
							this-> MidiLayerNum = 299;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton14);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton14);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton15)
						{
							this-> MidiLayerNum = 307;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton15);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton15);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton16)
						{
							this-> MidiLayerNum = 315;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton16);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton16);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton17)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("CC")==0)
								pMainComponent->FaderorOtherFlag = 2;
							else
								pMainComponent->FaderorOtherFlag = 0;
							this-> MidiLayerNum = 194;
							SetCurrentCustomBT(pCustomImageButton17);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton17);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton18)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("CC")==0)
								pMainComponent->FaderorOtherFlag = 2;
							else
								pMainComponent->FaderorOtherFlag = 0;
							this-> MidiLayerNum = 202;
							SetCurrentCustomBT(pCustomImageButton18);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton18);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton19)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("CC")==0)
								pMainComponent->FaderorOtherFlag = 2;
							else
								pMainComponent->FaderorOtherFlag = 0;
							this-> MidiLayerNum = 210;
							SetCurrentCustomBT(pCustomImageButton19);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton19);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton20)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("CC")==0)
								pMainComponent->FaderorOtherFlag = 2;
							else
								pMainComponent->FaderorOtherFlag = 0;
							this-> MidiLayerNum = 218;
							SetCurrentCustomBT(pCustomImageButton20);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton20);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton21)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("CC")==0)
								pMainComponent->FaderorOtherFlag = 2;
							else
								pMainComponent->FaderorOtherFlag = 0;
							this-> MidiLayerNum = 226;
							SetCurrentCustomBT(pCustomImageButton21);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton21);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton22)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("CC")==0)
								pMainComponent->FaderorOtherFlag = 2;
							else
								pMainComponent->FaderorOtherFlag = 0;
							this-> MidiLayerNum = 234;
							SetCurrentCustomBT(pCustomImageButton22);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton22);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton23)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("CC")==0)
								pMainComponent->FaderorOtherFlag = 2;
							else
								pMainComponent->FaderorOtherFlag = 0;
							this-> MidiLayerNum = 242;
							SetCurrentCustomBT(pCustomImageButton23);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton23);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton24)
						{
							if(EC2Bt[i].BT2->getButtonText().compare("CC")==0)
								pMainComponent->FaderorOtherFlag = 2;
							else
								pMainComponent->FaderorOtherFlag = 0;
							this-> MidiLayerNum = 250;
							SetCurrentCustomBT(pCustomImageButton24);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton24);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton25)
						{
							this-> MidiLayerNum = 195;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton25);

							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton25);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton26)
						{
							this-> MidiLayerNum = 203;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton26);

							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton26);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton27)
						{
							this-> MidiLayerNum = 211;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton27);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton27);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton28)
						{
							this-> MidiLayerNum = 219;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton28);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton28);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
						else if (buttonThatWasClicked == pCustomImageButton29)
						{
							this-> MidiLayerNum = 227;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton29);
							pViewPortComponent = new ViewPortComponent();
							//CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
							MyCallOutBox(pViewPortComponent,pCustomImageButton29);
							//pCustomImageButton1->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton30)
						{
							this-> MidiLayerNum = 235;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton30);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton30);
							//pCustomImageButton2->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton31)
						{
							this-> MidiLayerNum = 243;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton31);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton31);
							//pCustomImageButton3->setToggleState(1,dontSendNotification);
						}
						else if(buttonThatWasClicked == pCustomImageButton32)
						{
							this-> MidiLayerNum = 251;
							pMainComponent->FaderorOtherFlag =0;
							SetCurrentCustomBT(pCustomImageButton32);
							pViewPortComponent = new ViewPortComponent();

							MyCallOutBox(pViewPortComponent,pCustomImageButton32);
							//pCustomImageButton4->setToggleState(1,dontSendNotification);
						}
					}
				}
			}
		}
	}

    for (int i = 0; i < 16; i++)
    {
        if (buttonThatWasClicked == MSB[i])
        {
            if (EC2Bt[i].BT7 == MSB[i])
            {
                if (EC2Bt[i].BT2->getButtonText().compare("Program") == 0 /*|| EMBt[i].BT2->getButtonText().compare("Pitch") == 0*/)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 197 + 8 * i;
                    SetCurrentCustomBT(MSB[i]);
                    pViewPortComponent = new ViewPortComponent();
                    MyCallOutBox(pViewPortComponent, MSB[i]);
                }
            }
        }
        else if (buttonThatWasClicked == LSB[i])
        {
            if (EC2Bt[i].BT8 == LSB[i])
            {
                if (EC2Bt[i].BT2->getButtonText().compare("Program") == 0)
                {
                    pMainComponent->FaderorOtherFlag = 0;
                    this->MidiLayerNum = 198 + 8 * i;
                    SetCurrentCustomBT(LSB[i]);
                    pViewPortComponent = new ViewPortComponent();
                    MyCallOutBox(pViewPortComponent, LSB[i]);
                }
            }
        }
    }
}

void EncodersCompact9To16Component::CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged)
{
    Load_or_SaveFlag =1;
}

void EncodersCompact9To16Component::MyCallOutBox(Component *p,Button* buttonThatWasClicked)
{
    CallOutBox::launchAsynchronously(p, buttonThatWasClicked->getScreenBounds(), nullptr);

}

 void EncodersCompact9To16Component:: SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT = currentbuttonThatWasClicked;
 }


 CustomImageButton* EncodersCompact9To16Component:: GetCurrentCustomBT()
 {
     return CurrentCustomBT;
 }

 void EncodersCompact9To16Component::setCustomBTtoggle(bool s)
 {
     CurrentCustomBT->setState(Button::buttonOver);
     //CurrentCustomBT->setToggleState(s,dontSendNotification);
 }

  void EncodersCompact9To16Component::SetNO_BT(Button* buttonThatWasClicked)
 {
     NO_BT = buttonThatWasClicked;
 }
 Button* EncodersCompact9To16Component::GetNO_BT()
 {
    return NO_BT;
 }
  int EncodersCompact9To16Component::ConventNO_BTtoInt(String JK)
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

 int EncodersCompact9To16Component::GetNum()
 {
    return num;
 }

 void EncodersCompact9To16Component::GetCustomBtID()
 {
	for(int i=0;i<16;i++)
	 {
		if (!(EC2Bt[i].BT1->getButtonText().compare("Global") == 0) && !(EC2Bt[i].BT1->getButtonText().compare("Off") == 0))
            ConstMidiLayerMessage[191 + 0 + i * 8] = (unsigned char)(EC2Bt[i].BT1->getButtonText().getIntValue() - 1) * 0x01;

        if (EC2Bt[i].BT4->getButtonText().compare("Dec/-1") == 0)
            ConstMidiLayerMessage[191 + 3 + i * 8] = 0x80;
        else if (EC2Bt[i].BT4->getButtonText().compare("Inc/+1") == 0)
            ConstMidiLayerMessage[191 + 3 + i * 8] = 0x81;
		else if (EC2Bt[i].BT4->getButtonText().compare("Relative1") == 0)
            ConstMidiLayerMessage[191 + 3 + i * 8] = 0x82;
		else if (EC2Bt[i].BT4->getButtonText().compare("Relative2") == 0)
            ConstMidiLayerMessage[191 + 3 + i * 8] = 0x83;
		else if (EC2Bt[i].BT4->getButtonText().compare("Relative3") == 0)
            ConstMidiLayerMessage[191 + 3 + i * 8] = 0x84;
        else if (!(EC2Bt[i].BT4->getButtonText().compare("-") == 0))
            ConstMidiLayerMessage[191 + 3 + i * 8] = (unsigned char)(EC2Bt[i].BT4->getButtonText().getIntValue()) * 0x01;

        if (!(EC2Bt[i].BT5->getButtonText().compare("-") == 0))
            ConstMidiLayerMessage[191 + 4 + i * 8] = (unsigned char)(EC2Bt[i].BT5->getButtonText().getIntValue()) * 0x01;

        if (ConstMidiLayerMessage[191 + 1 + i * 8] == 0x03){
            ConstMidiLayerMessage[191 + 6 + i * 8] = (unsigned char)(EC2Bt[i].BT7->getButtonText().getIntValue()) * 0x01;
            ConstMidiLayerMessage[191 + 7 + i * 8] = (unsigned char)(EC2Bt[i].BT8->getButtonText().getIntValue()) * 0x01;
        }
	 }
 }

 void EncodersCompact9To16Component::SetAllButtonState(bool s)
 {
	for(int i = 0;i<16;i++)
	{
		EC2Bt[i].BT1 ->setEnabled(s);
		EC2Bt[i].BT2 ->setEnabled(s);
		EC2Bt[i].BT3 ->setEnabled(s);
		EC2Bt[i].BT4 ->setEnabled(s);
		EC2Bt[i].BT5 ->setEnabled(s);
		EC2Bt[i].BT6 ->setEnabled(s);
		EC2Bt[i].BT7 ->setEnabled(s);
		EC2Bt[i].BT8 ->setEnabled(s);
	}
 }

void EncodersCompact9To16Component:: MakeButtonPointToBtGroup()
{
    EC2Bt[0].BT1 = pfader9;
    EC2Bt[0].BT2 = ECOT_TY_EN9;
    EC2Bt[0].BT3 = ECOT_NO_EN9;
    EC2Bt[0].BT4 = pCustomImageButton17;
    EC2Bt[0].BT5 = pCustomImageButton25;
    EC2Bt[0].BT6 = ECO_LR_EN10;
	EC2Bt[0].BT7 = MSB[0];
    EC2Bt[0].BT8 = LSB[0];

    EC2Bt[1].BT1 = pfader10;
    EC2Bt[1].BT2 = ECOT_TY_EN10;
    EC2Bt[1].BT3 = ECOT_NO_EN10;
    EC2Bt[1].BT4 = pCustomImageButton18;
    EC2Bt[1].BT5 = pCustomImageButton26;
    EC2Bt[1].BT6 = ECO_LR_EN11;
	EC2Bt[1].BT7 = MSB[1];
    EC2Bt[1].BT8 = LSB[1];

    EC2Bt[2].BT1 = pfader11;
    EC2Bt[2].BT2 = ECOT_TY_EN11;
    EC2Bt[2].BT3 = ECOT_NO_EN11;
    EC2Bt[2].BT4 = pCustomImageButton19;
    EC2Bt[2].BT5 = pCustomImageButton27;
    EC2Bt[2].BT6 = ECO_LR_EN12;
	EC2Bt[2].BT7 = MSB[2];
    EC2Bt[2].BT8 = LSB[2];

    EC2Bt[3].BT1 = pfader12;
    EC2Bt[3].BT2 = ECOT_TY_EN12;
    EC2Bt[3].BT3 = ECOT_NO_EN12;
    EC2Bt[3].BT4 = pCustomImageButton20;
    EC2Bt[3].BT5 = pCustomImageButton28;
    EC2Bt[3].BT6 = ECO_LR_EN13;
	EC2Bt[3].BT7 = MSB[3];
    EC2Bt[3].BT8 = LSB[3];

    EC2Bt[4].BT1 = pfader13;
    EC2Bt[4].BT2 = ECOT_TY_EN13;
    EC2Bt[4].BT3 = ECOT_NO_EN13;
    EC2Bt[4].BT4 = pCustomImageButton21;
    EC2Bt[4].BT5 = pCustomImageButton29;
    EC2Bt[4].BT6 = ECO_LR_EN14;
	EC2Bt[4].BT7 = MSB[4];
    EC2Bt[4].BT8 = LSB[4];

    EC2Bt[5].BT1 = pfader14;
    EC2Bt[5].BT2 = ECOT_TY_EN14;
    EC2Bt[5].BT3 = ECOT_NO_EN14;
    EC2Bt[5].BT4 = pCustomImageButton22;
    EC2Bt[5].BT5 = pCustomImageButton30;
    EC2Bt[5].BT6 = ECO_LR_EN15;
	EC2Bt[5].BT7 = MSB[5];
    EC2Bt[5].BT8 = LSB[5];

    EC2Bt[6].BT1 = pfader15;
    EC2Bt[6].BT2 = ECOT_TY_EN15;
    EC2Bt[6].BT3 = ECOT_NO_EN15;
    EC2Bt[6].BT4 = pCustomImageButton23;
    EC2Bt[6].BT5 = pCustomImageButton31;
    EC2Bt[6].BT6 = ECO_LR_EN16;
	EC2Bt[6].BT7 = MSB[6];
    EC2Bt[6].BT8 = LSB[6];

    EC2Bt[7].BT1 = pfader16;
    EC2Bt[7].BT2 = ECOT_TY_EN16;
    EC2Bt[7].BT3 = ECOT_NO_EN16;
    EC2Bt[7].BT4 = pCustomImageButton24;
    EC2Bt[7].BT5 = pCustomImageButton32;
    EC2Bt[7].BT6 = ECO_LR_EN17;
	EC2Bt[7].BT7 = MSB[7];
    EC2Bt[7].BT8 = LSB[7];

    EC2Bt[8].BT1 = pfader1;
    EC2Bt[8].BT2 = ECO_TY_EN9;
    EC2Bt[8].BT3 = ECOP_NO_EN9;
    EC2Bt[8].BT4 = pCustomImageButton1;
    EC2Bt[8].BT5 = pCustomImageButton9;
    EC2Bt[8].BT6 = ECO_BEH_EN9;
	EC2Bt[8].BT7 = MSB[8];
    EC2Bt[8].BT8 = LSB[8];

    EC2Bt[9].BT1 = pfader2;
    EC2Bt[9].BT2 = ECO_TY_EN10;
    EC2Bt[9].BT3 = ECOP_NO_EN10;
    EC2Bt[9].BT4 = pCustomImageButton2;
    EC2Bt[9].BT5 = pCustomImageButton10;
    EC2Bt[9].BT6 = ECO_BEH_EN2;
	EC2Bt[9].BT7 = MSB[9];
    EC2Bt[9].BT8 = LSB[9];

    EC2Bt[10].BT1 = pfader3;
    EC2Bt[10].BT2 = ECO_TY_EN11;
    EC2Bt[10].BT3 = ECOP_NO_EN11;
    EC2Bt[10].BT4 = pCustomImageButton3;
    EC2Bt[10].BT5 = pCustomImageButton11;
    EC2Bt[10].BT6 = ECO_BEH_EN3;
	EC2Bt[10].BT7 = MSB[10];
    EC2Bt[10].BT8 = LSB[10];

    EC2Bt[11].BT1 = pfader4;
    EC2Bt[11].BT2 = ECO_TY_EN12;
    EC2Bt[11].BT3 = ECOP_NO_EN12;
    EC2Bt[11].BT4 = pCustomImageButton4;
    EC2Bt[11].BT5 = pCustomImageButton12;
    EC2Bt[11].BT6 = ECO_BEH_EN4;
	EC2Bt[11].BT7 = MSB[11];
    EC2Bt[11].BT8 = LSB[11];

    EC2Bt[12].BT1 = pfader5;
    EC2Bt[12].BT2 = ECO_TY_EN13;
    EC2Bt[12].BT3 = ECOP_NO_EN13;
    EC2Bt[12].BT4 = pCustomImageButton5;
    EC2Bt[12].BT5 = pCustomImageButton13;
    EC2Bt[12].BT6 = ECO_BEH_EN5;
	EC2Bt[12].BT7 = MSB[12];
    EC2Bt[12].BT8 = LSB[12];

    EC2Bt[13].BT1 = pfader6;
    EC2Bt[13].BT2 = ECO_TY_EN14;
    EC2Bt[13].BT3 = ECOP_NO_EN14;
    EC2Bt[13].BT4 = pCustomImageButton6;
    EC2Bt[13].BT5 = pCustomImageButton14;
    EC2Bt[13].BT6 = ECO_BEH_EN6;
	EC2Bt[13].BT7 = MSB[13];
    EC2Bt[13].BT8 = LSB[13];

    EC2Bt[14].BT1 = pfader7;
    EC2Bt[14].BT2 = ECO_TY_EN15;
    EC2Bt[14].BT3 = ECOP_NO_EN15;
    EC2Bt[14].BT4 = pCustomImageButton7;
    EC2Bt[14].BT5 = pCustomImageButton15;
    EC2Bt[14].BT6 = ECO_BEH_EN7;
	EC2Bt[14].BT7 = MSB[14];
    EC2Bt[14].BT8 = LSB[14];

    EC2Bt[15].BT1 = pfader8;
    EC2Bt[15].BT2 = ECO_TY_EN16;
    EC2Bt[15].BT3 = ECOP_NO_EN16;
    EC2Bt[15].BT4 = pCustomImageButton8;
    EC2Bt[15].BT5 = pCustomImageButton16;
    EC2Bt[15].BT6 = ECO_BEH_EN8;
	EC2Bt[15].BT7 = MSB[15];
    EC2Bt[15].BT8 = LSB[15];
}


void EncodersCompact9To16Component::UpdateEncode9TO16Bt(int s)
{
   for (int i = 0; i<8; i++)  //encoder turn 
     {
         //EMBt[i].BT1->setButtonText(String(MiniConstMidiLayerMessage[s + 6 * i] + 1));
         if (ConstMidiLayerMessage[s + 8 * i] == 17*0x01)       EC2Bt[i].BT1->setButtonText("Global");
         else if (ConstMidiLayerMessage[s + 8 * i] == 18 * 0x01){  
			if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == ConstMidiLayerMessage[s + 8 * i] )
				EC2Bt[i].BT1->setButtonText("Off*");
			else			
				EC2Bt[i].BT1->setButtonText("Off");
		 }
		 else{
			if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == ConstMidiLayerMessage[s + 8 * i] )
				EC2Bt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i]+0x01)+"*");
			else
				EC2Bt[i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i]+0x01));
		 }

         if (ConstMidiLayerMessage[s + 8 * i + 1] == 0) { EC2Bt[i].BT2->setButtonText("CC");           EC2Bt[i].BT3->setButtonText("CC" + String(ConstMidiLayerMessage[s + 8 * i + 2])); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x01) { EC2Bt[i].BT2->setButtonText("Note");        EC2Bt[i].BT3->setButtonText(Midimusic[ConstMidiLayerMessage[s + 8 * i + 2]]); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x02) { EC2Bt[i].BT2->setButtonText("Pitch");        EC2Bt[i].BT3->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[s + 8 * i + 2 ]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x03) { EC2Bt[i].BT2->setButtonText("Program");   EC2Bt[i].BT3->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[s + 8 * i + 2]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x04) { EC2Bt[i].BT2->setButtonText("MMC");       EC2Bt[i].BT3->setButtonText(String(MMC_Functions_e[ConstMidiLayerMessage[s + 8 * i + 2]])); }

         if (/*MiniConstMidiLayerMessage[s + 8 * i + 1] != 0x02 &&*/ ConstMidiLayerMessage[s + 8 * i + 1] != 0x04)
         {
             if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80)             EC2Bt[i].BT4->setButtonText("Dec/-1");
             else if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x81)             EC2Bt[i].BT4->setButtonText("Inc/+1");
			 else if(ConstMidiLayerMessage[s + 8 * i + 3] == 0x82)
			 {
				 if (ConstMidiLayerMessage[s + 8 * i + 1] == 0)             
					EC2Bt[i].BT4->setButtonText("Relative1");
				 else{ 
					EC2Bt[i].BT4->setButtonText("0");
					ConstMidiLayerMessage[s + 8 * i + 3] =0;
				}
			 }
			 else if(ConstMidiLayerMessage[s + 8 * i + 3] == 0x83)
			 {
				 if (ConstMidiLayerMessage[s + 8 * i + 1] == 0)             
					EC2Bt[i].BT4->setButtonText("Relative2");
				 else{ 
					EC2Bt[i].BT4->setButtonText("0");
					ConstMidiLayerMessage[s + 8 * i + 3] =0;
				}
			 }
			 else if(ConstMidiLayerMessage[s + 8 * i + 3] == 0x84)
			 {
				 if (ConstMidiLayerMessage[s + 8 * i + 1] == 0)             
					EC2Bt[i].BT4->setButtonText("Relative3");
				 else{ 
					EC2Bt[i].BT4->setButtonText("0");
					ConstMidiLayerMessage[s + 8 * i + 3] =0;
				}
			 }
             else  EC2Bt[i].BT4->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 3]));
			 
             if (ConstMidiLayerMessage[s + 8 * i + 3] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x81 
				 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x82 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x83 || ConstMidiLayerMessage[s + 8 * i + 3] == 0x84)
                 EC2Bt[i].BT5->setButtonText("-");
             else
             {
                 if (ConstMidiLayerMessage[s + 8 * i + 4] == 0x80)             EC2Bt[i].BT5->setButtonText("Dec/-1");
                 else if (ConstMidiLayerMessage[s + 8 * i + 4] == 0x81)             EC2Bt[i].BT5->setButtonText("Inc/+1");
				 
                 else                                                       EC2Bt[i].BT5->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 4]));
             }

             if (ConstMidiLayerMessage[s + 8 * i + 5] == 0x00)            EC2Bt[i].BT6->setButtonText("Single");
             else if (ConstMidiLayerMessage[s + 8 * i + 5] == 0x01)      EC2Bt[i].BT6->setButtonText("Pan");
             else if (ConstMidiLayerMessage[s + 8 * i + 5] == 0x02)      EC2Bt[i].BT6->setButtonText("Fan");
             else if (ConstMidiLayerMessage[s + 8 * i + 5] == 0x03)      EC2Bt[i].BT6->setButtonText("Spread");
             else if (ConstMidiLayerMessage[s + 8 * i + 5] == 0x04)      EC2Bt[i].BT6->setButtonText("Trim");
         }
         else{
             EC2Bt[i].BT4->setButtonText("-");
             EC2Bt[i].BT5->setButtonText("-");
             EC2Bt[i].BT6->setButtonText("-");
         }

         if (ConstMidiLayerMessage[s + 8 * i + 1] == 0x03 /*|| MiniConstMidiLayerMessage[s + 8 * i + 1] == 0x02*/) {
             EC2Bt[i].BT7->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 6]));
             EC2Bt[i].BT8->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 7]));
         }
         else{
             EC2Bt[i].BT7->setButtonText("-");
             EC2Bt[i].BT8->setButtonText("-");
         }
     }
     for (int i = 0; i<8; i++)   //encoder push
     {
         //EMBt[8 + i].BT1->setButtonText(String(MiniConstMidiLayerMessage[s + 6 * i + 48] + 1));
         if (ConstMidiLayerMessage[s + 8 * i + 64] == 17 * 0x01)       EC2Bt[8 + i].BT1->setButtonText("Global");
         else if (ConstMidiLayerMessage[s + 8 * i + 64] == 18 * 0x01){  
			if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == ConstMidiLayerMessage[s + 8 * i + 64] )
				EC2Bt[8 + i].BT1->setButtonText("Off*");
			else			
				EC2Bt[8 + i].BT1->setButtonText("Off");
		 }
		 else{
			if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == ConstMidiLayerMessage[s + 8 * i + 64] )
				EC2Bt[8 + i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 64]+0x01)+"*");
			else
				EC2Bt[8 + i].BT1->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 64]+0x01));
		 }

         if (ConstMidiLayerMessage[s + 8 * i + 1 + 64] == 0) { EC2Bt[8 + i].BT2->setButtonText("CC");           EC2Bt[8 + i].BT3->setButtonText("CC" + String(ConstMidiLayerMessage[s + 8 * i + 2 + 64])); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1 + 64] == 0x01) { EC2Bt[8 + i].BT2->setButtonText("Note");        EC2Bt[8 + i].BT3->setButtonText(Midimusic[ConstMidiLayerMessage[s + 8 * i + 2 + 64]]);}
         else if (ConstMidiLayerMessage[s + 8 * i + 1 + 64] == 0x02) { EC2Bt[8 + i].BT2->setButtonText("Pitch");        EC2Bt[8 + i].BT3->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[s + 8 * i + 2 + 64]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1 + 64] == 0x03) { EC2Bt[8 + i].BT2->setButtonText("Program");   EC2Bt[8 + i].BT3->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[s + 8 * i + 2 + 64]])*/"-"); }
         else if (ConstMidiLayerMessage[s + 8 * i + 1 + 64] == 0x04) { EC2Bt[8 + i].BT2->setButtonText("MMC");       EC2Bt[8 + i].BT3->setButtonText(String(MMC_Functions_e[ConstMidiLayerMessage[s + 8 * i + 2 + 64]])); }


         if (/*MiniConstMidiLayerMessage[s + 8 * i + 1 + 64] != 0x02 &&*/ ConstMidiLayerMessage[s + 8 * i + 1 + 64] != 0x04)
         { 
             if (ConstMidiLayerMessage[s + 8 * i + 3 + 64] == 0x80)
			 {	 
				 if(ConstMidiLayerMessage[s + 8 * i + 1 + 64] != 0x01 && ConstMidiLayerMessage[s + 8 * i + 1 + 64] != 0x02)
					EC2Bt[8 + i].BT4->setButtonText("Dec/-1");  
				 else{
					 EC2Bt[8 + i].BT4->setButtonText("0");  ConstMidiLayerMessage[s + 8 * i + 3 + 64]= 0;}
			 }
             else if (ConstMidiLayerMessage[s + 8 * i + 3 + 64] == 0x81)  
			 {
				 if(ConstMidiLayerMessage[s + 8 * i + 1 + 64] != 0x01 && ConstMidiLayerMessage[s + 8 * i + 1 + 64] != 0x02)
					EC2Bt[8 + i].BT4->setButtonText("Inc/+1");
				 else{
					 EC2Bt[8 + i].BT4->setButtonText("0");  ConstMidiLayerMessage[s + 8 * i + 3 + 64]= 0;}
			 }
			 //else if (ConstMidiLayerMessage[s + 8 * i + 3 + 64] == 0x82)             EC2Bt[8 + i].BT4->setButtonText("Relative");
             else EC2Bt[8 + i].BT4->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 3 + 64]));
             
             if (ConstMidiLayerMessage[s + 8 * i + 3 + 64] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3 + 64] == 0x81 || ConstMidiLayerMessage[s + 8 * i + 1 + 64] == 0x03)
                 EC2Bt[8 + i].BT5->setButtonText("-");
             else
             {
                 if (ConstMidiLayerMessage[s + 8 * i + 4 + 64] == 0x80)             EC2Bt[8 + i].BT5->setButtonText("Dec/-1");
                 else if (ConstMidiLayerMessage[s + 8 * i + 4 + 48] == 0x81)             EC2Bt[8 + i].BT5->setButtonText("Inc/+1");
                 else                                                                                            EC2Bt[8 + i].BT5->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 4 + 64]));
             }

			 if(ConstMidiLayerMessage[s + 8 * i + 1 + 64] == 0x03){EC2Bt[8 + i].BT6->setButtonText("Momentary"); ConstMidiLayerMessage[s + 8 * i + 5 + 64] = 0;}
			 else if(ConstMidiLayerMessage[s + 8 * i + 1 + 64] == 0x00 && (ConstMidiLayerMessage[s + 8 * i + 3 + 64] == 0x80 || ConstMidiLayerMessage[s + 8 * i + 3 + 64] == 0x81))
			 {
				 EC2Bt[8 + i].BT6->setButtonText("Momentary");
				 ConstMidiLayerMessage[s + 8 * i + 5 + 64] = 0;
			 }
			 else 
			 {
				if (ConstMidiLayerMessage[s + 8 * i + 5 + 64] == 0x00) EC2Bt[8 + i].BT6->setButtonText("Momentary");
				else EC2Bt[8 + i].BT6->setButtonText("Toggle");
			 }
         }
         else{
             EC2Bt[8 + i].BT4->setButtonText("-");
             EC2Bt[8 + i].BT5->setButtonText("-");
             EC2Bt[8 + i].BT6->setButtonText("-");
         }

         if (ConstMidiLayerMessage[s + 8 * i + 64 + 1] == 0x03 /*|| MiniConstMidiLayerMessage[s + 8 * i + 64 + 1] == 0x02*/) {
             EC2Bt[8 + i].BT7->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 6 + 64]));
             EC2Bt[8 + i].BT8->setButtonText(String(ConstMidiLayerMessage[s + 8 * i + 7 + 64]));
         }
         else{
             EC2Bt[8 + i].BT7->setButtonText("-");
             EC2Bt[8 + i].BT8->setButtonText("-");
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

<JUCER_COMPONENT documentType="Component" className="EncodersCompact9To16Component"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="664" initialHeight="500">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="23 32 613 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="23 281 613 2" fill="solid: ffffab00" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="6daef998c1833eb4" memberName="label_MOVE"
         virtualName="" explicitFocusOrder="0" pos="24 5 64 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="PUSH" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
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
         edTextCol="ff000000" edBkgCol="0" labelText="EN 9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="158fab2e75ce057e" memberName="label_FD2"
         virtualName="" explicitFocusOrder="0" pos="200 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 10" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="59784a12467c2edd" memberName="label_FD3"
         virtualName="" explicitFocusOrder="0" pos="264 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 11" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8c4b98f9bfb3cc4e" memberName="label_FD4"
         virtualName="" explicitFocusOrder="0" pos="328 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 12" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d29c323ead8312a0" memberName="label_FD5"
         virtualName="" explicitFocusOrder="0" pos="392 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 13" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5012a250ae45e10c" memberName="label_FD6"
         virtualName="" explicitFocusOrder="0" pos="456 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 14" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="262b90710eed34aa" memberName="label_FD7"
         virtualName="" explicitFocusOrder="0" pos="520 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 15" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="da92fbab385df26" memberName="label_FD8"
         virtualName="" explicitFocusOrder="0" pos="584 5 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 16" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
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
  <LABEL name="new label" id="8a366fe07a93f676" memberName="label_MOVE2"
         virtualName="" explicitFocusOrder="0" pos="24 254 64 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TURN" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9e4ac02de34debb2" memberName="label_CHANNEL2"
         virtualName="" explicitFocusOrder="0" pos="24 284 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="CHANNEL" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="91463b65e6b8d89a" memberName="label_TYPE2"
         virtualName="" explicitFocusOrder="0" pos="24 310 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="TYPE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="31a5c7eeeb55e1a8" memberName="label_NO2"
         virtualName="" explicitFocusOrder="0" pos="24 336 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="NO." editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="6dec5095a7017262" memberName="label_MIN2"
         virtualName="" explicitFocusOrder="0" pos="24 362 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MIN VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e50e10a7624e1071" memberName="label_MAX2"
         virtualName="" explicitFocusOrder="0" pos="24 388 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MAX VALUE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="95e7d520dbcfccf0" memberName="label_FD9"
         virtualName="" explicitFocusOrder="0" pos="136 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 9" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9c906bcb6626fecb" memberName="label_FD10"
         virtualName="" explicitFocusOrder="0" pos="200 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 10" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7552a78c7d3a221d" memberName="label_FD11"
         virtualName="" explicitFocusOrder="0" pos="264 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN11" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c7ffd92c1e186bf1" memberName="label_FD12"
         virtualName="" explicitFocusOrder="0" pos="328 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 12" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9b776e59f0f9a6d2" memberName="label_FD13"
         virtualName="" explicitFocusOrder="0" pos="392 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 13" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="20d924c17cf9940c" memberName="label_FD14"
         virtualName="" explicitFocusOrder="0" pos="456 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 14" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7ad6f5666ecb2695" memberName="label_FD15"
         virtualName="" explicitFocusOrder="0" pos="520 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 15" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f79c1ca89a74c7e9" memberName="label_FD16"
         virtualName="" explicitFocusOrder="0" pos="584 254 48 24" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="EN 16" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="16" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b05b7d930e054466" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="24 310 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9673a36d83b04bed" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="25 336 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b47ee2a61f1174cc" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="24 362 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ecd6228c7f31b245" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="24 388 600 1" bkgCol="ff444444" edTextCol="ff000000"
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
  <LABEL name="new label" id="43e32c3b8d4508a2" memberName="label_MAX4"
         virtualName="" explicitFocusOrder="0" pos="24 414 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LED RING" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="60d7ba25e2476acf" memberName="label13" virtualName=""
         explicitFocusOrder="0" pos="24 414 600 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="7b6bfda123f7edce" memberName="ENCO_CH_EN9"
              virtualName="" explicitFocusOrder="0" pos="121 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="39db22d7bb205f32" memberName="ENCO_CH_EN10"
              virtualName="" explicitFocusOrder="0" pos="185 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="2"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b890649a1c92675d" memberName="ENCO_CH_EN11"
              virtualName="" explicitFocusOrder="0" pos="250 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="3"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="3be6d2f59614cfb6" memberName="ENCO_CH_EN12"
              virtualName="" explicitFocusOrder="0" pos="314 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="4"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="3608b0c761d70a8f" memberName="ENCO_CH_EN13"
              virtualName="" explicitFocusOrder="0" pos="378 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="5"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="3ed789ef4a25403d" memberName="ENCO_CH_EN14"
              virtualName="" explicitFocusOrder="0" pos="442 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="6"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="c4cfeb2fbe030bc6" memberName="ENCO_CH_EN15"
              virtualName="" explicitFocusOrder="0" pos="506 34 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="7"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="fd0924331d10ae93" memberName="ENCO_CH_EN16"
              virtualName="" explicitFocusOrder="0" pos="570 34 64 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="8"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5a38375d9474f4" memberName="ECO_TY_EN9"
              virtualName="" explicitFocusOrder="0" pos="121 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="f63056473a391456" memberName="ECO_TY_EN10"
              virtualName="" explicitFocusOrder="0" pos="185 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="311f2bcf94772497" memberName="ECO_TY_EN11"
              virtualName="" explicitFocusOrder="0" pos="250 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="2f2197c3430b67de" memberName="ECO_TY_EN12"
              virtualName="" explicitFocusOrder="0" pos="314 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pitch"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="12c8ddba23243e9" memberName="ECO_TY_EN13"
              virtualName="" explicitFocusOrder="0" pos="378 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="3657c2aec49eea99" memberName="ECO_TY_EN14"
              virtualName="" explicitFocusOrder="0" pos="442 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d98f33553b1f72c4" memberName="ECO_TY_EN15"
              virtualName="" explicitFocusOrder="0" pos="506 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b7e3034f0c292a49" memberName="ECO_TY_EN16"
              virtualName="" explicitFocusOrder="0" pos="570 62 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6d140b501739d7d6" memberName="ECO_BEH_EN9"
              virtualName="" explicitFocusOrder="0" pos="121 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="77d4b1fd7a9da92b" memberName="ECO_BEH_EN2"
              virtualName="" explicitFocusOrder="0" pos="185 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d274d480eae3b603" memberName="ECO_BEH_EN3"
              virtualName="" explicitFocusOrder="0" pos="250 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a8e16e6ff15e7b17" memberName="ECO_BEH_EN4"
              virtualName="" explicitFocusOrder="0" pos="314 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="97f95d9dde1f1d9b" memberName="ECO_BEH_EN5"
              virtualName="" explicitFocusOrder="0" pos="378 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Toggle"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="916db52bf8188f6a" memberName="ECO_BEH_EN6"
              virtualName="" explicitFocusOrder="0" pos="442 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6238da4f3e5ee682" memberName="ECO_BEH_EN7"
              virtualName="" explicitFocusOrder="0" pos="506 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e1e42956b2c037b2" memberName="ECO_BEH_EN8"
              virtualName="" explicitFocusOrder="0" pos="570 166 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Momentary"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="186e9d61216294ab" memberName="ECO_LR_EN10"
              virtualName="" explicitFocusOrder="0" pos="121 415 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Single"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="8d16e7c57b8305bd" memberName="ECO_LR_EN11"
              virtualName="" explicitFocusOrder="0" pos="185 415 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Spread"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="c2bdc7176190c1ea" memberName="ECO_LR_EN12"
              virtualName="" explicitFocusOrder="0" pos="250 415 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Fan"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="622a6182799eebbb" memberName="ECO_LR_EN13"
              virtualName="" explicitFocusOrder="0" pos="314 415 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Trim"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="59aff641d6144b92" memberName="ECO_LR_EN14"
              virtualName="" explicitFocusOrder="0" pos="378 415 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pan"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="744436b2e33491e9" memberName="ECO_LR_EN15"
              virtualName="" explicitFocusOrder="0" pos="442 415 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Fan"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="fc407ed1d3ef0f48" memberName="ECO_LR_EN16"
              virtualName="" explicitFocusOrder="0" pos="506 415 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pan"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6f52c9c160a3c576" memberName="ECO_LR_EN17"
              virtualName="" explicitFocusOrder="0" pos="570 415 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pan"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b46cc5b163ad3908" memberName="ENCOT_CH_EN9"
              virtualName="" explicitFocusOrder="0" pos="121 283 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d3208a7b2890bec3" memberName="ENCOT_CH_EN10"
              virtualName="" explicitFocusOrder="0" pos="185 283 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="2"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="b0d8693d403fdb10" memberName="ENCOT_CH_EN11"
              virtualName="" explicitFocusOrder="0" pos="250 283 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="3"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="919058d8b752bc04" memberName="ENCOT_CH_EN12"
              virtualName="" explicitFocusOrder="0" pos="314 283 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="4"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="99e041e794bd65" memberName="ENCOT_CH_EN13"
              virtualName="" explicitFocusOrder="0" pos="378 283 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="5"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="79ace2e49d778a71" memberName="ENCOT_CH_EN14"
              virtualName="" explicitFocusOrder="0" pos="442 283 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="6"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="66434f5849696210" memberName="ENCOT_CH_EN15"
              virtualName="" explicitFocusOrder="0" pos="506 283 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="7"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6ce2cb49c38d625b" memberName="ENCOT_CH_EN16"
              virtualName="" explicitFocusOrder="0" pos="570 283 64 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="8"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d520a15c36159c9d" memberName="ECOT_TY_EN9"
              virtualName="" explicitFocusOrder="0" pos="121 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6cba0998b0169d52" memberName="ECOT_TY_EN10"
              virtualName="" explicitFocusOrder="0" pos="185 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="bfd613ebb0796811" memberName="ECOT_TY_EN11"
              virtualName="" explicitFocusOrder="0" pos="250 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Note"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cd77320a7bacf5fb" memberName="ECOT_TY_EN12"
              virtualName="" explicitFocusOrder="0" pos="314 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="Pitch"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="326d0c39c28fe246" memberName="ECOT_TY_EN13"
              virtualName="" explicitFocusOrder="0" pos="378 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="fa5dc4282caab385" memberName="ECOT_TY_EN14"
              virtualName="" explicitFocusOrder="0" pos="442 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="380af546fca0876f" memberName="ECOT_TY_EN15"
              virtualName="" explicitFocusOrder="0" pos="506 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="cbde25b70aa75931" memberName="ECOT_TY_EN16"
              virtualName="" explicitFocusOrder="0" pos="570 311 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="4577a8f1ad824228" memberName="ECOP_NO_EN9"
              virtualName="" explicitFocusOrder="0" pos="121 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="513432cb1a1f1c60" memberName="ECOP_NO_EN10"
              virtualName="" explicitFocusOrder="0" pos="185 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="12724a87e954e449" memberName="ECOP_NO_EN11"
              virtualName="" explicitFocusOrder="0" pos="250 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="C0"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="ce5c6691ded7fc3a" memberName="ECOP_NO_EN12"
              virtualName="" explicitFocusOrder="0" pos="314 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="-"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="d8305ca8bf95b41e" memberName="ECOP_NO_EN13"
              virtualName="" explicitFocusOrder="0" pos="378 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="dd0bf0f7b054217a" memberName="ECOP_NO_EN14"
              virtualName="" explicitFocusOrder="0" pos="442 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a7c0e899a950999e" memberName="ECOP_NO_EN15"
              virtualName="" explicitFocusOrder="0" pos="506 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="5f79405f200f1b17" memberName="ECOP_NO_EN16"
              virtualName="" explicitFocusOrder="0" pos="570 88 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="a5fef5e90f4eada9" memberName="ECOT_NO_EN9"
              virtualName="" explicitFocusOrder="0" pos="121 337 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="e175f9f9de733077" memberName="ECOT_NO_EN10"
              virtualName="" explicitFocusOrder="0" pos="185 337 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="6bd9b274ec1ebe1e" memberName="ECOT_NO_EN11"
              virtualName="" explicitFocusOrder="0" pos="250 337 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="C0"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="1a1c8b75f8628d10" memberName="ECOT_NO_EN12"
              virtualName="" explicitFocusOrder="0" pos="314 337 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="-"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="5b0dabe04cbaa7f5" memberName="ECOT_NO_EN13"
              virtualName="" explicitFocusOrder="0" pos="378 337 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="986e3aea574a21fc" memberName="ECOT_NO_EN14"
              virtualName="" explicitFocusOrder="0" pos="442 337 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="be12eb00191c11ee" memberName="ECOT_NO_EN15"
              virtualName="" explicitFocusOrder="0" pos="506 337 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="80d8cee70910aa80" memberName="ECOT_NO_EN16"
              virtualName="" explicitFocusOrder="0" pos="570 337 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="cfecc970f802a60e" memberName="LSB1" virtualName=""
         explicitFocusOrder="0" pos="24 192 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="c96aae7277931f8" memberName="MSB1" virtualName=""
         explicitFocusOrder="0" pos="24 219 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="38f4013fb65234b3" memberName="LNMSB1" virtualName=""
         explicitFocusOrder="0" pos="24 218 613 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="92d5dfa8589af6e9" memberName="LNLSB1" virtualName=""
         explicitFocusOrder="0" pos="24 191 613 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="7271a738bd95d8d9" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="119 9 2 233" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e536671b2f934731" memberName="LSB2" virtualName=""
         explicitFocusOrder="0" pos="24 441 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="MSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="70084909de4447d4" memberName="MSB2" virtualName=""
         explicitFocusOrder="0" pos="24 469 85 26" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="LSB" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8899b1c8e101f420" memberName="LNMSB2" virtualName=""
         explicitFocusOrder="0" pos="24 468 613 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b5d1018b83de06df" memberName="LNLSB2" virtualName=""
         explicitFocusOrder="0" pos="24 440 613 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="4612bb7248b2052a" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="119 258 2 233" bkgCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="label text" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="15" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
