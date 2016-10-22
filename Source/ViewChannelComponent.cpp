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
#include "SixthChannelComponent.h"
#include "GlobalCompactComponent.h"
//[/Headers]

#include "ViewChannelComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
ViewChannelComponent * pViewChannelComponent =nullptr;
extern FadersAndFootCompactComponent *pFadersAndFootCompactComponent ;
extern GlobalCompactComponent * pGlobalCompactComponent;
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
SixthChannelComponent * pSixthChannelComponent =nullptr;
//[/MiscUserDefs]

//==============================================================================
ViewChannelComponent::ViewChannelComponent ()
{
    addAndMakeVisible (viewport = new Viewport ("new viewport"));
    viewport->setScrollBarsShown (true, false);
    viewport->setScrollBarThickness (11);


    //[UserPreSize]
    viewport->setViewedComponent (pSixthChannelComponent = new SixthChannelComponent());
    setRepaintsOnMouseActivity (true);
    //[/UserPreSize]

    setSize (76, 146);


    //[Constructor] You can add your own custom stuff here..
    if (pMainComponent->GlobalorOFF)
    {
        setSize(85, 146);
    }
    if(eXTOUCH_MODE_ID == COMPACT_MODE)
    {
        if(pMainComponent ->getMyComponent() ==0)
            viewport->setViewPosition(0,(pFadersAndFootCompactComponent->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==1)
            viewport->setViewPosition(0,(pEncodersCompact1To8Component->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==2)
            viewport->setViewPosition(0,(pEncodersCompact9To16Component->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==3)
            viewport->setViewPosition(0,(BC1TO8->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==4)
            viewport->setViewPosition(0,(BC9TO16->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==5)
            viewport->setViewPosition(0,(BC17TO24->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==6)
            viewport->setViewPosition(0,(BC25TO33->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==7)
            viewport->setViewPosition(0,(BC34TO39->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==8)
            viewport->setViewPosition(0,(pGlobalCompactComponent->num-1)*24-48);

        else if(pMainComponent ->getMyComponent() ==9)
            viewport->setViewPosition(0,(pGlobalCompactComponent->num-1)*24-48);

		else if (pMainComponent->getMyComponent() == 10)
			viewport->setViewPosition(0, (pFaderTouchCompactComponent->GetCurrentCustomBT2()->getButtonText().getIntValue() ) * 24 - 48);
    }
    else if(eXTOUCH_MODE_ID == MINI_MODE)
    {
         if(pMainComponent ->getMyComponent() ==0)         
            viewport->setViewPosition(0,(pFaderMiniComponent->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);
         
         else if(pMainComponent ->getMyComponent() ==1)
            viewport->setViewPosition(0,(pEncodersMiniComponent->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==2)
            viewport->setViewPosition(0,(BM1TO8->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==3)
            viewport->setViewPosition(0,(BM9TO16->GetCurrentCustomBT2()->getButtonText().getIntValue())*24-48);

        else if(pMainComponent ->getMyComponent() ==8)
            viewport->setViewPosition(0,(pGlobalCompactComponent->num-1)*24-48);

        else if(pMainComponent ->getMyComponent() ==9)
            viewport->setViewPosition(0,(pGlobalCompactComponent->num-1)*24-48);
    }
    //[/Constructor]
}

ViewChannelComponent::~ViewChannelComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    viewport = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ViewChannelComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ViewChannelComponent::resized()
{
    viewport->setBounds (0, 0, 76, 146);
    //[UserResized] Add your own custom resize handling here..
    if (pMainComponent->GlobalorOFF)
        viewport->setBounds(0, 0, 85, 146);
     //viewport->setBounds (0, 0, 76, 146);
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

<JUCER_COMPONENT documentType="Component" className="ViewChannelComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="76" initialHeight="146">
  <BACKGROUND backgroundColour="ffffffff"/>
  <VIEWPORT name="new viewport" id="b37acbef1122876a" memberName="viewport"
            virtualName="" explicitFocusOrder="0" pos="0 0 76 146" vscroll="1"
            hscroll="0" scrollbarThickness="11" contentType="0" jucerFile=""
            contentClass="" constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
