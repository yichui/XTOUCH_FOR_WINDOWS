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
#include "XtouchDevMidiData.h"
#include "GlobalCompactComponent.h"
#include "FaderTouchCompactComponent.h"
//[/Headers]

#include "MMCFuntionsBTComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
MMCFuntionsBTComponent * pMMCFuntionsBTComponent =nullptr;
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
extern GlobalCompactComponent * pGlobalCompactComponent;

  String MMC_Functions[9] ={
      "Stop", "Play","Pause", "Deferred Play", "Fast Forward", "Rewind", "Punch in","Punch out","Record Pause"
 };

  String MMC_Functions_e[9] = {
      "Stop", "Play","Pause", "Def Ply", "Fast Fw", "Rewind", "Punch in","Punch out","Rc Pause"
 };
//[/MiscUserDefs]

//==============================================================================
MMCFuntionsBTComponent::MMCFuntionsBTComponent ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->addListener (this);


    //[UserPreSize]
    for(int i = 0; i<9;i++)
    {    
        addAndMakeVisible (MyTextButtonlist[i]= new MyTextButton ("new button"));
        MyTextButtonlist[i]->setButtonText(MMC_Functions[i]);
        MyTextButtonlist[i]->addListener(this);
    }

    for(int i = 0; i<9;i++)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent->getMyComponent() == 0){
                if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 1){
                //MyTextButtonlist[pEncodersCompact1To8Component->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
                //MyTextButtonlist[pEncodersCompact1To8Component->GetNum()]->setToggleState(1,dontSendNotification);
                if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText().compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 2){
                //MyTextButtonlist[pEncodersCompact9To16Component->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
                if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 3){
                if(BC1TO8->GetNO_BT()->getButtonText().compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 4){
                 if(BC9TO16->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }

            else if(pMainComponent->getMyComponent() == 5){
                 if(BC17TO24->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 6){
                 if(BC25TO33->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 7){
                 if(BC34TO39->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if (pMainComponent->getMyComponent() == 10){
                if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare(MMC_Functions_e[i]) == 0)
                    MyTextButtonlist[i]->setToggleState(1, dontSendNotification);
            }
        
        }
        else if(eXTOUCH_MODE_ID == MINI_MODE)
        {
            if(pMainComponent->getMyComponent() == 0){
                 if(pFaderMiniComponent->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
             if(pMainComponent->getMyComponent() == 1){
                if(pEncodersMiniComponent->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
             }
            else if(pMainComponent->getMyComponent() == 2){
                if(BM1TO8->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 3){
                if(BM9TO16->GetNO_BT()->getButtonText() .compare(MMC_Functions_e[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
        }
        
    }
    //[/UserPreSize]

    setSize (176, 246);


    //[Constructor] You can add your own custom stuff here..
    setSize(176, 246 + 24 - 48);
    //[/Constructor]
}

MMCFuntionsBTComponent::~MMCFuntionsBTComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    for(int i = 0; i< 9 ; i++)
    {
         MyTextButtonlist[i] = nullptr;
    }
    //[/Destructor_pre]

    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MMCFuntionsBTComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    g.fillAll (Colour(0xff000000));
    //[/UserPaint]
}

void MMCFuntionsBTComponent::resized()
{
    textButton->setBounds (0, 8, 120, 8);
    //[UserResized] Add your own custom resize handling here..
    for(int i = 0; i<9;i++)
    {
         MyTextButtonlist[i]->setBounds(0,3+i*24,166,24);
    }
    //[/UserResized]
}

void MMCFuntionsBTComponent::buttonClicked (Button* buttonThatWasClicked)
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
    for(int i =0;i<9 ; i++)
    {
        if (buttonThatWasClicked ==MyTextButtonlist[i])
        {
            if(pMainComponent->getMyComponent() == 0)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                //pFadersAndFootCompactComponent->GetNO_BT()->setchooseflag(i);
                    ConstMidiLayerMessage[pFadersAndFootCompactComponent->MidiLayerNum] = (unsigned char)i;
                    ///pFadersAndFootCompactComponent->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
                    //MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    //pFadersAndFootCompactComponent->GetNO_BT()->setState(Button::buttonOver);
                    pFadersAndFootCompactComponent->UpdateFaderCompactBt(0);
        
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE)
                {
                    //pFaderMiniComponent->GetNO_BT()->setchooseflag(i);
                    MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum] =  (unsigned char)i;
                    pFaderMiniComponent->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
                    MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    pFaderMiniComponent->GetNO_BT()->setState(Button::buttonOver);
                }
            }
            else if(pMainComponent->getMyComponent() == 1)
            {
                if(eXTOUCH_MODE_ID == COMPACT_MODE)
                {
                    //pEncodersCompact1To8Component->GetNO_BT()->setchooseflag(i);
                    ConstMidiLayerMessage[pEncodersCompact1To8Component->MidiLayerNum] = (unsigned char)i;
                    pEncodersCompact1To8Component->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
                    MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    pEncodersCompact1To8Component->GetNO_BT()->setState(Button::buttonOver);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    //pEncodersMiniComponent->GetNO_BT()->setchooseflag(i);
                    MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum] = (unsigned char)i;
                    pEncodersMiniComponent->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
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
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    //BM1TO8->GetNO_BT()->setchooseflag(i);
                    MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum] = (unsigned char)i;
                    BM1TO8->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
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
                    BC1TO8->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
                    //MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    //BC1TO8->GetNO_BT()->setState(Button::buttonOver);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    //BM9TO16->GetNO_BT()->setchooseflag(i);
                    MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum] = (unsigned char)i;
                    BM9TO16->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
                    MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    BM9TO16->GetNO_BT()->setState(Button::buttonOver);
                }
            }
            else if(pMainComponent->getMyComponent() == 4)
            {
                //BC9TO16->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC9TO16->MidiLayerNum] = (unsigned char)i;
                BC9TO16->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
                
            }
            else if(pMainComponent->getMyComponent() == 5)
            {
                //BC17TO24->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC17TO24->MidiLayerNum] = (unsigned char)i;
                BC17TO24->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
                
            }
            else if(pMainComponent->getMyComponent() == 6)
            {
                //BC25TO33->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC25TO33->MidiLayerNum] = (unsigned char)i;
                BC25TO33->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
               
            }
            else if(pMainComponent->getMyComponent() == 7)
            {
                //BC34TO39->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC34TO39->MidiLayerNum] = (unsigned char)i;
                BC34TO39->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
			}
			else if(pMainComponent->getMyComponent() == 10)
            {
                ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = (unsigned char)i;
				//pFaderTouchCompactComponent->GetNO_BT()->setButtonText(MMC_Functions_e[i]);
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

<JUCER_COMPONENT documentType="Component" className="MMCFuntionsBTComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="130" initialHeight="246">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="new button" id="9d2dc3cabb06bcad" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 8 120 8" buttonText="new button"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
