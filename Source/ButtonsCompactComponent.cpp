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
//[/Headers]

#include "ButtonsCompactComponent.h"
#include "ButtonsCompact1To8Component.h"
#include "ButtonsCompact9To16Component.h"
#include "ButtonsCompact17To24Component.h"
#include "ButtonsCompact25To33Component.h"
#include "ButtonsCompact34To39Component.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
ButtonsCompactComponent * pButtonsCompactComponent =nullptr;
extern ButtonsCompact1To8Component *BC1TO8;
extern ButtonsCompact9To16Component *BC9TO16;
extern ButtonsCompact17To24Component *BC17TO24;
extern ButtonsCompact25To33Component *BC25TO33;
extern ButtonsCompact34To39Component *BC34TO39;
/*
    tabbedComponent->addTab ("BT 1-8", Colour (0xffffab00), BC1TO8 = new ButtonsCompact1To8Component(), true);
    tabbedComponent->addTab ("BT 9-16", Colour (0xffffab00), BC9TO16 = new ButtonsCompact9To16Component(), true);
    tabbedComponent->addTab ("BT 17-24", Colour (0xffffab00),BC17TO24 =  new ButtonsCompact17To24Component(), true);
    tabbedComponent->addTab ("BT 25-33", Colour (0xffffab00),BC25TO33 =  new ButtonsCompact25To33Component(), true);
    tabbedComponent->addTab ("BT 34-39", Colour (0xffffab00), BC34TO39 = new ButtonsCompact34To39Component(), true);*/
//[/MiscUserDefs]

//==============================================================================
ButtonsCompactComponent::ButtonsCompactComponent ()
{
    addAndMakeVisible (tabbedComponent = new TabbedComponent (TabbedButtonBar::TabsAtBottom));
    tabbedComponent->setTabBarDepth (35);
    tabbedComponent->addTab("BT 1-8", Colour(0xffffab00), BC1TO8 = new ButtonsCompact1To8Component(), true);
    tabbedComponent->addTab("BT 9-16", Colour(0xffffab00), BC9TO16 = new ButtonsCompact9To16Component(), true);
    tabbedComponent->addTab("BT 17-24", Colour(0xffffab00), BC17TO24 = new ButtonsCompact17To24Component(), true);
    tabbedComponent->addTab("BT 25-33", Colour(0xffffab00), BC25TO33 = new ButtonsCompact25To33Component(), true);
    tabbedComponent->addTab("BT 34-39", Colour(0xffffab00), BC34TO39 = new ButtonsCompact34To39Component(), true);
    tabbedComponent->setCurrentTabIndex (1);

    addAndMakeVisible (label = new Label ("new label",
                                          String::empty));
    label->setFont (Font (15.00f, Font::plain));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (Label::backgroundColourId, Colour (0xffffab00));
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    tabbedComponent->setCurrentTabIndex (0);
    //[/UserPreSize]

    setSize (664, 535);


    //[Constructor] You can add your own custom stuff here..
    setSize(664, 535);
    //[/Constructor]
}

ButtonsCompactComponent::~ButtonsCompactComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    tabbedComponent = nullptr;
    label = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void ButtonsCompactComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void ButtonsCompactComponent::resized()
{
    tabbedComponent->setBounds (0, 0, 664, 535);
    label->setBounds (-2, 500, 666, 2);
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

<JUCER_COMPONENT documentType="Component" className="ButtonsCompactComponent"
                 componentName="" parentClasses="public Component" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="1" initialWidth="664" initialHeight="535">
  <BACKGROUND backgroundColour="ff000000"/>
  <TABBEDCOMPONENT name="new tabbed component" id="90345dc542bc3f35" memberName="tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="0 0 664 535" orientation="bottom"
                   tabBarDepth="35" initialTab="1">
    <TAB name="BT 1-8" colour="ffffab00" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="ButtonsCompact1To8Component.cpp"/>
    <TAB name="BT 9-16" colour="ffffab00" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="ButtonsCompact9To16Component.cpp"/>
    <TAB name="BT 17-24" colour="ffffab00" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="ButtonsCompact17To24Component.cpp"/>
    <TAB name="BT 25-33" colour="ffffab00" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="ButtonsCompact25To33Component.cpp"/>
    <TAB name="BT 34-39" colour="ffffab00" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="ButtonsCompact34To39Component.cpp"/>
  </TABBEDCOMPONENT>
  <LABEL name="new label" id="d5e6cb99d4d23726" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="-2 500 666 2" bkgCol="ffffab00" edTextCol="ff000000"
         edBkgCol="0" labelText="" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
