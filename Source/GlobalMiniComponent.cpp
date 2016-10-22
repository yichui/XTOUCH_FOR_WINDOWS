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
//[/Headers]

#include "GlobalMiniComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
GlobalMiniComponent::GlobalMiniComponent ()
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

    addAndMakeVisible (Bt_ID16 = new TextButton ("new button"));
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
    Bt_ID2->setButtonText ("X_TOUCH MINI #2");
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

    addAndMakeVisible (Bt_CH2 = new TextButton ("new button"));
    Bt_CH2->setButtonText ("CH 2");
    Bt_CH2->addListener (this);
    Bt_CH2->setColour (TextButton::buttonColourId, Colour (0xff444444));
    Bt_CH2->setColour (TextButton::buttonOnColourId, Colour (0xff444444));
    Bt_CH2->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    Bt_CH2->setColour (TextButton::textColourOffId, Colour (0xffa8a8a8));

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

    addAndMakeVisible (label14 = new Label ("new label",
                                            "MC MODE"));
    label14->setFont (Font ("Arial", 14.00f, Font::plain));
    label14->setJustificationType (Justification::centredLeft);
    label14->setEditable (false, false, false);
    label14->setColour (Label::backgroundColourId, Colour (0x00000000));
    label14->setColour (Label::textColourId, Colour (0xff9f6d25));
    label14->setColour (TextEditor::textColourId, Colours::black);
    label14->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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

    addAndMakeVisible (label23 = new Label ("new label",
                                            "CC127 Value 1"));
    label23->setFont (Font ("Arial", 14.00f, Font::plain));
    label23->setJustificationType (Justification::centredLeft);
    label23->setEditable (false, false, false);
    label23->setColour (Label::backgroundColourId, Colour (0x00000000));
    label23->setColour (Label::textColourId, Colour (0xff9f6d25));
    label23->setColour (TextEditor::textColourId, Colours::black);
    label23->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label_ID = new Label ("new label",
                                             "ID 16"));
    label_ID->setFont (Font ("Arial", 19.60f, Font::plain));
    label_ID->setJustificationType (Justification::centred);
    label_ID->setEditable (false, false, false);
    label_ID->setColour (Label::textColourId, Colour (0xffffab00));
    label_ID->setColour (TextEditor::textColourId, Colours::black);
    label_ID->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 600);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

GlobalMiniComponent::~GlobalMiniComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
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
    label3 = nullptr;
    Bt_LOAD = nullptr;
    label5 = nullptr;
    label10 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    label11 = nullptr;
    label12 = nullptr;
    label14 = nullptr;
    label16 = nullptr;
    label17 = nullptr;
    label18 = nullptr;
    label19 = nullptr;
    label20 = nullptr;
    label21 = nullptr;
    label23 = nullptr;
    label_ID = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void GlobalMiniComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xffb08328));
    g.fillRect (215, 88, 1, 20);

    g.setColour (Colour (0xffb08328));
    g.fillRect (527, 88, 1, 20);

    g.setColour (Colour (0xffb08328));
    g.fillRect (215, 108, 113, 1);

    g.setColour (Colour (0xffb08328));
    g.fillRect (415, 108, 113, 1);

    g.setColour (Colour (0xff333333));
    g.fillRect (0, 389, 680, 100);

    g.setColour (Colour (0xff9f6d25));
    g.fillRect (431, 189, 2, 178);

    g.setColour (Colour (0xff9f6d25));
    g.fillRect (431, 189, 212, 2);

    g.setColour (Colour (0xff9f6d25));
    g.fillRect (643, 189, 2, 178);

    g.setColour (Colour (0xff9f6d25));
    g.fillRect (431, 366, 214, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (0, 128, 685, 2);

    g.setColour (Colour (0xffffab00));
    g.fillRect (411, 129, 2, 260);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void GlobalMiniComponent::resized()
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
    label3->setBounds (0, 387, 664, 2);
    Bt_LOAD->setBounds (24, 56, 64, 24);
    label5->setBounds (472, 192, 150, 24);
    label10->setBounds (438, 227, 110, 24);
    label7->setBounds (438, 243, 93, 24);
    label8->setBounds (438, 260, 70, 24);
    label9->setBounds (438, 292, 82, 24);
    label11->setBounds (438, 308, 90, 24);
    label12->setBounds (437, 276, 83, 24);
    label14->setBounds (438, 324, 58, 24);
    label16->setBounds (541, 227, 67, 24);
    label17->setBounds (541, 243, 67, 24);
    label18->setBounds (541, 260, 91, 24);
    label19->setBounds (541, 292, 100, 24);
    label20->setBounds (541, 308, 83, 24);
    label21->setBounds (541, 276, 100, 24);
    label23->setBounds (541, 324, 83, 24);
    label_ID->setBounds (280, 218, 72, 32);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void GlobalMiniComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == Bt_SAVE)
    {
        //[UserButtonCode_Bt_SAVE] -- add your button handler code here..
        //[/UserButtonCode_Bt_SAVE]
    }
    else if (buttonThatWasClicked == Bt_GetA)
    {
        //[UserButtonCode_Bt_GetA] -- add your button handler code here..
        //[/UserButtonCode_Bt_GetA]
    }
    else if (buttonThatWasClicked == Bt_GetB)
    {
        //[UserButtonCode_Bt_GetB] -- add your button handler code here..
        //[/UserButtonCode_Bt_GetB]
    }
    else if (buttonThatWasClicked == Bt_DUMPA)
    {
        //[UserButtonCode_Bt_DUMPA] -- add your button handler code here..
        //[/UserButtonCode_Bt_DUMPA]
    }
    else if (buttonThatWasClicked == Bt_DUMPB)
    {
        //[UserButtonCode_Bt_DUMPB] -- add your button handler code here..
        //[/UserButtonCode_Bt_DUMPB]
    }
    else if (buttonThatWasClicked == Bt_UPDATE)
    {
        //[UserButtonCode_Bt_UPDATE] -- add your button handler code here..
        //[/UserButtonCode_Bt_UPDATE]
    }
    else if (buttonThatWasClicked == Bt_Standart)
    {
        //[UserButtonCode_Bt_Standart] -- add your button handler code here..
        //[/UserButtonCode_Bt_Standart]
    }
    else if (buttonThatWasClicked == Bt_MC)
    {
        //[UserButtonCode_Bt_MC] -- add your button handler code here..
        //[/UserButtonCode_Bt_MC]
    }
    else if (buttonThatWasClicked == Bt_ID16)
    {
        //[UserButtonCode_Bt_ID16] -- add your button handler code here..
        //[/UserButtonCode_Bt_ID16]
    }
    else if (buttonThatWasClicked == Bt_ID2)
    {
        //[UserButtonCode_Bt_ID2] -- add your button handler code here..
        //[/UserButtonCode_Bt_ID2]
    }
    else if (buttonThatWasClicked == Bt_CH2)
    {
        //[UserButtonCode_Bt_CH2] -- add your button handler code here..
        //[/UserButtonCode_Bt_CH2]
    }
    else if (buttonThatWasClicked == Bt_LOAD)
    {
        //[UserButtonCode_Bt_LOAD] -- add your button handler code here..
        //[/UserButtonCode_Bt_LOAD]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="GlobalMiniComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="800" initialHeight="600">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="215 88 1 20" fill="solid: ffb08328" hasStroke="0"/>
    <RECT pos="527 88 1 20" fill="solid: ffb08328" hasStroke="0"/>
    <RECT pos="215 108 113 1" fill="solid: ffb08328" hasStroke="0"/>
    <RECT pos="415 108 113 1" fill="solid: ffb08328" hasStroke="0"/>
    <RECT pos="0 389 680 100" fill="solid: ff333333" hasStroke="0"/>
    <RECT pos="431 189 2 178" fill="solid: ff9f6d25" hasStroke="0"/>
    <RECT pos="431 189 212 2" fill="solid: ff9f6d25" hasStroke="0"/>
    <RECT pos="643 189 2 178" fill="solid: ff9f6d25" hasStroke="0"/>
    <RECT pos="431 366 214 2" fill="solid: ff9f6d25" hasStroke="0"/>
    <RECT pos="0 128 685 2" fill="solid: ffffab00" hasStroke="0"/>
    <RECT pos="411 129 2 260" fill="solid: ffffab00" hasStroke="0"/>
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
              bgColOn="ff444444" textCol="ffffab00" textColOn="ffa8a8a8" buttonText="X_TOUCH MINI #2"
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
         explicitFocusOrder="0" pos="438 260 70 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Button LEDs" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="1ec7828ea1fea709" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="438 292 82 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Layer B Select"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b7d1d92f6eb7b6b9" memberName="label11" virtualName=""
         explicitFocusOrder="0" pos="438 308 90 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="STANDARD MODE" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d182dbfa58351224" memberName="label12" virtualName=""
         explicitFocusOrder="0" pos="437 276 83 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Layer A Select"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ccd854d409ccb58d" memberName="label14" virtualName=""
         explicitFocusOrder="0" pos="438 324 58 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="MC MODE" editableSingleClick="0"
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
         explicitFocusOrder="0" pos="541 260 91 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="NOTE 0-NOTE 38"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="d14ab3635cbce60b" memberName="label19" virtualName=""
         explicitFocusOrder="0" pos="541 292 100 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Program Change 1"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8731893e828ae1d7" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="541 308 83 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="CC127 Value 0" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="6d60787a81a2c0be" memberName="label21" virtualName=""
         explicitFocusOrder="0" pos="541 276 100 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="Program Change 0"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="e44d69bc94ee26c8" memberName="label23" virtualName=""
         explicitFocusOrder="0" pos="541 324 83 24" bkgCol="0" textCol="ff9f6d25"
         edTextCol="ff000000" edBkgCol="0" labelText="CC127 Value 1" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ac5f4fc9d2f36363" memberName="label_ID"
         virtualName="" explicitFocusOrder="0" pos="280 218 72 32" textCol="ffffab00"
         edTextCol="ff000000" edBkgCol="0" labelText="ID 16" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="19.600000000000001" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
