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
#include  "FadersAndFootCompactComponent.h"
#include "FaderMiniComponent.h"
#include "ViewPortComponent.h"
#include "EncodersCompact1To8Component.h"
#include "EncodersCompact9To16Component.h"
#include "EncodersMiniComponent.h"
#include "GlobalCompactComponent.h"
//#include "FadersAndFootCompactComponent.h"
//#include "FaderMiniComponent.h"
#include "MainComponent.h"
#include "ButtonsCompact17To24Component.h"
#include "ButtonsCompact1To8Component.h"
#include "ButtonsCompact25To33Component.h"
#include "ButtonsCompact34To39Component.h"
#include "ButtonsCompact9To16Component.h"
#include "ButtonsMini1To8Component.h"
#include "ButtonsMini9To16Component.h"
#include "FaderTouchCompactComponent.h"
#include "XtouchDevMidiData.h"
#include "MidiDeviceProcess.h"
#include "BackgroundThread.h"
//[/Headers]

#include "SixthChannelComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
extern MidiDeviceProcess *pMidiDeviceProcess;
extern MainComponent *pMainComponent;
extern GlobalCompactComponent *pGlobalCompactComponent;
extern FadersAndFootCompactComponent * pFadersAndFootCompactComponent;
extern FaderMiniComponent *pFaderMiniComponent;
extern ViewPortComponent * pViewPortComponent ;
extern  EncodersCompact1To8Component * pEncodersCompact1To8Component ;
extern  EncodersCompact9To16Component * pEncodersCompact9To16Component ;
extern EncodersMiniComponent * pEncodersMiniComponent;
extern ButtonsCompact1To8Component *BC1TO8;
extern ButtonsCompact9To16Component *BC9TO16;
extern ButtonsCompact17To24Component *BC17TO24;
extern ButtonsCompact25To33Component *BC25TO33;
extern ButtonsCompact34To39Component *BC34TO39;
extern ButtonsMini1To8Component * BM1TO8;
extern ButtonsMini9To16Component * BM9TO16;
extern FaderTouchCompactComponent *pFaderTouchCompactComponent;

extern ButtonGroup FcBt[11];
extern ButtonGroup EC1Bt[16];
extern ButtonGroup EC2Bt[16];
extern ButtonGroup BC1Bt[8];
extern ButtonGroup BC2Bt[8];
extern ButtonGroup BC3Bt[8];
extern ButtonGroup BC4Bt[9];
extern ButtonGroup BC5Bt[6];
extern ButtonGroup FTBt[9];

 unsigned char SendWantToChangeMessage[14]  = {0xf0 ,0x40 ,0x41 ,0x42 ,0 ,0 ,0,0,0,0,0,0,0 ,0xf7};
//[/MiscUserDefs]

//==============================================================================
SixthChannelComponent::SixthChannelComponent ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->addListener (this);


    //[UserPreSize]
    textButton->setColour (TextButton::buttonColourId, Colour (0x00f7f7f7));
    textButton->setColour (TextButton::buttonOnColourId, Colour(0x00000000));
    textButton->setColour (TextButton::textColourOffId, Colour (0x00000000));
    int r = 0;
    if (pMainComponent->GlobalorOFF == 1)
    {
        addAndMakeVisible(Global = new MyTextButton("new button"));
        Global->setButtonText("Global");
        Global->addListener(this);

        addAndMakeVisible(OFF = new MyTextButton("new button"));
        OFF->setButtonText("Off");
        OFF->addListener(this);

    }
    else if (pMainComponent->GlobalorOFF == 2)
    {
        addAndMakeVisible(OFF = new MyTextButton("new button"));
        OFF->setButtonText("Off");
        OFF->addListener(this);
    }

    for(int i = 0; i<16;i++)
    {       
        addAndMakeVisible (MyTextButtonlist[i]= new MyTextButton ("new button"));
        MyTextButtonlist[i]->setButtonText(String(i+1));
        MyTextButtonlist[i]->addListener(this);
    }
	
	int componentID;
	if(MINI_MODE ==eXTOUCH_MODE_ID) //get component channel id
	{
		switch(pMainComponent->getMyComponent())
		{
		case 0: componentID = MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum]; break;
		case 1: componentID = MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum]; break;
		case 2: componentID = MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum]; break;
		case 3: componentID = MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum]; break;
		
		default:break;
		}
	}

    if (pMainComponent->GlobalorOFF != 0)
    {
        if (pMainComponent->GlobalorOFF == 2)
        {
            if (pMainComponent->getMyComponent() == 9)
            {
                if (pGlobalCompactComponent->GetCHBt()->getButtonText().compare("Off") == 0)
                {
                    OFF->setToggleState(1, dontSendNotification);   r = 1;
                }
            }
        }
        else if (pMainComponent->GlobalorOFF == 1)
        {
            if (pGlobalCompactComponent->GetBT_CH2Num() == 18)
			{
				if (eXTOUCH_MODE_ID == COMPACT_MODE)
				{}
				else if(eXTOUCH_MODE_ID == MINI_MODE)
				{
					if(componentID != 18)
						OFF->setButtonText("Off*");
				}
			}
            else
			{
				if(componentID != (pGlobalCompactComponent->GetBT_CH2Num()-1))
					MyTextButtonlist[pGlobalCompactComponent->GetBT_CH2Num() - 1]->setButtonText(String(pGlobalCompactComponent->GetBT_CH2Num()) + "*");
			}
            if (eXTOUCH_MODE_ID == COMPACT_MODE)
            {
                if (pMainComponent->getMyComponent() == 0)
                {
                    if (pFadersAndFootCompactComponent->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (pFadersAndFootCompactComponent->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification);   r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 1)
                {
                    if (pEncodersCompact1To8Component->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (pEncodersCompact1To8Component->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 2)
                {
                    if (pEncodersCompact9To16Component->GetCurrentCustomBT2()->getButtonText().compare("Dec/-1") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (pEncodersCompact9To16Component->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 3)
                {
                    if (BC1TO8->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (BC1TO8->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 4)
                {
                    if (BC9TO16->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (BC9TO16->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 5)
                {
                    if (BC17TO24->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (BC17TO24->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 6)
                {
                    if (BC25TO33->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (BC25TO33->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 7)
                {
                    if (BC34TO39->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (BC34TO39->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }

                else if (pMainComponent->getMyComponent() == 10)
                {
                    if (pFaderTouchCompactComponent->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (pFaderTouchCompactComponent->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
            }
            else if (eXTOUCH_MODE_ID == MINI_MODE)
            {
                if (pMainComponent->getMyComponent() == 0)
                {
                    if (pFaderMiniComponent->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
					else if (pFaderMiniComponent->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0 || pFaderMiniComponent->GetCurrentCustomBT2()->getButtonText().compare("Off*") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 1)
                {
                    if (pEncodersMiniComponent->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (pEncodersMiniComponent->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0 || pEncodersMiniComponent->GetCurrentCustomBT2()->getButtonText().compare("Off*") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 2)
                {
                    if (BM1TO8->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (BM1TO8->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0 || BM1TO8->GetCurrentCustomBT2()->getButtonText().compare("Off*") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }
                else if (pMainComponent->getMyComponent() == 3)
                {
                    if (BM9TO16->GetCurrentCustomBT2()->getButtonText().compare("Global") == 0){
                        Global->setToggleState(1, dontSendNotification); r = 1;
                    }
                    else if (BM9TO16->GetCurrentCustomBT2()->getButtonText().compare("Off") == 0 || BM9TO16->GetCurrentCustomBT2()->getButtonText().compare("Off*") == 0){
                        OFF->setToggleState(1, dontSendNotification); r = 1;
                    }
                }

            }
        }
    }
    if (r == 0)
    {
        if (eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if (pMainComponent->getMyComponent() == 0)
                MyTextButtonlist[((pFadersAndFootCompactComponent->GetCurrentCustomBT2()->getButtonText().getIntValue()) - 1)]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 1)
                MyTextButtonlist[pEncodersCompact1To8Component->GetCurrentCustomBT2()->getButtonText().getIntValue() - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 2)
                MyTextButtonlist[pEncodersCompact9To16Component->GetCurrentCustomBT2()->getButtonText().getIntValue() - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 3)
                MyTextButtonlist[BC1TO8->GetCurrentCustomBT2()->getButtonText().getIntValue() - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 4)
                MyTextButtonlist[BC9TO16->GetCurrentCustomBT2()->getButtonText().getIntValue() - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 5)
                MyTextButtonlist[BC17TO24->GetCurrentCustomBT2()->getButtonText().getIntValue() - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 6)
                MyTextButtonlist[BC25TO33->GetCurrentCustomBT2()->getButtonText().getIntValue() - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 7)
                MyTextButtonlist[BC34TO39->GetCurrentCustomBT2()->getButtonText().getIntValue() - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 8)
                MyTextButtonlist[pGlobalCompactComponent->num - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 9)
                MyTextButtonlist[pGlobalCompactComponent->num - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 10)
                MyTextButtonlist[pFaderTouchCompactComponent->GetCurrentCustomBT2()->getButtonText().getIntValue() - 1]->setToggleState(1, dontSendNotification);
        }
        else if (eXTOUCH_MODE_ID == MINI_MODE)
        {
            if (pMainComponent->getMyComponent() == 0)
                MyTextButtonlist[GetintValue(pFaderMiniComponent->GetCurrentCustomBT2()->getButtonText())]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 1)
                MyTextButtonlist[GetintValue(pEncodersMiniComponent->GetCurrentCustomBT2()->getButtonText())]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 2)
                MyTextButtonlist[GetintValue(BM1TO8->GetCurrentCustomBT2()->getButtonText())]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 3)
                MyTextButtonlist[GetintValue(BM9TO16->GetCurrentCustomBT2()->getButtonText())]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 8)
                MyTextButtonlist[pGlobalCompactComponent->num - 1]->setToggleState(1, dontSendNotification);

            else if (pMainComponent->getMyComponent() == 9)
                MyTextButtonlist[pGlobalCompactComponent->num - 1]->setToggleState(1, dontSendNotification);
        }
    }
    //[/UserPreSize]

    setSize (100, 390);


    //[Constructor] You can add your own custom stuff here..
    if (pMainComponent->GlobalorOFF == 1)
    {
        setSize(250, 390 + 24 * 2);
    }
    if (pMainComponent->GlobalorOFF == 2)
    {
        setSize(250, 390 + 24);
    }
    //[/Constructor]
}

SixthChannelComponent::~SixthChannelComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    for(int i = 0; i<16;i++)
    {
         MyTextButtonlist[i] = nullptr;
    }
    if (pMainComponent->GlobalorOFF == 1)
    {
        this->Global = nullptr;
        this->OFF = nullptr;
    }
    if (pMainComponent->GlobalorOFF == 2)
    {
        this->OFF = nullptr;
    }
    //[/Destructor_pre]

    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void SixthChannelComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    g.fillAll (Colour(0xff000000));
    //[/UserPaint]
}

void SixthChannelComponent::resized()
{
    textButton->setBounds (0, 6, 150, 11);
    //[UserResized] Add your own custom resize handling here..
    if (pMainComponent->GlobalorOFF == 0)
    {
        for (int i = 0; i < 16; i++)
        {
            MyTextButtonlist[i]->setBounds(0, 3 + i * 24, 100, 24);
        }
    }
    else if (pMainComponent->GlobalorOFF == 1 )
    {
        this->Global->setBounds(0, 3, 250, 24);
        this->OFF->setBounds(0, 3 + 27, 250, 24);
        for (int i = 0; i < 16; i++)
        {
            MyTextButtonlist[i]->setBounds(0, 3 + 48 + i * 24, 250, 24);
        }
    }
    else if (pMainComponent->GlobalorOFF == 2 )
    {
        this->OFF->setBounds(0, 3, 250, 24);
        for (int i = 0; i < 16; i++)
        {
            MyTextButtonlist[i]->setBounds(0, 3 + 24 + i * 24, 250, 24);
        }
    }
    //[/UserResized]
}

void SixthChannelComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    pMainComponent->ChangeEditedButtonImClose();
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }

    //[UserbuttonClicked_Post]
    if (pMainComponent->GlobalorOFF)
    {
        if (buttonThatWasClicked == Global)
        {
            //ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x80;
            if (pMainComponent->getMyComponent() == 0)
            {
                if (eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = 17*0x01;
                    pFadersAndFootCompactComponent->GetCurrentCustomBT2()->setButtonText("Global");
                    /*for (int i = 0; i<11; i++)
                    {
                        if (pFadersAndFootCompactComponent->GetCurrentCustomBT() == FcBt[i].BT4)
                            FcBt[i].BT5->setButtonText("-");
                    }*/

                }
                else if (eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum] = 17 * 0x01;
                    pFaderMiniComponent->GetCurrentCustomBT2()->setButtonText("Global");

                }
            }
            else if (pMainComponent->getMyComponent() == 1)
            {
                if (eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum] = 17 * 0x01;
                    pEncodersCompact1To8Component->GetCurrentCustomBT2()->setButtonText("Global");
                    /* (int i = 0; i<16; i++)
                    {
                        if (pEncodersCompact1To8Component->GetCurrentCustomBT() == EC1Bt[i].BT4)
                            EC1Bt[i].BT5->setButtonText("-");
                    }*/

                }
                else if (eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum] = 17 * 0x01;
                    //pEncodersMiniComponent->GetCustomBT(pEncodersMiniComponent->GetCurrentCustomBT())->setButtonText("-");
                    pEncodersMiniComponent->GetCurrentCustomBT2()->setButtonText("Global");
                }
            }
            else if (pMainComponent->getMyComponent() == 2)
            {
                if (eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum] = 17 * 0x01;
                    pEncodersCompact9To16Component->GetCurrentCustomBT2()->setButtonText("Global");
                    /*for (int i = 0; i<16; i++)
                    {
                        if (pEncodersCompact9To16Component->GetCurrentCustomBT() == EC1Bt[i].BT4)
                            EC2Bt[i].BT5->setButtonText("-");
                    }*/

                }
                else if (eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum] = 17 * 0x01;
                    BM1TO8->GetCurrentCustomBT2()->setButtonText("Global");
                    //BM1TO8->GetCustomBT(BM1TO8->GetCurrentCustomBT())->setButtonText("-");
                }
            }
            else if (pMainComponent->getMyComponent() == 3)
            {
                if (eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    BC1TO8->GetCurrentCustomBT2()->setButtonText("Global");
                    ConstMidiLayerMessage[BC1TO8->MidiLayerNum] = 17 * 0x01;
                   /* for (int i = 0; i<8; i++)
                    {
                        if (BC1TO8->GetCurrentCustomBT() == BC1Bt[i].BT4)
                            BC1Bt[i].BT5->setButtonText("-");
                    }*/
                }
                else if (eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum] = 17 * 0x01;
                    BM9TO16->GetCurrentCustomBT2()->setButtonText("Global");
                    //BM9TO16->GetCustomBT(BM9TO16->GetCurrentCustomBT())->setButtonText("-");
                }
            }
            else if (pMainComponent->getMyComponent() == 4)
            {
                BC9TO16->GetCurrentCustomBT2()->setButtonText("Global");
                ConstMidiLayerMessage[BC9TO16->MidiLayerNum] = 17 * 0x01;
                /*for (int i = 0; i<8; i++)
                {
                    if (BC9TO16->GetCurrentCustomBT() == BC2Bt[i].BT4)
                        BC2Bt[i].BT5->setButtonText("-");
                }*/
            }
            else if (pMainComponent->getMyComponent() == 5)
            {
                BC17TO24->GetCurrentCustomBT2()->setButtonText("Global");
                ConstMidiLayerMessage[BC17TO24->MidiLayerNum] = 17 * 0x01;
                /*for (int i = 0; i<8; i++)
                {
                    if (BC17TO24->GetCurrentCustomBT() == BC3Bt[i].BT4)
                        BC3Bt[i].BT5->setButtonText("-");
                }8*/
            }
            else if (pMainComponent->getMyComponent() == 6)
            {
                BC25TO33->GetCurrentCustomBT2()->setButtonText("Global");
                ConstMidiLayerMessage[BC25TO33->MidiLayerNum] = 17 * 0x01;
                /*for (int i = 0; i<9; i++)
                {
                    if (BC25TO33->GetCurrentCustomBT() == BC4Bt[i].BT4)
                        BC4Bt[i].BT5->setButtonText("-");
                }*/
            }
            else if (pMainComponent->getMyComponent() == 7)
            {
                BC34TO39->GetCurrentCustomBT2()->setButtonText("Global");
                ConstMidiLayerMessage[BC34TO39->MidiLayerNum] = 17 * 0x01;
                /*for (int i = 0; i<6; i++)
                {
                    if (BC34TO39->GetCurrentCustomBT() == BC5Bt[i].BT4)
                        BC5Bt[i].BT5->setButtonText("-");
                }*/
            }

            else if (pMainComponent->getMyComponent() == 10)
            {
                //pFaderTouchCompactComponent->GetCurrentCustomBT2()->setButtonText("Global");
                ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 17 * 0x01;
				pFaderTouchCompactComponent->UpdateFT(646);
                /*for (int i = 0; i<9; i++)
                {
                    if (pFaderTouchCompactComponent->GetCurrentCustomBT() == FTBt[i].BT4)
                        FTBt[i].BT5->setButtonText("-");
                }*/
				/*pFaderMiniComponent->UpdateMiniFaderBt();
				pEncodersMiniComponent->UpdateEncodeMini(7);
				BM1TO8->UpdateMiniBt1TO8(135);
				BM9TO16->UpdateMiniBt9TO16(199);*/
            }

            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }


        else if (buttonThatWasClicked == OFF)
        {
            if (pMainComponent->getMyComponent() == 0)
            {
                if (eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = 18*0x01;
					pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
                    /*for (int i = 0; i<11; i++)
                    {
                        if (pFadersAndFootCompactComponent->GetCurrentCustomBT() == FcBt[i].BT4)
                            FcBt[i].BT5->setButtonText("-");
                    }*/
                }
                else if (eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum] = 18 * 0x01;
                    pFaderMiniComponent->GetCurrentCustomBT2()->setButtonText("Off");
					pFaderMiniComponent->UpdateMiniFaderBt();
                }
            }
            else if (pMainComponent->getMyComponent() == 1)
            {
                if (eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum] = 18 * 0x01;
                    //pEncodersCompact1To8Component->GetCurrentCustomBT2()->setButtonText("Off");
					pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
                   /* for (int i = 0; i<16; i++)
                    {
                        if (pEncodersCompact1To8Component->GetCurrentCustomBT() == EC1Bt[i].BT4)
                            EC1Bt[i].BT5->setButtonText("-");
                    }*/

                }
                else if (eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum] = 18 * 0x01;

                    pEncodersMiniComponent->GetCurrentCustomBT2()->setButtonText("Off");
					pEncodersMiniComponent->UpdateEncodeMini(7);
                    //pEncodersMiniComponent->GetCustomBT(pEncodersMiniComponent->GetCurrentCustomBT())->setButtonText("-");
                }
            }
            else if (pMainComponent->getMyComponent() == 2)
            {
                if (eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum] = 18 * 0x01;
                    //pEncodersCompact9To16Component->GetCurrentCustomBT2()->setButtonText("Off");
					pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
                    /*for (int i = 0; i<16; i++)
                    {
                        if (pEncodersCompact9To16Component->GetCurrentCustomBT() == EC2Bt[i].BT4)
                            EC2Bt[i].BT5->setButtonText("-");
                    }*/
                }
                else if (eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum] = 18 * 0x01;
                    //BM1TO8->GetCurrentCustomBT2()->setButtonText("Off");
					BM1TO8->UpdateMiniBt1TO8(135);
                    //BM1TO8->GetCustomBT(BM1TO8->GetCurrentCustomBT())->setButtonText("-");

                }
            }
            else if (pMainComponent->getMyComponent() == 3)
            {
                if (eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    //BC1TO8->GetCurrentCustomBT2()->setButtonText("Off");
                    ConstMidiLayerMessage[BC1TO8->MidiLayerNum] = 18 * 0x01;
					BC1TO8->UpdateBt1TO8(319);
                    /*for (int i = 0; i<8; i++)
                    {
                        if (BC1TO8->GetCurrentCustomBT() == BC1Bt[i].BT4)
                            BC1Bt[i].BT5->setButtonText("-");
                    }*/
                }
                else if (eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum] = 18 * 0x01;
                    //BM9TO16->GetCurrentCustomBT2()->setButtonText("Off");
					BM9TO16->UpdateMiniBt9TO16(199);
					//BM9TO16->GetCustomBT(BM9TO16->GetCurrentCustomBT())->setButtonText("-");
                }
            }
            else if (pMainComponent->getMyComponent() == 4)
            {
                //BC9TO16->GetCurrentCustomBT2()->setButtonText("Off");
                ConstMidiLayerMessage[BC9TO16->MidiLayerNum] = 18 * 0x01;
				BC9TO16->UpdateBt9TO16(383);
                /*for (int i = 0; i<8; i++)
                {
                    if (BC9TO16->GetCurrentCustomBT() == BC2Bt[i].BT4)
                        BC2Bt[i].BT5->setButtonText("-");
                }*/
            }
            else if (pMainComponent->getMyComponent() == 5)
            {

                //BC17TO24->GetCurrentCustomBT2()->setButtonText("Off");
                ConstMidiLayerMessage[BC17TO24->MidiLayerNum] = 18 * 0x01;
				BC17TO24->UpdateBt17TO24(447);
                /*for (int i = 0; i<8; i++)
                {
                    if (BC17TO24->GetCurrentCustomBT() == BC3Bt[i].BT4)
                        BC3Bt[i].BT5->setButtonText("-");
                }*/
            }
            else if (pMainComponent->getMyComponent() == 6)
            {
                //BC25TO33->GetCurrentCustomBT2()->setButtonText("Off");
                ConstMidiLayerMessage[BC25TO33->MidiLayerNum] = 18 * 0x01;
				BC25TO33->UpdateBt25TO33(511);
               /* for (int i = 0; i<9; i++)
                {
                    if (BC25TO33->GetCurrentCustomBT() == BC4Bt[i].BT4)
                        BC4Bt[i].BT5->setButtonText("-");
                }*/
            }
            else if (pMainComponent->getMyComponent() == 7)
            {
                //BC34TO39->GetCurrentCustomBT2()->setButtonText("Off");
                ConstMidiLayerMessage[BC34TO39->MidiLayerNum] = 18 * 0x01;
				BC34TO39->UpdateBt34TO39(583);
                /*for (int i = 0; i<6; i++)
                {
                    if (BC34TO39->GetCurrentCustomBT() == BC5Bt[i].BT4)
                        BC5Bt[i].BT5->setButtonText("-");
                }*/
            }
            else if (pMainComponent->getMyComponent() == 9)
            {
                pGlobalCompactComponent->GetCHBt()->setButtonText("Off");

                SendWantToChangeMessage[4] = 0x61;
                SendWantToChangeMessage[5] = 18 * 0x01;
                pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantToChangeMessage);
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

            else if (pMainComponent->getMyComponent() == 10)
            {
                //pFaderTouchCompactComponent->GetCurrentCustomBT2()->setButtonText("Off");
                ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 18 * 0x01;
				pFaderTouchCompactComponent->UpdateFT(646);
                /*for (int i = 0; i<9; i++)
                {
                    if (pFaderTouchCompactComponent->GetCurrentCustomBT() == FTBt[i].BT4)
                        FTBt[i].BT5->setButtonText("-");
                }*/
				
            }

            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
    }


    for(int i =0;i<16 ; i++)
    {
     if (buttonThatWasClicked ==MyTextButtonlist[i])
    {
        if(pMainComponent->getMyComponent() == 0)
        {
            if(eXTOUCH_MODE_ID == COMPACT_MODE)
            {
                ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = (unsigned char)i;
				pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
        
            }
            else if(eXTOUCH_MODE_ID == MINI_MODE)
            {
                MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = (unsigned char)i;
				pFaderMiniComponent->UpdateMiniFaderBt();
            }
        }
        else if(pMainComponent->getMyComponent() == 1)
        {
            if(eXTOUCH_MODE_ID == COMPACT_MODE)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = (unsigned char)i;
				pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
             }
            else if(eXTOUCH_MODE_ID == MINI_MODE )
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = (unsigned char)i;
				pEncodersMiniComponent->UpdateEncodeMini(7);
            }
        }
        else if(pMainComponent->getMyComponent() == 2)
        {
            if(eXTOUCH_MODE_ID == COMPACT_MODE)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = (unsigned char)i;
				pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
             }
            else if(eXTOUCH_MODE_ID == MINI_MODE )
            {
                MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = (unsigned char)i;
				BM1TO8->UpdateMiniBt1TO8(135);
            }
        }
        else if(pMainComponent->getMyComponent() == 3)
        {           
            if(eXTOUCH_MODE_ID == COMPACT_MODE)
            {
				ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] = (unsigned char)i;
				BC1TO8->UpdateBt1TO8(319);
             }
            else if(eXTOUCH_MODE_ID == MINI_MODE )
            {
                MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = (unsigned char)i;
				BM9TO16->UpdateMiniBt9TO16(199);
            }
        }
        else if(pMainComponent->getMyComponent() == 4)
        {
			ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] = (unsigned char)i;
			BC9TO16->UpdateBt9TO16(383);
        }
        else if(pMainComponent->getMyComponent() == 5)
        {
			ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] = (unsigned char)i;
			BC17TO24->UpdateBt17TO24(447);
        }
        else if(pMainComponent->getMyComponent() == 6)
        {
			ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] = (unsigned char)i;
			BC25TO33->UpdateBt25TO33(511);
        }
        else if(pMainComponent->getMyComponent() == 7)
        {
			ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] = (unsigned char)i;
			BC34TO39->UpdateBt34TO39(583);
        }

        else if(pMainComponent->getMyComponent() == 8)
        {
            
            pGlobalCompactComponent->GetCHBt()->setButtonText("ID "+String(i+1));
			pGlobalCompactComponent->GetlabelID()->setText("ID "+String(i+1),dontSendNotification);
            SendWantToChangeMessage[4] = 0x60;
            SendWantToChangeMessage[5] = 0x01*i;
            pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantToChangeMessage);           
        }

        else if(pMainComponent->getMyComponent() == 9)
        {
            pGlobalCompactComponent->GetCHBt()->setButtonText("CH "+String(i+1));

            SendWantToChangeMessage[4] = 0x61;
            SendWantToChangeMessage[5] = 0x01*i;
            pMidiDeviceProcess->SendLongMidiSysEx_WithRecvPrepare(SendWantToChangeMessage);

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

		else if (pMainComponent->getMyComponent() == 10)
		{
			ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = (unsigned char)i;
			pFaderTouchCompactComponent->UpdateFT(646);
		}
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        
    }
   }
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

<JUCER_COMPONENT documentType="Component" className="SixthChannelComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="100" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="new button" id="b550d343517512b6" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 6 96 11" buttonText="new button"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
