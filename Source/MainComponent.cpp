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
#include <windows.h>
#include "BackgroundThread.h"
#include "MidiDeviceProcess.h"
#include "XtouchDevMidiData.h"
#include "FaderMiniComponent.h"
#include "EncodersMiniComponent.h"
#include "ButtonsMiniComponent.h"
#include "ButtonsMini1To8Component.h"
#include "ButtonsMini9To16Component.h"

#include "EncodersCompact1To8Component.h"
#include "EncodersCompact9To16Component.h"

#include "ButtonsCompact1To8Component.h"
#include "ButtonsCompact9To16Component.h"
#include "ButtonsCompact17To24Component.h"
#include "ButtonsCompact25To33Component.h"
#include "ButtonsCompact34To39Component.h"
#include "GlobalCompactComponent.h"
#include "FaderTouchCompactComponent.h"

//[/Headers]

#include "MainComponent.h"
#include "FadersAndFootCompactComponent.h"
#include "EncodersCompactComponent.h"
#include "ButtonsCompactComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
MainComponent * pMainComponent = NULL;
extern MidiDeviceProcess * pMidiDeviceProcess;
extern GlobalCompactComponent *pGlobalCompactComponent;
extern FadersAndFootCompactComponent * pFadersAndFootCompactComponent ;
extern EncodersCompactComponent * pEncodersCompactComponent ;
extern ButtonsCompactComponent * pButtonsCompactComponent ;
extern FaderMiniComponent *pFaderMiniComponent;
extern EncodersMiniComponent *pEncodersMiniComponent;
extern ButtonsMiniComponent *pButtonsMiniComponent;

extern EncodersCompact1To8Component *pEncodersCompact1To8Component;
extern EncodersCompact9To16Component *pEncodersCompact9To16Component;
extern ButtonsCompact1To8Component *BC1TO8;
extern ButtonsCompact9To16Component *BC9TO16;
extern ButtonsCompact17To24Component * BC17TO24;
extern ButtonsCompact25To33Component * BC25TO33;
extern ButtonsCompact34To39Component *BC34TO39;
extern ButtonsMini1To8Component * BM1TO8;
extern ButtonsMini9To16Component * BM9TO16;
extern FaderTouchCompactComponent *pFaderTouchCompactComponent;

extern BackgroundThread * pBackgroundThread;
extern BackgroundThread2 * pBackgroundThread2;
extern TTThread3* pTTThread3;
extern bool midiopenflag;
extern unsigned char GetUsbMidiDeviceInfo_TriedTimes;
extern volatile bool ToStartThrd02;
extern volatile bool  ToStartThrd03;
extern bool tabbedComponentFlag,afterOpenThenCloseMidiFlag;
 bool EDITEDFlag = false;
 bool EDITEDFlag2 = false;
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
{
    addAndMakeVisible (tabbedComponent = new TabbedComponent (TabbedButtonBar::TabsAtTop));
    tabbedComponent->setTabBarDepth (37);
    tabbedComponent->addTab("GLOBAL  ", Colour(0xff333333), pGlobalCompactComponent = new GlobalCompactComponent(), true);
    //tabbedComponent->addTab ("FADERS+FOOT", Colour (0xff333333), new FadersAndFootCompactComponent(), true);
   // tabbedComponent->addTab ("ENCODERS", Colour (0xff333333), new EncodersCompactComponent(), true);
   // tabbedComponent->addTab ("BUTTONS", Colour (0xff333333), new ButtonsCompactComponent(), true);
    tabbedComponent->setCurrentTabIndex (0);

    addAndMakeVisible (label = new Label ("new label",
                                          "Firmware Version:"));
    label->setFont (Font ("Arial", 14.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::textColourId, Colours::white);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           "Editor Version:"));
    label2->setFont (Font ("Arial", 14.00f, Font::plain));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colours::white);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           "label text"));
    label4->setFont (Font (15.00f, Font::plain));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label5 = new Label ("new label",
                                           "label text"));
    label5->setFont (Font (15.00f, Font::plain));
    label5->setJustificationType (Justification::centredLeft);
    label5->setEditable (false, false, false);
    label5->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label5->setColour (TextEditor::textColourId, Colours::black);
    label5->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           String::empty));
    label6->setFont (Font (15.00f, Font::plain));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           String::empty));
    label3->setFont (Font (15.00f, Font::plain));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (Label::backgroundColourId, Colour (0xff333333));
    label3->setColour (TextEditor::textColourId, Colour (0xff333333));
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label7 = new Label ("new label",
                                           String::empty));
    label7->setFont (Font (15.00f, Font::plain));
    label7->setJustificationType (Justification::centredLeft);
    label7->setEditable (false, false, false);
    label7->setColour (Label::backgroundColourId, Colour (0xff333333));
    label7->setColour (TextEditor::textColourId, Colours::black);
    label7->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label8 = new Label ("new label",
                                           String::empty));
    label8->setFont (Font (15.00f, Font::plain));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (Label::backgroundColourId, Colour (0xff333333));
    label8->setColour (TextEditor::textColourId, Colour (0xff333333));
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label9 = new Label ("new label",
                                           "1.00"));
    label9->setFont (Font ("Arial", 14.00f, Font::plain));
    label9->setJustificationType (Justification::centredLeft);
    label9->setEditable (false, false, false);
    label9->setColour (Label::textColourId, Colours::white);
    label9->setColour (TextEditor::textColourId, Colours::black);
    label9->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label10 = new Label ("new label",
                                            "1.01"));
    label10->setFont (Font ("Arial", 14.00f, Font::plain));
    label10->setJustificationType (Justification::centredLeft);
    label10->setEditable (false, false, false);
    label10->setColour (Label::textColourId, Colours::white);
    label10->setColour (TextEditor::textColourId, Colours::black);
    label10->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (EDITED = new ImageButton ("new button"));
    EDITED->addListener (this);

    EDITED->setImages (false, true, true,
                       ImageCache::getFromMemory (edited_png2, edited_png2Size), 1.000f, Colour (0x00000000),
                       ImageCache::getFromMemory (edited_png2, edited_png2Size), 1.000f, Colour (0x00000000),
                       ImageCache::getFromMemory (edited2_png, edited2_pngSize), 1.000f, Colour (0x00000000));
    addAndMakeVisible (labeles = new Label ("new label",
                                            "Editor State:"));
    labeles->setFont (Font ("Arial", 14.00f, Font::plain));
    labeles->setJustificationType (Justification::centredLeft);
    labeles->setEditable (false, false, false);
    labeles->setColour (Label::textColourId, Colours::white);
    labeles->setColour (TextEditor::textColourId, Colours::black);
    labeles->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (labeles1 = new Label ("new label",
                                             "No Device"));
    labeles1->setFont (Font ("Arial", 14.00f, Font::plain));
    labeles1->setJustificationType (Justification::centredLeft);
    labeles1->setEditable (false, false, false);
    labeles1->setColour (Label::textColourId, Colours::white);
    labeles1->setColour (TextEditor::textColourId, Colours::black);
    labeles1->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (BT_NI = new Label ("new label",
                                          "My NI B4 Upper Manual"));
    BT_NI->setFont (Font (14.00f, Font::plain));
    BT_NI->setJustificationType (Justification::centred);
    BT_NI->setEditable (true, true, false);
    BT_NI->setColour (Label::backgroundColourId, Colour (0x00444444));
    BT_NI->setColour (Label::textColourId, Colour (0xffa8a8a8));
    BT_NI->setColour (Label::outlineColourId, Colour (0x00005900));
    BT_NI->setColour (TextEditor::textColourId, Colours::black);
    BT_NI->setColour (TextEditor::backgroundColourId, Colour (0xfffcf6e2));
    BT_NI->addListener (this);

    cachedImage_bbbbb_png2 = ImageCache::getFromMemory (bbbbb_png2, bbbbb_png2Size);
    cachedImage_ber_png = ImageCache::getFromMemory (ber_png, ber_pngSize);

    //[UserPreSize]
    /*GlobalCompactComponent *pGlobalCompactComponent = new GlobalCompactComponent();
    FadersAndFootCompactComponent * pFadersAndFootCompactComponentnew = new FadersAndFootCompactComponent();
    EncodersCompactComponent * pEncodersCompactComponent = new EncodersCompactComponent();
    ButtonsCompactComponent * pButtonsCompactComponent = new ButtonsCompactComponent();


    tabbedComponent->addTab ("GLOBAL  ", Colour (0xffffab00), pGlobalCompactComponent, true);
    tabbedComponent->addTab ("FADERS+FOOT", Colour (0xffffab00), pFadersAndFootCompactComponentnew, true);
    tabbedComponent->addTab ("ENCODERS", Colour (0xffffab00), pEncodersCompactComponent, true);
    tabbedComponent->addTab ("BUTTONS", Colour (0xffffab00),pButtonsCompactComponent, true);
    */

    //UpdateTabbedComponent();
	label10->setText((String(Xtouch_editor_vertion1) + "." + String(Xtouch_editor_vertion2) + String(Xtouch_editor_vertion3)), dontSendNotification);

    EDITED->setImages (false, true, true,
                       ImageCache::getFromMemory (edited2_png, edited2_pngSize), 1.000f, Colour (0x00000000),
                       Image(), 1.000f, Colour (0x00000000),
                       Image(), 1.000f, Colour (0x00000000));
    BT_NI->setText("empty",dontSendNotification);
    /*tabbedComponent->removeTab(1);
    tabbedComponent->removeTab(1);
    tabbedComponent->removeTab(1);*/

    FaderorOtherFlag = 1;    //to determine whether the "Value" memu bar contains "dev/-1" or "inc/+1"
	ThirtySecTimeNum = 0;    //the number that send SetThirtySecTime_SysExCmd_Buf on time
	ThirtySecTimeflag = 1;	 //the flag that send SetThirtySecTime_SysExCmd_Buf on time
    MidiInWriteBufferCnt = 0; // receive midi-in 's message mark
    tabbedComponentFlag = 1;  //reload tabbedComponent mark
    afterOpenThenCloseMidiFlag = 0;  //the flag of Midi-device connected
    midiopenflag = 0;				//Midi-device is opened
    Load_or_SaveFlag = 0;           //whether configure is changed.
    GetUsbMidiDeviceInfo_TriedTimes = 1;    //if it is 1,midi dialog box can be arise
    pMidiDeviceProcess = new MidiDeviceProcess();
    SetBackgroundThreadOpenFlag(1);
    SetBackgroundThreadOpenFlag2(1);
    SetBackgroundThreadOpenFlag3(1);
    ToStartThrd02 = 0;		 //Update flag
    ToStartThrd03 = 0;       // when the software initialize ,get Get LayerA or LayerB
    pBackgroundThread = new BackgroundThread("X-pBackgroundThread");
    pTTThread3 = new TTThread3("pTTThread3");
    
    pBackgroundThread->startThread(1);
    pTTThread3->startThread(0);

    pBackgroundThread2 = new BackgroundThread2("pBackgroundThread2");


    
    
    //[/UserPreSize]

    setSize (700, 650);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..

    if(pMainComponent->GetBackgroundThreadOpenFlag())
    {
        pMainComponent->SetBackgroundThreadOpenFlag(false);  //

        while(pBackgroundThread->GetBackgroundThreadRunFlag())
        {
            Thread::sleep(5);
        }
        Thread::sleep(2);
        delete pBackgroundThread;
    }
    if(pMainComponent->GetBackgroundThreadOpenFlag2())
    {
        pMainComponent->SetBackgroundThreadOpenFlag2(false);  //
        //ToStartThrd02 = 1;
        if(pBackgroundThread2->isThreadRunning())
        {
            while(pBackgroundThread2->GetBackgroundThreadRunFlag())
            {
                Thread::sleep(5);
            }
        }
        Thread::sleep(2);
        delete pBackgroundThread2;
    }
    if(pMainComponent->GetBackgroundThreadOpenFlag3())
    {
        pMainComponent->SetBackgroundThreadOpenFlag3(false);  //
        while(pTTThread3->GetBackgroundThreadRunFlag())
        {
            Thread::sleep(5);
        }
        Thread::sleep(2);
        delete pTTThread3;
    }
    if(MidiDeviceProcess::GetMidiDevOpenFlag())
    {
        Thread::sleep(3);
        delete pMidiDeviceProcess;
    }

    //[/Destructor_pre]

    tabbedComponent = nullptr;
    label = nullptr;
    label2 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    label3 = nullptr;
    label7 = nullptr;
    label8 = nullptr;
    label9 = nullptr;
    label10 = nullptr;
    EDITED = nullptr;
    labeles = nullptr;
    labeles1 = nullptr;
    BT_NI = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xff333333));
    g.fillRoundedRectangle (9.0f, 11.0f, 679.0f, 574.0f, 10.000f);

    g.setColour (Colours::black.withAlpha (0.560f));
    g.drawImage (cachedImage_bbbbb_png2,
                 342, 594, 132, 47,
                 0, 0, cachedImage_bbbbb_png2.getWidth(), cachedImage_bbbbb_png2.getHeight());

    g.setColour (Colours::black.withAlpha (0.560f));
    g.drawImage (cachedImage_ber_png,
                 241, 589, 71, 58,
                 0, 0, cachedImage_ber_png.getWidth(), cachedImage_ber_png.getHeight());

    g.setGradientFill (ColourGradient (Colour (0xffababab),
                                       568.0f, 608.0f,
                                       Colour (0xff1f1f1f),
                                       568.0f, 616.0f,
                                       false));
    g.fillRoundedRectangle (496.0f, 606.0f, 176.0f, 24.0f, 9.500f);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    tabbedComponent->setBounds (16, 16, 664, 568);
    label->setBounds (30, 605, 112, 24);
    label2->setBounds (30, 623, 104, 24);
    label4->setBounds (16, 52, 2, 503);
    label5->setBounds (678, 52, 2, 503);
    label6->setBounds (17, 52, 663, 2);
    label3->setBounds (15, 556, 2, 29);
    label7->setBounds (16, 583, 666, 2);
    label8->setBounds (679, 556, 2, 29);
    label9->setBounds (145, 605, 150, 24);
    label10->setBounds (145, 623, 150, 24);
    EDITED->setBounds (619, 16, 64, 32);
    labeles->setBounds (30, 587, 112, 24);
    labeles1->setBounds (145, 587, 150, 24);
    BT_NI->setBounds (496, 606, 176, 24);
    //[UserResized] Add your own custom resize handling here..
    labeles1->setBounds(120, 587, 122, 24);
    //[/UserResized]
}

void MainComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == EDITED)
    {
        //[UserButtonCode_EDITED] -- add your button handler code here..
		
        //[/UserButtonCode_EDITED]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void MainComponent::labelTextChanged (Label* labelThatHasChanged)
{
    //[UserlabelTextChanged_Pre]
    //[/UserlabelTextChanged_Pre]

    if (labelThatHasChanged == BT_NI)
    {
        //[UserLabelCode_BT_NI] -- add your label text handling code here..
        //[/UserLabelCode_BT_NI]
    }

    //[UserlabelTextChanged_Post]
    //[/UserlabelTextChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

/*******************************************************************************
**  Abstract: make "Edite" picture disappear
*******************************************************************************/
void MainComponent::ChangeEditedButtonIm()
{
    EDITED->setImages (false, true, true,
                       ImageCache::getFromMemory (edited2_png, edited2_pngSize), 1.000f, Colour (0x00000000),
                       Image(), 1.000f, Colour (0x00000000),
                       Image(), 1.000f, Colour (0x00000000));
    repaint();
}

/*******************************************************************************
**  Abstract: make "Edite" picture arise
*******************************************************************************/
void MainComponent::ChangeEditedButtonImClose()
{
    Load_or_SaveFlag =1;
    EDITED->setImages (false, true, true,
                       ImageCache::getFromMemory (edited_png2, edited_png2Size), 1.000f, Colour (0x00000000),
                       Image(), 1.000f, Colour (0x00000000),
                       Image(), 1.000f, Colour (0x00000000));
    repaint();
}

void MainComponent::SetBackgroundThreadOpenFlag(bool bFlag)
{
    bBackgroundThreadOpenFlag = bFlag;
}


bool MainComponent::GetBackgroundThreadOpenFlag()
{
     return bBackgroundThreadOpenFlag;
}

void MainComponent::SetBackgroundThreadOpenFlag2(bool bFlag)
{
    bBackgroundThreadOpenFlag2 = bFlag;
}


bool MainComponent::GetBackgroundThreadOpenFlag2()
{
     return bBackgroundThreadOpenFlag2;
}

void MainComponent::SetBackgroundThreadOpenFlag3(bool bFlag)
{
    bBackgroundThreadOpenFlag3= bFlag;
}


bool MainComponent::GetBackgroundThreadOpenFlag3()
{
     return bBackgroundThreadOpenFlag3;
}

void MainComponent:: setMyComponent(int  s)
{
    content = s;
}
 int MainComponent::getMyComponent()
{
    return  content;
}

 /*******************************************************************************
 **  Abstract: update TabbedComponent
 *******************************************************************************/
void MainComponent::UpdateTabbedComponent(XTOUCH_MODE_ID r)
{
    if(eXTOUCH_MODE_ID == COMPACT_MODE)
    {
        pFadersAndFootCompactComponent = new FadersAndFootCompactComponent();
        pEncodersCompactComponent = new EncodersCompactComponent();
        pButtonsCompactComponent = new ButtonsCompactComponent();
		pFaderTouchCompactComponent = new FaderTouchCompactComponent();

        tabbedComponent->addTab ("FADERS+FOOT", Colour (0xffffab00), pFadersAndFootCompactComponent, true);
		tabbedComponent->addTab ("FADER-TOUCH", Colour(0xffffab00), pFaderTouchCompactComponent, true);
        tabbedComponent->addTab ("ENCODERS", Colour (0xffffab00), pEncodersCompactComponent, true);
        tabbedComponent->addTab ("BUTTONS", Colour (0xffffab00),pButtonsCompactComponent, true);

    }
    else if(eXTOUCH_MODE_ID == MINI_MODE)
    {
        pFaderMiniComponent = new FaderMiniComponent ();
        pEncodersMiniComponent = new EncodersMiniComponent();
        pButtonsMiniComponent = new ButtonsMiniComponent();

        tabbedComponent->addTab ("FADER", Colour (0xffffab00), pFaderMiniComponent, true);
        tabbedComponent->addTab ("ENCODERS", Colour (0xffffab00), pEncodersMiniComponent, true);
        tabbedComponent->addTab ("BUTTONS", Colour (0xffffab00),pButtonsMiniComponent, true);
    }
}

/*******************************************************************************
**  Abstract: remove TabbedComponent
*******************************************************************************/
void MainComponent::removeTabbedComponent()
{
	if(eXTOUCH_MODE_ID == COMPACT_MODE)
	{
		tabbedComponent->removeTab(1);
		tabbedComponent->removeTab(1);
		tabbedComponent->removeTab(1);
		//tabbedComponent->removeTab(1);
		tabbedComponent->removeTab(1);
	}
	else if (eXTOUCH_MODE_ID == MINI_MODE)
	{
		tabbedComponent->removeTab(1);
		tabbedComponent->removeTab(1);
		tabbedComponent->removeTab(1);
		tabbedComponent->removeTab(1);
	}
}

void MainComponent::SetFirwareVersion(const String & name1,const String & name2,float num)
{
    //label9 ->setText(name,dontSendNotification);
    BT_NI->setText(name1,dontSendNotification);
    label->setAlpha(num);
    label9->setAlpha(num);
    labeles->setAlpha(num );
    labeles1->setAlpha(num);
    labeles1->setText(name2,dontSendNotification);
}

/*******************************************************************************
**  Abstract: repaint the firewareversion
*******************************************************************************/
void MainComponent::SetFirwareVersion2(const String & name)
{
	label9 ->setText(name,dontSendNotification);
	repaint();
}

void MainComponent::SetBt_NIText(const String & name)
{
    BT_NI->setText(name, dontSendNotification);
}

String MainComponent::GetBt_NIText()
{
    return BT_NI->getText();
}

/*******************************************************************************
**  Abstract: get faderbutton or customimagebutton's ID
*******************************************************************************/
void MainComponent::CompactGetCustomBtID()
{
	pFadersAndFootCompactComponent->GetCustomBtID();
	pEncodersCompact1To8Component ->GetCustomBtID();
	pEncodersCompact9To16Component ->GetCustomBtID();
	BC1TO8->GetCustomBtID();
	BC9TO16->GetCustomBtID();
	BC17TO24->GetCustomBtID();
	BC25TO33->GetCustomBtID();
	BC34TO39->GetCustomBtID();
	pFaderTouchCompactComponent->GetCustomBtID();
}

/*******************************************************************************
**  Abstract: change the state of all tabbedcomponent's button
*******************************************************************************/
void MainComponent::SetAllButtonState(bool s)
{
	if(eXTOUCH_MODE_ID == COMPACT_MODE)
	{
		pFadersAndFootCompactComponent -> SetAllButtonState(s);
		pEncodersCompact1To8Component -> SetAllButtonState(s);
		pEncodersCompact9To16Component -> SetAllButtonState(s);
		BC1TO8 ->SetAllButtonState(s);
		BC9TO16 ->SetAllButtonState(s);
		BC17TO24 ->SetAllButtonState(s);
		BC25TO33 ->SetAllButtonState(s);
		BC34TO39 ->SetAllButtonState(s);
		pFaderTouchCompactComponent->SetAllButtonState(s);
	}
	else if(eXTOUCH_MODE_ID == MINI_MODE)
	{
		pFaderMiniComponent->SetAllButtonState(s);
		pEncodersMiniComponent->SetAllButtonState(s);
		BM1TO8 ->SetAllButtonState(s);
		BM9TO16->SetAllButtonState(s);
	}
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="700" initialHeight="650">
  <BACKGROUND backgroundColour="ff000000">
    <ROUNDRECT pos="9 11 679 574" cornerSize="10" fill="solid: ff333333" hasStroke="0"/>
    <IMAGE pos="342 594 132 47" resource="bbbbb_png2" opacity="0.56000000000000005"
           mode="0"/>
    <IMAGE pos="241 589 71 58" resource="ber_png" opacity="0.56000000000000005"
           mode="0"/>
    <ROUNDRECT pos="496 606 176 24" cornerSize="9.5" fill="linear: 568 608, 568 616, 0=ffababab, 1=ff1f1f1f"
               hasStroke="0"/>
  </BACKGROUND>
  <TABBEDCOMPONENT name="new tabbed component" id="fcdb951dc13245fa" memberName="tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="16 16 664 568" orientation="top"
                   tabBarDepth="37" initialTab="1">
    <TAB name="GLOBAL  " colour="ff333333" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="GlobalCompactComponent.cpp"/>
    <TAB name="FADERS+FOOT" colour="ff333333" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="FadersAndFootCompactComponent.cpp"/>
    <TAB name="ENCODERS" colour="ff333333" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="EncodersCompactComponent.cpp"/>
    <TAB name="BUTTONS" colour="ff333333" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="ButtonsCompactComponent.cpp"/>
  </TABBEDCOMPONENT>
  <LABEL name="new label" id="ea14e40a94e7899a" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="30 605 112 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Firmware Version:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="6d90ee289402b90a" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="30 623 104 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Editor Version:"
         editableSingleClick="0" editableDoubleClick="0" focusDiscardsChanges="0"
         fontname="Arial" fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="8cd534f0a468a0fe" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="16 52 2 503" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ab7a9620e43baa83" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="678 52 2 503" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9a2e1cbc357529f1" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="17 52 663 2" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5c49ccc5b3a30c4e" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="15 556 2 29" bkgCol="ff333333" edTextCol="ff333333"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="9b5e45560a017e18" memberName="label7" virtualName=""
         explicitFocusOrder="0" pos="16 583 666 2" bkgCol="ff333333" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="cfa76886804ed7f2" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="679 556 2 29" bkgCol="ff333333" edTextCol="ff333333"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f098375c63ffc9c5" memberName="label9" virtualName=""
         explicitFocusOrder="0" pos="145 605 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="1.00" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="3a7dc3ceac846822" memberName="label10" virtualName=""
         explicitFocusOrder="0" pos="145 623 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="1.01" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <IMAGEBUTTON name="new button" id="ffe286f085a58d36" memberName="EDITED" virtualName=""
               explicitFocusOrder="0" pos="619 16 64 32" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="edited_png2" opacityNormal="1" colourNormal="0"
               resourceOver="edited_png2" opacityOver="1" colourOver="0" resourceDown="edited2_png"
               opacityDown="1" colourDown="0"/>
  <LABEL name="new label" id="898d20c46f1743fe" memberName="labeles" virtualName=""
         explicitFocusOrder="0" pos="30 587 112 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="Editor State:" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="60fad0712c565371" memberName="labeles1"
         virtualName="" explicitFocusOrder="0" pos="145 587 150 24" textCol="ffffffff"
         edTextCol="ff000000" edBkgCol="0" labelText="No Device" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Arial"
         fontsize="14" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="bc1035eabd5b7a29" memberName="BT_NI" virtualName=""
         explicitFocusOrder="0" pos="496 606 176 24" bkgCol="444444" textCol="ffa8a8a8"
         outlineCol="5900" edTextCol="ff000000" edBkgCol="fffcf6e2" labelText="My NI B4 Upper Manual"
         editableSingleClick="1" editableDoubleClick="1" focusDiscardsChanges="0"
         fontname="Default font" fontsize="14" bold="0" italic="0" justification="36"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: bbbbb_png2, 2615, "Pic/bbbbb.PNG"
static const unsigned char resource_MainComponent_bbbbb_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,254,0,0,0,88,8,6,0,0,0,213,211,74,162,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,
4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,9,204,73,68,65,84,120,94,237,157,65,171,37,197,21,199,231,171,40,250,73,6,17,215,49,131,91,49,226,
42,33,74,22,6,84,144,16,136,129,136,144,16,72,8,132,32,12,66,8,194,16,112,161,48,129,172,20,37,187,136,113,155,76,62,128,238,159,254,46,156,225,188,122,255,238,174,234,238,123,111,189,186,127,225,199,
243,158,174,58,85,239,190,254,215,169,58,85,221,115,231,251,255,174,140,49,23,135,52,26,99,198,70,26,141,49,99,35,141,198,152,177,145,70,99,204,216,72,163,49,102,108,164,209,24,51,54,210,104,140,25,27,
105,52,198,140,141,52,26,99,198,70,26,141,49,99,35,141,198,152,177,145,70,99,204,216,72,163,49,102,108,164,209,24,51,54,210,104,140,25,27,105,52,198,140,141,52,222,10,94,124,241,165,3,175,255,252,141,
171,95,252,242,87,178,204,169,248,193,243,247,14,125,225,167,186,110,76,103,72,99,215,32,174,207,191,248,215,213,55,223,124,123,141,83,137,255,137,39,158,60,12,54,247,63,248,235,213,87,255,249,250,70,
63,30,252,253,163,67,25,85,215,152,78,144,198,46,65,240,136,173,20,90,240,240,31,255,148,245,246,130,136,78,251,143,30,253,95,182,159,97,96,82,62,140,233,4,105,236,134,187,119,159,57,68,114,21,225,75,
136,190,202,199,86,16,60,131,138,106,115,14,229,203,152,78,144,198,179,194,52,185,86,236,37,202,223,90,214,10,62,80,62,141,233,4,105,60,43,107,4,31,40,127,173,48,203,96,157,174,252,215,66,125,229,219,
152,78,144,198,179,162,132,84,139,242,215,194,187,239,253,182,106,13,191,4,179,5,229,223,152,78,144,198,179,162,132,84,139,242,87,3,66,221,50,211,200,144,241,87,109,24,211,17,210,120,86,182,76,181,149,
191,57,200,39,252,241,79,127,150,190,90,33,185,248,227,159,252,84,182,99,76,103,72,99,23,204,109,221,77,209,114,128,134,178,106,31,94,65,57,6,8,150,2,37,68,120,31,220,49,183,12,105,236,134,90,97,6,181,
107,107,4,171,234,151,48,248,120,189,110,6,68,26,187,129,109,61,37,200,41,150,68,202,50,162,102,45,207,54,30,101,149,15,99,6,64,26,187,129,41,180,18,230,20,115,107,108,166,228,75,25,123,102,24,142,240,
230,2,144,198,174,104,217,94,99,10,95,214,39,129,87,147,44,100,13,239,51,246,230,66,144,198,174,104,201,240,151,7,103,136,222,75,121,2,71,249,254,201,127,175,119,126,253,27,89,198,52,33,141,93,209,178,
206,103,118,64,157,218,109,58,146,119,199,138,242,63,122,249,21,217,230,90,62,254,228,161,108,231,18,200,223,131,133,191,11,210,216,21,173,235,124,4,191,20,229,25,32,142,189,231,110,225,239,71,254,30,
44,252,93,144,198,238,104,221,214,155,131,172,126,47,25,251,220,47,223,208,211,248,123,218,29,105,236,142,189,78,215,29,115,106,191,134,220,55,223,208,211,248,123,218,29,105,236,142,214,233,190,162,199,
51,244,185,127,190,161,167,241,247,180,59,210,216,37,107,167,251,172,231,123,61,82,155,251,217,122,67,191,250,218,207,174,126,247,251,63,28,214,254,255,253,223,163,199,126,254,253,229,87,7,27,254,126,
120,239,5,89,183,164,181,31,148,201,117,84,153,146,103,159,125,238,80,239,111,31,62,56,244,47,215,167,255,216,254,242,254,253,67,110,164,172,155,203,70,255,194,95,249,251,207,249,49,143,145,198,46,169,
61,102,155,97,61,223,243,222,124,238,107,141,224,0,193,35,238,92,247,211,207,62,63,220,240,165,8,0,219,210,0,144,203,215,244,131,50,185,142,42,19,32,64,250,144,203,67,244,23,232,127,216,151,132,207,96,
135,176,227,115,252,238,217,71,192,32,243,212,83,79,223,240,103,180,177,75,72,200,149,127,216,57,88,207,43,63,61,145,251,91,35,184,124,195,71,29,117,99,43,177,189,249,214,219,55,202,5,185,220,158,194,
71,164,185,28,66,156,139,196,83,215,178,15,96,112,83,191,59,159,203,190,241,157,229,50,230,128,52,118,7,81,187,245,105,189,83,189,117,119,11,185,191,75,130,203,55,52,55,126,205,52,62,15,20,212,97,122,
172,202,69,25,88,234,7,148,226,170,41,51,55,240,44,145,253,212,252,238,101,219,181,75,158,11,66,26,187,130,245,249,154,151,100,80,71,249,235,137,220,223,57,193,17,201,106,203,102,168,151,167,254,83,209,
175,213,119,41,172,242,122,217,46,145,191,44,211,66,110,171,198,23,3,92,174,83,251,125,93,16,210,216,13,53,15,214,204,209,251,81,220,220,215,185,155,147,104,153,203,78,69,110,69,25,245,85,153,236,123,
15,225,111,233,175,34,251,170,21,241,154,58,23,132,52,118,65,235,212,94,113,236,119,237,111,37,247,117,238,230,92,18,218,28,53,117,243,245,26,145,44,249,220,210,95,69,246,85,211,63,88,83,231,130,144,198,
179,82,251,204,124,45,61,71,253,220,207,185,155,179,20,210,218,136,207,110,128,42,147,125,215,136,164,236,207,210,117,71,252,238,144,198,179,193,249,249,45,83,123,69,207,107,253,220,207,185,155,115,237,
154,181,118,173,93,147,7,200,148,217,250,242,250,218,254,78,177,198,215,154,58,23,132,52,158,133,150,99,185,173,131,131,122,78,127,47,216,113,96,86,1,173,103,6,114,31,151,110,206,44,54,132,90,147,169,
102,251,44,215,153,138,188,101,30,128,1,67,149,3,218,205,3,5,168,114,185,109,216,43,171,111,225,239,130,52,158,20,196,82,251,47,214,32,120,4,70,210,79,93,159,99,239,211,123,244,91,13,86,216,84,121,69,
174,87,115,115,150,98,162,142,18,41,135,124,242,129,150,165,129,130,107,217,47,117,213,32,129,120,241,85,35,124,250,85,30,170,217,99,31,223,194,223,5,105,60,25,136,177,54,122,51,56,68,68,229,103,107,212,
167,124,107,68,158,2,63,115,121,136,218,51,4,185,78,237,205,73,185,82,120,113,122,173,60,180,3,68,243,185,8,30,132,168,115,221,56,254,155,253,210,86,57,80,40,127,129,234,47,132,95,200,3,132,18,127,174,
103,225,239,130,52,158,132,150,23,108,168,40,122,174,35,188,75,162,135,218,221,132,92,167,245,230,68,168,136,58,139,18,16,17,145,21,127,173,73,53,202,179,164,40,125,242,153,182,152,73,68,217,124,125,105,
96,225,122,238,239,212,192,69,159,213,204,36,151,181,240,119,65,26,143,10,194,169,221,170,35,74,79,189,48,3,63,173,81,31,182,138,191,38,23,209,251,54,162,185,120,164,241,104,180,108,213,81,110,105,93,
190,38,234,195,22,241,43,127,37,183,225,57,1,115,209,72,227,81,104,217,170,227,165,153,53,194,164,204,218,199,117,107,6,150,18,218,83,190,74,122,124,246,223,172,35,254,166,131,45,23,164,113,119,90,34,
115,235,214,27,3,138,242,83,3,3,81,203,195,60,236,40,40,63,153,61,147,136,102,25,4,169,254,14,37,228,16,84,253,37,162,126,41,252,216,2,37,63,49,149,227,168,73,170,158,9,105,220,13,4,80,251,122,108,4,179,
54,82,110,61,222,75,244,175,57,225,87,179,141,120,27,158,10,28,137,44,124,118,4,166,152,219,206,156,35,124,151,194,143,157,8,18,149,101,18,149,68,102,188,51,33,219,59,66,26,119,161,229,169,58,68,191,101,
159,157,1,166,182,173,57,88,54,32,92,213,151,154,101,69,249,94,127,115,124,178,240,213,245,173,132,239,82,248,48,181,107,114,236,62,237,128,52,110,166,101,61,191,37,209,150,33,113,88,219,102,45,244,141,
12,125,205,1,163,189,126,15,211,198,86,145,177,69,201,246,103,126,171,17,203,2,182,53,17,118,216,74,225,171,118,179,77,81,250,136,109,78,218,203,237,243,255,244,41,111,159,102,162,29,250,136,15,62,227,
3,27,179,27,85,167,64,26,55,209,178,158,223,91,44,68,234,189,197,95,3,75,13,139,254,60,40,1,214,128,96,66,44,76,215,17,81,44,11,240,201,84,62,159,55,40,69,171,218,101,160,160,126,172,255,33,124,66,158,
33,240,57,252,211,15,6,128,40,71,95,242,181,50,87,16,109,211,199,232,39,109,98,159,154,133,20,72,227,42,184,241,91,254,185,171,99,69,200,150,37,198,86,24,100,188,166,63,47,89,128,33,28,69,41,136,16,61,
209,117,74,44,89,192,53,194,175,185,6,249,228,99,233,55,160,79,49,11,160,175,249,90,246,63,151,92,156,65,26,155,89,35,182,173,235,250,57,90,7,161,53,56,202,247,65,22,193,28,89,96,89,120,83,211,105,64,
80,170,62,228,118,179,125,233,26,196,51,23,136,86,93,15,232,91,248,201,201,201,236,127,101,210,82,26,155,32,27,190,118,122,125,236,100,216,214,55,248,148,224,11,193,247,242,47,241,152,101,145,41,90,234,
68,57,234,100,251,156,143,37,255,49,141,47,125,42,194,79,46,187,228,191,2,105,172,166,229,188,189,130,44,185,242,187,39,68,101,242,14,107,15,250,0,3,20,131,136,35,124,127,172,17,65,75,157,40,87,138,116,
206,199,146,255,184,86,250,84,168,178,75,254,43,144,198,42,182,238,157,195,212,57,252,99,65,123,156,181,159,203,210,51,64,112,157,193,162,102,111,223,156,151,53,34,200,83,232,158,167,250,36,252,194,207,
212,84,63,151,111,64,26,103,33,234,237,145,60,243,177,86,179,7,107,69,128,232,168,51,151,28,219,35,185,167,124,147,108,140,235,100,240,203,235,128,208,99,73,192,64,145,175,157,92,248,36,227,182,76,153,
129,117,242,169,35,189,25,151,44,130,50,147,95,146,69,136,176,34,107,206,207,114,59,15,27,196,0,129,109,170,221,108,7,50,242,113,13,209,170,246,137,230,106,59,143,25,72,222,206,99,240,41,7,143,147,10,
127,75,18,47,96,166,112,172,76,190,185,76,178,8,150,64,88,185,46,130,138,3,52,33,52,126,242,25,191,92,143,109,191,22,225,3,2,142,186,225,87,181,143,159,220,62,240,57,6,162,92,62,88,106,187,2,105,188,65,
205,25,245,37,72,144,57,57,102,76,23,72,227,53,90,78,226,41,152,37,248,144,139,49,93,33,141,143,217,227,169,55,79,237,141,233,14,105,60,176,85,244,173,207,213,27,99,78,134,52,110,18,61,89,127,239,127,
27,211,53,55,141,91,68,207,225,24,39,240,140,233,158,235,134,154,55,200,42,28,229,141,185,85,92,55,40,81,47,225,40,111,204,173,227,186,65,9,187,132,253,120,182,231,28,225,141,185,181,92,55,76,29,212,97,
42,79,150,222,143,163,26,51,4,55,141,136,155,1,32,158,78,179,216,141,25,14,105,52,198,140,141,52,26,99,198,70,26,141,49,99,35,141,198,152,177,145,70,99,204,216,72,163,49,102,108,164,209,24,51,54,210,104,
140,25,27,105,52,198,140,141,52,26,99,198,70,26,141,49,195,114,231,234,59,115,76,199,111,210,201,181,112,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainComponent::bbbbb_png2 = (const char*) resource_MainComponent_bbbbb_png2;
const int MainComponent::bbbbb_png2Size = 2615;

// JUCER_RESOURCE: ber_png, 3051, "Pic/ber.PNG"
static const unsigned char resource_MainComponent_ber_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,150,0,0,0,119,8,6,0,0,0,225,25,185,197,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,4,
103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,11,128,73,68,65,84,120,94,237,155,189,170,53,73,21,134,231,86,198,91,25,188,2,197,124,48,86,12,21,
204,68,48,26,4,51,17,204,68,48,19,193,80,193,84,49,158,49,159,185,128,49,63,250,28,120,63,214,183,246,91,253,87,213,221,213,221,53,240,48,103,175,174,191,174,122,107,213,170,181,247,247,201,255,255,123,
27,12,118,192,26,7,131,90,172,113,48,168,197,26,7,131,90,172,113,48,168,197,26,7,131,90,172,113,48,168,197,26,7,131,90,172,113,48,168,197,26,31,207,79,127,246,243,183,63,255,229,175,111,223,126,251,223,
15,124,253,245,55,111,127,248,227,159,222,62,255,252,135,182,206,224,35,172,241,177,124,250,233,119,222,254,246,247,127,124,36,40,199,111,127,247,123,91,127,240,1,107,124,36,136,234,159,255,250,247,187,
112,240,78,120,45,108,122,254,217,103,223,125,247,88,18,23,127,199,250,131,143,176,198,71,162,163,15,113,33,34,87,6,126,244,227,159,188,11,143,178,136,207,149,25,120,227,227,64,32,242,84,83,162,18,191,
248,229,175,86,149,127,32,214,248,40,16,134,60,16,130,113,101,28,242,112,196,100,238,249,195,177,198,71,161,96,29,161,184,231,37,136,191,182,8,242,33,88,227,99,248,226,215,191,249,112,164,197,64,125,41,
196,91,212,135,239,125,255,7,182,204,67,177,198,71,128,16,36,10,4,226,202,44,129,212,3,109,16,244,187,231,15,197,26,111,15,222,233,203,175,254,243,46,136,218,156,84,203,182,110,132,53,222,158,232,101,
182,28,129,25,178,241,180,7,35,51,255,142,53,222,154,189,226,34,197,107,120,175,22,98,189,56,214,120,91,88,112,221,228,16,130,43,83,131,50,247,107,111,152,55,196,26,111,203,222,185,39,60,160,132,91,115,
33,184,1,214,120,75,142,202,150,143,172,252,59,214,120,59,98,118,253,136,239,247,148,116,125,112,86,222,26,111,199,209,177,79,140,229,30,154,149,183,198,91,81,155,93,223,138,110,159,244,251,192,172,188,
53,222,134,152,93,63,35,191,164,223,111,61,48,43,111,141,183,0,239,116,118,70,60,142,97,143,244,70,199,88,227,45,136,222,226,200,35,48,243,208,172,188,53,94,158,222,126,117,160,175,144,30,148,149,183,
198,75,195,194,245,120,35,211,205,244,33,191,149,183,198,75,211,107,14,41,94,36,30,144,149,183,198,203,178,87,214,155,216,136,182,9,192,17,44,224,121,248,188,70,36,113,124,55,63,18,173,241,146,180,254,
158,14,49,33,30,181,57,5,177,211,210,62,123,245,168,141,177,198,75,210,42,187,142,160,180,248,180,73,224,141,103,18,234,199,177,36,126,218,250,143,55,46,134,53,94,14,22,156,133,170,185,117,225,241,16,
20,109,208,222,212,81,138,248,74,158,108,137,231,162,12,101,105,227,166,95,84,91,227,165,96,145,181,168,252,237,202,204,129,144,88,228,53,95,80,199,163,55,130,48,93,249,140,126,194,131,7,116,207,47,142,
53,94,6,188,19,11,201,2,109,205,174,115,124,81,119,139,167,211,63,116,205,44,241,90,113,236,8,219,149,185,48,214,120,25,16,5,11,115,230,174,119,94,107,169,80,162,183,237,33,145,219,16,107,188,4,138,83,
206,94,20,5,250,145,53,55,190,155,102,229,173,177,123,88,0,121,138,173,55,43,196,200,81,134,215,168,89,80,93,28,34,107,132,69,223,186,105,110,61,206,59,196,26,187,71,94,98,205,2,70,148,168,20,107,3,247,
72,173,176,0,145,171,238,210,124,88,231,88,99,215,196,236,245,150,171,122,204,35,69,176,185,242,115,180,16,22,168,29,198,113,131,35,209,26,187,165,197,206,150,183,115,108,137,213,92,123,91,61,169,218,
186,193,63,31,179,198,110,81,44,178,36,195,237,200,71,96,102,139,167,80,202,32,178,53,86,186,81,86,222,26,187,164,246,246,84,58,2,5,237,186,122,83,208,166,107,171,230,95,2,41,55,198,88,183,28,245,157,
96,141,221,209,34,187,174,76,119,137,45,30,162,228,1,107,5,161,177,110,61,82,59,192,26,187,2,239,84,155,161,142,57,47,199,86,47,232,226,171,22,201,90,198,34,239,186,245,157,79,198,26,187,162,246,59,181,
184,72,37,182,120,193,210,49,216,42,54,186,120,86,222,26,187,65,158,6,97,108,157,220,185,35,112,107,60,164,152,47,179,197,243,149,80,31,108,170,150,237,30,128,53,118,65,12,182,183,122,129,185,35,112,235,
237,178,228,5,183,182,87,130,126,20,6,92,44,43,111,141,93,160,248,101,107,0,59,119,4,214,28,89,46,41,10,123,220,226,98,238,110,235,197,229,4,172,241,116,116,219,66,24,91,143,128,210,17,72,155,53,233,128,
146,96,247,244,40,23,204,202,91,227,169,180,200,174,151,142,64,98,149,86,169,128,200,17,11,174,228,48,253,187,231,157,97,141,167,193,226,104,2,91,198,63,124,110,113,91,43,9,182,198,3,46,37,198,156,71,
244,87,137,53,158,70,109,118,29,98,252,195,66,240,185,133,55,113,130,133,35,147,152,49,68,216,35,158,107,136,53,158,66,171,188,13,19,142,152,90,7,186,46,25,202,2,183,16,237,26,116,20,31,41,232,13,88,227,
225,68,111,128,40,92,153,51,41,229,172,206,184,165,197,185,106,113,188,239,132,53,30,142,118,225,214,236,250,158,232,75,225,204,153,139,26,99,189,78,179,242,214,120,40,90,184,154,184,129,122,91,111,144,
83,148,68,213,58,17,186,133,152,149,119,207,79,198,26,15,35,222,116,106,60,0,71,82,235,35,180,103,81,1,71,98,199,89,121,107,60,12,5,196,181,185,153,214,194,234,93,84,34,94,120,206,136,247,38,176,198,67,
64,8,76,72,139,155,21,147,218,106,209,175,34,42,161,121,172,73,209,236,128,53,238,78,139,236,122,132,246,152,88,247,108,41,44,10,226,209,184,34,29,223,190,222,233,48,43,111,141,187,194,2,106,34,90,198,
6,120,190,173,199,1,194,212,152,34,180,185,199,165,160,53,140,95,177,106,39,227,181,198,93,105,145,93,119,224,109,214,38,13,233,191,148,163,66,104,157,94,229,45,49,43,223,193,145,104,141,187,17,131,205,
214,139,198,13,147,118,151,196,66,76,60,177,137,118,121,166,245,13,243,40,116,25,234,32,43,111,141,187,192,98,106,33,247,90,184,24,200,18,132,71,241,34,106,118,181,146,177,14,22,228,74,94,42,19,231,248,
228,184,208,26,119,65,129,241,222,9,189,210,209,54,5,130,234,236,186,190,25,101,229,17,216,214,132,115,3,172,177,57,58,166,224,136,151,101,114,93,48,30,193,171,33,194,43,123,168,18,242,202,45,47,71,43,
177,198,230,40,176,60,58,23,132,136,241,68,28,145,192,241,200,231,14,130,219,93,97,179,104,243,184,231,7,96,141,205,209,14,186,194,213,253,46,32,42,230,252,164,77,100,141,205,209,109,229,46,113,204,21,
56,121,206,173,177,57,67,88,199,163,57,63,41,134,180,198,230,232,166,214,251,87,35,119,129,227,143,249,6,247,252,0,172,177,57,186,2,159,24,76,62,10,125,145,126,226,119,135,214,184,11,10,38,175,154,213,
190,10,220,132,149,36,61,241,178,100,141,187,64,124,197,203,194,56,18,247,129,120,74,249,59,98,44,87,230,32,172,113,55,148,207,210,139,43,175,228,202,14,150,161,92,93,252,201,15,226,58,57,87,103,141,187,
130,152,74,95,254,14,234,33,174,234,32,1,108,141,187,195,139,227,189,240,90,131,54,116,246,245,148,53,14,6,181,88,227,96,80,139,53,14,6,181,88,227,96,80,139,53,14,6,181,88,227,96,80,139,53,190,64,122,
128,36,220,25,249,17,37,0,221,179,65,183,88,227,11,250,58,230,140,140,174,254,129,196,209,191,62,21,119,252,233,242,1,88,227,11,18,22,28,253,37,178,132,5,71,123,46,253,74,224,44,81,95,24,107,124,225,169,
194,210,239,200,246,254,151,69,55,196,26,95,120,170,176,128,254,59,248,238,237,106,88,227,11,79,22,214,96,19,214,248,66,22,22,55,181,252,37,50,223,170,19,147,184,250,25,202,81,62,214,167,61,231,25,178,
176,8,166,57,162,98,93,98,160,165,162,43,245,205,59,229,178,177,159,252,12,168,179,117,44,188,235,154,121,200,208,7,125,197,186,75,191,136,166,253,154,245,91,128,53,190,16,133,69,188,49,245,179,23,158,
187,69,2,94,90,191,36,117,208,110,126,185,40,44,38,32,150,207,48,209,165,69,97,76,140,205,213,3,215,119,236,47,218,33,142,203,65,221,210,88,150,204,67,233,215,159,180,137,8,92,61,129,192,92,93,224,29,
231,214,175,193,77,216,26,95,136,194,90,2,3,207,226,98,176,83,47,20,137,11,60,183,128,25,23,104,51,150,165,125,179,147,85,175,36,44,22,46,214,41,193,88,178,184,214,204,131,19,215,212,230,136,184,155,44,
243,234,202,102,24,95,165,184,172,241,5,39,44,118,28,3,229,153,220,114,124,206,162,196,54,242,132,32,24,213,101,49,243,100,75,152,78,88,180,205,164,83,151,255,71,1,0,117,98,223,249,185,142,43,224,29,178,
247,192,158,235,169,45,158,197,178,115,243,128,119,81,93,68,22,251,226,157,227,60,240,119,156,7,254,142,194,204,115,49,55,15,113,147,48,159,241,89,30,119,222,44,110,131,174,192,26,95,160,227,220,169,115,
243,121,71,80,47,219,75,187,129,246,162,248,180,227,242,100,186,157,8,113,65,227,130,228,177,51,150,92,55,247,45,49,56,97,229,114,75,230,65,239,203,66,203,86,154,7,4,16,197,167,99,141,126,162,232,74,199,
93,158,7,103,47,173,95,246,166,110,174,22,98,141,47,228,197,201,199,92,36,10,65,34,136,49,1,127,211,158,35,79,124,110,143,9,143,125,101,162,16,52,41,113,66,167,98,143,188,163,153,248,44,172,88,134,241,
185,197,17,174,223,40,202,169,69,99,46,84,78,239,28,197,138,45,207,93,36,138,67,199,169,62,195,212,49,23,231,59,122,219,149,88,227,11,12,118,105,103,12,90,101,89,24,108,241,69,215,64,91,241,69,249,59,
247,23,137,194,84,217,40,142,169,9,117,100,97,197,121,208,166,41,17,203,106,30,244,25,114,249,76,244,90,8,56,206,195,26,168,23,199,130,184,93,127,141,177,198,23,226,192,230,22,23,84,214,77,232,26,232,
55,78,40,159,115,95,145,56,78,109,128,44,142,53,228,186,113,44,53,243,160,207,83,196,190,121,175,232,1,215,144,133,181,164,239,6,88,227,11,110,193,74,196,227,66,47,17,61,22,59,6,251,18,178,199,90,35,44,
29,63,180,35,91,46,63,71,174,219,74,88,144,203,102,162,199,226,189,98,223,60,211,28,205,193,17,218,173,176,214,196,22,113,2,116,92,240,50,178,77,197,22,244,67,125,129,45,182,183,70,88,170,31,251,206,229,
231,200,117,227,88,212,254,20,42,171,197,220,18,99,1,159,99,140,53,39,14,198,38,152,211,110,133,5,113,146,75,94,11,15,227,2,199,56,41,60,119,177,14,98,141,19,175,62,226,98,94,93,88,177,126,105,131,230,
121,0,222,43,110,110,40,9,211,245,209,181,176,226,224,128,151,151,112,228,105,162,168,120,174,186,188,92,116,237,148,163,60,245,120,70,59,121,50,37,190,56,81,87,23,22,239,26,231,136,191,17,8,118,224,239,
56,79,66,239,205,241,30,237,156,8,154,39,254,207,102,140,207,53,198,174,133,5,75,3,72,38,44,123,37,62,199,73,157,34,38,246,238,36,44,96,19,201,190,20,189,55,226,203,27,176,68,220,216,221,11,11,242,174,
201,176,227,178,168,196,18,113,69,81,65,76,33,204,9,43,30,23,90,248,184,139,115,249,57,114,221,40,138,37,194,210,187,230,197,164,157,169,121,224,89,124,30,223,27,113,69,193,59,24,55,229,84,135,121,41,
141,101,39,172,113,22,6,138,247,138,110,155,1,35,130,248,66,14,158,83,46,78,14,187,11,193,210,174,171,195,51,202,151,4,27,225,56,161,172,98,16,250,99,162,183,76,168,171,155,219,159,130,241,82,86,55,212,
8,109,35,206,232,129,226,60,80,79,118,247,222,244,207,216,36,24,214,130,207,165,205,135,189,52,150,29,176,198,193,78,32,16,22,24,230,54,96,244,88,238,121,231,88,227,96,39,240,40,18,203,148,231,136,199,
127,140,149,46,132,53,14,118,2,79,37,193,64,142,39,129,35,46,150,89,114,228,118,136,53,14,118,36,198,78,128,71,34,214,202,241,150,158,185,54,46,128,53,14,118,132,216,42,11,200,65,140,181,228,178,210,41,
214,56,216,25,196,69,140,229,4,5,220,184,231,130,251,206,177,198,193,65,144,86,32,134,210,81,72,204,85,74,185,92,12,107,28,12,106,177,198,193,160,22,107,28,12,42,248,228,237,127,88,223,5,14,121,122,144,
254,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainComponent::ber_png = (const char*) resource_MainComponent_ber_png;
const int MainComponent::ber_pngSize = 3051;

// JUCER_RESOURCE: icon_png, 597, "Pic/icon.PNG"
static const unsigned char resource_MainComponent_icon_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,34,0,0,0,27,8,6,0,0,0,25,50,93,167,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,4,103,
65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,1,234,73,68,65,84,72,75,221,149,61,75,3,65,16,134,239,15,37,255,35,88,43,182,138,173,98,169,216,41,88,
137,96,35,130,149,8,86,34,164,83,176,19,177,84,44,21,235,216,199,126,229,57,120,227,102,51,179,183,119,106,16,139,151,203,237,108,118,158,249,218,171,122,189,126,248,11,250,31,32,7,135,71,225,238,254,
33,92,223,220,134,149,213,53,115,79,169,58,131,156,157,95,132,203,171,97,88,92,90,14,91,219,59,225,229,245,237,91,48,157,64,112,252,248,244,60,181,182,190,177,57,179,214,70,173,65,200,0,209,243,76,109,
100,9,165,235,37,106,13,66,212,100,196,178,161,38,187,167,86,32,199,39,167,117,95,88,54,41,151,177,156,138,65,212,3,131,193,130,105,143,181,187,183,95,79,147,101,243,84,4,130,243,182,83,65,230,200,160,
101,179,84,4,66,116,220,25,233,58,233,215,93,130,52,206,216,4,79,38,211,255,89,106,4,193,17,23,86,188,134,19,162,101,66,112,68,41,216,51,30,127,212,206,181,143,12,242,94,82,206,44,136,119,16,239,86,51,
178,23,152,56,11,86,32,150,92,16,47,181,140,230,104,244,94,63,227,117,68,121,82,16,173,91,165,141,229,130,16,69,218,108,192,1,129,51,14,143,109,72,25,73,155,90,65,229,154,221,4,241,198,79,125,128,210,
210,144,5,214,113,24,175,199,246,220,248,207,128,120,125,65,106,5,97,165,89,101,201,141,108,238,19,48,5,130,115,235,138,38,122,74,130,205,74,47,251,149,13,47,98,201,251,4,76,129,120,196,28,158,54,160,
4,152,250,38,215,3,18,65,1,156,150,118,2,2,37,180,177,17,1,80,2,65,95,89,123,44,89,61,88,131,120,148,8,8,203,9,224,64,32,43,213,77,74,63,1,53,8,116,185,136,176,3,68,137,112,170,198,228,105,193,151,72,
253,168,108,87,0,52,221,124,148,128,8,136,30,231,236,247,202,213,70,156,171,113,175,72,207,79,28,218,85,4,198,179,226,78,200,205,254,111,74,189,201,239,74,181,82,243,204,83,113,163,79,198,151,242,204,
91,95,141,222,15,159,73,250,181,95,49,104,20,157,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainComponent::icon_png = (const char*) resource_MainComponent_icon_png;
const int MainComponent::icon_pngSize = 597;

// JUCER_RESOURCE: edited_png, 1079, "Pic/edited.PNG"
static const unsigned char resource_MainComponent_edited_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,97,0,0,0,46,8,6,0,0,0,56,8,119,26,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,4,103,
65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,3,204,73,68,65,84,120,94,237,156,217,107,19,81,20,198,253,67,92,81,171,77,38,91,147,116,211,186,148,180,
90,139,181,214,173,214,18,44,98,81,234,82,69,4,31,220,104,133,22,241,205,191,70,68,68,196,21,17,43,58,77,26,91,109,85,20,151,87,31,227,156,59,189,227,153,201,153,12,195,204,109,84,206,195,143,118,206,
247,205,229,220,239,11,121,40,232,178,108,182,169,236,151,116,58,91,19,82,169,134,154,147,72,36,67,71,148,240,244,102,199,63,64,238,191,196,42,225,215,237,149,76,141,224,18,254,2,200,18,30,157,201,51,
138,193,121,147,37,220,25,58,206,40,6,231,77,150,112,247,232,49,70,49,56,111,178,132,123,249,33,70,49,56,111,178,132,251,131,121,70,49,56,111,178,132,7,71,6,25,197,224,188,201,18,30,14,12,48,138,193,121,
199,98,241,202,18,30,247,31,98,20,131,243,38,75,120,114,112,63,163,24,156,183,40,1,254,48,134,135,207,14,244,49,138,193,121,147,37,60,223,215,203,40,6,231,77,150,240,98,111,15,163,24,156,55,89,194,203,
61,221,140,98,112,222,100,9,175,118,119,49,138,193,121,147,37,76,117,239,8,133,233,91,17,154,241,196,31,207,245,134,114,97,82,179,52,241,187,49,211,71,91,203,83,189,29,182,243,132,127,241,125,253,116,
219,159,243,92,208,47,103,204,119,12,63,165,3,214,185,62,247,8,10,206,155,44,225,117,87,46,20,228,101,244,11,77,54,166,71,91,42,60,48,211,79,109,22,63,225,242,114,254,54,191,173,226,204,233,241,184,152,
227,51,101,128,120,6,231,137,119,12,127,133,182,8,62,215,207,30,65,193,121,147,37,188,217,217,30,10,34,176,27,9,82,147,184,121,244,252,22,113,121,17,64,207,118,107,238,230,135,25,104,206,185,151,38,241,
187,71,80,112,222,100,9,122,167,241,41,11,1,113,49,227,83,72,105,146,106,158,226,72,179,208,11,103,27,173,153,155,223,250,180,59,230,94,154,196,239,30,65,193,121,147,37,20,114,70,251,33,96,94,44,70,106,
146,170,158,93,230,247,126,225,90,210,154,185,249,97,38,188,142,185,151,38,241,187,71,80,112,222,100,9,197,246,77,161,32,22,55,46,70,105,18,47,15,104,133,201,168,245,236,230,135,25,104,206,185,151,38,
241,187,71,80,112,222,100,9,51,91,91,66,1,46,70,81,58,153,177,121,224,130,248,61,140,12,80,62,187,249,157,62,74,115,50,115,190,193,242,192,179,159,61,130,130,243,38,75,120,215,214,20,10,176,116,113,34,
90,46,157,72,219,152,237,207,216,60,133,113,205,246,30,6,222,199,186,155,31,102,160,57,231,88,11,115,143,160,224,188,201,18,102,91,27,67,65,92,108,76,35,53,73,85,79,111,198,12,239,98,210,154,185,249,97,
6,154,115,238,165,73,252,238,17,20,156,55,89,194,251,230,116,40,192,226,69,227,211,67,105,146,106,158,210,185,164,208,231,6,83,214,204,205,15,51,208,156,115,47,77,226,119,143,160,224,188,201,18,230,179,
169,80,144,23,163,52,137,155,103,118,216,188,248,204,85,187,230,230,151,65,59,231,94,154,196,239,30,65,193,121,147,37,44,164,19,161,32,46,54,97,124,79,143,198,43,88,104,75,218,60,115,195,9,147,145,120,
185,56,22,53,47,126,69,179,124,182,51,13,29,207,0,249,142,115,142,53,106,143,249,78,211,227,119,143,160,224,188,201,18,62,38,227,161,0,23,112,99,33,103,122,228,69,37,240,92,186,164,149,63,28,174,60,15,
144,30,231,92,158,227,156,99,141,98,190,143,246,120,237,17,20,156,55,89,194,39,45,198,40,6,231,77,150,240,57,162,49,138,193,121,147,37,124,169,143,50,138,193,121,211,37,212,213,51,138,193,121,147,37,124,
93,187,145,81,12,206,155,44,225,219,154,13,140,98,112,222,116,9,171,235,24,197,224,188,201,18,190,175,90,207,40,6,231,77,151,176,194,48,50,74,193,121,147,37,252,88,190,142,81,12,206,155,44,225,103,99,
156,81,12,206,155,44,129,89,90,68,9,240,95,5,80,34,179,52,68,34,26,151,80,107,172,18,106,5,252,123,173,90,0,95,1,181,6,194,55,209,202,191,1,174,4,46,64,104,59,16,248,0,0,0,0,73,69,78,68,174,66,96,130,
0,0};

const char* MainComponent::edited_png = (const char*) resource_MainComponent_edited_png;
const int MainComponent::edited_pngSize = 1079;

// JUCER_RESOURCE: edited2_png, 163, "Pic/edited2.PNG"
static const unsigned char resource_MainComponent_edited2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,59,0,0,0,27,8,6,0,0,0,194,137,247,133,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,
0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,0,56,73,68,65,84,88,71,237,207,49,1,0,32,0,4,33,59,125,255,108,218,3,111,32,0,103,219,253,69,
89,85,89,85,89,85,89,85,89,85,89,85,89,85,89,85,89,85,89,85,89,85,89,85,89,211,238,3,130,159,235,96,53,217,36,32,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainComponent::edited2_png = (const char*) resource_MainComponent_edited2_png;
const int MainComponent::edited2_pngSize = 163;

// JUCER_RESOURCE: edited_png2, 940, "Pic/edited.PNG"
static const unsigned char resource_MainComponent_edited_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,69,0,0,0,38,8,6,0,0,0,146,237,86,221,0,0,0,1,115,82,71,66,0,174,206,28,233,0,0,0,
4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,3,65,73,68,65,84,104,67,237,152,219,79,19,65,20,198,91,145,0,214,26,76,208,88,176,128,68,18,21,
17,241,111,48,94,35,222,163,47,234,131,26,163,136,196,187,47,36,250,98,140,49,138,74,188,39,106,228,65,227,127,68,41,151,52,88,46,53,16,177,45,69,200,184,223,92,202,153,50,155,184,85,212,208,121,248,101,
179,231,156,153,217,239,235,153,221,73,125,126,191,159,133,66,33,134,171,27,133,150,247,33,192,62,251,44,18,248,193,59,197,148,44,84,120,167,88,83,116,140,166,244,108,223,86,112,80,253,214,20,9,213,111,
77,145,80,253,214,20,9,213,111,77,145,80,253,220,148,220,115,138,105,208,98,135,234,55,158,83,76,131,22,59,84,191,221,62,18,170,223,154,34,161,250,173,41,18,170,223,179,41,125,7,26,216,200,165,240,60,
226,231,106,179,53,177,83,235,231,114,109,97,54,116,166,142,69,118,110,213,230,137,238,107,100,19,183,43,88,100,119,19,207,13,183,86,107,243,41,134,219,170,89,100,87,147,51,166,153,197,207,215,26,107,
162,251,55,139,57,157,43,214,83,241,225,11,53,172,239,96,131,182,174,27,84,191,103,83,210,93,1,173,150,50,112,116,35,55,205,148,3,16,174,230,73,92,23,95,60,60,56,200,173,165,140,94,174,226,99,77,57,48,
222,177,154,207,153,124,24,52,230,211,93,203,178,235,186,65,235,61,155,50,245,172,140,215,12,157,174,99,177,147,245,89,6,143,109,224,249,254,195,155,120,126,234,121,25,239,16,116,208,183,187,43,197,220,
31,253,108,240,184,168,75,220,144,166,180,214,104,157,162,106,39,239,151,139,95,219,137,163,155,208,1,136,79,220,169,208,214,141,157,168,119,58,73,116,97,234,241,114,49,231,197,106,190,246,216,181,74,
54,251,161,72,140,115,186,82,105,48,129,26,5,55,197,203,57,69,153,210,187,103,139,49,175,76,193,175,70,227,137,155,98,141,241,142,85,226,158,152,66,235,148,248,177,43,85,230,248,213,74,45,78,81,166,160,
91,85,44,218,210,200,99,179,221,69,172,103,71,179,86,79,65,141,194,243,57,69,153,146,121,89,202,50,47,230,248,122,107,13,207,187,153,50,224,116,18,226,223,31,172,224,247,249,154,50,243,174,88,91,55,253,
52,192,122,247,138,31,200,100,10,192,246,225,241,22,241,238,49,129,188,34,239,237,147,75,250,73,128,231,221,76,233,63,36,226,41,89,151,175,41,38,240,46,67,141,155,41,169,78,17,31,56,34,234,76,208,249,
242,54,197,235,246,193,254,71,252,119,59,197,235,246,1,211,175,75,68,124,161,59,197,171,41,48,3,113,152,129,251,191,101,10,62,8,136,253,120,91,172,213,230,130,26,69,222,166,224,1,82,143,130,89,32,26,231,
4,101,10,222,250,60,231,212,225,37,199,99,221,75,178,251,63,95,83,166,223,148,104,235,38,29,226,206,39,29,53,202,20,108,229,100,103,144,101,94,149,242,123,48,210,30,214,230,203,69,213,1,207,166,160,3,
104,45,5,159,65,136,102,159,230,231,102,222,47,229,134,169,121,32,26,113,122,232,3,16,136,248,104,251,90,45,254,229,236,58,109,62,138,218,146,147,247,202,231,231,157,103,193,167,153,206,101,130,142,241,
108,202,159,68,189,32,127,53,190,144,80,253,220,20,251,127,138,110,138,253,63,69,66,245,255,211,237,243,63,65,245,91,83,36,84,191,53,69,66,245,91,83,36,84,191,53,69,66,245,91,83,36,84,63,55,197,158,83,
116,83,140,231,148,66,199,184,125,10,29,107,138,129,172,41,216,71,184,186,81,88,121,63,251,9,112,108,183,57,48,15,92,8,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* MainComponent::edited_png2 = (const char*) resource_MainComponent_edited_png2;
const int MainComponent::edited_png2Size = 940;


//[EndFile] You can add extra defines here...


//[/EndFile]
