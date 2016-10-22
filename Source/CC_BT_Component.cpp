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
#include "BackgroundThread.h"
//[/Headers]

#include "CC_BT_Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
extern CallOutBox &pcall;
extern MainComponent *pMainComponent;
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
extern GlobalCompactComponent * pGlobalCompactComponent;
extern FaderTouchCompactComponent *pFaderTouchCompactComponent;


String CCBT[128] = {"0","1","2","3","4","5","6","7","8","9","10",
                    "11","12","13","14","15","16","17","18","19","20",
                    "21","22","23","24","25","26","27","28","29","30",
                    "31","32","33","34","35","36","37","38","39","40",
                    "41","42","43","44","45","46","47","48","49","50",
                    "51","52","53","54","55","56","57","58","59","60",
                    "61","62","63","64","65","66","67","68","69","70",
                    "71","72","73","74","75","76","77","78","79","80",
                    "81","82","83","84","85","86","87","88","89","90",
                    "91","92","93","94","95","96","97","98","99","100",
                    "101","102","103","104","105","106","107","108","109","110",
                    "111","112","113","114","115","116","117","118","119","120",
                    "121","122","123","124","125","126","127"};

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
extern ButtonGroup EMBt[16];
extern ButtonGroup BM1Bt[8];
extern ButtonGroup BM2Bt[8];

//[/MiscUserDefs]

//==============================================================================
CC_BT_Component::CC_BT_Component ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colour (0x00bbbbff));
    textButton->setColour (TextButton::textColourOnId, Colour (0x00000000));
    textButton->setColour (TextButton::textColourOffId, Colour (0x00000000));


    //[UserPreSize]
    for(int i = 0; i<128;i++)
     {
         
        addAndMakeVisible (MyTextButtonlist[i]= new MyTextButton ("new button"));
        MyTextButtonlist[i]->setButtonText(CCBT[i]);
        MyTextButtonlist[i]->addListener(this);
     }

    if(eXTOUCH_MODE_ID == COMPACT_MODE)
     {
        if(pMainComponent->getMyComponent() == 0)
            //MyTextButtonlist[pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
            MyTextButtonlist[pFadersAndFootCompactComponent->GetNum()]->setToggleState(1,dontSendNotification);
        else if(pMainComponent->getMyComponent() == 1)
            //MyTextButtonlist[pEncodersCompact1To8Component->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
            MyTextButtonlist[pEncodersCompact1To8Component->GetNum()]->setToggleState(1,dontSendNotification);
        else if(pMainComponent->getMyComponent() == 2)
            //MyTextButtonlist[pEncodersCompact9To16Component->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
            MyTextButtonlist[pEncodersCompact9To16Component->GetNum()]->setToggleState(1,dontSendNotification);
        else if(pMainComponent->getMyComponent() == 3)
            MyTextButtonlist[BC1TO8->GetNum()]->setToggleState(1,dontSendNotification);
        else if(pMainComponent->getMyComponent() == 4)
            MyTextButtonlist[BC9TO16->GetNum()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 5)
            MyTextButtonlist[BC17TO24->GetNum()]->setToggleState(1,dontSendNotification);
            //MyTextButtonlist[BC17TO24->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
        else if(pMainComponent->getMyComponent() == 6)
            MyTextButtonlist[BC25TO33->GetNum()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 7)
            MyTextButtonlist[BC34TO39->GetNum()]->setToggleState(1,dontSendNotification);

		else if (pMainComponent->getMyComponent() == 10)
			MyTextButtonlist[pFaderTouchCompactComponent->GetNum()]->setToggleState(1, dontSendNotification);
     }
     else if(eXTOUCH_MODE_ID == MINI_MODE)
     {
         if(pMainComponent->getMyComponent() == 0)
            //MyTextButtonlist[ pFaderMiniComponent->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
            MyTextButtonlist[pFaderMiniComponent->GetNum()]->setToggleState(1,dontSendNotification);
        else if(pMainComponent->getMyComponent() == 1)
            //MyTextButtonlist[ pEncodersMiniComponent->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
            MyTextButtonlist[pEncodersMiniComponent->GetNum()]->setToggleState(1,dontSendNotification);
        else if(pMainComponent->getMyComponent() == 2)
           // MyTextButtonlist[ BM1TO8->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
            MyTextButtonlist[BM1TO8->GetNum()]->setToggleState(1,dontSendNotification);
        else if(pMainComponent->getMyComponent() == 3)
            //MyTextButtonlist[ BM9TO16->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
            MyTextButtonlist[BM9TO16->GetNum()]->setToggleState(1,dontSendNotification);

        
     }
     /*if(pMainComponent->getMyComponent() == 1)
        MyTextButtonlist[pEncodersCompact1To8Component->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
     else if(pMainComponent->getMyComponent() == 2)
         MyTextButtonlist[pEncodersCompact9To16Component->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
    */
    /*for(int i = 0; i<128;i++)
     {
        
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent->getMyComponent() == 0)
                 if(( pFadersAndFootCompactComponent->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                    MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);
                

            else if(pMainComponent->getMyComponent() == 1)
                 if(( pEncodersCompact1To8Component->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                    MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 2)
                if(( pEncodersCompact9To16Component->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                    MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 3)
                 if(( BC1TO8->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                    MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 4)
                 if(( BC9TO16->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                    MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 5)
                 if(( BC17TO24->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                    MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 6)
                 if(( BC25TO33->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                    MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 7)
                 if(( BC34TO39->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                    MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);
         }
         else if(eXTOUCH_MODE_ID == MINI_MODE)
        {
             if(pMainComponent->getMyComponent() == 0)
                 if( ( pFaderMiniComponent->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                        MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);
            //MyTextButtonlist[ pFaderMiniComponent->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 1)
                if(( pEncodersMiniComponent->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                        MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);
            //MyTextButtonlist[ pEncodersMiniComponent->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 2)
                if(( BM1TO8->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                        MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);
            //MyTextButtonlist[ BM1TO8->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

            else if(pMainComponent->getMyComponent() == 3)
                if(( BM9TO16->GetNO_BT()->getButtonText()).compare("CC"+String(i))==0)
                        MyTextButtonlist[ i]->setToggleState(1,dontSendNotification);
            

     
        }
     }*/
    //[/UserPreSize]

    setSize (86, 3200);


    //[Constructor] You can add your own custom stuff here..
    setSize (86, 5+128*24+3);
    //[/Constructor]
}

CC_BT_Component::~CC_BT_Component()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    for(int i = 0; i<128;i++)
    {
         MyTextButtonlist[i] = nullptr;
    }
    //[/Destructor_pre]

    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void CC_BT_Component::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    g.fillAll (Colour(0xff000000));
    //[/UserPaint]
}

void CC_BT_Component::resized()
{
    textButton->setBounds (0, 8, 88, 16);
    //[UserResized] Add your own custom resize handling here..
    for(int i = 0; i<128;i++)
    {
        MyTextButtonlist[i]->setBounds(0,3+i*24,110,24);
    }
    //[/UserResized]
}

void CC_BT_Component::buttonClicked (Button* buttonThatWasClicked)
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
   for(int i =0;i<128 ; i++)
   {
     if (buttonThatWasClicked ==MyTextButtonlist[i])
    {
        if(pMainComponent->getMyComponent() == 0)
        {
            if(eXTOUCH_MODE_ID == COMPACT_MODE)
            {
                //pFadersAndFootCompactComponent->GetNO_BT()->setchooseflag(i);
                ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = (unsigned char)i;
				for (int j = 0; j < 11; j++)
				{
					if (FcBt[j].BT3 == pFadersAndFootCompactComponent->GetNO_BT())
					{
						//if (FcBt[j].BT2->getButtonText().compare("CC") == 0)  pFadersAndFootCompactComponent->GetNO_BT()->setButtonText("CC" + CCBT[i]);
						//else pFadersAndFootCompactComponent->GetNO_BT()->setButtonText(CCBT[i]);
                        pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
					}
				}

            }
            else if(eXTOUCH_MODE_ID == MINI_MODE)
            {
                //pFaderMiniComponent->GetNO_BT()->setchooseflag(i);
                MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum] =  (unsigned char)i;
				for (int j = 0; j < 1; j++)
				{
					if (FMBt[j].BT3 == pFaderMiniComponent->GetNO_BT())
					{
						if (FMBt[j].BT2->getButtonText().compare("CC") == 0)  pFaderMiniComponent->GetNO_BT()->setButtonText("CC" + CCBT[i]);
						else pFaderMiniComponent->GetNO_BT()->setButtonText(CCBT[i]);
					}
				}
                
                //MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                //pFaderMiniComponent->GetNO_BT()->setState(Button::buttonOver);
            }
        }
        else if(pMainComponent->getMyComponent() == 1)
        {
            if(eXTOUCH_MODE_ID == COMPACT_MODE)
            {
                //pEncodersCompact1To8Component->GetNO_BT()->setchooseflag(i);
                ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum] = (unsigned char)i;
				pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
				/*for (int j = 0; j < 16; j++)
				{
					if (EC1Bt[j].BT3 == pEncodersCompact1To8Component->GetNO_BT())
					{
						if (EC1Bt[j].BT2->getButtonText().compare("CC") == 0)  pEncodersCompact1To8Component->GetNO_BT()->setButtonText("CC" + CCBT[i]);
						else pEncodersCompact1To8Component->GetNO_BT()->setButtonText(CCBT[i]);
					}
				}*/
				//pEncodersCompact1To8Component->GetNO_BT()->setButtonText("CC" + CCBT[i]);
                //MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                //pEncodersCompact1To8Component->GetNO_BT()->setState(Button::buttonOver);
             }
            else if(eXTOUCH_MODE_ID == MINI_MODE )
            {
                //pEncodersMiniComponent->GetNO_BT()->setchooseflag(i);
                MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum] = (unsigned char)i;
				for (int j = 0; j < 16; j++)
				{
					if (EMBt[j].BT3 == pEncodersMiniComponent->GetNO_BT())
					{
						if (EMBt[j].BT2->getButtonText().compare("CC") == 0)  pEncodersMiniComponent->GetNO_BT()->setButtonText("CC" + CCBT[i]);
						else pEncodersMiniComponent->GetNO_BT()->setButtonText(CCBT[i]);
					}
				}

                //pEncodersMiniComponent->GetNO_BT()->setButtonText("CC" + CCBT[i]);
                MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                pEncodersMiniComponent->GetNO_BT()->setState(Button::buttonOver);
            }
        }
        else if(pMainComponent->getMyComponent() == 2)
        {
            if(eXTOUCH_MODE_ID == COMPACT_MODE)
            {
                //pEncodersCompact9To16Component->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[pEncodersCompact9To16Component->MidiLayerNum] = (unsigned char)i;
				pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
                /*for (int j = 0; j < 16; j++)
                {
                    if (EC2Bt[j].BT3 == pEncodersCompact9To16Component->GetNO_BT())
                    {
                        if (EC2Bt[j].BT2->getButtonText().compare("CC") == 0)  pEncodersCompact9To16Component->GetNO_BT()->setButtonText("CC" + CCBT[i]);
                        else pEncodersCompact9To16Component->GetNO_BT()->setButtonText( CCBT[i]);
                    }
                }*/
                
             }
            else if(eXTOUCH_MODE_ID == MINI_MODE )
            {
                //BM1TO8->GetNO_BT()->setchooseflag(i);
                MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum] = (unsigned char)i;
				for (int j = 0; j < 8; j++)
				{
					if (BM1Bt[j].BT3 == BM1TO8->GetNO_BT())
					{
						if (BM1Bt[j].BT2->getButtonText().compare("CC") == 0)  BM1TO8->GetNO_BT()->setButtonText("CC" + CCBT[i]);
						else BM1TO8->GetNO_BT()->setButtonText(CCBT[i]);
					}
				}
                
                MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                BM1TO8->GetNO_BT()->setState(Button::buttonOver);
            }
        }
        else if(pMainComponent->getMyComponent() == 3)
        {           
            if(eXTOUCH_MODE_ID == COMPACT_MODE)
            {
                //BC1TO8->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC1TO8->MidiLayerNum] = (unsigned char)i;
				BC1TO8->UpdateBt1TO8(319);
				/*for (int j = 0; j < 8; j++)
				{
					if (BC1Bt[j].BT3 == BC1TO8->GetNO_BT())
					{
						if (BC1Bt[j].BT2->getButtonText().compare("CC") == 0)  BC1TO8->GetNO_BT()->setButtonText("CC" + CCBT[i]);
						else BC1TO8->GetNO_BT()->setButtonText(CCBT[i]);
					}
				}*/
                
               
             }
            else if(eXTOUCH_MODE_ID == MINI_MODE )
            {
                //BM9TO16->GetNO_BT()->setchooseflag(i);
                MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum] = (unsigned char)i;
				for (int j = 0; j < 8; j++)
				{
					if (BM2Bt[j].BT3 == BM9TO16->GetNO_BT())
					{
						if (BM2Bt[j].BT2->getButtonText().compare("CC") == 0)  BM9TO16->GetNO_BT()->setButtonText("CC" + CCBT[i]);
						else BM9TO16->GetNO_BT()->setButtonText(CCBT[i]);
					}
				}
                
               
            }
        }
        else if(pMainComponent->getMyComponent() == 4)
        {
            //BC9TO16->GetNO_BT()->setchooseflag(i);
			ConstMidiLayerMessage[BC9TO16->MidiLayerNum] = (unsigned char)i;
			BC9TO16->UpdateBt9TO16(383);
			/*for (int j = 0; j < 8; j++)
			{
				if (BC2Bt[j].BT3 == BC9TO16->GetNO_BT())
				{
					if (BC2Bt[j].BT2->getButtonText().compare("CC") == 0)  BC9TO16->GetNO_BT()->setButtonText("CC" + CCBT[i]);
					else BC9TO16->GetNO_BT()->setButtonText(CCBT[i]);
				}
			}*/
            
        }
        else if(pMainComponent->getMyComponent() == 5)
        {
            //BC17TO24->GetNO_BT()->setchooseflag(i);
			ConstMidiLayerMessage[BC17TO24->MidiLayerNum] = (unsigned char)i;
			BC17TO24->UpdateBt17TO24(447);
			/*for (int j = 0; j < 8; j++)
			{
				if (BC3Bt[j].BT3 == BC17TO24->GetNO_BT())
				{
					if (BC3Bt[j].BT2->getButtonText().compare("CC") == 0)  BC17TO24->GetNO_BT()->setButtonText("CC" + CCBT[i]);
					else BC17TO24->GetNO_BT()->setButtonText(CCBT[i]);
				}
			}*/
            
        }
        else if(pMainComponent->getMyComponent() == 6)
        {
            //BC25TO33->GetNO_BT()->setchooseflag(i);
			ConstMidiLayerMessage[BC25TO33->MidiLayerNum] = (unsigned char)i;
			BC25TO33->UpdateBt25TO33(511);
			/*for (int j = 0; j < 9; j++)
			{
				if (BC4Bt[j].BT3 == BC25TO33->GetNO_BT())
				{
					if (BC4Bt[j].BT2->getButtonText().compare("CC") == 0)  BC25TO33->GetNO_BT()->setButtonText("CC" + CCBT[i]);
					else BC25TO33->GetNO_BT()->setButtonText(CCBT[i]);
				}
			}*/
            //BC25TO33->GetNO_BT()->setButtonText("CC" + CCBT[i]);
            
        }
        else if(pMainComponent->getMyComponent() == 7)
        {
            //BC34TO39->GetNO_BT()->setchooseflag(i);
			ConstMidiLayerMessage[BC34TO39->MidiLayerNum] = (unsigned char)i;
			BC34TO39->UpdateBt34TO39(583);
			/*for (int j = 0; j < 6; j++)
			{
				if (BC5Bt[j].BT3 == BC34TO39->GetNO_BT())
				{
					if (BC5Bt[j].BT2->getButtonText().compare("CC") == 0)  BC34TO39->GetNO_BT()->setButtonText("CC" + CCBT[i]);
					else BC34TO39->GetNO_BT()->setButtonText(CCBT[i]);
				}
			}*/
        }

		else if (pMainComponent->getMyComponent() == 10)
		{
			//BC34TO39->GetNO_BT()->setchooseflag(i);
			ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = (unsigned char)i;
			pFaderTouchCompactComponent->UpdateFT(646);
			/*for (int j = 0; j < 9; j++)
			{
				if (FTBt[j].BT3 == pFaderTouchCompactComponent->GetNO_BT())
				{
					if (FTBt[j].BT2->getButtonText().compare("CC") == 0)  pFaderTouchCompactComponent->GetNO_BT()->setButtonText("CC" + CCBT[i]);
					else pFaderTouchCompactComponent->GetNO_BT()->setButtonText(CCBT[i]);
				}
			}
            //pFaderTouchCompactComponent->GetNO_BT()->setButtonText("CC" + CCBT[i]);
			MyTextButtonlist[i]->setToggleState(1, dontSendNotification);
			pFaderTouchCompactComponent->GetNO_BT()->setState(Button::buttonOver);*/
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

<JUCER_COMPONENT documentType="Component" className="CC_BT_Component" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="86" initialHeight="3200">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="new button" id="7161cc098c93073f" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 8 88 16" bgColOff="bbbbff"
              textCol="0" textColOn="0" buttonText="new button" connectedEdges="15"
              needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
