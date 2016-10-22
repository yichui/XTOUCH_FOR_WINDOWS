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

#include "MusicNoteViewComponent.h"
#include "MusicNoteBTComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
MusicNoteViewComponent * pMusicNoteViewComponent =nullptr;
extern MusicNoteBtComponent * pMusicNoteBtComponent; 

extern FadersAndFootCompactComponent *pFadersAndFootCompactComponent ;
extern FaderMiniComponent *pFaderMiniComponent;
extern GlobalCompactComponent * pGlobalCompactComponent;
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
extern String  Midimusic[128];
//[/MiscUserDefs]

//==============================================================================
MusicNoteViewComponent::MusicNoteViewComponent ()
{
    addAndMakeVisible (viewport = new Viewport ("new viewport"));
    viewport->setScrollBarsShown (true, false);
    viewport->setScrollBarThickness (11);
    viewport->setViewedComponent (pMusicNoteBtComponent = new MusicNoteBtComponent());


    //[UserPreSize]
    int K;
    for(int i = 0; i<128;i++)
    {
        if(eXTOUCH_MODE_ID == COMPACT_MODE)
        {
            if(pMainComponent->getMyComponent() == 0){
                if(pFadersAndFootCompactComponent->GetNO_BT()->getButtonText() .compare(Midimusic[i]) == 0)
                    K = i;

            }

            else if(pMainComponent->getMyComponent() == 1){
                //MyTextButtonlist[pEncodersCompact1To8Component->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
                //MyTextButtonlist[pEncodersCompact1To8Component->GetNum()]->setToggleState(1,dontSendNotification);
                if(pEncodersCompact1To8Component->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }

            else if(pMainComponent->getMyComponent() == 2){
                //MyTextButtonlist[pEncodersCompact9To16Component->GetNO_BT()->getButtonText().getIntValue()]->setToggleState(1,dontSendNotification);
                if(pEncodersCompact9To16Component->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }
            else if(pMainComponent->getMyComponent() == 3){
                if(BC1TO8->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }
            else if(pMainComponent->getMyComponent() == 4){
                 if(BC9TO16->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }

            else if(pMainComponent->getMyComponent() == 5){
                 if(BC17TO24->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }
            else if(pMainComponent->getMyComponent() == 6){
                 if(BC25TO33->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }
            else if(pMainComponent->getMyComponent() == 7){
                 if(BC34TO39->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }
			else if (pMainComponent->getMyComponent() == 10){
				if (pFaderTouchCompactComponent->GetNO_BT()->getButtonText().compare(Midimusic[i]) == 0)
					K = i;
			}
        
        }
        else if(eXTOUCH_MODE_ID == MINI_MODE)
        {
            if(pMainComponent->getMyComponent() == 0){
                 if(pFaderMiniComponent->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }
            else if(pMainComponent->getMyComponent() == 1){         
                if(pEncodersMiniComponent->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
               
                    K = i; 
               
             }
        

            else if(pMainComponent->getMyComponent() == 2){
                if(BM1TO8->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }
            else if(pMainComponent->getMyComponent() == 3){
                if(BM9TO16->GetNO_BT()->getButtonText()  .compare(Midimusic[i]) == 0)
                    K = i;
            }
        }
        
    }
    //[/UserPreSize]

    setSize (97, 146);


    //[Constructor] You can add your own custom stuff here..
    viewport->setViewPosition(0,K*24-48);
    K = 0;
    //[/Constructor]
}

MusicNoteViewComponent::~MusicNoteViewComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    viewport = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MusicNoteViewComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MusicNoteViewComponent::resized()
{
    viewport->setBounds (0, 0, 96, 146);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MusicNoteViewComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="97" initialHeight="146">
  <BACKGROUND backgroundColour="ffffffff"/>
  <VIEWPORT name="new viewport" id="7545d64625499f55" memberName="viewport"
            virtualName="" explicitFocusOrder="0" pos="0 0 96 146" vscroll="1"
            hscroll="0" scrollbarThickness="11" contentType="1" jucerFile="MusicNoteBTComponent.cpp"
            contentClass="" constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
