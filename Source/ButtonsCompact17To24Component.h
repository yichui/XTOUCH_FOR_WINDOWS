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

#ifndef __JUCE_HEADER_F18D8B30BC5CA5B4__
#define __JUCE_HEADER_F18D8B30BC5CA5B4__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "LookAndFeel_V4.h"
#include "CustomImageButton.h"
#include "CustomTextButton.h"
//*public CustomImageButtonListener,public CustomTextButtonListener*/
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class ButtonsCompact17To24Component  : public Component,
    public ButtonListener, public CustomImageButtonListener, public CustomTextButtonListener
{
public:
    //==============================================================================
    ButtonsCompact17To24Component ();
    ~ButtonsCompact17To24Component();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void CustomImageButtonTextChanged (CustomImageButton* CustomImageButtonThatHasChanged);
    void CustomImagebuttonClicked (CustomImageButton* buttonThatWasClicked);

    void CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged);
    void CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked);

    void SetCurrentCustomBT(CustomImageButton *currentbuttonThatWasClicked);
    CustomImageButton* GetCurrentCustomBT();

    void SetCurrentCustomBT2(CustomTextButton *currentbuttonThatWasClicked);
    CustomTextButton* GetCurrentCustomBT2();

    void MyCallOutBox(Component *p,Button* buttonThatWasClicked);
    //CallOutBox *pbox;


    void setCustomBTtoggle(bool s);

    void SetNO_BT(Button* buttonThatWasClicked);
    Button* GetNO_BT();
    int ConventNO_BTtoInt(String JK);
    int GetNum();
    void MakeButtonPointToBtGroup();
    void UpdateBt17TO24(int s);

	void GetCustomBtID();
	void SetAllButtonState(bool s);

    int MidiLayerNum ;
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    LookAndFeel_V4 lookAndFeelV4;
    CustomImageButton * CurrentCustomBT;
    CustomTextButton * CurrentCustomBT2;

    Button *NO_BT;
    int num;

    ScopedPointer<CustomTextButton>pfader1;
    ScopedPointer<CustomTextButton>pfader2;
    ScopedPointer<CustomTextButton>pfader3;
    ScopedPointer<CustomTextButton>pfader4;

    ScopedPointer<CustomTextButton>pfader5;
    ScopedPointer<CustomTextButton>pfader6;
    ScopedPointer<CustomTextButton>pfader7;
    ScopedPointer<CustomTextButton>pfader8;
    ScopedPointer<CustomImageButton>pCustomImageButton1;
    ScopedPointer<CustomImageButton>pCustomImageButton2;
    ScopedPointer<CustomImageButton>pCustomImageButton3;
    ScopedPointer<CustomImageButton>pCustomImageButton4;
    ScopedPointer<CustomImageButton>pCustomImageButton5;
    ScopedPointer<CustomImageButton>pCustomImageButton6;
    ScopedPointer<CustomImageButton>pCustomImageButton7;
    ScopedPointer<CustomImageButton>pCustomImageButton8;

    ScopedPointer<CustomImageButton>pCustomImageButton9;
    ScopedPointer<CustomImageButton>pCustomImageButton10;
    ScopedPointer<CustomImageButton>pCustomImageButton11;
    ScopedPointer<CustomImageButton>pCustomImageButton12;
    ScopedPointer<CustomImageButton>pCustomImageButton13;
    ScopedPointer<CustomImageButton>pCustomImageButton14;
    ScopedPointer<CustomImageButton>pCustomImageButton15;
    ScopedPointer<CustomImageButton>pCustomImageButton16;

    ScopedPointer<CustomImageButton>MSB[8];
    ScopedPointer<CustomImageButton>LSB[8];
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label_MOVE;
    ScopedPointer<Label> label_CHANNEL;
    ScopedPointer<Label> label_TYPE;
    ScopedPointer<Label> label_NO;
    ScopedPointer<Label> label_MIN;
    ScopedPointer<Label> label_MAX;
    ScopedPointer<Label> label_FD1;
    ScopedPointer<Label> label_FD2;
    ScopedPointer<Label> label_FD3;
    ScopedPointer<Label> label_FD4;
    ScopedPointer<Label> label_FD5;
    ScopedPointer<Label> label_FD6;
    ScopedPointer<Label> label_FD7;
    ScopedPointer<Label> label_FD8;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> label_MAX3;
    ScopedPointer<Label> label11;
    ScopedPointer<TextButton> BTCP_BEH_BT17;
    ScopedPointer<TextButton> BTCP_BEH_BT18;
    ScopedPointer<TextButton> BTCP_BEH_BT19;
    ScopedPointer<TextButton> BTCP_BEH_BT20;
    ScopedPointer<TextButton> BTCP_BEH_BT21;
    ScopedPointer<TextButton> BTCP_BEH_BT22;
    ScopedPointer<TextButton> BTCP_BEH_BT23;
    ScopedPointer<TextButton> BTCP_BEH_BT24;
    ScopedPointer<TextButton> BTCO_CH_BT17;
    ScopedPointer<TextButton> ENCO_CH_BT18;
    ScopedPointer<TextButton> ENCO_CH_BT19;
    ScopedPointer<TextButton> ENCO_CH_BT20;
    ScopedPointer<TextButton> ENCO_CH_BT21;
    ScopedPointer<TextButton> ENCO_CH_BT22;
    ScopedPointer<TextButton> ENCO_CH_BT23;
    ScopedPointer<TextButton> ENCO_CH_BT24;
    ScopedPointer<TextButton> BTCP_TY_BT17;
    ScopedPointer<TextButton> BTCP_TY_BT18;
    ScopedPointer<TextButton> BTCP_TY_BT19;
    ScopedPointer<TextButton> BTCP_TY_BT20;
    ScopedPointer<TextButton> BTCP_TY_BT21;
    ScopedPointer<TextButton> BTCP_TY_BT22;
    ScopedPointer<TextButton> BTCP_TY_BT23;
    ScopedPointer<TextButton> BTCP_TY_BT24;
    ScopedPointer<TextButton> BTCP_NO_BT1;
    ScopedPointer<TextButton> BTCP_NO_BT2;
    ScopedPointer<TextButton> BTCP_NO_BT3;
    ScopedPointer<TextButton> BTCP_NO_BT4;
    ScopedPointer<TextButton> BTCP_NO_BT5;
    ScopedPointer<TextButton> BTCP_NO_BT6;
    ScopedPointer<TextButton> BTCP_NO_BT7;
    ScopedPointer<TextButton> BTCP_NO_BT8;
    ScopedPointer<Label> LSB1;
    ScopedPointer<Label> MSB1;
    ScopedPointer<Label> LNMSB1;
    ScopedPointer<Label> LNLSB1;
    ScopedPointer<Label> label12;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (ButtonsCompact17To24Component)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F18D8B30BC5CA5B4__
