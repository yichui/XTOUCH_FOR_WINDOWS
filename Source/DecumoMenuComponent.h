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

#ifndef __JUCE_HEADER_F3ABD9486408A8EE__
#define __JUCE_HEADER_F3ABD9486408A8EE__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
#include "LookAndFeel_V4.h"
#include "MyTextButton.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class DecumoMenuComponent  : public Component,
                             public ButtonListener
{
public:
    //==============================================================================
    DecumoMenuComponent ();
    ~DecumoMenuComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    void SetBTList();
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);

    // Binary resources:
    static const char* popu0_png;
    static const int popu0_pngSize;
    static const char* popu0a_png;
    static const int popu0a_pngSize;
    static const char* popu1_png;
    static const int popu1_pngSize;
    static const char* popu1a_png;
    static const int popu1a_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
     LookAndFeel_V4 lookAndFeelV4;

     //Array<ScopedPointer<MyTextButton>> MyTextButtonlist;
     ScopedPointer<MyTextButton>MyTextButtondec;
     ScopedPointer<MyTextButton>MyTextButtoninc;
     ScopedPointer<MyTextButton> MyTextButtonlist[128];
	 ScopedPointer<MyTextButton>RelativeBt;
	 ScopedPointer<MyTextButton>RelativeBt2;
	 ScopedPointer<MyTextButton>RelativeBt3;

     /*ScopedPointer<MyTextButton>MyTextButton0;
     ScopedPointer<MyTextButton>MyTextButton1;
     ScopedPointer<MyTextButton>MyTextButton2;
     ScopedPointer<MyTextButton>MyTextButton3;
     ScopedPointer<MyTextButton>MyTextButton4;
     ScopedPointer<MyTextButton>MyTextButton5;
     ScopedPointer<MyTextButton>MyTextButton6;
     ScopedPointer<MyTextButton>MyTextButton7;
     ScopedPointer<MyTextButton>MyTextButton8;
     ScopedPointer<MyTextButton>MyTextButton9;

     ScopedPointer<MyTextButton>MyTextButton10;
     ScopedPointer<MyTextButton>MyTextButton11;
     ScopedPointer<MyTextButton>MyTextButton12;
     ScopedPointer<MyTextButton>MyTextButton13;
     ScopedPointer<MyTextButton>MyTextButton14;
     ScopedPointer<MyTextButton>MyTextButton15;
     ScopedPointer<MyTextButton>MyTextButton16;
     ScopedPointer<MyTextButton>MyTextButton17;
     ScopedPointer<MyTextButton>MyTextButton18;
     ScopedPointer<MyTextButton>MyTextButton19;

     ScopedPointer<MyTextButton>MyTextButton20;
     ScopedPointer<MyTextButton>MyTextButton21;
     ScopedPointer<MyTextButton>MyTextButton22;
     ScopedPointer<MyTextButton>MyTextButton23;
     ScopedPointer<MyTextButton>MyTextButton24;
     ScopedPointer<MyTextButton>MyTextButton25;
     ScopedPointer<MyTextButton>MyTextButton26;
     ScopedPointer<MyTextButton>MyTextButton27;
     ScopedPointer<MyTextButton>MyTextButton28;
     ScopedPointer<MyTextButton>MyTextButton29;

     ScopedPointer<MyTextButton>MyTextButton30;
     ScopedPointer<MyTextButton>MyTextButton31;
     ScopedPointer<MyTextButton>MyTextButton32;
     ScopedPointer<MyTextButton>MyTextButton33;
     ScopedPointer<MyTextButton>MyTextButton34;
     ScopedPointer<MyTextButton>MyTextButton35;
     ScopedPointer<MyTextButton>MyTextButton36;
     ScopedPointer<MyTextButton>MyTextButton37;
     ScopedPointer<MyTextButton>MyTextButton38;
     ScopedPointer<MyTextButton>MyTextButton39;

     ScopedPointer<MyTextButton>MyTextButton40;
     ScopedPointer<MyTextButton>MyTextButton41;
     ScopedPointer<MyTextButton>MyTextButton42;
     ScopedPointer<MyTextButton>MyTextButton43;
     ScopedPointer<MyTextButton>MyTextButton44;
     ScopedPointer<MyTextButton>MyTextButton45;
     ScopedPointer<MyTextButton>MyTextButton46;
     ScopedPointer<MyTextButton>MyTextButton47;
     ScopedPointer<MyTextButton>MyTextButton48;
     ScopedPointer<MyTextButton>MyTextButton49;

     ScopedPointer<MyTextButton>MyTextButton50;
     ScopedPointer<MyTextButton>MyTextButton51;
     ScopedPointer<MyTextButton>MyTextButton52;
     ScopedPointer<MyTextButton>MyTextButton53;
     ScopedPointer<MyTextButton>MyTextButton54;
     ScopedPointer<MyTextButton>MyTextButton55;
     ScopedPointer<MyTextButton>MyTextButton56;
     ScopedPointer<MyTextButton>MyTextButton57;
     ScopedPointer<MyTextButton>MyTextButton58;
     ScopedPointer<MyTextButton>MyTextButton59;

     ScopedPointer<MyTextButton>MyTextButton60;
     ScopedPointer<MyTextButton>MyTextButton61;
     ScopedPointer<MyTextButton>MyTextButton62;
     ScopedPointer<MyTextButton>MyTextButton63;
     ScopedPointer<MyTextButton>MyTextButton64;
     ScopedPointer<MyTextButton>MyTextButton65;
     ScopedPointer<MyTextButton>MyTextButton66;
     ScopedPointer<MyTextButton>MyTextButton67;
     ScopedPointer<MyTextButton>MyTextButton68;
     ScopedPointer<MyTextButton>MyTextButton69;

     ScopedPointer<MyTextButton>MyTextButton70;
     ScopedPointer<MyTextButton>MyTextButton71;
     ScopedPointer<MyTextButton>MyTextButton72;
     ScopedPointer<MyTextButton>MyTextButton73;
     ScopedPointer<MyTextButton>MyTextButton74;
     ScopedPointer<MyTextButton>MyTextButton75;
     ScopedPointer<MyTextButton>MyTextButton76;
     ScopedPointer<MyTextButton>MyTextButton77;
     ScopedPointer<MyTextButton>MyTextButton78;
     ScopedPointer<MyTextButton>MyTextButton79;

     ScopedPointer<MyTextButton>MyTextButton80;
     ScopedPointer<MyTextButton>MyTextButton81;
     ScopedPointer<MyTextButton>MyTextButton82;
     ScopedPointer<MyTextButton>MyTextButton83;
     ScopedPointer<MyTextButton>MyTextButton84;
     ScopedPointer<MyTextButton>MyTextButton85;
     ScopedPointer<MyTextButton>MyTextButton86;
     ScopedPointer<MyTextButton>MyTextButton87;
     ScopedPointer<MyTextButton>MyTextButton88;
     ScopedPointer<MyTextButton>MyTextButton89;

     ScopedPointer<MyTextButton>MyTextButton90;
     ScopedPointer<MyTextButton>MyTextButton91;
     ScopedPointer<MyTextButton>MyTextButton92;
     ScopedPointer<MyTextButton>MyTextButton93;
     ScopedPointer<MyTextButton>MyTextButton94;
     ScopedPointer<MyTextButton>MyTextButton95;
     ScopedPointer<MyTextButton>MyTextButton96;
     ScopedPointer<MyTextButton>MyTextButton97;
     ScopedPointer<MyTextButton>MyTextButton98;
     ScopedPointer<MyTextButton>MyTextButton99;

     ScopedPointer<MyTextButton>MyTextButton100;
     ScopedPointer<MyTextButton>MyTextButton101;
     ScopedPointer<MyTextButton>MyTextButton102;
     ScopedPointer<MyTextButton>MyTextButton103;
     ScopedPointer<MyTextButton>MyTextButton104;
     ScopedPointer<MyTextButton>MyTextButton105;
     ScopedPointer<MyTextButton>MyTextButton106;
     ScopedPointer<MyTextButton>MyTextButton107;
     ScopedPointer<MyTextButton>MyTextButton108;
     ScopedPointer<MyTextButton>MyTextButton109;

     ScopedPointer<MyTextButton>MyTextButton110;
     ScopedPointer<MyTextButton>MyTextButton111;
     ScopedPointer<MyTextButton>MyTextButton112;
     ScopedPointer<MyTextButton>MyTextButton113;
     ScopedPointer<MyTextButton>MyTextButton114;
     ScopedPointer<MyTextButton>MyTextButton115;
     ScopedPointer<MyTextButton>MyTextButton116;
     ScopedPointer<MyTextButton>MyTextButton117;
     ScopedPointer<MyTextButton>MyTextButton118;
     ScopedPointer<MyTextButton>MyTextButton119;

     ScopedPointer<MyTextButton>MyTextButton120;
     ScopedPointer<MyTextButton>MyTextButton121;
     ScopedPointer<MyTextButton>MyTextButton122;
     ScopedPointer<MyTextButton>MyTextButton123;
     ScopedPointer<MyTextButton>MyTextButton124;
     ScopedPointer<MyTextButton>MyTextButton125;
     ScopedPointer<MyTextButton>MyTextButton126;
     ScopedPointer<MyTextButton>MyTextButton127;*/
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> textButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DecumoMenuComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_F3ABD9486408A8EE__
