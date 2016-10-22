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

#include "CC_Viewport_Component.h"
#include "CC_BT_Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
CC_BT_Component *pCC_BT_Component = nullptr;
CC_Viewport_Component *CC_VP = nullptr;
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

//[/MiscUserDefs]

//==============================================================================
CC_Viewport_Component::CC_Viewport_Component ()
{
    addAndMakeVisible (viewport = new Viewport ("new viewport"));
    viewport->setScrollBarsShown (true, false);
    viewport->setScrollBarThickness (11);
    viewport->setViewedComponent (pCC_BT_Component =  new CC_BT_Component());


    //[UserPreSize]
    //[/UserPreSize]

    setSize (97, 146);


    //[Constructor] You can add your own custom stuff here..
    setSize (87, 146);
       if(eXTOUCH_MODE_ID == COMPACT_MODE)
       {
        if(pMainComponent ->getMyComponent() ==0)
            viewport->setViewPosition(0,(pFadersAndFootCompactComponent->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==1)
            viewport->setViewPosition(0,(pEncodersCompact1To8Component->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==2)
            viewport->setViewPosition(0,(pEncodersCompact9To16Component->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==3)
            viewport->setViewPosition(0,(BC1TO8->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==4)
            viewport->setViewPosition(0,(BC9TO16->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==5)
            viewport->setViewPosition(0,(BC17TO24->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==6)
            viewport->setViewPosition(0,(BC25TO33->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==7)
            viewport->setViewPosition(0,(BC34TO39->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==8)
            viewport->setViewPosition(0,(pGlobalCompactComponent->num)*24-48);

        else if(pMainComponent ->getMyComponent() ==9)
            viewport->setViewPosition(0,(pGlobalCompactComponent->num)*24-48);

		else if (pMainComponent->getMyComponent() == 10)
			viewport->setViewPosition(0, (pFaderTouchCompactComponent->GetNum()) * 24 - 48);
    }
    else if(eXTOUCH_MODE_ID == MINI_MODE)
    {
         if(pMainComponent ->getMyComponent() ==0)         
            viewport->setViewPosition(0,(pFaderMiniComponent->GetNum())*24-48);
         
         else if(pMainComponent ->getMyComponent() ==1)
            viewport->setViewPosition(0,(pEncodersMiniComponent->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==2)
            viewport->setViewPosition(0,(BM1TO8->GetNum())*24-48);

        else if(pMainComponent ->getMyComponent() ==3)
            viewport->setViewPosition(0,(BM9TO16->GetNum())*24-48);

        
    }
    //[/Constructor]
}

CC_Viewport_Component::~CC_Viewport_Component()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    viewport = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void CC_Viewport_Component::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void CC_Viewport_Component::resized()
{
    viewport->setBounds (0, 0, 97, 146);
    //[UserResized] Add your own custom resize handling here..
    viewport->setBounds (0, 0,87, 146);
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

<JUCER_COMPONENT documentType="Component" className="CC_Viewport_Component" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="97" initialHeight="146">
  <BACKGROUND backgroundColour="ffffffff"/>
  <VIEWPORT name="new viewport" id="50734615d84eb660" memberName="viewport"
            virtualName="" explicitFocusOrder="0" pos="0 0 97 146" vscroll="1"
            hscroll="0" scrollbarThickness="11" contentType="1" jucerFile="CC_BT_Component.cpp"
            contentClass="" constructorParams=""/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
