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
#include "XtouchDevMidiData.h"
#include  "FadersAndFootCompactComponent.h"
#include "FaderMiniComponent.h"
#include "ViewPortComponent.h"
#include "EncodersCompact1To8Component.h"
#include "EncodersCompact9To16Component.h"
#include "EncodersMiniComponent.h"
#include "GlobalCompactComponent.h"
#include "MainComponent.h"
#include "ButtonsCompact17To24Component.h"
#include "ButtonsCompact1To8Component.h"
#include "ButtonsCompact25To33Component.h"
#include "ButtonsCompact34To39Component.h"
#include "ButtonsCompact9To16Component.h"
#include "ButtonsMini1To8Component.h"
#include "ButtonsMini9To16Component.h"
#include "FaderTouchCompactComponent.h"
//[/Headers]

#include "MusicNoteBTComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
MusicNoteBtComponent * pMusicNoteBtComponent =nullptr;
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

String  Midimusic1[128] = {
     "C0","C#0","D0","D#0","E0","F0","F#0","G0","G#0","A0","A#0","B0",
     "C1","C#1","D1","D#1","E1","F1","F#1","G1","G#1","A1","A#1","B1",
     "C2","C#2","D2","D#1","E2","F2","F#2","G2","G#2","A2","A#2","B2",
     "C3","C#3","D3","D#3","E3","F3","F#3","G3","G#3","A3","A#3","B3",
     "C4","C#4","D4","D#4","E4","F4","F#4","G4","G#4","A4","A#4","B4",
     "C5","C#5","D5","D#5","E5","F5","F#5","G5","G#5","A5","A#5","B5",
     "C6","C#6","D6","D#6","E6","F6","F#6","G6","G#6","A6","A#6","B6",
     "C7","C#7","D7","D#7","E7","F7","F#7","G7","G#7","A7","A#7","B7",
     "C8","C#8","D8","D#8","E8","F8","F#8","G8","G#8","A8","A#8","B8",
     "C9","C#9","D9","D#9","E9","F9","F#9","G9","G#9","A9","A#9","B9",
     "C10","C#10","D10","D#10","E10","F10","F#10","G10" 
 };

String  Midimusic[128] = {
	"C-2", "C#-2", "D-2", "D#-2", "E-2", "F-2", "F#-2", "G-2", "G#-2", "A-2", "A#-2", "B-2",
	"C-1", "C#-1", "D-1", "D#-1", "E-1", "F-1", "F#-1", "G-1", "G#-1", "A-1", "A#-1", "B-1",
	"C0", "C#0", "D0", "D#0", "E0", "F0", "F#0", "G0", "G#0", "A0", "A#0", "B0",
	"C1", "C#1", "D1", "D#1", "E1", "F1", "F#1", "G1", "G#1", "A1", "A#1", "B1",
	"C2", "C#2", "D2", "D#2", "E2", "F2", "F#2", "G2", "G#2", "A2", "A#2", "B2",
	"C3", "C#3", "D3", "D#3", "E3", "F3", "F#3", "G3", "G#3", "A3", "A#3", "B3",
	"C4", "C#4", "D4", "D#4", "E4", "F4", "F#4", "G4", "G#4", "A4", "A#4", "B4",
	"C5", "C#5", "D5", "D#5", "E5", "F5", "F#5", "G5", "G#5", "A5", "A#5", "B5",
	"C6", "C#6", "D6", "D#6", "E6", "F6", "F#6", "G6", "G#6", "A6", "A#6", "B6",
	"C7", "C#7", "D7", "D#7", "E7", "F7", "F#7", "G7", "G#7", "A7", "A#7", "B7",
	"C8", "C#8", "D8", "D#8", "E8", "F8", "F#8", "G8"
};
//[/MiscUserDefs]

//==============================================================================
MusicNoteBtComponent::MusicNoteBtComponent ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->addListener (this);


    //[UserPreSize]
    for(int i = 0; i<128;i++)
    {   
        addAndMakeVisible (MyTextButtonlist[i]= new MyTextButton ("new button"));
        MyTextButtonlist[i]->setButtonText(Midimusic[i]);
        MyTextButtonlist[i]->addListener(this);
    }
    for(int i = 0; i<128;i++)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent->getMyComponent() == 0){
                if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText()  .compare(Midimusic[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 1){
                //MyTextButtonlist[pEncodersCompact1To8Component->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
                //MyTextButtonlist[pEncodersCompact1To8Component->GetNum()]->setToggleState(1,dontSendNotification);
                if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText()  .compare(Midimusic[i])==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 2){
                //MyTextButtonlist[pEncodersCompact9To16Component->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
                if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText()  .compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 3){
                if(BC1TO8->GetNO_BT()->getButtonText()  .compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 4){
                 if(BC9TO16->GetNO_BT()->getButtonText() .compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }

            else if(pMainComponent->getMyComponent() == 5){
                 if(BC17TO24->GetNO_BT()->getButtonText().compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 6){
                 if(BC25TO33->GetNO_BT()->getButtonText() .compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 7){
                 if(BC34TO39->GetNO_BT()->getButtonText() .compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
        
			else if (pMainComponent->getMyComponent() == 10){
				if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare(Midimusic[i]) == 0)
					MyTextButtonlist[i]->setToggleState(1, dontSendNotification);
			}
        }
        else if(eXTOUCH_MODE_ID == MINI_MODE)
        {
            if(pMainComponent->getMyComponent() == 0){
                 if(pFaderMiniComponent->GetNO_BT()->getButtonText() .compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 1){
                if(pEncodersMiniComponent->GetNO_BT()->getButtonText() .compare(Midimusic[i] )==0)
                  MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);              
            }

            else if(pMainComponent->getMyComponent() == 2){
                if(BM1TO8->GetNO_BT()->getButtonText()  .compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification);
            }
            else if(pMainComponent->getMyComponent() == 3){
                if(BM9TO16->GetNO_BT()->getButtonText()  .compare(Midimusic[i] )==0)
                    MyTextButtonlist[i] ->setToggleState(1,dontSendNotification); 
            }
        }
        
    }
    //[/UserPreSize]

    setSize (89, 3000);


    //[Constructor] You can add your own custom stuff here..
    //setSize (89, 3000);
    //[/Constructor]
}

MusicNoteBtComponent::~MusicNoteBtComponent()
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
void MusicNoteBtComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    g.fillAll (Colour(0xff000000));
    //[/UserPaint]
}

void MusicNoteBtComponent::resized()
{
    textButton->setBounds (0, 8, 80, 8);
    //[UserResized] Add your own custom resize handling here..
    for(int i = 0; i<128;i++)
     {
         MyTextButtonlist[i]->setBounds(0,3+i*24,110,24);
     }
    //[/UserResized]
}

void MusicNoteBtComponent::buttonClicked (Button* buttonThatWasClicked)
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
                    pFadersAndFootCompactComponent->GetNO_BT()->setButtonText(Midimusic[i]);
                    MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    pFadersAndFootCompactComponent->GetNO_BT()->setState(Button::buttonOver);
        
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE)
                {
                    //pFaderMiniComponent->GetNO_BT()->setchooseflag(i);
                    MiniConstMidiLayerMessage[pFaderMiniComponent->MidiLayerNum] =  (unsigned char)i;
                    pFaderMiniComponent->GetNO_BT()->setButtonText(Midimusic[i]);
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
                    pEncodersCompact1To8Component->GetNO_BT()->setButtonText(Midimusic[i]);
                    MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    pEncodersCompact1To8Component->GetNO_BT()->setState(Button::buttonOver);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    //pEncodersMiniComponent->GetNO_BT()->setchooseflag(i);
                    MiniConstMidiLayerMessage[pEncodersMiniComponent->MidiLayerNum] = (unsigned char)i;
                    pEncodersMiniComponent->GetNO_BT()->setButtonText(Midimusic[i]);
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
                    pEncodersCompact9To16Component->GetNO_BT()->setButtonText(Midimusic[i]);
                    MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    pEncodersCompact9To16Component->GetNO_BT()->setState(Button::buttonOver);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    //BM1TO8->GetNO_BT()->setchooseflag(i);
                    MiniConstMidiLayerMessage[BM1TO8->MidiLayerNum] = (unsigned char)i;
                    BM1TO8->GetNO_BT()->setButtonText(Midimusic[i]);
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
                    BC1TO8->GetNO_BT()->setButtonText(Midimusic[i]);
                    MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    BC1TO8->GetNO_BT()->setState(Button::buttonOver);
                }
                else if(eXTOUCH_MODE_ID == MINI_MODE )
                {
                    //BM9TO16->GetNO_BT()->setchooseflag(i);
                    MiniConstMidiLayerMessage[BM9TO16->MidiLayerNum] = (unsigned char)i;
                    BM9TO16->GetNO_BT()->setButtonText(Midimusic[i]);
                    MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                    BM9TO16->GetNO_BT()->setState(Button::buttonOver);
                }
            }
            else if(pMainComponent->getMyComponent() == 4)
            {
                //BC9TO16->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC9TO16->MidiLayerNum] = (unsigned char)i;
                BC9TO16->GetNO_BT()->setButtonText(Midimusic[i]);
                MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                BC9TO16->GetNO_BT()->setState(Button::buttonOver);
            }
            else if(pMainComponent->getMyComponent() == 5)
            {
                //BC17TO24->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC17TO24->MidiLayerNum] = (unsigned char)i;
                BC17TO24->GetNO_BT()->setButtonText(Midimusic[i]);
                MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                BC17TO24->GetNO_BT()->setState(Button::buttonOver);
            }
            else if(pMainComponent->getMyComponent() == 6)
            {
                //BC25TO33->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC25TO33->MidiLayerNum] = (unsigned char)i;
                BC25TO33->GetNO_BT()->setButtonText(Midimusic[i]);
                MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                BC25TO33->GetNO_BT()->setState(Button::buttonOver);
            }
            else if(pMainComponent->getMyComponent() == 7)
            {
                //BC34TO39->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[BC34TO39->MidiLayerNum] = (unsigned char)i;
                BC34TO39->GetNO_BT()->setButtonText(Midimusic[i]);
                MyTextButtonlist[i]->setToggleState(1,dontSendNotification);
                BC34TO39->GetNO_BT()->setState(Button::buttonOver);
            }
			else if (pMainComponent->getMyComponent() == 10)
			{
				//BC34TO39->GetNO_BT()->setchooseflag(i);
				ConstMidiLayerMessage[pFaderTouchCompactComponent->MidiLayerNum] = (unsigned char)i;
				pFaderTouchCompactComponent->GetNO_BT()->setButtonText(Midimusic[i]);
				MyTextButtonlist[i]->setToggleState(1, dontSendNotification);
				pFaderTouchCompactComponent->GetNO_BT()->setState(Button::buttonOver);
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

<JUCER_COMPONENT documentType="Component" className="MusicNoteBtComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="89" initialHeight="3000">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="new button" id="c9d64b07dae09784" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 8 80 8" buttonText="new button"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
