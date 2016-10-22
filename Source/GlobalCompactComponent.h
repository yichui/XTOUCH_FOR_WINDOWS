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

#ifndef __JUCE_HEADER_8CAF3299D2B93ABE__
#define __JUCE_HEADER_8CAF3299D2B93ABE__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "CustomTextButton.h"
#define UNICODE 1
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class GlobalCompactComponent  : public Component,
                                public ButtonListener, public CustomTextButtonListener
{
public:
    //==============================================================================
    GlobalCompactComponent ();
    ~GlobalCompactComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    ScopedPointer<ProgressBar> ProgressBarPtr;
    void SendDumpMessage();

    void SetRXMIDIControlVersion();
    void SetNotConnentButtonUnenbale();
    void SetWhenCompactConnectTheChange();
    void SetWhenMiniConnectTheChange();
    void SetMCModeChange();
    void SetStandartModeChange();
    int GetBT_CH2Num();
    int ConventNO_BTtoInt(String JK);
	void ToLoadFile();

    ScopedPointer<Label> label_ID;

    void GetLayerAorB_FromLowLevel();
    void SetGlobalInitBt(unsigned char name1,unsigned char name2, bool L1,bool L2);
    Button *  GetCHBt();
	Label * GetlabelID();

    Button * GlobalBt;
    Button *CHBt;
    int num;

	void CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged);
    void CustomTextbuttonClicked (CustomTextButton* buttonThatWasClicked);

	Button * ReturnButtonMutil();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* rxmini_png;
    static const int rxmini_pngSize;


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
    ScopedPointer<CustomTextButton> Bt_ID16;
    ScopedPointer<Label> label_HARDWARE;
    ScopedPointer<TextButton> Bt_ID2;
    ScopedPointer<Label> label_GLOBALCH;
    ScopedPointer<CustomTextButton> Bt_CH2;
    ScopedPointer<Label> label_GLOBALCH2;
    ScopedPointer<TextButton> Bt_ADD;
    ScopedPointer<TextButton> Bt_DEV;
    ScopedPointer<Label> label3;
    ScopedPointer<TextButton> Bt_LOAD;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> label10;
    ScopedPointer<Label> label7;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;
    ScopedPointer<Label> label11;
    ScopedPointer<Label> label12;
    ScopedPointer<Label> label13;
    ScopedPointer<Label> label14;
    ScopedPointer<Label> label15;
    ScopedPointer<Label> label16;
    ScopedPointer<Label> label17;
    ScopedPointer<Label> label18;
    ScopedPointer<Label> label19;
    ScopedPointer<Label> label20;
    ScopedPointer<Label> label21;
    ScopedPointer<Label> label22;
    ScopedPointer<Label> label23;
    ScopedPointer<Label> label221;
    ScopedPointer<Label> label220;
    ScopedPointer<Label> label222;
    ScopedPointer<Label> label223;
    ScopedPointer<TextButton> Bt_ADD2;
    ScopedPointer<TextButton> Bt_DEV2;
    ScopedPointer<Label> label_tip;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (GlobalCompactComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_8CAF3299D2B93ABE__
