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

#ifndef __JUCE_HEADER_9002020A4DD09B20__
#define __JUCE_HEADER_9002020A4DD09B20__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "MainComponentMessageListener.h"
#include "MainComponentMessage.h"
#include "XtouchDevMidiData.h"

#define Xtouch_editor_vertion1  1
#define Xtouch_editor_vertion2  2
#define Xtouch_editor_vertion3  1
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public ButtonListener,
                       public LabelListener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void ChangeEditedButtonIm();
    void ChangeEditedButtonImClose();
    void SetBackgroundThreadOpenFlag(bool bFlag);
    bool GetBackgroundThreadOpenFlag(void);
    void SetBackgroundThreadOpenFlag2(bool bFlag);
    bool GetBackgroundThreadOpenFlag2(void);
    void SetBackgroundThreadOpenFlag3(bool bFlag);
    bool GetBackgroundThreadOpenFlag3(void);

    MainComponentMessage * pMainComponentMessage;
    MainComponentMessageListener myMainComponentMessageListener;
    bool bBackgroundThreadOpenFlag;
    bool bBackgroundThreadOpenFlag2;
    bool bBackgroundThreadOpenFlag3;
    int FaderorOtherFlag;
    int GlobalorOFF;


    void setMyComponent(int s);
    int  getMyComponent();

    void UpdateTabbedComponent(XTOUCH_MODE_ID r);
    void removeTabbedComponent();
    void SetFirwareVersion(const String & name1,const String & name2,float num);
	void SetFirwareVersion2(const String & name);
    void SetBt_NIText(const String & name);
    String GetBt_NIText();
	void CompactGetCustomBtID();
	void SetAllButtonState(bool s);
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void labelTextChanged (Label* labelThatHasChanged);

    // Binary resources:
    static const char* bbbbb_png2;
    static const int bbbbb_png2Size;
    static const char* ber_png;
    static const int ber_pngSize;
    static const char* icon_png;
    static const int icon_pngSize;
    static const char* edited_png;
    static const int edited_pngSize;
    static const char* edited2_png;
    static const int edited2_pngSize;
    static const char* edited_png2;
    static const int edited_png2Size;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    int content;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TabbedComponent> tabbedComponent;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label5;
    ScopedPointer<Label> label6;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label7;
    ScopedPointer<Label> label8;
    ScopedPointer<Label> label9;
    ScopedPointer<Label> label10;
    ScopedPointer<ImageButton> EDITED;
    ScopedPointer<Label> labeles;
    ScopedPointer<Label> labeles1;
    ScopedPointer<Label> BT_NI;
    Image cachedImage_bbbbb_png2;
    Image cachedImage_ber_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_9002020A4DD09B20__
