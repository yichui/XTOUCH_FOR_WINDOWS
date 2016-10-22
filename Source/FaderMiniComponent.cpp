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
#include "GlobalCompactComponent.h"
//[/Headers]

#include "FaderMiniComponent.h"


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
FaderMiniComponent * pFaderMiniComponent =nullptr;
extern MainComponent * pMainComponent;
extern MusicNoteViewComponent *pMusicNoteViewComponent;
extern MMCFuntionsViewComponent *pMMCFuntionsViewComponent;
extern GlobalCompactComponent *pGlobalCompactComponent;

extern String MMC_Functions_e[9];
extern String  Midimusic[128];
extern String CCBT[128];
ButtonGroup FMBt[1];
//[/MiscUserDefs]

//==============================================================================
FaderMiniComponent::FaderMiniComponent ()
{
    addAndMakeVisible (label8 = new Label ("new label",
                                           String::empty));
    label8->setFont (Font (15.00f, Font::plain));
    label8->setJustificationType (Justification::centredLeft);
    label8->setEditable (false, false, false);
    label8->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label8->setColour (TextEditor::textColourId, Colours::black);
    label8->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

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

    addAndMakeVisible (FDCP_CH_FD1 = new TextButton ("new button"));
    FDCP_CH_FD1->setButtonText ("1");
    FDCP_CH_FD1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_CH_FD1->addListener (this);
    FDCP_CH_FD1->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_CH_FD1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_CH_FD1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_CH_FD1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FDCP_TY_FD1 = new TextButton ("new button"));
    FDCP_TY_FD1->setButtonText ("CC");
    FDCP_TY_FD1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FDCP_TY_FD1->addListener (this);
    FDCP_TY_FD1->setColour (TextButton::buttonColourId, Colours::black);
    FDCP_TY_FD1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FDCP_TY_FD1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FDCP_TY_FD1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

    addAndMakeVisible (FADE_NO1 = new TextButton ("new button"));
    FADE_NO1->setButtonText ("CC1");
    FADE_NO1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    FADE_NO1->addListener (this);
    FADE_NO1->setColour (TextButton::buttonColourId, Colours::black);
    FADE_NO1->setColour (TextButton::buttonOnColourId, Colours::chocolate);
    FADE_NO1->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    FADE_NO1->setColour (TextButton::textColourOffId, Colour (0xffffab00));

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


    //[UserPreSize]
    addAndMakeVisible (pfader1=new CustomTextButton ("1"));
    pfader1->addListener (this);

    addAndMakeVisible (pCustomImageButton1=new CustomImageButton ("0"));
    pCustomImageButton1->addListener (this);

    addAndMakeVisible (pCustomImageButton2=new CustomImageButton ("12"));
    pCustomImageButton2->addListener (this);

    for (int i = 0; i < 2; i++)
    {
        addAndMakeVisible(MLSB[i] = new CustomImageButton("-"));
        MLSB[i]->addListener(this);
    }

    FDCP_CH_FD1 ->setLookAndFeel(&lookAndFeelV4);
    FDCP_TY_FD1 ->setLookAndFeel(&lookAndFeelV4);
    FADE_NO1->setLookAndFeel(&lookAndFeelV4);

	MakeButtonPointToBtGroup();
    //[/UserPreSize]

    setSize (664, 535);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

FaderMiniComponent::~FaderMiniComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    pfader1 = nullptr;
    pCustomImageButton1 = nullptr;
    pCustomImageButton2 = nullptr;

    for (int i = 0; i < 2; i++)
    {
        MLSB[i] = nullptr;
    }
    //[/Destructor_pre]

    label8 = nullptr;
    label_MOVE = nullptr;
    label_CHANNEL = nullptr;
    label_TYPE = nullptr;
    label_NO = nullptr;
    label_MIN = nullptr;
    label_MAX = nullptr;
    label_FD1 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label5 = nullptr;
    label6 = nullptr;
    FDCP_CH_FD1 = nullptr;
    FDCP_TY_FD1 = nullptr;
    FADE_NO1 = nullptr;
    LSB1 = nullptr;
    MSB1 = nullptr;
    LNMSB1 = nullptr;
    LNLSB1 = nullptr;
    label20 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void FaderMiniComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    g.setColour (Colour (0xff333333));
    g.fillRect (0, 500, 672, 100);

    g.setColour (Colour (0xffffab00));
    g.fillRect (31, 35, 165, 2);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void FaderMiniComponent::resized()
{
    label8->setBounds (0, 500, 664, 2);
    label_MOVE->setBounds (32, 8, 64, 24);
    label_CHANNEL->setBounds (32, 38, 85, 26);
    label_TYPE->setBounds (32, 64, 85, 26);
    label_NO->setBounds (32, 90, 85, 26);
    label_MIN->setBounds (32, 116, 85, 26);
    label_MAX->setBounds (32, 142, 85, 26);
    label_FD1->setBounds (144, 8, 48, 24);
    label3->setBounds (32, 64, 165, 1);
    label4->setBounds (33, 90, 165, 1);
    label5->setBounds (32, 116, 165, 1);
    label6->setBounds (32, 142, 165, 1);
    FDCP_CH_FD1->setBounds (129, 37, 65, 25);
    FDCP_TY_FD1->setBounds (129, 65, 65, 24);
    FADE_NO1->setBounds (129, 91, 65, 24);
    LSB1->setBounds (32, 170, 85, 26);
    MSB1->setBounds (32, 197, 85, 26);
    LNMSB1->setBounds (32, 196, 165, 1);
    LNLSB1->setBounds (32, 169, 165, 1);
    label20->setBounds (127, 12, 2, 208);
    //[UserResized] Add your own custom resize handling here..
    pfader1->setBounds(129,37,65,25);
    pCustomImageButton1 ->setBounds(129,117,64,24);
    pCustomImageButton2 ->setBounds(129,143,64,24);
    for (int i = 0; i < 2; i++)
    {
        
        MLSB[i]->setBounds(129, 170 + 27*i, 64, 24);
    }
    //[/UserResized]
}

void FaderMiniComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    pMainComponent->setMyComponent(0);
    GetCustomBtID();
    Push_or_Turn =1;
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == FDCP_CH_FD1)
    {
        //[UserButtonCode_FDCP_CH_FD1] -- add your button handler code here..
        //[/UserButtonCode_FDCP_CH_FD1]
    }
    else if (buttonThatWasClicked == FDCP_TY_FD1)
    {
        //[UserButtonCode_FDCP_TY_FD1] -- add your button handler code here..
        this->SetNextBT(FADE_NO1);
        MidiLayerNum = 1;
        SetNO_BT(FDCP_TY_FD1);
        pFiveComp  = new FiveMenuComponent  ();
        CallOutBox::launchAsynchronously(pFiveComp, FDCP_TY_FD1->getScreenBounds(), nullptr);
        //[/UserButtonCode_FDCP_TY_FD1]
    }
    else if (buttonThatWasClicked == FADE_NO1)
    {
        //[UserButtonCode_FADE_NO1] -- add your button handler code here..
		if (FDCP_TY_FD1->getButtonText().compare("CC") == 0 /*|| FDCP_TY_FD1->getButtonText().compare("Program") == 0*/)
        {
            MidiLayerNum = 2;
            SetNO_BT(FADE_NO1);
            num = ConventNO_BTtoInt(FADE_NO1->getButtonText());
            CC_VP  = new CC_Viewport_Component ();
            CallOutBox::launchAsynchronously(CC_VP, FADE_NO1->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD1->getButtonText().compare("Note") == 0)
        {
            MidiLayerNum = 2;
            SetNO_BT(FADE_NO1);
            pMusicNoteViewComponent = new MusicNoteViewComponent();
            CallOutBox::launchAsynchronously(pMusicNoteViewComponent, FADE_NO1->getScreenBounds(), nullptr);
        }
        else if(FDCP_TY_FD1->getButtonText().compare("MMC") == 0)
        {
            MidiLayerNum = 2;
            SetNO_BT(FADE_NO1);
            pMMCFuntionsViewComponent = new MMCFuntionsViewComponent();
            CallOutBox::launchAsynchronously(pMMCFuntionsViewComponent, FADE_NO1->getScreenBounds(), nullptr);
        }
        //[/UserButtonCode_FADE_NO1]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void FaderMiniComponent::CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged)
{

    if(CustomTextButtonThatHasChanged == pfader1)
    {
        //pfader1->setState(Button::buttonOver);
        Load_or_SaveFlag =1;
		
		pMainComponent-> ChangeEditedButtonImClose();
		//GetCustomBtID();
		//UpdateMiniFaderBt();
        //MiniConstMidiLayerMessage[0] =(unsigned char)( pfader1->GetValue().toString().getIntValue()*0x01-1);
		//int lenth = pfader1->GetValue().toString().length();
		if(!(pfader1->GetValue().toString().compare("Off")==0) && !(pfader1->GetValue().toString().compare("Global")==0))
		{
			if(pfader1->GetValue().toString().getLastCharacters(1).compare("*")==0)
			{
				if(pGlobalCompactComponent->GetBT_CH2Num() != pfader1->GetValue().toString().dropLastCharacters(1).getIntValue())
				{
					pfader1->setButtonText(pfader1->GetValue().toString().dropLastCharacters(1));
				}
			}
			else
			{
				if(pGlobalCompactComponent->GetBT_CH2Num() == pfader1->GetValue().toString().getIntValue())
				{
					pfader1->setButtonText(pfader1->GetValue().toString()+"*");
				}
			}
		}
    }
	
}

void FaderMiniComponent::CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked)
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
}

void FaderMiniComponent:: SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT2 = currentbuttonThatWasClicked;
 }

 CustomTextButton* FaderMiniComponent:: GetCurrentCustomBT2()
 {
     return CurrentCustomBT2;
 }

void FaderMiniComponent::CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged)
{
    Load_or_SaveFlag =1;
	pMainComponent-> ChangeEditedButtonImClose();
	//UpdateMiniFaderBt();

    //if(CustomImageButtonThatHasChanged =pCustomImageButton1 )
   //     MiniConstMidiLayerMessage[3] =(unsigned char)( pCustomImageButton1->GetValue().toString().getIntValue());
       // MiniConstMidiLayerMessage[3] =(unsigned char) pCustomImageButton1->getButtonText().getIntValue()*0x01;
    //if(CustomImageButtonThatHasChanged = pCustomImageButton2)
     //   MiniConstMidiLayerMessage[4] =(unsigned char)( pCustomImageButton2->GetValue().toString().getIntValue());
        //MiniConstMidiLayerMessage[4] =(unsigned char) pCustomImageButton2->getButtonText().getIntValue()*0x01;
}

void FaderMiniComponent::CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked)
{
    pMainComponent->setMyComponent(0);
    pMainComponent->FaderorOtherFlag =0;
    GetCustomBtID();
    if (buttonThatWasClicked == pCustomImageButton1)
    {
        MidiLayerNum =3;
        SetCurrentCustomBT(pCustomImageButton1);
        pViewPortComponent = new ViewPortComponent();
        CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);

        //CallOutBox::launchAsynchronously(pViewPortComponent, pCustomImageButton1->getScreenBounds(), nullptr);
        //MyCallOutBox(pViewPortComponent,pCustomImageButton1);
        //pCustomImageButton1->setToggleState(1,dontSendNotification);
    }
    else if(buttonThatWasClicked == pCustomImageButton2)
    {
		if((!pCustomImageButton1->getButtonText().compare("Dec/-1")==0) && (!pCustomImageButton1->getButtonText().compare("Inc/+1")==0))
        MidiLayerNum =4;
        SetCurrentCustomBT(pCustomImageButton2);
        pViewPortComponent = new ViewPortComponent();

        MyCallOutBox(pViewPortComponent,pCustomImageButton2);
        //pCustomImageButton2->setToggleState(1,dontSendNotification);
    }

    for (int i = 0; i < 2; i++)
    {
        if (buttonThatWasClicked == MLSB[i])
        {
            if (i == 0)
            {
                if (FDCP_TY_FD1->getButtonText().compare("Program") == 0 /*|| FDCP_TY_FD1->getButtonText().compare("Pitch") == 0*/)
                {
                    MidiLayerNum = 5 + i;
                    SetCurrentCustomBT(MLSB[i]);
                    pViewPortComponent = new ViewPortComponent();
                    MyCallOutBox(pViewPortComponent, MLSB[i]);
                }
            }
            else if (i == 1)
            {
                if (FDCP_TY_FD1->getButtonText().compare("Program") == 0 )
                {
                    MidiLayerNum = 5 + i;
                    SetCurrentCustomBT(MLSB[i]);
                    pViewPortComponent = new ViewPortComponent();
                    MyCallOutBox(pViewPortComponent, MLSB[i]);
                }
            }
        }
    }

}

CallOutBox & FaderMiniComponent::MyCallOutBox(Component *p,Button* buttonThatWasClicked)
{
    CallOutBox & mycall = CallOutBox::launchAsynchronously(p, buttonThatWasClicked->getScreenBounds(), nullptr);
    return mycall;
}

void FaderMiniComponent:: SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked)
 {
     CurrentCustomBT = currentbuttonThatWasClicked;
 }

 CustomImageButton* FaderMiniComponent:: GetCurrentCustomBT()
 {
     return CurrentCustomBT;
 }

 void FaderMiniComponent::SetNO_BT(Button* buttonThatWasClicked)
 {
     NO_BT = buttonThatWasClicked;
 }
 Button* FaderMiniComponent::GetNO_BT()
 {
    return NO_BT;
 }

  int FaderMiniComponent::ConventNO_BTtoInt(String JK)
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

 int FaderMiniComponent::GetNum()
 {
    return num;
 }

 void FaderMiniComponent::SetNextBT(Button *s)
{
    Next_BT = s;
}
Button* FaderMiniComponent::GetNextBT()
{
    return Next_BT;
}

void FaderMiniComponent::MakeButtonPointToBtGroup()
{
	FMBt[0].BT1 = pfader1;
	FMBt[0].BT2 = FDCP_TY_FD1;
	FMBt[0].BT3 = FADE_NO1;
	FMBt[0].BT4 = pCustomImageButton1;
	FMBt[0].BT5 = pCustomImageButton2;

	FMBt[0].BT7 = MLSB[0];
	FMBt[0].BT8 = MLSB[1];
}

 void FaderMiniComponent::UpdateMiniFaderBt()
 {
    if (MiniConstMidiLayerMessage[0] == 17*0x01)  pfader1->setButtonText("Global");
    else if (MiniConstMidiLayerMessage[0] == 18 * 0x01){  
		if((pGlobalCompactComponent->GetBT_CH2Num())*0x01 == MiniConstMidiLayerMessage[0] )
			pfader1->setButtonText("Off*");
		else			
			pfader1->setButtonText("Off");
	}
    else{
		if((pGlobalCompactComponent->GetBT_CH2Num() - 1)*0x01 == MiniConstMidiLayerMessage[0] )
			pfader1->setButtonText(String(MiniConstMidiLayerMessage[0]+0x01)+"*");
		else
			pfader1->setButtonText(String(MiniConstMidiLayerMessage[0]+0x01));
	}

    if(MiniConstMidiLayerMessage[1] ==0) {                        FDCP_TY_FD1->setButtonText("CC");           FADE_NO1->setButtonText("CC"+String(MiniConstMidiLayerMessage[2]));                       }
    else if(MiniConstMidiLayerMessage[1] ==0x01) {           FDCP_TY_FD1->setButtonText("Note");        FADE_NO1->setButtonText(Midimusic[MiniConstMidiLayerMessage[2]]);   }
    else if (MiniConstMidiLayerMessage[1] == 0x02) { FDCP_TY_FD1->setButtonText("Pitch");        FADE_NO1->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[2]])*/"-"); }
    else if(MiniConstMidiLayerMessage[1] ==0x03) {           FDCP_TY_FD1->setButtonText("Program");   FADE_NO1->setButtonText(/*String(CCBT[MiniConstMidiLayerMessage[2]])*/"-");}
    else if (MiniConstMidiLayerMessage[1] == 0x04) { FDCP_TY_FD1->setButtonText("MMC");       FADE_NO1->setButtonText(String(MMC_Functions_e[MiniConstMidiLayerMessage[2]])); }

    if (/*MiniConstMidiLayerMessage[1] != 0x02 ||*/ MiniConstMidiLayerMessage[1] != 0x04)
    {
        if (MiniConstMidiLayerMessage[3] == 0x80)             pCustomImageButton1->setButtonText("Dec/-1");
        else if (MiniConstMidiLayerMessage[3] == 0x81)             pCustomImageButton1->setButtonText("Inc/+1");
		else if(MiniConstMidiLayerMessage[3] == 0x82)           pCustomImageButton1->setButtonText("Relative");
        else                                                                                pCustomImageButton1->setButtonText(String(MiniConstMidiLayerMessage[3]));

        if (MiniConstMidiLayerMessage[3] == 0x80 || MiniConstMidiLayerMessage[3] == 0x81)
            pCustomImageButton2->setButtonText("-");
        else
        {
            if (MiniConstMidiLayerMessage[4] == 0x80)             pCustomImageButton2->setButtonText("Dec/-1");
            else if (MiniConstMidiLayerMessage[4] == 0x81)             pCustomImageButton2->setButtonText("Inc/+1");
            else                                                                                pCustomImageButton2->setButtonText(String(MiniConstMidiLayerMessage[4]));
        }

    }
    else
    {
        pCustomImageButton1->setButtonText("-");
        pCustomImageButton2->setButtonText("-");
    }

    if (MiniConstMidiLayerMessage[1] == 0x03 /*|| MiniConstMidiLayerMessage[1] == 0x02*/) {
        MLSB[0]->setButtonText(String(MiniConstMidiLayerMessage[5]));
        MLSB[1]->setButtonText(String(MiniConstMidiLayerMessage[6]));
    }
    else
    {
        MLSB[0]->setButtonText("-");
        MLSB[1]->setButtonText("-");
    }
    
    repaint();
 }

void FaderMiniComponent::SetAllButtonState(bool s)
{
	pfader1 ->setEnabled(s);
	pCustomImageButton1 ->setEnabled(s);
	pCustomImageButton2 ->setEnabled(s);
	FDCP_CH_FD1 ->setEnabled(s);
	FDCP_TY_FD1 ->setEnabled(s);
	FADE_NO1 ->setEnabled(s);
    MLSB[0]->setEnabled(s);
    MLSB[1]->setEnabled(s);
}

 void FaderMiniComponent::GetCustomBtID()
 {
     if (!(FMBt[0].BT1->getButtonText().compare("Global") == 0) && !(FMBt[0].BT1->getButtonText().compare("Off") == 0) && !(FMBt[0].BT1->getButtonText().compare("Off*") == 0))
		MiniConstMidiLayerMessage[0] =(unsigned char)(GetintValue(pfader1->getButtonText()))*0x01;
		 
	 
    MiniConstMidiLayerMessage[3] =(unsigned char) pCustomImageButton1->getButtonText().getIntValue()*0x01;
    MiniConstMidiLayerMessage[4] =(unsigned char) pCustomImageButton2->getButtonText().getIntValue()*0x01;

    if (MiniConstMidiLayerMessage[1] == 0x03 ){
        MiniConstMidiLayerMessage[ 5 ] = (unsigned char)(FMBt[0].BT7->getButtonText().getIntValue()) * 0x01;
        MiniConstMidiLayerMessage[ 6 ] =  (unsigned char)(FMBt[0].BT8->getButtonText().getIntValue()) * 0x01;
    }
 }
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="FaderMiniComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="664" initialHeight="535">
  <BACKGROUND backgroundColour="ff000000">
    <RECT pos="0 500 672 100" fill="solid: ff333333" hasStroke="0"/>
    <RECT pos="31 35 165 2" fill="solid: ffffab00" hasStroke="0"/>
  </BACKGROUND>
  <LABEL name="new label" id="d5e6cb99d4d23726" memberName="label8" virtualName=""
         explicitFocusOrder="0" pos="0 500 664 2" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
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
  <LABEL name="new label" id="e4b35a2fa3a17b7b" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="32 64 165 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="5341d72318556928" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="33 90 165 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="a6617d15bc7b2e63" memberName="label5" virtualName=""
         explicitFocusOrder="0" pos="32 116 165 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="70701aeddec493fb" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="32 142 165 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="new button" id="7b6bfda123f7edce" memberName="FDCP_CH_FD1"
              virtualName="" explicitFocusOrder="0" pos="129 37 65 25" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f5a38375d9474f4" memberName="FDCP_TY_FD1"
              virtualName="" explicitFocusOrder="0" pos="129 65 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="4577a8f1ad824228" memberName="FADE_NO1"
              virtualName="" explicitFocusOrder="0" pos="129 91 65 24" bgColOff="ff000000"
              bgColOn="ffd2691e" textCol="ffffab00" textColOn="ffffab00" buttonText="CC1"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
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
         explicitFocusOrder="0" pos="32 196 165 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="92d5dfa8589af6e9" memberName="LNLSB1" virtualName=""
         explicitFocusOrder="0" pos="32 169 165 1" bkgCol="ff444444" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="b20c8e88efbe8f18" memberName="label20" virtualName=""
         explicitFocusOrder="0" pos="127 12 2 208" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="label text" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
