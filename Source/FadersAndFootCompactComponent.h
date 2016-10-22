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

#ifndef __JUCE_HEADER_DBD98F1743E4D68C__
#define __JUCE_HEADER_DBD98F1743E4D68C__

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
class FadersAndFootCompactComponent  : public Component,
    public ButtonListener, public CustomImageButtonListener, public CustomTextButtonListener
{
public:
    //==============================================================================
    FadersAndFootCompactComponent ();
    ~FadersAndFootCompactComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    CallOutBox & MyCallOutBox(Component *p,Button* buttonThatWasClicked);
    /*void mouseDown (const MouseEvent& e)
    {
         IB_FD_MAX2->setToggleState(0,dontSendNotification);
         IB_FD_MAX3->setToggleState(0,dontSendNotification);
        /* beginDragAutoRepeat (300);
         isButtonDown = pViewPortComponent->isEnabled() &&( e.mods.isAnyMouseButtonDown());
         if (isButtonDown && (e.eventComponent == this  ))
        {
        pViewPortComponent->setVisible(false);

        /*}
         windows.clear();
    }*/
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

    void UpdateFaderCompactBt(int s);

    int GetNum();
    int ConventNO_BTtoInt(String JK);

    int MidiLayerNum;

    void MakeButtonPointToBtGroup();
	void GetCustomBtID();
	void SetAllButtonState(bool s);
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
    int num;

    ScopedPointer<CustomTextButton>pfader1;
    ScopedPointer<CustomTextButton>pfader2;
    ScopedPointer<CustomTextButton>pfader3;
    ScopedPointer<CustomTextButton>pfader4;

    ScopedPointer<CustomTextButton>pfader5;
    ScopedPointer<CustomTextButton>pfader6;
    ScopedPointer<CustomTextButton>pfader7;
    ScopedPointer<CustomTextButton>pfader8;

    ScopedPointer<CustomTextButton>pfader9;
    ScopedPointer<CustomTextButton>pfader10;
    ScopedPointer<CustomTextButton>pfader11;

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

    ScopedPointer<CustomImageButton>pCustomImageButton17;
    ScopedPointer<CustomImageButton>pCustomImageButton18;
    ScopedPointer<CustomImageButton>pCustomImageButton19;

    ScopedPointer<CustomImageButton>pCustomImageButton20;
    ScopedPointer<CustomImageButton>pCustomImageButton21;
    ScopedPointer<CustomImageButton>pCustomImageButton22;

    ScopedPointer<CustomImageButton>MSB[11];
    ScopedPointer<CustomImageButton>LSB[11];
    /*PopupMenu getDummyPopupMenu()
    {
        PopupMenu m;
        m.addItem(1,"Toggle");
        m.addItem(2,"Momentary");

        return m;
    }*/
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
    ScopedPointer<Label> label_MOVE2;
    ScopedPointer<Label> label_CHANNEL2;
    ScopedPointer<Label> label_TYPE2;
    ScopedPointer<Label> label_NO2;
    ScopedPointer<Label> label_MIN2;
    ScopedPointer<Label> label_MAX2;
    ScopedPointer<Label> label_FD9;
    ScopedPointer<Label> label_MOVE3;
    ScopedPointer<Label> label_CHANNEL3;
    ScopedPointer<Label> label_TYPE3;
    ScopedPointer<Label> label_NO3;
    ScopedPointer<Label> label_MIN3;
    ScopedPointer<Label> label_MAX3;
    ScopedPointer<Label> label_EXP;
    ScopedPointer<Label> label_MOVE4;
    ScopedPointer<Label> label_CHANNEL4;
    ScopedPointer<Label> label_TYPE4;
    ScopedPointer<Label> label_NO4;
    ScopedPointer<Label> label_MIN4;
    ScopedPointer<Label> label_MAX4;
    ScopedPointer<Label> label_EXP2;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> label7;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;
    ScopedPointer<Label> label10;
    ScopedPointer<Label> label11;
    ScopedPointer<Label> label12;
    ScopedPointer<Label> label13;
    ScopedPointer<Label> label14;
    ScopedPointer<Label> label15;
    ScopedPointer<Label> label16;
    ScopedPointer<Label> label17;
    ScopedPointer<Label> label18;
    ScopedPointer<Label> label19;
    ScopedPointer<TextButton> FDCP_TY_FD1;
    ScopedPointer<TextButton> FDCP_TY_FD2;
    ScopedPointer<TextButton> FDCP_TY_FD3;
    ScopedPointer<TextButton> FDCP_TY_FD4;
    ScopedPointer<TextButton> FDCP_TY_FD5;
    ScopedPointer<TextButton> FDCP_TY_FD6;
    ScopedPointer<TextButton> FDCP_TY_FD7;
    ScopedPointer<TextButton> FDCP_TY_FD8;
    ScopedPointer<TextButton> FDCP_TY_FD9;
    ScopedPointer<TextButton> FDCP_TY_EXP;
    ScopedPointer<TextButton> FDCP_TY_FOOT;
    ScopedPointer<TextButton> FDCP_BEH_FOOT;
    ScopedPointer<TextButton> FADE_NO1;
    ScopedPointer<TextButton> FADE_NO2;
    ScopedPointer<TextButton> FADE_NO3;
    ScopedPointer<TextButton> FADE_NO4;
    ScopedPointer<TextButton> FADE_NO5;
    ScopedPointer<TextButton> FADE_NO6;
    ScopedPointer<TextButton> FADE_NO7;
    ScopedPointer<TextButton> FADE_NO8;
    ScopedPointer<TextButton> FADE_NO9;
    ScopedPointer<TextButton> FADE_NO10;
    ScopedPointer<TextButton> FADE_NO11;
    ScopedPointer<Label> LSB2;
    ScopedPointer<Label> MSB2;
    ScopedPointer<Label> LNMSB2;
    ScopedPointer<Label> LNLSB2;
    ScopedPointer<Label> label21;
    ScopedPointer<Label> LSB1;
    ScopedPointer<Label> MSB1;
    ScopedPointer<Label> LNMSB1;
    ScopedPointer<Label> LNLSB1;
    ScopedPointer<Label> label20;
    ScopedPointer<Label> LSB3;
    ScopedPointer<Label> MSB3;
    ScopedPointer<Label> LNMSB3;
    ScopedPointer<Label> LNLSB3;
    ScopedPointer<Label> label22;
    ScopedPointer<Label> LSB4;
    ScopedPointer<Label> MSB4;
    ScopedPointer<Label> LNMSB4;
    ScopedPointer<Label> LNLSB4;
    ScopedPointer<Label> label23;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (FadersAndFootCompactComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_DBD98F1743E4D68C__
