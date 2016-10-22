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

#ifndef __JUCE_HEADER_9B5AB6A7DBB5F6EC__
#define __JUCE_HEADER_9B5AB6A7DBB5F6EC__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "ViewPortComponent.h"
#include "LookAndFeel_V4.h"
#include "CustomImageButton.h"
#include "CustomTextButton.h"
extern ViewPortComponent * pViewPortComponent;
//,public CustomImageButtonListener,public CustomTextButtonListener
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class FaderMiniComponent  : public Component,
    public ButtonListener, public CustomImageButtonListener, public CustomTextButtonListener
{
public:
    //==============================================================================
    FaderMiniComponent ();
    ~FaderMiniComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    CallOutBox & MyCallOutBox(Component *p,Button* buttonThatWasClicked);
    void CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged);
    void CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked);

    void CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged);
    void CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked);

    void SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked);
    CustomImageButton* GetCurrentCustomBT();

    void SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked);
    CustomTextButton* GetCurrentCustomBT2();

    void SetNO_BT(Button* buttonThatWasClicked);
    Button* GetNO_BT();
     int GetNum();
    int ConventNO_BTtoInt(String JK);

	void MakeButtonPointToBtGroup();
    void UpdateMiniFaderBt();

    void GetCustomBtID();
	void SetAllButtonState(bool s);
    int MidiLayerNum;

    void SetNextBT(Button *s);
    Button *GetNextBT();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    LookAndFeel_V4 lookAndFeelV4;
    bool isButtonDown;
    CustomImageButton * CurrentCustomBT;
    CustomTextButton * CurrentCustomBT2;
    Button *NO_BT;
    Button *Next_BT;
    int  num;

    ScopedPointer<CustomTextButton>pfader1;
    ScopedPointer<CustomImageButton>pCustomImageButton1;
    ScopedPointer<CustomImageButton>pCustomImageButton2;
    ScopedPointer<CustomImageButton>MLSB[2];
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label_MOVE;
    ScopedPointer<Label> label_CHANNEL;
    ScopedPointer<Label> label_TYPE;
    ScopedPointer<Label> label_NO;
    ScopedPointer<Label> label_MIN;
    ScopedPointer<Label> label_MAX;
    ScopedPointer<Label> label_FD1;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<TextButton> FDCP_CH_FD1;
    ScopedPointer<TextButton> FDCP_TY_FD1;
    ScopedPointer<TextButton> FADE_NO1;
    ScopedPointer<Label> LSB1;
    ScopedPointer<Label> MSB1;
    ScopedPointer<Label> LNMSB1;
    ScopedPointer<Label> LNLSB1;
    ScopedPointer<Label> label20;
   
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FaderMiniComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_9B5AB6A7DBB5F6EC__
