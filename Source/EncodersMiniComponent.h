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

#ifndef __JUCE_HEADER_F9FC9D2225FEFCA__
#define __JUCE_HEADER_F9FC9D2225FEFCA__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "LookAndFeel_V4.h"
#include "CustomImageButton.h"
#include "CustomTextButton.h"
/*public CustomImageButtonListener,public CustomTextButtonListener*/
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class EncodersMiniComponent  : public Component,
    public ButtonListener, public CustomImageButtonListener, public CustomTextButtonListener
{
public:
    //==============================================================================
    EncodersMiniComponent ();
    ~EncodersMiniComponent();

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
    CallOutBox *pbox;


    void setCustomBTtoggle(bool s);

    void SetNO_BT(Button* buttonThatWasClicked);
    Button* GetNO_BT();

    void SetNextBT(Button *s);
    Button *GetNextBT();
    int GetNum();
    int ConventNO_BTtoInt(String JK);

    void MakeButtonPointToBtGroup();

    CustomImageButton * GetCustomBT(CustomImageButton *s);
    void UpdateEncodeMini(int s);
    void GetCustomBtID();
	void SetAllButtonState(bool s);
    int MidiLayerNum;
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    CustomImageButton * CurrentCustomBT;
    CustomTextButton * CurrentCustomBT2;
    Button *NO_BT;
    Button *Next_BT;
    int num;
    bool isButtonDown;
    LookAndFeel_V4 lookAndFeelV4;

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
    ScopedPointer<CustomTextButton>pfader12;

    ScopedPointer<CustomTextButton>pfader13;
    ScopedPointer<CustomTextButton>pfader14;
    ScopedPointer<CustomTextButton>pfader15;
    ScopedPointer<CustomTextButton>pfader16;

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
    ScopedPointer<CustomImageButton>pCustomImageButton23;
    ScopedPointer<CustomImageButton>pCustomImageButton24;

    ScopedPointer<CustomImageButton>pCustomImageButton25;
    ScopedPointer<CustomImageButton>pCustomImageButton26;
    ScopedPointer<CustomImageButton>pCustomImageButton27;
    ScopedPointer<CustomImageButton>pCustomImageButton28;
    ScopedPointer<CustomImageButton>pCustomImageButton29;
    ScopedPointer<CustomImageButton>pCustomImageButton30;
    ScopedPointer<CustomImageButton>pCustomImageButton31;
    ScopedPointer<CustomImageButton>pCustomImageButton32;

    ScopedPointer<CustomImageButton>MSB[16];
    ScopedPointer<CustomImageButton>LSB[16];
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label;
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
    ScopedPointer<Label> label_MOVE2;
    ScopedPointer<Label> label_CHANNEL2;
    ScopedPointer<Label> label_TYPE2;
    ScopedPointer<Label> label_NO2;
    ScopedPointer<Label> label_MIN2;
    ScopedPointer<Label> label_MAX2;
    ScopedPointer<Label> label_FD9;
    ScopedPointer<Label> label_FD10;
    ScopedPointer<Label> label_FD11;
    ScopedPointer<Label> label_FD12;
    ScopedPointer<Label> label_FD13;
    ScopedPointer<Label> label_FD14;
    ScopedPointer<Label> label_FD15;
    ScopedPointer<Label> label_FD16;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label7;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;
    ScopedPointer<Label> label_MAX3;
    ScopedPointer<Label> label11;
    ScopedPointer<Label> label_MAX4;
    ScopedPointer<Label> label13;
    ScopedPointer<TextButton> ENCO_CH_EN3;
    ScopedPointer<TextButton> ENCO_CH_EN4;
    ScopedPointer<TextButton> ENCO_CH_EN7;
    ScopedPointer<TextButton> ENCO_CH_EN6;
    ScopedPointer<TextButton> ENCO_CH_EN8;
    ScopedPointer<TextButton> ENCO_CH_EN5;
    ScopedPointer<TextButton> ECO_TY_EN3;
    ScopedPointer<TextButton> ECO_TY_EN4;
    ScopedPointer<TextButton> ECO_TY_EN5;
    ScopedPointer<TextButton> ECO_TY_EN6;
    ScopedPointer<TextButton> ECO_TY_EN7;
    ScopedPointer<TextButton> ECO_TY_EN8;
    ScopedPointer<TextButton> ENCO_CH_EN2;
    ScopedPointer<TextButton> ENCO_CH_EN1;
    ScopedPointer<TextButton> ECO_TY_EN2;
    ScopedPointer<TextButton> ECO_TY_EN1;
    ScopedPointer<TextButton> ECO_BEH_EN1;
    ScopedPointer<TextButton> ECO_BEH_EN2;
    ScopedPointer<TextButton> ECO_BEH_EN3;
    ScopedPointer<TextButton> ECO_BEH_EN4;
    ScopedPointer<TextButton> ECO_BEH_EN5;
    ScopedPointer<TextButton> ECO_BEH_EN6;
    ScopedPointer<TextButton> ECO_BEH_EN7;
    ScopedPointer<TextButton> ECO_BEH_EN8;
    ScopedPointer<TextButton> ENCOT_CH_EN9;
    ScopedPointer<TextButton> ENCOT_CH_EN10;
    ScopedPointer<TextButton> ENCOT_CH_EN11;
    ScopedPointer<TextButton> ENCOT_CH_EN12;
    ScopedPointer<TextButton> ENCOT_CH_EN13;
    ScopedPointer<TextButton> ENCOT_CH_EN14;
    ScopedPointer<TextButton> ENCOT_CH_EN15;
    ScopedPointer<TextButton> ENCOT_CH_EN16;
    ScopedPointer<TextButton> ECOT_TY_EN9;
    ScopedPointer<TextButton> ECOT_TY_EN10;
    ScopedPointer<TextButton> ECOT_TY_EN11;
    ScopedPointer<TextButton> ECOT_TY_EN12;
    ScopedPointer<TextButton> ECOT_TY_EN13;
    ScopedPointer<TextButton> ECOT_TY_EN14;
    ScopedPointer<TextButton> ECOT_TY_EN15;
    ScopedPointer<TextButton> ECOT_TY_EN16;
    ScopedPointer<TextButton> ECO_LR_EN10;
    ScopedPointer<TextButton> ECO_LR_EN11;
    ScopedPointer<TextButton> ECO_LR_EN12;
    ScopedPointer<TextButton> ECO_LR_EN13;
    ScopedPointer<TextButton> ECO_LR_EN14;
    ScopedPointer<TextButton> ECO_LR_EN15;
    ScopedPointer<TextButton> ECO_LR_EN16;
    ScopedPointer<TextButton> ECO_LR_EN17;
    ScopedPointer<TextButton> ECOP_NO_EN1;
    ScopedPointer<TextButton> ECOP_NO_EN2;
    ScopedPointer<TextButton> ECOP_NO_EN3;
    ScopedPointer<TextButton> ECOP_NO_EN4;
    ScopedPointer<TextButton> ECOP_NO_EN5;
    ScopedPointer<TextButton> ECOP_NO_EN6;
    ScopedPointer<TextButton> ECOP_NO_EN7;
    ScopedPointer<TextButton> ECOP_NO_EN8;
    ScopedPointer<TextButton> ECOT_NO_EN1;
    ScopedPointer<TextButton> ECOT_NO_EN2;
    ScopedPointer<TextButton> ECOT_NO_EN3;
    ScopedPointer<TextButton> ECOT_NO_EN4;
    ScopedPointer<TextButton> ECOT_NO_EN5;
    ScopedPointer<TextButton> ECOT_NO_EN6;
    ScopedPointer<TextButton> ECOT_NO_EN7;
    ScopedPointer<TextButton> ECOT_NO_EN8;
    ScopedPointer<Label> LSB1;
    ScopedPointer<Label> MSB1;
    ScopedPointer<Label> LNMSB1;
    ScopedPointer<Label> LNLSB1;
    ScopedPointer<Label> label12;
    ScopedPointer<Label> LSB2;
    ScopedPointer<Label> MSB2;
    ScopedPointer<Label> LNMSB2;
    ScopedPointer<Label> LNLSB2;
    ScopedPointer<Label> label10;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (EncodersMiniComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F9FC9D2225FEFCA__
