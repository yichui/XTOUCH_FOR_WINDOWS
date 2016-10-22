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
//[/Headers]

#include "Twochoose_Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
Twochoose_Component  *pTwochoose_Component = nullptr;
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
//[/MiscUserDefs]

//==============================================================================
Twochoose_Component::Twochoose_Component ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton->addListener (this);


    //[UserPreSize]
    addAndMakeVisible (menBT= new MyTextButton ("new button"));
    menBT->setButtonText("Momentary");
    menBT ->addListener(this);

    addAndMakeVisible (toggleBT= new MyTextButton ("new button"));
    toggleBT->setButtonText("Toggle");
    toggleBT ->addListener(this);

    if(eXTOUCH_MODE_ID == COMPACT_MODE)
       {
        if(pMainComponent ->getMyComponent() ==0)
        {
            if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==1)
        {
            if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==2)
        {
            if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==3)
        {
            if(BC1TO8->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==4)
        {
            if(BC9TO16->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==5)
        {
            if(BC17TO24->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==6)
        {
            if(BC25TO33->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==7)
        {
            if(BC34TO39->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
		else if (pMainComponent->getMyComponent() == 10)
		{
			if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare("Momentary") == 0)
				menBT->setToggleState(1, dontSendNotification);
			else
				toggleBT->setToggleState(1, dontSendNotification);
		}
    }
    else  if(eXTOUCH_MODE_ID ==MINI_MODE)
    {
         if(pMainComponent ->getMyComponent() ==0)
        {
            if(pFaderMiniComponent->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==1)
        {
            if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==2)
        {
            if(BM1TO8->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==3)
        {
            if(BM9TO16->GetNO_BT()->getButtonText().compare("Momentary")==0)
                menBT->setToggleState(1,dontSendNotification);
            else
                toggleBT->setToggleState(1,dontSendNotification);
        }
    }
    //[/UserPreSize]

    setSize (100, 54);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

Twochoose_Component::~Twochoose_Component()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    menBT = nullptr;
    toggleBT = nullptr;
    //[/Destructor_pre]

    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Twochoose_Component::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Twochoose_Component::resized()
{
    textButton->setBounds (0, 8, 100, 13);
    //[UserResized] Add your own custom resize handling here..
    menBT ->setBounds( 0, 3 , 100,24);
    toggleBT ->setBounds(0, 27 ,100 , 24);
    //[/UserResized]
}

void Twochoose_Component::buttonClicked (Button* buttonThatWasClicked)
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
    else if(buttonThatWasClicked == menBT)
    {
        
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0;
                pFadersAndFootCompactComponent->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 0;
                pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 0;
                pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
				ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] = 0;
                BC1TO8->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==4)
            {
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] = 0;
                BC9TO16->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==5)
            {
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] = 0;
                BC17TO24->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==6)
            {
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] = 0;
                BC25TO33->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==7)
            {
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] = 0;
                BC34TO39->GetNO_BT()->setButtonText("Momentary");
            }
			else if (pMainComponent->getMyComponent() == 10)
			{
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0;
				pFaderTouchCompactComponent->GetNO_BT()->setButtonText("Momentary");
			}
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 0;
                pFaderMiniComponent->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0;
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
                MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 0;
                BM1TO8->GetNO_BT()->setButtonText("Momentary");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
                MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 0;
                BM9TO16->GetNO_BT()->setButtonText("Momentary");
                
            }
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
    }
    else if(buttonThatWasClicked == toggleBT)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
       {
            if(pMainComponent ->getMyComponent() ==0)
            {
                ConstMidiLayerMessage[pFadersAndFootCompactComponent ->MidiLayerNum] = 0x01;
                pFadersAndFootCompactComponent->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 0x01;
                pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 0x01;
                pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
				ConstMidiLayerMessage[BC1TO8 ->MidiLayerNum] = 0x01;
                BC1TO8->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==4)
            {
				ConstMidiLayerMessage[BC9TO16 ->MidiLayerNum] = 0x01;
                BC9TO16->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==5)
            {
				ConstMidiLayerMessage[BC17TO24 ->MidiLayerNum] = 0x01;
                BC17TO24->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==6)
            {
				ConstMidiLayerMessage[BC25TO33 ->MidiLayerNum] = 0x01;
                BC25TO33->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==7)
            {
				ConstMidiLayerMessage[BC34TO39 ->MidiLayerNum] = 0x01;
                BC34TO39->GetNO_BT()->setButtonText("Toggle");
            }
			else if (pMainComponent->getMyComponent() == 10)
			{
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = 0x01;
				pFaderTouchCompactComponent->GetNO_BT()->setButtonText("Toggle");
			}
            findParentComponentOfClass<CallOutBox>()->exitModalState(0);
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {
            if(pMainComponent ->getMyComponent() ==0)
            {
                MiniConstMidiLayerMessage[pFaderMiniComponent ->MidiLayerNum] = 0x01;
                pFaderMiniComponent->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0x01;
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
                MiniConstMidiLayerMessage[BM1TO8 ->MidiLayerNum] = 0x01;
                BM1TO8->GetNO_BT()->setButtonText("Toggle");
            }
            else if(pMainComponent ->getMyComponent() ==3)
            {
                MiniConstMidiLayerMessage[BM9TO16 ->MidiLayerNum] = 0x01;
                BM9TO16->GetNO_BT()->setButtonText("Toggle");
                
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

<JUCER_COMPONENT documentType="Component" className="Twochoose_Component" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="100" initialHeight="54">
  <BACKGROUND backgroundColour="ff000000"/>
  <TEXTBUTTON name="new button" id="9048d80029ce0bc6" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 8 100 13" buttonText="new button"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
