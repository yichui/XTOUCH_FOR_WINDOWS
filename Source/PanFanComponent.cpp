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
//#include "FaderTouchCompactComponent.h"
#include "XtouchDevMidiData.h"
//[/Headers]

#include "PanFanComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
PanFanComponent *pPanFanComponent = nullptr;
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
//extern FaderTouchCompactComponent *pFaderTouchCompactComponent;
//[/MiscUserDefs]

//==============================================================================
PanFanComponent::PanFanComponent ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textButton->addListener (this);


    //[UserPreSize]
    addAndMakeVisible (SingleBT = new MyTextButton ("new button"));
    SingleBT->setButtonText("Single");
    SingleBT->addListener (this);

    addAndMakeVisible (PanBT = new MyTextButton ("new button"));
    PanBT->setButtonText("Pan");
    PanBT->addListener (this);

    addAndMakeVisible (FanBT = new MyTextButton ("new button"));
    FanBT->setButtonText("Fan");
    FanBT->addListener (this);

    addAndMakeVisible (SpreadBT = new MyTextButton ("new button"));
    SpreadBT->setButtonText("Spread");
    SpreadBT->addListener (this);

    addAndMakeVisible (TrimBT = new MyTextButton ("new button"));
    TrimBT->setButtonText("Trim");
    TrimBT->addListener (this);


     if(eXTOUCH_MODE_ID == COMPACT_MODE)
       {
        
        if(pMainComponent ->getMyComponent() ==1)
        {
            if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Single")==0)
                SingleBT->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Pan")==0)
                PanBT->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Fan")==0)
                FanBT->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Spread")==0)
                SpreadBT->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare("Trim")==0)
                TrimBT->setToggleState(1,dontSendNotification);
        }
        else if(pMainComponent ->getMyComponent() ==2)
        {
            if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Single")==0)
                SingleBT->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Pan")==0)
                PanBT->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Fan")==0)
                FanBT->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Spread")==0)
                SpreadBT->setToggleState(1,dontSendNotification);
            else if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText().compare("Trim")==0)
                TrimBT->setToggleState(1,dontSendNotification);
        }
       
    }
    else  if(eXTOUCH_MODE_ID ==MINI_MODE)
    {
        
        if(pMainComponent ->getMyComponent() ==1)
        {
            if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Single")==0)
                SingleBT->setToggleState(1,dontSendNotification);
            else if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Pan")==0)
                PanBT->setToggleState(1,dontSendNotification);
            else if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Fan")==0)
                FanBT->setToggleState(1,dontSendNotification);
            else if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Spread")==0)
                SpreadBT->setToggleState(1,dontSendNotification);
            else if(pEncodersMiniComponent->GetNO_BT()->getButtonText().compare("Trim")==0)
                TrimBT->setToggleState(1,dontSendNotification);
        }
        
    }
    //[/UserPreSize]

    setSize (100, 126);


    //[Constructor] You can add your own custom stuff here..
     setSize (75, 126);
    //[/Constructor]
}

PanFanComponent::~PanFanComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    SingleBT = nullptr;
    PanBT = nullptr;
    FanBT= nullptr;
    SpreadBT = nullptr;
    TrimBT = nullptr;
    //[/Destructor_pre]

    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void PanFanComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void PanFanComponent::resized()
{
    textButton->setBounds (16, 8, 72, 8);
    //[UserResized] Add your own custom resize handling here..
    SingleBT ->setBounds (0, 3, 100, 24);
    PanBT ->setBounds (0, 27, 100, 24);
    FanBT->setBounds (0, 51, 100, 24);
    SpreadBT ->setBounds (0, 75, 100, 24);
    TrimBT ->setBounds (0, 99, 100, 24);
    //[/UserResized]
}

void PanFanComponent::buttonClicked (Button* buttonThatWasClicked)
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
    else if (buttonThatWasClicked == SingleBT)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {           
            if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 0;
                pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Single");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 0;
                pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Single");
            }         
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {            
            if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 0;
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Single");
            }         
        }
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
    }
    else if (buttonThatWasClicked == PanBT)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {           
            if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 1;
                pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Pan");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 1;
                pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Pan");
            }         
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {            
            if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 1;
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Pan");
            }         
        }
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
    }
    else if (buttonThatWasClicked ==  FanBT)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {           
            if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 2;
                pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Fan");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 2;
                pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Fan");
            }         
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {            
            if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 2;
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Fan");
            }         
        }
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
    }
    else if (buttonThatWasClicked == SpreadBT)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {           
            if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 3;
                pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Spread");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 3;
                pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Spread");
            }         
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {            
            if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 3;
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Spread");
            }         
        }
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
    }
    else if (buttonThatWasClicked == TrimBT)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {           
            if(pMainComponent ->getMyComponent() ==1)
            {
                ConstMidiLayerMessage[pEncodersCompact1To8Component ->MidiLayerNum] = 4;
                pEncodersCompact1To8Component->GetNO_BT()->setButtonText("Trim");
            }
            else if(pMainComponent ->getMyComponent() ==2)
            {
				ConstMidiLayerMessage[pEncodersCompact9To16Component ->MidiLayerNum] = 4;
                pEncodersCompact9To16Component->GetNO_BT()->setButtonText("Trim");
            }         
        }
        else  if(eXTOUCH_MODE_ID ==MINI_MODE)
        {            
            if(pMainComponent ->getMyComponent() ==1)
            {
                MiniConstMidiLayerMessage[pEncodersMiniComponent ->MidiLayerNum] = 4;
                pEncodersMiniComponent->GetNO_BT()->setButtonText("Trim");
            }         
        }
        findParentComponentOfClass<CallOutBox>()->exitModalState(0);
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

<JUCER_COMPONENT documentType="Component" className="PanFanComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="100" initialHeight="126">
  <BACKGROUND backgroundColour="ff000000"/>
  <TEXTBUTTON name="new button" id="997c4c4594255626" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="16 8 72 8" buttonText="new button"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
