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
#include "EncodersCompact1To8Component.h"
#include "EncodersCompact9To16Component.h"
#include "EncodersMiniComponent.h"
#include "FadersAndFootCompactComponent.h"
#include "FaderMiniComponent.h"
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
#include "BackgroundThread.h"
//[/Headers]

#include "FiveMenuComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
FiveMenuComponent * pFiveComp = nullptr;
extern FadersAndFootCompactComponent *pFadersAndFootCompactComponent ;
extern FaderMiniComponent *pFaderMiniComponent;

extern EncodersCompact1To8Component * pEncodersCompact1To8Component ;
extern EncodersCompact9To16Component * pEncodersCompact9To16Component ;
extern EncodersMiniComponent * pEncodersMiniComponent ;

extern MainComponent *pMainComponent;

extern ButtonsCompact1To8Component *BC1TO8;
extern ButtonsCompact9To16Component *BC9TO16;
extern ButtonsCompact17To24Component *BC17TO24;
extern ButtonsCompact25To33Component *BC25TO33;
extern ButtonsCompact34To39Component *BC34TO39;
extern ButtonsMini1To8Component *BM1TO8;
extern ButtonsMini9To16Component *BM9TO16;
extern FaderTouchCompactComponent *pFaderTouchCompactComponent;
extern ButtonGroup FMBt[1];
extern ButtonGroup FcBt[11];
extern ButtonGroup EC1Bt[16];
extern ButtonGroup EC2Bt[16];
extern ButtonGroup BC1Bt[8];
extern ButtonGroup BC2Bt[8];
extern ButtonGroup BC3Bt[8];
extern ButtonGroup BC4Bt[9];
extern ButtonGroup BC5Bt[6];
extern ButtonGroup FTBt[9];
extern ButtonGroup FTBt[9];
extern ButtonGroup EMBt[16];
extern ButtonGroup BM1Bt[8];
extern ButtonGroup BM2Bt[8];
extern String  Midimusic[128];
//[/MiscUserDefs]

//==============================================================================
FiveMenuComponent::FiveMenuComponent ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colour (0x00bbbbff));


    //[UserPreSize]
    addAndMakeVisible (TBCC= new MyTextButton ("new button"));
    TBCC->setButtonText("CC");
    TBCC->addListener(this);

    addAndMakeVisible (TBNOTE= new MyTextButton ("new button"));
    TBNOTE->setButtonText("Note");
    TBNOTE->addListener(this);

    addAndMakeVisible (TBPB= new MyTextButton ("new button"));
    TBPB->setButtonText("Pitch Bend");
    TBPB->addListener(this);

    addAndMakeVisible (TBPC= new MyTextButton ("new button"));
    TBPC->setButtonText("Program Change");
    TBPC->addListener(this);

    addAndMakeVisible (TBMMC= new MyTextButton ("new button"));
    TBMMC->setButtonText("MMC");
    TBMMC->addListener(this);
    
    if( Push_or_Turn ==1 )
    {
        TBNOTE->setEnabled(0);
        TBMMC->setEnabled(0);
        TBPB->setEnabled(1);
    }
    else if(Push_or_Turn ==0)
    {
        TBPB->setEnabled(1);
        TBNOTE->setEnabled(1);
        TBMMC->setEnabled(1);
    }
    else if(Push_or_Turn ==2)
    {
        TBPB->setEnabled(1);
        TBNOTE->setEnabled(1);
        TBMMC->setEnabled(1);
    }

     if(eXTOUCH_MODE_ID == COMPACT_MODE)
       {
        if(pMainComponent ->getMyComponent() ==0)
        {
            if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==1)
        {
            if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==2)
        {
            if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==3)
        {
            if(BC1TO8->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(BC1TO8->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(BC1TO8->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(BC1TO8->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(BC1TO8->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==4)
        {
            if(BC9TO16->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(BC9TO16->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(BC9TO16->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(BC9TO16->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(BC9TO16->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==5)
        {
            if(BC17TO24->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(BC17TO24->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(BC17TO24->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(BC17TO24->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(BC17TO24->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==6)
        {
            if(BC25TO33->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(BC25TO33->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(BC25TO33->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(BC25TO33->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(BC25TO33->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==7)
        {
            if(BC34TO39->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(BC34TO39->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(BC34TO39->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(BC34TO39->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(BC34TO39->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }

		else if (pMainComponent->getMyComponent() == 10)
		{
			if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare("CC") == 0)
				TBCC->setToggleState(1, dontSendNotification);
			else if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare("Note") == 0)
				TBNOTE->setToggleState(1, dontSendNotification);
			else if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare("Pitch") == 0)
				TBPB->setToggleState(1, dontSendNotification);
			else if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare("Program") == 0)
				TBPC->setToggleState(1, dontSendNotification);
			else if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare("MMC") == 0)
				TBMMC->setToggleState(1, dontSendNotification);
		}
    }
    else  if(eXTOUCH_MODE_ID ==MINI_MODE)
    {
         if(pMainComponent ->getMyComponent() ==0)
        {
            if(pFaderMiniComponent->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(pFaderMiniComponent->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(pFaderMiniComponent->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(pFaderMiniComponent->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(pFaderMiniComponent->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==1)
        {
            if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==2)
        {
            if(BM1TO8->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(BM1TO8->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(BM1TO8->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(BM1TO8->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(BM1TO8->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==3)
        {
            if(BM9TO16->GetNO_BT()->getButtonText().compare("CC")==0)
                TBCC->setToggleState(1,dontSendNotification);
            else if(BM9TO16->GetNO_BT()->getButtonText().compare("Note")==0)
                TBNOTE->setToggleState(1,dontSendNotification);
            else if(BM9TO16->GetNO_BT()->getButtonText().compare("Pitch")==0)
                TBPB->setToggleState(1,dontSendNotification);
            else if(BM9TO16->GetNO_BT()->getButtonText().compare("Program")==0)
                TBPC->setToggleState(1,dontSendNotification);
            else if(BM9TO16->GetNO_BT()->getButtonText().compare("MMC")==0)
                TBMMC->setToggleState(1,dontSendNotification);
        }
    }

    //[/UserPreSize]

    setSize (128, 126);


    //[Constructor] You can add your own custom stuff here..
    setSize (130, 126);
    //[/Constructor]
}

FiveMenuComponent::~FiveMenuComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    TBCC =nullptr;
    TBNOTE = nullptr;
    TBPB = nullptr;
    TBPC = nullptr;
    TBMMC = nullptr;
    //[/Destructor_pre]

    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void FiveMenuComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    g.fillAll (Colour(0xff000000));
    //[/UserPaint]
}

void FiveMenuComponent::resized()
{
    textButton->setBounds (8, 8, 112, 8);
    //[UserResized] Add your own custom resize handling here..
    TBCC ->setBounds(0,3,128,24);
    TBNOTE ->setBounds(0,27,128,24);
    TBPB->setBounds(0,51,128,24);
    TBPC ->setBounds(0,75,128,24);
    TBMMC ->setBounds(0,99,128,24);
    //[/UserResized]
}

void FiveMenuComponent::buttonClicked (Button* buttonThatWasClicked)
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
    else if (buttonThatWasClicked == TBCC)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = 0;      
				for(int i = 0;i<11;i++)
				{
					if(pFadersAndFootCompactComponent->GetNO_BT()== FcBt[i].BT2)
					{
						if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().compare("CC")!=0)
						{
							//FcBt[i].BT3 ->setButtonText("CC0");
                            
							//FcBt[i].BT7->setButtonText("-");
							//FcBt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum + 1] = 0;
                            pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
						}
					}
				}
				//pFadersAndFootCompactComponent->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 0;
                
				for(int i = 0;i<16;i++)
				{
					if(pEncodersCompact1To8Component->GetNO_BT()== EC1Bt[i].BT2)	
					{
						if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("CC")!=0)
						{
							//EC1Bt[i].BT3 ->setButtonText("CC0");
							//EC1Bt[i].BT7->setButtonText("-");
							//EC1Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum + 1] = 0;
                            
						}
					}
				}
				pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
				//pEncodersCompact1To8Component->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 0;
                
				for(int i = 0;i<16;i++)
				{
					if(pEncodersCompact9To16Component->GetNO_BT()== EC2Bt[i].BT2)
					{
						if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("CC")!=0)
						{
							//EC2Bt[i].BT3 ->setButtonText("CC0");
							//EC2Bt[i].BT7->setButtonText("-");
							//EC2Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum + 1] = 0;
                            
						}
					}
				}
				pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
				//pEncodersCompact9To16Component->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
				ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] = 0;
                
				for(int i = 0;i<8;i++)
				{
					if(BC1TO8->GetNO_BT()== BC1Bt[i].BT2)
					{
						if(BC1TO8->GetNO_BT()->getButtonText().compare("CC")!=0)
						{
							//BC1Bt[i].BT3 ->setButtonText("CC0");
							//BC1Bt[i].BT7->setButtonText("-");
							//BC1Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum +1] = 0;
                           
						}
					}
				} 
				BC1TO8->UpdateBt1TO8(319);
				//BC1TO8->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==4)
            {
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] = 0;
                
				for(int i = 0;i<8;i++)
				{
					if(BC9TO16->GetNO_BT()== BC2Bt[i].BT2)
					{
						if(BC9TO16->GetNO_BT()->getButtonText().compare("CC")!=0)
						{
							ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum + 1] = 0;
                            
							//BC2Bt[i].BT3 ->setButtonText("CC0");
							//BC2Bt[i].BT7->setButtonText("-");
							//BC2Bt[i].BT8->setButtonText("-");
						}
					}
				}
				BC9TO16->UpdateBt9TO16(383);
				//BC9TO16->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==5)
            {
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] = 0;
                
				for(int i = 0;i<8;i++)
				{
					if(BC17TO24->GetNO_BT()== BC2Bt[i].BT2)
					{
						if(BC17TO24->GetNO_BT()->getButtonText().compare("CC")!=0)
						{
							//BC3Bt[i].BT3 ->setButtonText("CC0");
							//BC3Bt[i].BT7->setButtonText("-");
							//BC3Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum +1 ] = 0;
                            
						}
					}
				}
				BC17TO24->UpdateBt17TO24(447);
				//BC17TO24->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==6)
            {
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] = 0;               
				for(int i = 0;i<9;i++)
				{
					if(BC25TO33->GetNO_BT()== BC4Bt[i].BT2)
					{
						if(BC25TO33->GetNO_BT()->getButtonText().compare("CC")!=0)
						{
							//BC4Bt[i].BT3 ->setButtonText("CC0");
							//BC4Bt[i].BT7->setButtonText("-");
							//BC4Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum + 1] = 0;
                            
						}
					}
				}
				BC25TO33->UpdateBt25TO33(511);
				//BC25TO33->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==7)
            {
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] = 0;
                
				for(int i = 0;i<6;i++)
				{
					if(BC34TO39->GetNO_BT()== BC5Bt[i].BT2)
						if(BC34TO39->GetNO_BT()->getButtonText().compare("CC")!=0)
						{
							//BC5Bt[i].BT3 ->setButtonText("CC0");
							//BC5Bt[i].BT7->setButtonText("-");
							//BC5Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum +1] = 0;
                           
						}
				} 
				BC34TO39->UpdateBt34TO39(583);
				//BC34TO39->GetNO_BT()->setButtonText("CC");
            }

			else if (pMainComponent->getMyComponent() == 10)
			{
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0;

				for (int i = 0; i<9; i++)
				{
					if (pFaderTouchCompactComponent->GetNO_BT() == FTBt[i].BT2)
						if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare("CC") != 0)
						{
							ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum + 1] = 0;
                            
						}
				}
				pFaderTouchCompactComponent->UpdateFT(646);
				//pFaderTouchCompactComponent->GetNO_BT()->setButtonText("CC");
			}
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
        else  if(eXTOUCH_MODE_ID == MINI_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 0;
                if(pFaderMiniComponent->GetNO_BT()->getButtonText().compare("CC")!=0)
				{
                    pFaderMiniComponent->GetNextBT()->setButtonText("CC0");
					MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum +1] = 0;
					for (int i = 0; i<1; i++)
					{
						if (pFaderMiniComponent->GetNO_BT() == FMBt[i].BT2){
							//FMBt[i].BT6->setButtonText("-");
                            FMBt[i].BT4->setButtonText(String(MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 2]));
                            FMBt[i].BT5->setButtonText(String(MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 3]));
							FMBt[i].BT7->setButtonText("-");
							FMBt[i].BT8->setButtonText("-");
						}
					}
				}
                pFaderMiniComponent->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0;
                if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("CC")!=0)
				{
                    pEncodersMiniComponent->GetNextBT()->setButtonText("CC0");
					MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum +1] = 0;
					for (int i = 0; i<16; i++)
					{
						if (pEncodersMiniComponent->GetNO_BT() == EMBt[i].BT2){
                            /*EMBt[i].BT4->setButtonText(String(MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 2]));
                            EMBt[i].BT5->setButtonText(String(MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 3]));
                            if (i < 8)
                            {
                                if (MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 4] == 0x00)            EMBt[i].BT6->setButtonText("Single");
                                else if (MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 4] == 0x01)      EMBt[i].BT6->setButtonText("Pan");
                                else if (MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 4] == 0x02)      EMBt[i].BT6->setButtonText("Fan");
                                else if (MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 4] == 0x03)      EMBt[i].BT6->setButtonText("Spread");
                                else if (MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 4] == 0x04)      EMBt[i].BT6->setButtonText("Trim");
                            }
                            else
                                EMBt[i].BT6->setButtonText((MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 4]==0?"Momentary":"Toggle"));*/
                            pEncodersMiniComponent->UpdateEncodeMini(7);
							//EMBt[i].BT7->setButtonText("-");
							//EMBt[i].BT8->setButtonText("-");
						}
					}
				}
                //pEncodersMiniComponent->GetNO_BT()->setButtonText("CC");
                
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
                MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 0;
                if(BM1TO8->GetNO_BT()->getButtonText().compare("CC")!=0)
				{
                    BM1TO8->GetNextBT()->setButtonText("CC0");
					MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum +1] = 0;
					for (int i = 0; i<8; i++)
					{
						if (BM1TO8->GetNO_BT() == BM1Bt[i].BT2){
							//FMBt[i].BT6->setButtonText("-");
                            BM1TO8->UpdateMiniBt1TO8(135);
							//BM1Bt[i].BT7->setButtonText("-");
							//BM1Bt[i].BT8->setButtonText("-");
						}
					}
				}
               // BM1TO8->GetNO_BT()->setButtonText("CC");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
                MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 0;
                if(BM9TO16->GetNO_BT()->getButtonText().compare("CC")!=0)
				{
                    BM9TO16->GetNextBT()->setButtonText("CC0");
					MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum +1 ] = 0;
					for (int i = 0; i<8; i++)
					{
						if (BM9TO16->GetNO_BT() == BM2Bt[i].BT2){
							//FMBt[i].BT6->setButtonText("-");
                            BM9TO16->UpdateMiniBt9TO16(199);
							//BM2Bt[i].BT7->setButtonText("-");
							//BM2Bt[i].BT8->setButtonText("-");
						}
					}
				}
               // BM9TO16->GetNO_BT()->setButtonText("CC");
                
            }
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
    
    }
    else if ( buttonThatWasClicked == TBNOTE )
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = 0x01;
                
				for(int i = 0;i<11;i++)
				{
					if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().compare("Note")!=0)
					{
						if(pFadersAndFootCompactComponent->GetNO_BT()== FcBt[i].BT2)
						{
							//FcBt[i].BT3->setButtonText(Midimusic[0]);
							//FcBt[i].BT7->setButtonText("-");
							//FcBt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum + 1] = 0;
                            pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
						}
					}
				}
				//pFadersAndFootCompactComponent->GetNO_BT()->setButtonText("Note");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 0x01;
                
				for(int i = 0;i<16;i++)
				{
					if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Note")!=0)
					{
						if(pEncodersCompact1To8Component->GetNO_BT()== EC1Bt[i].BT2)
						{
							//EC1Bt[i].BT3->setButtonText(Midimusic[0]);
							//EC1Bt[i].BT7->setButtonText("-");
							//EC1Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum +1 ] = 0;
                            
						}
					}
				}
				pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
				//pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Note");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 0x01;
                
				for(int i = 0;i<16;i++)
				{
					if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Note")!=0)
					{
						if(pEncodersCompact9To16Component->GetNO_BT()== EC2Bt[i].BT2)
						{
							//EC2Bt[i].BT3->setButtonText(Midimusic[0]);
							//EC2Bt[i].BT7->setButtonText("-");
							//EC2Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum + 1] = 0;
                            
						}
					}
				}
				pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
				//pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Note");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
				ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] = 0x01;
                
				for(int i = 0;i<8;i++)
				{
					if(BC1TO8->GetNO_BT()->getButtonText().compare("Note")!=0)
					{
						if(BC1TO8->GetNO_BT()== BC1Bt[i].BT2)
						{
							//BC1Bt[i].BT3->setButtonText(Midimusic[0]);
							//BC1Bt[i].BT7->setButtonText("-");
							//BC1Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum + 1 ] = 0;
                            
						}
					}
				}
				BC1TO8->UpdateBt1TO8(319);
				//BC1TO8->GetNO_BT()->setButtonText("Note");
            }
            else if(pMainComponent ->getMyComponent() ==4)
            {
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] = 0x01;
                
				for(int i = 0;i<8;i++)
				{
					if(BC9TO16->GetNO_BT()->getButtonText().compare("Note")!=0)
					{
						if(BC9TO16->GetNO_BT()== BC2Bt[i].BT2)
						{
							//BC2Bt[i].BT3->setButtonText(Midimusic[0]);
							//BC2Bt[i].BT7->setButtonText("-");
							//BC2Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum + 1] = 0;
                            
						}
					}
				}
				BC9TO16->UpdateBt9TO16(383);
				//BC9TO16->GetNO_BT()->setButtonText("Note");
            }
            else if(pMainComponent ->getMyComponent() ==5)
            {
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] = 0x01;
                
				for(int i = 0;i<8;i++)
				{
					if(BC17TO24->GetNO_BT()->getButtonText().compare("Note")!=0)
					{
						if(BC17TO24->GetNO_BT()== BC3Bt[i].BT2)
						{
							//BC3Bt[i].BT3->setButtonText(Midimusic[0]);
							//BC3Bt[i].BT7->setButtonText("-");
							//BC3Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum + 1] = 0 ;
                            
						}
					}
				}
				BC17TO24->UpdateBt17TO24(447);
				//BC17TO24->GetNO_BT()->setButtonText("Note");
            }
            else if(pMainComponent ->getMyComponent() ==6)
            {
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] = 0x01;
                
				for(int i = 0;i<9;i++)
				{
					if(BC25TO33->GetNO_BT()->getButtonText().compare("Note")!=0)
					{
						if(BC25TO33->GetNO_BT()== BC4Bt[i].BT2)
						{
							//BC4Bt[i].BT3->setButtonText(Midimusic[0]);
							//BC4Bt[i].BT7->setButtonText("-");
							//BC4Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum + 1] = 0 ;
                            
						}
					}
				}
				BC25TO33->UpdateBt25TO33(511);
				
            }
            else if(pMainComponent ->getMyComponent() ==7)
            {
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] = 0x01;
                
				for(int i = 0;i<6;i++)
				{
					if(BC34TO39->GetNO_BT()->getButtonText().compare("Note")!=0)
					{
						if(BC34TO39->GetNO_BT()== BC5Bt[i].BT2)
						{
							//BC5Bt[i].BT3->setButtonText(Midimusic[0]);
							//BC5Bt[i].BT7->setButtonText("-");
							//BC5Bt[i].BT8->setButtonText("-");
							ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum + 1] = 0 ;
                           
						}
					}
				} 
				BC34TO39->UpdateBt34TO39(583);
				//BC34TO39->GetNO_BT()->setButtonText("Note");
            }

			else if (pMainComponent->getMyComponent() == 10)
			{
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0x01;

				for (int i = 0; i<9; i++)
				{
					if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare("Note") != 0)
					{
						if (pFaderTouchCompactComponent->GetNO_BT() == FTBt[i].BT2)
						{
							ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum + 1] = 0;    
						}
					}
				}
				pFaderTouchCompactComponent->UpdateFT(646);
				//pFaderTouchCompactComponent->GetNO_BT()->setButtonText("Note");
			}
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 1;
                if(pFaderMiniComponent->GetNO_BT()->getButtonText().compare("Note")!=0)
				{
					pFaderMiniComponent->GetNextBT()->setButtonText(Midimusic[0]);
					MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum +1] = 0;
					for (int i = 0; i<1; i++)
					{
						if (pFaderMiniComponent->GetNO_BT() == FMBt[i].BT2){
							//FMBt[i].BT6->setButtonText("-");
                            FMBt[i].BT4->setButtonText(String(MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 2]));
                            FMBt[i].BT5->setButtonText(String(MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 3]));
							FMBt[i].BT7->setButtonText("-");
							FMBt[i].BT8->setButtonText("-");
						}
					}
				}
                pFaderMiniComponent->GetNO_BT()->setButtonText("Note");
                
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 1;
                if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Note")!=0)
				{
					pEncodersMiniComponent->GetNextBT()->setButtonText(Midimusic[0]);
					MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum +1] = 0;
					for (int i = 0; i<16; i++)
					{
						if (pEncodersMiniComponent->GetNO_BT() == EMBt[i].BT2){
							//FMBt[i].BT6->setButtonText("-");
                            pEncodersMiniComponent->UpdateEncodeMini(7);
							//EMBt[i].BT7->setButtonText("-");
							//EMBt[i].BT8->setButtonText("-");
						}
					}
				}
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Note");
                
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
                MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 1;
                if(BM1TO8->GetNO_BT()->getButtonText().compare("Note")!=0)
				{
					BM1TO8->GetNextBT()->setButtonText(Midimusic[0]);
					MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum +1] = 0;
					for (int i = 0; i<8; i++)
					{
						if (BM1TO8->GetNO_BT() == BM1Bt[i].BT2){
							//FMBt[i].BT6->setButtonText("-");
                            BM1TO8->UpdateMiniBt1TO8(135);
							//BM1Bt[i].BT7->setButtonText("-");
							//BM1Bt[i].BT8->setButtonText("-");
						}
					}
				}
                BM1TO8->GetNO_BT()->setButtonText("Note");
                
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
                MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 1;
                if(BM9TO16->GetNO_BT()->getButtonText().compare("Note")!=0)
				{
					BM9TO16->GetNextBT()->setButtonText(Midimusic[0]);
					MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum +1 ] = 0;
					for (int i = 0; i<8; i++)
					{
						if (BM9TO16->GetNO_BT() == BM2Bt[i].BT2){
							//FMBt[i].BT6->setButtonText("-");
                            BM9TO16->UpdateMiniBt9TO16(199);
							//BM2Bt[i].BT7->setButtonText("-");
							//BM2Bt[i].BT8->setButtonText("-");
						}
					}
				}
                BM9TO16->GetNO_BT()->setButtonText("Note");
                
            }
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
    }
    else if (buttonThatWasClicked == TBPB)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = 0x02;
                pFadersAndFootCompactComponent->GetNO_BT()->setButtonText("Pitch");
				for (int i = 0; i < 11; i++)
				{
					if (pFadersAndFootCompactComponent->GetNO_BT() == FcBt[i].BT2){
						
						ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum + 1] = 0;
                        pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
					}
				}
                //pFadersAndFootCompactComponent->GetNextBT()->setButtonText("-");

            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 2;
				
                //pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Pitch");
				for(int i = 0;i<16;i++)
				{
					if (pEncodersCompact1To8Component->GetNO_BT() == EC1Bt[i].BT2){
						
						ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum + 1] = 0;
						ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum + 5] = 0;
						ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum + 6] = 0;
						
					}

				}
				pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
                //pEncodersCompact1To8Component->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum] = 0x02;
				
				for(int i = 0;i<16;i++)
				{
					if (pEncodersCompact9To16Component->GetNO_BT() == EC2Bt[i].BT2){
						
						ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum + 1] = 0;
						ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum + 5] = 0;
						ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum + 6] = 0;
						
					}
				}
				pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
                //pEncodersCompact9To16Component->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
				ConstMidiLayerMessage[BC1TO8->MidiLayerNum] = 0x02;
                BC1TO8->GetNO_BT()->setButtonText("Pitch");
				for(int i = 0;i<8;i++)
				{
					if (BC1TO8->GetNO_BT() == BC1Bt[i].BT2){
						
						ConstMidiLayerMessage[BC1TO8->MidiLayerNum + 1] = 0;
						ConstMidiLayerMessage[BC1TO8->MidiLayerNum + 5] = 0;
						ConstMidiLayerMessage[BC1TO8->MidiLayerNum + 6] = 0;
					}
				}
				BC1TO8->UpdateBt1TO8(319);
                //BC1TO8->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==4)
            {
				ConstMidiLayerMessage[BC9TO16->MidiLayerNum] = 0x02;
                BC9TO16->GetNO_BT()->setButtonText("Pitch");
				for(int i = 0;i<8;i++)
				{
					if (BC9TO16->GetNO_BT() == BC2Bt[i].BT2){
						
						ConstMidiLayerMessage[BC9TO16->MidiLayerNum + 1] = 0;
						ConstMidiLayerMessage[BC9TO16->MidiLayerNum + 5] = 0;
						ConstMidiLayerMessage[BC9TO16->MidiLayerNum + 6] = 0;
					}
				}
				BC9TO16->UpdateBt9TO16(383);
            }
            else if(pMainComponent ->getMyComponent() ==5)
            {
				ConstMidiLayerMessage[BC17TO24->MidiLayerNum] = 0x02;
                BC17TO24->GetNO_BT()->setButtonText("Pitch");
				for(int i = 0;i<8;i++)
				{
					if (BC17TO24->GetNO_BT() == BC3Bt[i].BT2){
					
						ConstMidiLayerMessage[BC17TO24->MidiLayerNum + 1] = 0;
						ConstMidiLayerMessage[BC17TO24->MidiLayerNum + 5] = 0;
						ConstMidiLayerMessage[BC17TO24->MidiLayerNum + 6] = 0;
					}
				}
				BC17TO24->UpdateBt17TO24(447);
            }
            else if(pMainComponent ->getMyComponent() ==6)
            {
				ConstMidiLayerMessage[BC25TO33->MidiLayerNum] = 0x02;
                BC25TO33->GetNO_BT()->setButtonText("Pitch");
				for(int i = 0;i < 9;i++)
				{
					if (BC25TO33->GetNO_BT() == BC4Bt[i].BT2){
						
						ConstMidiLayerMessage[BC25TO33->MidiLayerNum + 1] = 0;
						ConstMidiLayerMessage[BC25TO33->MidiLayerNum + 5] = 0;
						ConstMidiLayerMessage[BC25TO33->MidiLayerNum + 6] = 0;
					}
				}
				BC25TO33->UpdateBt25TO33(511);
            }
            else if(pMainComponent ->getMyComponent() ==7)
            {
				ConstMidiLayerMessage[BC34TO39->MidiLayerNum] = 0x02;
                BC34TO39->GetNO_BT()->setButtonText("Pitch");
				for(int i = 0;i<6;i++)
				{
					if (BC34TO39->GetNO_BT() == BC5Bt[i].BT2){
						
						ConstMidiLayerMessage[BC34TO39->MidiLayerNum + 1] = 0;
						ConstMidiLayerMessage[BC34TO39->MidiLayerNum + 5] = 0;
						ConstMidiLayerMessage[BC34TO39->MidiLayerNum + 6] = 0;

					}
				}
				BC34TO39->UpdateBt34TO39(583);
            }

			else if (pMainComponent->getMyComponent() == 10)
			{
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0x02;
				//pFaderTouchCompactComponent->GetNO_BT()->setButtonText("Pitch");
				for (int i = 0; i<9; i++)
				{
					if (pFaderTouchCompactComponent->GetNO_BT() == FTBt[i].BT2){
						ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum + 1] = 0;
					}
				}
				pFaderTouchCompactComponent->UpdateFT(646);
				//BC34TO39->GetNextBT()->setButtonText("-");
			}
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 2;
                pFaderMiniComponent->GetNO_BT()->setButtonText("Pitch");
				for (int i = 0; i<1; i++)
				{
					if (pFaderMiniComponent->GetNO_BT() == FMBt[i].BT2){
						
						MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 1] = 0;
                        MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 5] = 0;
                        pFaderMiniComponent->UpdateMiniFaderBt();
					}
				}
                //pFaderMiniComponent->GetNextBT()->setButtonText("0");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 2;
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Pitch");
				for (int i = 0; i<16; i++)
				{
					if (pEncodersMiniComponent->GetNO_BT() == EMBt[i].BT2){
						
						MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 1] = 0;
                        MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 6] = 0;
                        pEncodersMiniComponent -> UpdateEncodeMini(7);
					}
				}
                //pEncodersMiniComponent->GetNextBT()->setButtonText("0");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
                MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 2;
                BM1TO8->GetNO_BT()->setButtonText("Pitch");
				for (int i = 0; i<8; i++)
				{
					if (BM1TO8->GetNO_BT() == BM1Bt[i].BT2){
						//BM1Bt[i].BT3->setButtonText("0");
						/*BM1Bt[i].BT4->setButtonText("-");
						BM1Bt[i].BT5->setButtonText("-");
						BM1Bt[i].BT6->setButtonText("-");
						BM1Bt[i].BT7->setButtonText("-");
						BM1Bt[i].BT8->setButtonText("-");*/
						MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum + 1] = 0;
                        MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum + 6] = 0;
                        BM1TO8->UpdateMiniBt1TO8(135);
					}
				}
                //BM1TO8->GetNextBT()->setButtonText("0");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
                MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 2;
                BM9TO16->GetNO_BT()->setButtonText("Pitch");
				for (int i = 0; i<8; i++)
				{
					if (BM9TO16->GetNO_BT() == BM2Bt[i].BT2){
						/*BM2Bt[i].BT3->setButtonText("0");
						BM2Bt[i].BT4->setButtonText("-");
						BM2Bt[i].BT5->setButtonText("-");
						BM2Bt[i].BT6->setButtonText("-");
						BM2Bt[i].BT7->setButtonText("-");
						BM2Bt[i].BT8->setButtonText("-");*/
                        MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum + 1] = 0;
						MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum + 6] = 0;          
                        BM9TO16->UpdateMiniBt9TO16(199);
					}
				}
                //BM9TO16->GetNextBT()->setButtonText("0");
                
            }
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
    }
    else if (buttonThatWasClicked == TBPC)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = 3;
                pFadersAndFootCompactComponent->GetNO_BT()->setButtonText("Program");
				for(int i = 0;i<11;i++)
				{
					if(pFadersAndFootCompactComponent->GetNO_BT()== FcBt[i].BT2)
						//FcBt[i].BT3 ->setButtonText("-");
                        ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum + 1] = 0;
                        pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
				}
                //pFadersAndFootCompactComponent->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 3;
				ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum + 1] = 0;
				pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
                /*pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Program");
				for(int i = 0;i<16;i++)
				{
					if(pEncodersCompact1To8Component->GetNO_BT()== EC1Bt[i].BT2)
						EC1Bt[i].BT3 ->setButtonText("-");
				}*/
                //pEncodersCompact1To8Component->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum] = 3;
				ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum + 1] = 0;
				pEncodersCompact9To16Component->UpdateEncode9TO16Bt (191);
               /* pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Program");
				for(int i = 0;i<16;i++)
				{
					if(pEncodersCompact9To16Component->GetNO_BT()== EC2Bt[i].BT2)
						EC2Bt[i].BT3 ->setButtonText("-");
				}*/
               // pEncodersCompact9To16Component->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
				ConstMidiLayerMessage[BC1TO8->MidiLayerNum] = 3;
				ConstMidiLayerMessage[BC1TO8->MidiLayerNum+1] = 0;
				BC1TO8->UpdateBt1TO8(319);
                //BC1TO8->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==4)
            {
				ConstMidiLayerMessage[BC9TO16->MidiLayerNum] = 3;
				ConstMidiLayerMessage[BC9TO16->MidiLayerNum+1] =0;
				BC9TO16->UpdateBt9TO16(383);
                //BC9TO16->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==5)
            {
				ConstMidiLayerMessage[BC17TO24->MidiLayerNum] = 3;
				ConstMidiLayerMessage[BC17TO24->MidiLayerNum+1] = 0;
				BC17TO24->UpdateBt17TO24(447);
                //BC17TO24->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==6)
            {
				ConstMidiLayerMessage[BC25TO33->MidiLayerNum] = 3;
				ConstMidiLayerMessage[BC25TO33->MidiLayerNum+1] = 0;
				BC25TO33->UpdateBt25TO33(511);
                //BC25TO33->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==7)
            {
				ConstMidiLayerMessage[BC34TO39->MidiLayerNum] = 3;
				ConstMidiLayerMessage[BC34TO39->MidiLayerNum+1] = 0;
				BC34TO39->UpdateBt34TO39(583);
                //BC34TO39->GetNextBT()->setButtonText("-");
            }
			else if (pMainComponent->getMyComponent() == 10)
			{
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 3;
				//pFaderTouchCompactComponent->GetNO_BT()->setButtonText("Program");
				pFaderTouchCompactComponent->UpdateFT(646);
				//BC34TO39->GetNextBT()->setButtonText("-");
			}

            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 3;
                MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 1] = 0;
                //MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 5] = 0;
                //MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 6] = 0;
                pFaderMiniComponent->UpdateMiniFaderBt();
               //pFaderMiniComponent->GetNO_BT()->setButtonText("Program");
               //pFaderMiniComponent->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 3;
                for (int i = 0; i<16; i++)
                {
                    if (pEncodersMiniComponent->GetNO_BT() == EMBt[i].BT2)
                    {
                        MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 1] = 0;
                        //MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 5] = 0;
                        //MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 6] = 0;
                        pEncodersMiniComponent->UpdateEncodeMini(7);
                    }
                        
                }
                
                //pEncodersMiniComponent->GetNO_BT()->setButtonText("Program");
                //pEncodersMiniComponent->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
                MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 3;
                for (int i = 0; i<8; i++)
                {
                    if (BM1TO8->GetNO_BT() == BM1Bt[i].BT2)
                    {
                        MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum + 1] = 0;
                        //MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum + 5] = 0;
                        //MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum + 6] = 0;
                        BM1TO8->UpdateMiniBt1TO8(135);
                    }

                }
                //BM1TO8->GetNO_BT()->setButtonText("Program");
                //BM1TO8->GetNextBT()->setButtonText("-");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
                MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 3;
                for (int i = 0; i<8; i++)
                {
                    if (BM9TO16->GetNO_BT() == BM2Bt[i].BT2)
                    {
                        MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum + 1] = 0;
                        //MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum + 5] = 0;
                        //MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum + 6] = 0;
                        BM9TO16->UpdateMiniBt9TO16(199);
                    }

                }
                //BM9TO16->GetNO_BT()->setButtonText("Program");
                //BM9TO16->GetNextBT()->setButtonText("-");
                
            }
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
    }
    else if (buttonThatWasClicked == TBMMC)
    {
		if (eXTOUCH_MODE_ID == COMPACT_MODE)
		{
			if (pMainComponent->getMyComponent() == 0)
			{
				ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = 4;
				ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum + 1] = 0;
				pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
			}
				
				//pFadersAndFootCompactComponent->GetNextBT()->setButtonText("-");

			
			else if (pMainComponent->getMyComponent() == 1)
			{
				ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum] = 4;
				
				for (int i = 0; i < 16; i++)
				{
					if (pEncodersCompact1To8Component->GetNO_BT() == EC1Bt[i].BT2){
						
						ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum + 1] = 0;
					}

				}
				pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
			}
			else if (pMainComponent->getMyComponent() == 2)
			{
				ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum] = 4;
				pEncodersCompact9To16Component->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 16; i++)
				{
					if (pEncodersCompact9To16Component->GetNO_BT() == EC2Bt[i].BT2){
						
						ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum + 1] = 0;
					}
				}
				pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
			}
			else if (pMainComponent->getMyComponent() == 3)
			{
				ConstMidiLayerMessage[BC1TO8->MidiLayerNum] = 4;
				BC1TO8->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 8; i++)
				{
					if (BC1TO8->GetNO_BT() == BC1Bt[i].BT2){
						
						ConstMidiLayerMessage[BC1TO8->MidiLayerNum + 1] = 0;
					}
				}
				BC1TO8->UpdateBt1TO8(319);
			}
			else if (pMainComponent->getMyComponent() == 4)
			{
				ConstMidiLayerMessage[BC9TO16->MidiLayerNum] = 4;
				BC9TO16->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 8; i++)
				{
					if (BC9TO16->GetNO_BT() == BC2Bt[i].BT2){
						
						ConstMidiLayerMessage[BC9TO16->MidiLayerNum + 1] = 0;
					}
				}
				BC9TO16->UpdateBt9TO16(383);
			}
			else if (pMainComponent->getMyComponent() == 5)
			{
				ConstMidiLayerMessage[BC17TO24->MidiLayerNum] = 4;
				BC17TO24->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 8; i++)
				{
					if (BC17TO24->GetNO_BT() == BC3Bt[i].BT2){
						
						ConstMidiLayerMessage[BC17TO24->MidiLayerNum + 1] = 0;
					}
				}
				BC17TO24->UpdateBt17TO24(447);
			}
			else if (pMainComponent->getMyComponent() == 6)
			{
				ConstMidiLayerMessage[BC25TO33->MidiLayerNum] = 4;
				BC25TO33->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 9; i++)
				{
					if (BC25TO33->GetNO_BT() == BC4Bt[i].BT2){
						
						ConstMidiLayerMessage[BC25TO33->MidiLayerNum + 1] = 0;
					}
				}
				BC25TO33->UpdateBt25TO33(511);
			}
			else if (pMainComponent->getMyComponent() == 7)
			{
				ConstMidiLayerMessage[BC34TO39->MidiLayerNum] = 4;
				BC34TO39->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 6; i++)
				{
					if (BC34TO39->GetNO_BT() == BC5Bt[i].BT2){
						
						ConstMidiLayerMessage[BC34TO39->MidiLayerNum + 1] = 0;

					}
				}
				BC34TO39->UpdateBt34TO39(583);
			}

			else if (pMainComponent->getMyComponent() == 10)
			{
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 4;
				//pFaderTouchCompactComponent->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 9; i++)
				{
					if (pFaderTouchCompactComponent->GetNO_BT() == FTBt[i].BT2){
						
						ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum + 1] = 0;
					}
				}
				pFaderTouchCompactComponent->UpdateFT(646);
				//BC34TO39->GetNextBT()->setButtonText("-");
			}
			findParentComponentOfClass<CallOutBox>()->exitModalState(0);
		}
		else  if (eXTOUCH_MODE_ID == MINI_MODE)
		{
			if (pMainComponent->getMyComponent() == 0)
			{
				MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum] = 4;
				pFaderMiniComponent->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 1; i++)
				{
					if (pFaderMiniComponent->GetNO_BT() == FMBt[i].BT2){
						FMBt[i].BT3->setButtonText("Stop");
						FMBt[i].BT4->setButtonText("-");
						FMBt[i].BT5->setButtonText("-");
						//FMBt[i].BT6->setButtonText("-");
						FMBt[i].BT7->setButtonText("-");
						FMBt[i].BT8->setButtonText("-");
						MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum + 1] = 0;
					}
				}
				//pFaderMiniComponent->GetNextBT()->setButtonText("0");
			}
			else if (pMainComponent->getMyComponent() == 1)
			{
				MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum] = 4;
				pEncodersMiniComponent->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 16; i++)
				{
					if (pEncodersMiniComponent->GetNO_BT() == EMBt[i].BT2){
						EMBt[i].BT3->setButtonText("Stop");
						EMBt[i].BT4->setButtonText("-");
						EMBt[i].BT5->setButtonText("-");
						EMBt[i].BT6->setButtonText("-");
						EMBt[i].BT7->setButtonText("-");
						EMBt[i].BT8->setButtonText("-");
						MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum + 1] = 0;
					}
				}
				//pEncodersMiniComponent->GetNextBT()->setButtonText("0");
			}
			else if (pMainComponent->getMyComponent() == 2)
			{
				MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum] = 4;
				BM1TO8->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 8; i++)
				{
					if (BM1TO8->GetNO_BT() == BM1Bt[i].BT2){
						BM1Bt[i].BT3->setButtonText("Stop");
						BM1Bt[i].BT4->setButtonText("-");
						BM1Bt[i].BT5->setButtonText("-");
						BM1Bt[i].BT6->setButtonText("-");
						BM1Bt[i].BT7->setButtonText("-");
						BM1Bt[i].BT8->setButtonText("-");
						MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum + 1] = 0;
					}
				}
				//BM1TO8->GetNextBT()->setButtonText("0");
			}
			else if (pMainComponent->getMyComponent() == 3)
			{
				MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum] = 4;
				BM9TO16->GetNO_BT()->setButtonText("MMC");
				for (int i = 0; i < 8; i++)
				{
					if (BM9TO16->GetNO_BT() == BM2Bt[i].BT2){
						BM2Bt[i].BT3->setButtonText("Stop");
						BM2Bt[i].BT4->setButtonText("-");
						BM2Bt[i].BT5->setButtonText("-");
						BM2Bt[i].BT6->setButtonText("-");
						BM2Bt[i].BT7->setButtonText("-");
						BM2Bt[i].BT8->setButtonText("-");
						MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum + 1] = 0;
					}
				}
				
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

<JUCER_COMPONENT documentType="Component" className="FiveMenuComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="128" initialHeight="126">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="new button" id="529a9c91b5bab298" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="8 8 112 8" bgColOff="bbbbff"
              buttonText="new button" connectedEdges="0" needsCallback="1"
              radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
