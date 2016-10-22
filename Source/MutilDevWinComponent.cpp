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
#include "BackgroundThread.h"
#include "GlobalCompactComponent.h"
#include "XtouchDevMidiData.h"
#include "MidiDeviceProcess.h"
#include "MainComponent.h"
//[/Headers]

#include "MutilDevWinComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
MutilDevWinComponent * pMutilDevWinComponent = nullptr;
extern GlobalCompactComponent * pGlobalCompactComponent;
extern MainComponent *pMainComponent;

extern pMidiDevNameAndId MidiIntDev[10], MidiOutDev[10];
extern UINT CurrentDevID;
extern UINT INDEVID, OUTDEVID;
extern bool  afterOpenThenCloseMidiFlag, tabbedComponentFlag;
extern bool midiopenflag;
extern bool midirealdyopen;
//[/MiscUserDefs]

//==============================================================================
MutilDevWinComponent::MutilDevWinComponent ()
{
    addAndMakeVisible (textButton = new TextButton ("new button"));
    textButton->setButtonText ("X-TOUCH COMPACT Dummy");
    textButton->addListener (this);


    //[UserPreSize]
	/*addAndMakeVisible(CompactDummy = new MyTextButton("new button"));
	CompactDummy->setButtonText("X-TOUCH COMPACT Dummy");
	CompactDummy->addListener(this);

	addAndMakeVisible(MiniDummy = new MyTextButton("new button"));
	MiniDummy->setButtonText("X-TOUCH MINI Dummy");
	MiniDummy->addListener(this);*/

	int a = 0, b = 0;

	for (int i = 0; i<INDEVID; i++)
	{
		if (MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT-U") == 0)
		{
			a++;
			addAndMakeVisible(MyTextButtonlist[i] = new MyTextButton("new button"));
			MyTextButtonlist[i]->setButtonText(MidiIntDev[i].MidiDevName + " #" +String(a));
			MyTextButtonlist[i]->addListener(this);
		}
		else if (MidiIntDev[i].MidiDevName.compare("X-TOUCH MINI") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH MINI-U") == 0)
		{
			b++;
			addAndMakeVisible(MyTextButtonlist[i] = new MyTextButton("new button"));
			MyTextButtonlist[i]->setButtonText(MidiIntDev[i].MidiDevName + " #" + String(b));
			MyTextButtonlist[i]->addListener(this);
		}
		
	}
	if(MyTextButtonlist[CurrentDevID]->getButtonText().compare(pGlobalCompactComponent->ReturnButtonMutil()->getButtonText())==0)
		MyTextButtonlist[CurrentDevID]->setToggleState(1, dontSendNotification);

    //[/UserPreSize]

    setSize (184, 102);


    //[Constructor] You can add your own custom stuff here..
	setSize(184, 3 + INDEVID*24 + 3);
    //[/Constructor]
}

MutilDevWinComponent::~MutilDevWinComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
	//CompactDummy = nullptr;
	//MiniDummy = nullptr;
	for (int i = 0; i<INDEVID; i++)
	{
		MyTextButtonlist[i] = nullptr;
	}
    //[/Destructor_pre]

    textButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MutilDevWinComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
	g.fillAll(Colour(0xff000000));
    //[/UserPaint]
}

void MutilDevWinComponent::resized()
{   
    //[UserResized] Add your own custom resize handling here..
	//CompactDummy->setBounds(0, 3 , 136 ,24);
	//textButton->setBounds (0, 5, 136, 13);
	//MiniDummy->setBounds(0, 27, 136, 24);
	int ButtonSection = 0;
	for (int i = 0; i<INDEVID; i++)
	{
		if (MidiIntDev[i].MidiDevName.compare("X-TOUCH MINI") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH MINI-U") == 0)
		{
			MyTextButtonlist[i]->setBounds(0, 3 + ButtonSection * 24, 184, 24);
			ButtonSection ++;
		}
		else if (MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT-U") == 0)
		{

			MyTextButtonlist[i]->setBounds(0, 3 + ButtonSection * 24, 184, 24);
			ButtonSection ++;
		}
	}
	/*for (int i = 0; i<INDEVID; i++)
	{
		if (MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT-U") == 0)
		{

			MyTextButtonlist[i]->setBounds(0, 3 + ButtonSection * 24, 184, 24);
			ButtonSection ++;
		}
	}*/
    //[/UserResized]
}

void MutilDevWinComponent::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
        //[/UserButtonCode_textButton]
    }

    //[UserbuttonClicked_Post]
	/*if (buttonThatWasClicked == CompactDummy)
	{
		//[UserButtonCode_textButton] -- add your button handler code here..
		//[/UserButtonCode_textButton]
	}
	else if (buttonThatWasClicked == MiniDummy)
	{
		//[UserButtonCode_textButton] -- add your button handler code here..
		//[/UserButtonCode_textButton]
	}*/
	
	for (int i = 0; i < INDEVID; i++)
	{
		if (buttonThatWasClicked == MyTextButtonlist[i])
		{
			//if (i != CurrentDevID)
			//{
				afterOpenThenCloseMidiFlag = 1;
				//pMidiDeviceProcess->checkistheremididevice();
				//midirealdyopen = 1;
				ThirtySecTimeflag = 0;
				midiopenflag = 0;
				tabbedComponentFlag = 1;
				MidiDeviceProcess::SetMidiDevOpenFlag(0);
				//pMidiDeviceProcess->CloseMidiDevice();
				//if (CurrentDevID < INDEVID - 1)
				CurrentDevID = i;
				if (MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH COMPACT-U") == 0)
				{
					eXTOUCH_MODE_ID=COMPACT_MODE;
				}
				else if (MidiIntDev[i].MidiDevName.compare("X-TOUCH MINI") == 0 || MidiIntDev[i].MidiDevName.compare("X-TOUCH MINI-U") == 0)
				{
					eXTOUCH_MODE_ID=MINI_MODE;
				}
				//else
				//	CurrentDevID = 0;
			//}
		}
		findParentComponentOfClass<CallOutBox>()->exitModalState(0);
	}
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MutilDevWinComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="1" initialWidth="184" initialHeight="102">
  <BACKGROUND backgroundColour="ffffffff"/>
  <TEXTBUTTON name="new button" id="56f3e83a0c6089d0" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="0 5 136 13" buttonText="X-TOUCH COMPACT Dummy"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
