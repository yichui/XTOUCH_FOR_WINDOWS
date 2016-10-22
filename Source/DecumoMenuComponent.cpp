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
#include "XtouchDevMidiData.h"
#include "BackgroundThread.h"
#include "FaderTouchCompactComponent.h"
//[/Headers]

#include "DecumoMenuComponent.h"


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
//[/MiscUserDefs]

//==============================================================================
DecumoMenuComponent::DecumoMenuComponent ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton->addListener (this);
    textButton->setColour (TextButton::buttonColourId, Colour (0x00f7f7f7));
    textButton->setColour (TextButton::buttonOnColourId, Colour(0x00000000));
    textButton->setColour (TextButton::textColourOffId, Colour (0x00000000));


    //[UserPreSize]
    int r = 0;

     /*addAndMakeVisible (MyTextButton1 = new MyTextButton ("new button"));
     MyTextButton1->setButtonText("0");
     MyTextButton1->addListener(this);

     addAndMakeVisible (MyTextButton2 = new MyTextButton ("new button"));
     MyTextButton2->setButtonText("1");
     MyTextButton2->addListener(this);

     addAndMakeVisible (MyTextButton3 = new MyTextButton ("new button"));
     MyTextButton3->setButtonText("2");
     MyTextButton3->addListener(this);

     addAndMakeVisible (MyTextButton4 = new MyTextButton ("new button"));
     MyTextButton4->setButtonText("3");
     MyTextButton4->addListener(this);*/
     
     //MyTextButtonlist[3] = MyTextButton3;

     //SetBTList();
    if(pMainComponent->FaderorOtherFlag == 1)
    {
        addAndMakeVisible (MyTextButtondec= new MyTextButton ("new button"));
        MyTextButtondec->setButtonText("Dec/-1");
        MyTextButtondec->addListener(this);

        addAndMakeVisible (MyTextButtoninc= new MyTextButton ("new button"));
        MyTextButtoninc->setButtonText("Inc/+1");
        MyTextButtoninc->addListener(this);

    }
	else if(pMainComponent->FaderorOtherFlag == 2)
	{
		addAndMakeVisible (RelativeBt= new MyTextButton ("new button"));
        RelativeBt->setButtonText("Relative1");
        RelativeBt->addListener(this);

		addAndMakeVisible (RelativeBt2= new MyTextButton ("new button"));
        RelativeBt2->setButtonText("Relative2");
        RelativeBt2->addListener(this);

		addAndMakeVisible (RelativeBt3= new MyTextButton ("new button"));
        RelativeBt3->setButtonText("Relative3");
        RelativeBt3->addListener(this);
	}
    for(int i = 0; i<128;i++)
     {       
        addAndMakeVisible (MyTextButtonlist[i]= new MyTextButton ("new button"));
        MyTextButtonlist[i]->setButtonText(String(i));
        MyTextButtonlist[i]->addListener(this);
     }
    /***************for dec and inc*************************/
    if(pMainComponent->FaderorOtherFlag == 1)
    {
         if(eXTOUCH_MODE_ID == COMPACT_MODE)
         {
             if(pMainComponent->getMyComponent() == 0)
             {
                 if(pFadersAndFootCompactComponent->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(pFadersAndFootCompactComponent->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() ==1)
             {
                 if(pEncodersCompact1To8Component->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(pEncodersCompact1To8Component->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() ==2)
             {
                 if(pEncodersCompact9To16Component->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(pEncodersCompact9To16Component->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() ==3)
             {
                 if(BC1TO8->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(BC1TO8->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() ==4)
             {
                 if(BC9TO16->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(BC9TO16->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() ==5)
             {
                 if(BC17TO24->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(BC17TO24->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() ==6)
             {
                 if(BC25TO33->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(BC25TO33->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() ==7)
             {
                 if(BC34TO39->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(BC34TO39->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }

		     else if (pMainComponent->getMyComponent() == 10)
		     {
			     if (pFaderTouchCompactComponent->GetCurrentCustomBT()->getButtonText().compare("Dec/-1") == 0){
				     MyTextButtondec->setToggleState(1, dontSendNotification); r = 1;
			     }
			     else if (pFaderTouchCompactComponent->GetCurrentCustomBT()->getButtonText().compare("Inc/+1") == 0){
				     MyTextButtoninc->setToggleState(1, dontSendNotification);  r = 1;
			     }
		     }
         }
         else if(eXTOUCH_MODE_ID == MINI_MODE)
         {
             if(pMainComponent->getMyComponent() == 0)
             {
                 if(pFaderMiniComponent->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(pFaderMiniComponent->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() == 1)
             {
                if(pEncodersMiniComponent->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(pEncodersMiniComponent->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() == 2)
             {
                if(BM1TO8->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(BM1TO8->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }
             else if(pMainComponent->getMyComponent() == 3)
             {
                if(BM9TO16->GetCurrentCustomBT()->getButtonText().compare("Dec/-1")==0){
                     MyTextButtondec->setToggleState(1,dontSendNotification); r =1; }
                 else if(BM9TO16->GetCurrentCustomBT()->getButtonText().compare("Inc/+1")==0){
                     MyTextButtoninc->setToggleState(1,dontSendNotification);  r=1;  }
             }

         }
    }

	else if(pMainComponent->FaderorOtherFlag == 2)
    {
         if(eXTOUCH_MODE_ID == COMPACT_MODE)
         {
             if(pMainComponent->getMyComponent() == 0)
             {
                 if(pFadersAndFootCompactComponent->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
					 RelativeBt->setToggleState(1,dontSendNotification); r =1; }
             }
             else if(pMainComponent->getMyComponent() ==1)
             {
                 if(pEncodersCompact1To8Component->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
				 else if(pEncodersCompact1To8Component->GetCurrentCustomBT()->getButtonText().compare("Relative2")==0){
					RelativeBt2->setToggleState(1,dontSendNotification); r =1; }
				 else if(pEncodersCompact1To8Component->GetCurrentCustomBT()->getButtonText().compare("Relative3")==0){
					RelativeBt3->setToggleState(1,dontSendNotification); r =1; }
			 }
             else if(pMainComponent->getMyComponent() ==2)
             {
                 if(pEncodersCompact9To16Component->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
				 else if(pEncodersCompact9To16Component->GetCurrentCustomBT()->getButtonText().compare("Relative2")==0){
					RelativeBt2->setToggleState(1,dontSendNotification); r =1; }
				 else if(pEncodersCompact9To16Component->GetCurrentCustomBT()->getButtonText().compare("Relative3")==0){
					RelativeBt3->setToggleState(1,dontSendNotification); r =1; }
                 
             }
             else if(pMainComponent->getMyComponent() ==3)
             {
                 if(BC1TO8->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
                 
             }
             else if(pMainComponent->getMyComponent() ==4)
             {
                 if(BC9TO16->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
                 
             }
             else if(pMainComponent->getMyComponent() ==5)
             {
                 if(BC17TO24->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
                
             }
             else if(pMainComponent->getMyComponent() ==6)
             {
                 if(BC25TO33->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
                 
             }
             else if(pMainComponent->getMyComponent() ==7)
             {
                 if(BC34TO39->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
                 
             }

		   
         }
         else if(eXTOUCH_MODE_ID == MINI_MODE)
         {
             if(pMainComponent->getMyComponent() == 0)
             {
                 if(pFaderMiniComponent->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
                 
             }
             else if(pMainComponent->getMyComponent() == 1)
             {
                if(pEncodersMiniComponent->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
				else if(pEncodersMiniComponent->GetCurrentCustomBT()->getButtonText().compare("Relative2")==0){
					RelativeBt2->setToggleState(1,dontSendNotification); r =1; }
				else if(pEncodersMiniComponent->GetCurrentCustomBT()->getButtonText().compare("Relative3")==0){
					RelativeBt3->setToggleState(1,dontSendNotification); r =1; }
               
             }
             else if(pMainComponent->getMyComponent() == 2)
             {
                if(BM1TO8->GetCurrentCustomBT()->getButtonText().compare("Relative1")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
                
             }
             else if(pMainComponent->getMyComponent() == 3)
             {
                if(BM9TO16->GetCurrentCustomBT()->getButtonText().compare("Relative")==0){
                     RelativeBt->setToggleState(1,dontSendNotification); r =1; }
                 
             }

         }
    }

     /*************for 0 to 127***************************/
     if(r ==0)
     {
     if(eXTOUCH_MODE_ID == COMPACT_MODE)
     {
        if(pMainComponent->getMyComponent() == 0)
            MyTextButtonlist[pFadersAndFootCompactComponent->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 1)
            MyTextButtonlist[pEncodersCompact1To8Component->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 2)
            MyTextButtonlist[pEncodersCompact9To16Component->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 3)
            MyTextButtonlist[BC1TO8->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 4)
            MyTextButtonlist[BC9TO16->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 5)
            MyTextButtonlist[BC17TO24->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 6)
            MyTextButtonlist[BC25TO33->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 7)
            MyTextButtonlist[BC34TO39->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

		else if (pMainComponent->getMyComponent() == 10)
			MyTextButtonlist[pFaderTouchCompactComponent->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1, dontSendNotification);

		
     }
     else if(eXTOUCH_MODE_ID == MINI_MODE)
     {
         if(pMainComponent->getMyComponent() == 0)
            MyTextButtonlist[ pFaderMiniComponent->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 1)
            MyTextButtonlist[ pEncodersMiniComponent->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 2)
            MyTextButtonlist[ BM1TO8->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

        else if(pMainComponent->getMyComponent() == 3)
            MyTextButtonlist[ BM9TO16->GetCurrentCustomBT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);

     
       }
     } 
     //[/UserPreSize]

    setSize (100, 3000);


    //[Constructor] You can add your own custom stuff here..
    if(pMainComponent->FaderorOtherFlag == 0)
        setSize (100, 3087);
    else if(pMainComponent->FaderorOtherFlag == 1)
        setSize (100, 3087+48);
	else if(pMainComponent->FaderorOtherFlag == 2)
        setSize (100, 3087+24+48);
    //[/Constructor]
}

DecumoMenuComponent::~DecumoMenuComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    if(pMainComponent->FaderorOtherFlag == 1)
    {
        MyTextButtoninc = nullptr;
        MyTextButtondec = nullptr;
    }
	if(pMainComponent->FaderorOtherFlag == 2)
    {
		RelativeBt = nullptr;
		RelativeBt2 = nullptr;
		RelativeBt3 = nullptr;
    }
    for(int i = 0; i<128;i++)
    {
         MyTextButtonlist[i] = nullptr;
    }
    
    /*MyTextButton4 = nullptr;*/
    //MyTextButtonlist .clear();
    //[/Destructor_pre]

    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void DecumoMenuComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    g.fillAll (Colour(0xff000000));
    //[/UserPaint]
}

void DecumoMenuComponent::resized()
{
    textButton->setBounds (0, 8, 100, 24);
    //[UserResized] Add your own custom resize handling here..
    if(pMainComponent->FaderorOtherFlag == 1)
    {
        MyTextButtoninc ->setBounds(0,3+24,100,24);
        MyTextButtondec ->setBounds(0,3,100,24);
        for(int i = 0; i<128;i++)
        {
            MyTextButtonlist[i]->setBounds(0,51+(i)*24,100,24);
        }
    }
    else if(pMainComponent->FaderorOtherFlag == 0)
    {
        for(int i = 0; i<128;i++)
        {
             MyTextButtonlist[i]->setBounds(0,3+i*24,100,24);
        }
    }
	else if(pMainComponent->FaderorOtherFlag == 2)
    {
		RelativeBt ->setBounds(0,3,100,24);
		RelativeBt2 ->setBounds(0,3+24,100,24);
		RelativeBt3 ->setBounds(0,3+48,100,24);
        for(int i = 0; i<128;i++)
        {
            MyTextButtonlist[i]->setBounds(0,27+48+(i)*24,100,24);
        }
    }
    //[/UserResized]
}

void DecumoMenuComponent::buttonClicked (Button* buttonThatWasClicked)
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
    if(pMainComponent->FaderorOtherFlag == 1)
    {
        if (buttonThatWasClicked ==MyTextButtondec)
        {
            //ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x80;
            if(pMainComponent->getMyComponent() == 0)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {           
                    ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x80;
                    //pFadersAndFootCompactComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
					
					pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
					
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 0x80;
                    //pFaderMiniComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    pFaderMiniComponent->UpdateMiniFaderBt();
                    
                }
            }
           else if(pMainComponent->getMyComponent() == 1)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] =0x80;
                    /*pEncodersCompact1To8Component->GetCurrentCustomBT()->setButtonText("Dec/-1");
					for(int i=0;i<16;i++)
					{
						 if(pEncodersCompact1To8Component->GetCurrentCustomBT() == EC1Bt[i].BT4 )
							 EC1Bt[i].BT5 ->setButtonText("-");
					}*/
					pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
                    
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0x80;
                    //pEncodersMiniComponent->GetCustomBT(pEncodersMiniComponent->GetCurrentCustomBT())->setButtonText("-");
                    //pEncodersMiniComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    pEncodersMiniComponent->UpdateEncodeMini(7);
                }
            }
            else if(pMainComponent->getMyComponent() == 2)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] =0x80;
					pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
                    /*pEncodersCompact9To16Component->GetCurrentCustomBT()->setButtonText("Dec/-1");
					for(int i=0;i<16;i++)
					{
						 if(pEncodersCompact9To16Component->GetCurrentCustomBT() == EC1Bt[i].BT4 )
							 EC2Bt[i].BT5 ->setButtonText("-");
					}*/

                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 0x80;
                    //BM1TO8->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    //BM1TO8->GetCustomBT(BM1TO8->GetCurrentCustomBT())->setButtonText("-");
                    BM1TO8->UpdateMiniBt1TO8(135);
                }
            }
            else if(pMainComponent->getMyComponent() == 3)
            {           
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    
					ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] =0x80;
					BC1TO8->UpdateBt1TO8(319);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 0x80;
                    //BM9TO16->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    //BM9TO16->GetCustomBT(BM9TO16->GetCurrentCustomBT())->setButtonText("-");
                    BM9TO16->UpdateMiniBt9TO16(199);
                }
            }
            else if(pMainComponent->getMyComponent() == 4)
            {
                //BC9TO16->GetCurrentCustomBT()->setButtonText("Dec/-1");
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] =0x80;
				BC9TO16->UpdateBt9TO16(383);
            }
            else if(pMainComponent->getMyComponent() == 5)
            {
                //BC17TO24->GetCurrentCustomBT()->setButtonText("Dec/-1");
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] =0x80;
				BC17TO24->UpdateBt17TO24(447);
            }
            else if(pMainComponent->getMyComponent() == 6)
            {
                //BC25TO33->GetCurrentCustomBT()->setButtonText("Dec/-1");
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] =0x80;
				BC25TO33->UpdateBt25TO33(511);
            }
            else if(pMainComponent->getMyComponent() == 7)
            {
                //BC34TO39->GetCurrentCustomBT()->setButtonText("Dec/-1");
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] =0x80;
				BC34TO39->UpdateBt34TO39(583);
            }

			else if (pMainComponent->getMyComponent() == 10)
			{
				//pFaderTouchCompactComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0x80;
				pFaderTouchCompactComponent->UpdateFT(646);
			}
            
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }


        else if (buttonThatWasClicked ==MyTextButtoninc)
        {
            if(pMainComponent->getMyComponent() == 0)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {           
                    ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x81;              
					pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 0x81;
                    //pFaderMiniComponent->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
                    pFaderMiniComponent->UpdateMiniFaderBt();
                }
            }
            else if(pMainComponent->getMyComponent() == 1)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] =0x81;
                    /*pEncodersCompact1To8Component->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
					for(int i=0;i<16;i++)
					{
						 if(pEncodersCompact1To8Component->GetCurrentCustomBT() == EC1Bt[i].BT4 )
							 EC1Bt[i].BT5 ->setButtonText("-");
					}*/
					pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0x81;
                    pEncodersMiniComponent->UpdateEncodeMini(7);
                    //pEncodersMiniComponent->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
                    //pEncodersMiniComponent->GetCustomBT(pEncodersMiniComponent->GetCurrentCustomBT())->setButtonText("-");
                }
            }
            else if(pMainComponent->getMyComponent() == 2)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] =0x81;
                    /*pEncodersCompact9To16Component->GetCurrentCustomBT()->setButtonText("Inc/+1"); 				
					for(int i=0;i<16;i++)
					{
						 if(pEncodersCompact9To16Component->GetCurrentCustomBT() == EC2Bt[i].BT4 )
							 EC2Bt[i].BT5 ->setButtonText("-");
					}*/
					pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 0x81;
                    //BM1TO8->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
                    //BM1TO8->GetCustomBT(BM1TO8->GetCurrentCustomBT())->setButtonText("-");
                    BM1TO8->UpdateMiniBt1TO8(135);
                }
            }
            else if(pMainComponent->getMyComponent() == 3)
            {           
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    //BC1TO8->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
					ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] =0x81;								
					BC1TO8->UpdateBt1TO8(319);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 0x81;
                    //BM9TO16->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
                    //BM9TO16->GetCustomBT(BM9TO16->GetCurrentCustomBT())->setButtonText("-");
                    BM9TO16->UpdateMiniBt9TO16(199);
                }
            }
            else if(pMainComponent->getMyComponent() == 4)
            {
                //BC9TO16->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] =0x81;								
				BC9TO16->UpdateBt9TO16(383);
            }
            else if(pMainComponent->getMyComponent() == 5)
            {

               // BC17TO24->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] =0x81;								
				BC17TO24->UpdateBt17TO24(447);
            }
            else if(pMainComponent->getMyComponent() == 6)
            {
                //BC25TO33->GetCurrentCustomBT()->setButtonText("Inc/+1");
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] =0x81;								
				BC25TO33->UpdateBt25TO33(511);
            }
            else if(pMainComponent->getMyComponent() == 7)
            {
                //BC34TO39->GetCurrentCustomBT()->setButtonText("Inc/+1"); 
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] =0x81;	
				BC34TO39->UpdateBt34TO39(583);
            }

			else if (pMainComponent->getMyComponent() == 10)
			{
				//pFaderTouchCompactComponent->GetCurrentCustomBT()->setButtonText("Inc/+1");
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0x81;
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

   else if(pMainComponent->FaderorOtherFlag == 2)
   {
		if (buttonThatWasClicked ==RelativeBt)
        {
            //ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x80;
            if(pMainComponent->getMyComponent() == 0)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {           
                    ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x82;
                    //pFadersAndFootCompactComponent->GetCurrentCustomBT()->setButtonText("Relative");
					for(int i=0;i<11;i++)
					{
						 if(pFadersAndFootCompactComponent->GetCurrentCustomBT() == FcBt[i].BT4 )
							 pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
					}
					
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 0x82;
                    //pFaderMiniComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    pFaderMiniComponent->UpdateMiniFaderBt();
                    
                }
            }
           else if(pMainComponent->getMyComponent() == 1)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] =0x82;
					pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
                    
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0x82;
                    //pEncodersMiniComponent->GetCustomBT(pEncodersMiniComponent->GetCurrentCustomBT())->setButtonText("-");
                    //pEncodersMiniComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    pEncodersMiniComponent->UpdateEncodeMini(7);
                }
            }
            else if(pMainComponent->getMyComponent() == 2)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] =0x82;
					pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);

                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 0x82;
                    //BM1TO8->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    //BM1TO8->GetCustomBT(BM1TO8->GetCurrentCustomBT())->setButtonText("-");
                    BM1TO8->UpdateMiniBt1TO8(135);
                }
            }
            else if(pMainComponent->getMyComponent() == 3)
            {           
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    //BC1TO8->GetCurrentCustomBT()->setButtonText("Relative");
					ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] =0x82;
					BC1TO8->UpdateBt1TO8(319);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 0x82;
                    //BM9TO16->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    //BM9TO16->GetCustomBT(BM9TO16->GetCurrentCustomBT())->setButtonText("-");
                    BM9TO16->UpdateMiniBt9TO16(199);
                }
            }
            else if(pMainComponent->getMyComponent() == 4)
            {
                ///->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] =0x82;
				BC9TO16->UpdateBt9TO16(383);
            }
            else if(pMainComponent->getMyComponent() == 5)
            {
                //BC17TO24->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] =0x82;
				BC17TO24->UpdateBt17TO24(447);
            }
            else if(pMainComponent->getMyComponent() == 6)
            {
                //BC25TO33->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] =0x82;
				BC25TO33->UpdateBt25TO33(511);
            }
            else if(pMainComponent->getMyComponent() == 7)
            {
                //BC34TO39->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] =0x82;
				BC34TO39->UpdateBt34TO39(583);
            }

			else if (pMainComponent->getMyComponent() == 10)
			{
				//pFaderTouchCompactComponent->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0x82;
				pFaderTouchCompactComponent->UpdateFT(646);
				/*for (int i = 0; i<9; i++)
				{
					if (pFaderTouchCompactComponent->GetCurrentCustomBT() == FTBt[i].BT4)
						FTBt[i].BT5->setButtonText("-");
				}*/
			}
            
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
		else if (buttonThatWasClicked ==RelativeBt2)
        {
            //ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x80;
            if(pMainComponent->getMyComponent() == 0)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {           
                    ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x83;
                    //pFadersAndFootCompactComponent->GetCurrentCustomBT()->setButtonText("Relative");
					for(int i=0;i<11;i++)
					{
						 if(pFadersAndFootCompactComponent->GetCurrentCustomBT() == FcBt[i].BT4 )
							 pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
					}
					
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 0x83;
                    //pFaderMiniComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    pFaderMiniComponent->UpdateMiniFaderBt();
                    
                }
            }
           else if(pMainComponent->getMyComponent() == 1)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] =0x83;
					pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
                    
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0x83;
                    //pEncodersMiniComponent->GetCustomBT(pEncodersMiniComponent->GetCurrentCustomBT())->setButtonText("-");
                    //pEncodersMiniComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    pEncodersMiniComponent->UpdateEncodeMini(7);
                }
            }
            else if(pMainComponent->getMyComponent() == 2)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] =0x83;
					pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);

                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 0x83;
                    //BM1TO8->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    //BM1TO8->GetCustomBT(BM1TO8->GetCurrentCustomBT())->setButtonText("-");
                    BM1TO8->UpdateMiniBt1TO8(135);
                }
            }
            else if(pMainComponent->getMyComponent() == 3)
            {           
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    //BC1TO8->GetCurrentCustomBT()->setButtonText("Relative");
					ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] =0x83;
					BC1TO8->UpdateBt1TO8(319);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 0x83;
                    //BM9TO16->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    //BM9TO16->GetCustomBT(BM9TO16->GetCurrentCustomBT())->setButtonText("-");
                    BM9TO16->UpdateMiniBt9TO16(199);
                }
            }
            else if(pMainComponent->getMyComponent() == 4)
            {
                ///->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] =0x83;
				BC9TO16->UpdateBt9TO16(383);
            }
            else if(pMainComponent->getMyComponent() == 5)
            {
                //BC17TO24->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] =0x83;
				BC17TO24->UpdateBt17TO24(447);
            }
            else if(pMainComponent->getMyComponent() == 6)
            {
                //BC25TO33->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] =0x83;
				BC25TO33->UpdateBt25TO33(511);
            }
            else if(pMainComponent->getMyComponent() == 7)
            {
                //BC34TO39->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] =0x83;
				BC34TO39->UpdateBt34TO39(583);
            }

			else if (pMainComponent->getMyComponent() == 10)
			{
				//pFaderTouchCompactComponent->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0x83;
				pFaderTouchCompactComponent->UpdateFT(646);
				/*for (int i = 0; i<9; i++)
				{
					if (pFaderTouchCompactComponent->GetCurrentCustomBT() == FTBt[i].BT4)
						FTBt[i].BT5->setButtonText("-");
				}*/
			}
            
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
		else if (buttonThatWasClicked ==RelativeBt3)
        {
            //ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x80;
            
            if(pMainComponent->getMyComponent() == 0)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {           
                    ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x84;
                    //pFadersAndFootCompactComponent->GetCurrentCustomBT()->setButtonText("Relative");
					for(int i=0;i<11;i++)
					{
						 if(pFadersAndFootCompactComponent->GetCurrentCustomBT() == FcBt[i].BT4 )
							 pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
					}
					
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE)
                {
                    MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 0x84;
                    //pFaderMiniComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    pFaderMiniComponent->UpdateMiniFaderBt();
                    
                }
            }
           else if(pMainComponent->getMyComponent() == 1)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] =0x84;
					pEncodersCompact1To8Component->UpdateEncode1TO8Bt(63);
                    
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0x84;
                    //pEncodersMiniComponent->GetCustomBT(pEncodersMiniComponent->GetCurrentCustomBT())->setButtonText("-");
                    //pEncodersMiniComponent->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    pEncodersMiniComponent->UpdateEncodeMini(7);
                }
            }
            else if(pMainComponent->getMyComponent() == 2)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] =0x84;
					pEncodersCompact9To16Component->UpdateEncode9TO16Bt(191);

                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 0x84;
                    //BM1TO8->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    //BM1TO8->GetCustomBT(BM1TO8->GetCurrentCustomBT())->setButtonText("-");
                    BM1TO8->UpdateMiniBt1TO8(135);
                }
            }
            else if(pMainComponent->getMyComponent() == 3)
            {           
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    //BC1TO8->GetCurrentCustomBT()->setButtonText("Relative");
					ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] =0x84;
					BC1TO8->UpdateBt1TO8(319);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 0x84;
                    //BM9TO16->GetCurrentCustomBT()->setButtonText("Dec/-1");
                    //BM9TO16->GetCustomBT(BM9TO16->GetCurrentCustomBT())->setButtonText("-");
                    BM9TO16->UpdateMiniBt9TO16(199);
                }
            }
            else if(pMainComponent->getMyComponent() == 4)
            {
                ///->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] =0x84;
				BC9TO16->UpdateBt9TO16(383);
            }
            else if(pMainComponent->getMyComponent() == 5)
            {
                //BC17TO24->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] =0x84;
				BC17TO24->UpdateBt17TO24(447);
            }
            else if(pMainComponent->getMyComponent() == 6)
            {
                //BC25TO33->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] =0x84;
				BC25TO33->UpdateBt25TO33(511);
            }
            else if(pMainComponent->getMyComponent() == 7)
            {
                //BC34TO39->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] =0x84;
				BC34TO39->UpdateBt34TO39(583);
            }

			else if (pMainComponent->getMyComponent() == 10)
			{
				//pFaderTouchCompactComponent->GetCurrentCustomBT()->setButtonText("Relative");
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0x84;
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

	for(int i =0;i<128 ; i++)
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
                    //pFaderMiniComponent->GetCurrentCustomBT()->setchooseflag(i);
                    //pFaderMiniComponent->GetCurrentCustomBT()->setButtonText(String(i));
                    //MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    //pFaderMiniComponent->GetCurrentCustomBT()->setState(Button::buttonOver);
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
                    //pEncodersMiniComponent->GetCurrentCustomBT()->setchooseflag(i);
                    //pEncodersMiniComponent->GetCurrentCustomBT()->setButtonText(String(i));
                    //MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    //pEncodersMiniComponent->GetCurrentCustomBT()->setState(Button::buttonOver);
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
                    //BM1TO8->GetCurrentCustomBT()->setchooseflag(i);
                    //BM1TO8->GetCurrentCustomBT()->setButtonText(String(i));
                   // MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                   // BM1TO8->GetCurrentCustomBT()->setState(Button::buttonOver);
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
                    //BM9TO16->GetCurrentCustomBT()->setchooseflag(i);
                    //BM9TO16->GetCurrentCustomBT()->setButtonText(String(i));
                    //MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    //BM9TO16->GetCurrentCustomBT()->setState(Button::buttonOver);
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

			else if (pMainComponent->getMyComponent() == 10)
			{
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = (unsigned char)i;
				pFaderTouchCompactComponent->UpdateFT(646);
				/*pFaderTouchCompactComponent->GetCurrentCustomBT()->setchooseflag(i);
				pFaderTouchCompactComponent->GetCurrentCustomBT()->setButtonText(String(i));
				MyTextButtonlist[i]->setToggleState(1, dontSendNotification);
				pFaderTouchCompactComponent->GetCurrentCustomBT()->setState(Button::buttonOver);*/
			}
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        
        }
    }
    /*else if (buttonThatWasClicked == MyTextButton1)
    {
        MyTextButton1->setToggleState(1,dontSendNotification);
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
    }
    else if (buttonThatWasClicked == MyTextButton2)
    {
        MyTextButton2->setToggleState(1,dontSendNotification);
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
    }
    else if (buttonThatWasClicked == MyTextButton3)
    {
        MyTextButton3->setToggleState(1,dontSendNotification);
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
    }
    else if (buttonThatWasClicked == MyTextButton4)
    {
        MyTextButton4->setToggleState(1,dontSendNotification);
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
    }*/
    //[/UserbuttonClicked_Post]
    
}


//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

void DecumoMenuComponent::SetBTList()
{

     
}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="DecumoMenuComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="100" initialHeight="3000">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="new button" id="a2154346a0fb2283" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 9 100 20" bgColOff="fff7f7f7"
              bgColOn="ffffffff" textColOn="0" buttonText="new button" connectedEdges="15"
              needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: popu0_png, 365, "Pic/popu0.PNG"
static const unsigned char resource_DecumoMenuComponent_popu0_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,100,0,0,0,18,8,6,0,0,0,173,153,123,136,0,0,0,1,115,82,71,66,0,174,206,28,233,
0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,1,2,73,68,65,84,88,71,237,214,161,206,71,96,28,197,113,155,162,8,54,87,96,170,96,140,232,
6,220,129,91,16,93,134,100,138,41,138,251,160,104,162,110,162,205,84,193,156,119,236,247,191,7,231,157,207,38,156,167,126,199,67,193,231,85,190,32,47,243,5,121,25,250,32,231,121,34,207,243,231,185,174,
75,78,121,209,7,177,44,11,85,85,161,109,91,56,142,35,167,188,168,131,20,69,129,52,77,101,1,89,150,61,113,152,81,7,241,125,31,195,48,200,2,186,174,67,20,69,178,56,81,7,81,85,21,251,190,203,2,150,101,129,
97,24,178,56,209,6,57,142,3,138,162,60,151,250,207,182,109,208,52,77,22,39,218,32,247,31,213,29,228,14,243,179,174,43,116,93,151,197,137,250,147,101,154,38,230,121,150,5,76,211,4,219,182,101,113,162,14,
18,199,49,154,166,145,5,212,117,141,36,73,100,113,162,14,210,247,61,92,215,149,5,132,97,136,113,28,101,113,162,14,114,43,203,18,158,231,33,8,130,231,13,97,71,31,228,191,249,130,188,204,23,228,101,190,
32,175,2,252,1,221,38,195,49,164,68,172,54,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* DecumoMenuComponent::popu0_png = (const char*) resource_DecumoMenuComponent_popu0_png;
const int DecumoMenuComponent::popu0_pngSize = 365;

// JUCER_RESOURCE: popu0a_png, 403, "Pic/popu0a.PNG"
static const unsigned char resource_DecumoMenuComponent_popu0a_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,100,0,0,0,18,8,6,0,0,0,173,153,123,136,0,0,0,1,115,82,71,66,0,174,206,28,233,
0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,1,40,73,68,65,84,88,71,237,150,61,107,194,64,0,134,35,1,131,20,52,131,95,160,29,132,66,109,
43,56,100,14,40,138,232,30,42,8,89,20,68,65,52,75,59,20,7,7,255,68,59,116,234,212,181,221,164,116,19,68,255,211,171,9,120,120,144,31,112,175,220,240,12,239,241,108,15,119,137,17,4,7,104,212,65,7,81,12,
29,68,49,232,131,204,231,59,184,110,16,177,88,236,99,29,38,232,131,100,50,37,180,90,111,232,118,215,200,102,239,98,29,38,168,131,52,26,47,168,215,159,197,118,28,63,138,115,233,176,65,29,164,80,120,68,
191,255,41,182,231,189,163,92,118,36,135,13,234,32,137,132,137,233,244,95,236,209,232,23,150,149,150,28,54,104,131,204,102,91,24,134,17,125,212,207,103,147,201,31,76,211,146,60,54,104,131,132,127,84,97,
144,48,204,249,108,60,222,32,153,188,145,60,54,168,159,172,84,202,198,112,248,35,182,239,127,195,182,111,37,135,13,234,32,149,138,139,78,103,37,118,187,189,68,181,218,147,28,54,168,131,120,222,7,114,185,
123,177,139,197,26,6,131,47,201,97,131,58,72,72,179,249,138,124,254,225,20,227,41,186,33,113,14,19,244,65,174,13,29,68,49,116,16,197,208,65,148,226,128,35,62,7,158,57,68,153,164,148,0,0,0,0,73,69,78,68,
174,66,96,130,0,0};

const char* DecumoMenuComponent::popu0a_png = (const char*) resource_DecumoMenuComponent_popu0a_png;
const int DecumoMenuComponent::popu0a_pngSize = 403;

// JUCER_RESOURCE: popu1_png, 244, "Pic/popu1.PNG"
static const unsigned char resource_DecumoMenuComponent_popu1_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,100,0,0,0,18,8,6,0,0,0,173,153,123,136,0,0,0,1,115,82,71,66,0,174,206,28,233,
0,0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,0,137,73,68,65,84,88,71,237,215,161,13,69,33,16,68,209,223,0,13,160,105,144,32,32,244,128,
192,209,21,61,80,6,102,94,126,66,17,179,155,57,10,22,121,179,130,31,132,138,130,144,81,16,50,110,130,236,189,223,201,54,211,65,238,189,104,173,33,165,132,222,251,155,218,230,98,67,198,24,10,194,100,173,
165,32,76,20,132,140,130,144,81,16,50,10,66,70,65,200,204,57,81,74,121,55,219,76,7,249,127,12,107,173,136,49,34,132,128,156,51,206,57,239,213,38,23,27,226,137,130,144,81,16,50,10,66,5,248,0,117,186,223,
138,198,124,9,238,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* DecumoMenuComponent::popu1_png = (const char*) resource_DecumoMenuComponent_popu1_png;
const int DecumoMenuComponent::popu1_pngSize = 244;

// JUCER_RESOURCE: popu1a_png, 259, "Pic/popu1a.PNG"
static const unsigned char resource_DecumoMenuComponent_popu1a_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,99,0,0,0,18,8,6,0,0,0,79,69,96,241,0,0,0,1,115,82,71,66,0,174,206,28,233,0,
0,0,4,103,65,77,65,0,0,177,143,11,252,97,5,0,0,0,9,112,72,89,115,0,0,14,195,0,0,14,195,1,199,111,168,100,0,0,0,152,73,68,65,84,88,71,237,215,49,14,64,64,16,133,97,149,102,27,141,210,33,8,45,137,99,32,
33,212,18,18,141,3,185,129,67,40,220,233,41,180,123,128,55,155,87,124,205,236,116,127,166,216,104,219,94,8,7,197,32,162,24,68,130,137,209,247,151,119,110,137,233,24,235,250,160,44,39,36,73,134,170,154,
189,59,150,4,113,25,117,189,43,6,139,182,61,21,131,133,98,16,81,12,34,138,65,68,49,136,40,6,145,166,57,80,20,131,247,205,18,211,49,254,79,223,8,231,82,196,177,67,158,119,88,150,219,187,107,65,16,151,17,
10,197,32,162,24,68,20,131,198,139,15,157,45,126,13,138,140,229,192,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* DecumoMenuComponent::popu1a_png = (const char*) resource_DecumoMenuComponent_popu1a_png;
const int DecumoMenuComponent::popu1a_pngSize = 259;


//[EndFile] You can add extra defines here...
//[/EndFile]
