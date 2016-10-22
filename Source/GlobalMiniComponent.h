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

#ifndef __JUCE_HEADER_F7E8A8422A79C78E__
#define __JUCE_HEADER_F7E8A8422A79C78E__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GlobalMiniComponent  : public Component,
                             public ButtonListener
{
public:
    //==============================================================================
    GlobalMiniComponent ();
    ~GlobalMiniComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label_poc;
    ScopedPointer<Label> label_fh;
    ScopedPointer<Label> label_th;
    ScopedPointer<Label> label_firm;
    ScopedPointer<TextButton> Bt_SAVE;
    ScopedPointer<TextButton> Bt_GetA;
    ScopedPointer<TextButton> Bt_GetB;
    ScopedPointer<TextButton> Bt_DUMPA;
    ScopedPointer<TextButton> Bt_DUMPB;
    ScopedPointer<TextButton> Bt_UPDATE;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label_MODE;
    ScopedPointer<TextButton> Bt_Standart;
    ScopedPointer<TextButton> Bt_MC;
    ScopedPointer<Label> label_DEVID;
    ScopedPointer<TextButton> Bt_ID16;
    ScopedPointer<Label> label_HARDWARE;
    ScopedPointer<TextButton> Bt_ID2;
    ScopedPointer<Label> label_GLOBALCH;
    ScopedPointer<TextButton> Bt_CH2;
    ScopedPointer<Label> label3;
    ScopedPointer<TextButton> Bt_LOAD;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label10;
    ScopedPointer<Label> label7;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;
    ScopedPointer<Label> label11;
    ScopedPointer<Label> label12;
    ScopedPointer<Label> label14;
    ScopedPointer<Label> label16;
    ScopedPointer<Label> label17;
    ScopedPointer<Label> label18;
    ScopedPointer<Label> label19;
    ScopedPointer<Label> label20;
    ScopedPointer<Label> label21;
    ScopedPointer<Label> label23;
    ScopedPointer<Label> label_ID;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GlobalMiniComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F7E8A8422A79C78E__
