#include "CustomTextButton.h"

CustomTextButton::CustomTextButton (const String& text_):TextButton(text_), textValue (text_),lastTextValue (text_),lossOfFocusDiscardsChanges(false),chooseflag(0)
{
    this->setColour (TextButton::buttonColourId, Colours::black);
    this->setColour (TextButton::buttonOnColourId, Colour (0xffd2691e));
    this->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    this->setColour (TextButton::textColourOffId, Colour (0xffffab00));
    this->setLookAndFeel(&lookAndFeelV4);
    this->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textValue.addListener (this);
}

CustomTextButton::CustomTextButton (int s,const String& text_):TextButton(text_), textValue (text_),lastTextValue (text_),lossOfFocusDiscardsChanges(false),chooseflag(s)
{
    textValue.addListener (this);
}

CustomTextButton::~CustomTextButton()
{
    textValue.removeListener (this);

    if (ownerComponent != nullptr)
        ownerComponent->removeComponentListener (this);
    editor = nullptr;
}


TextEditor* CustomTextButton::createEditorComponent()
{
    TextEditor* const ed = new TextEditor (getName());
    ed->applyFontToAllText (getLookAndFeel().getTextButtonFont (*this));
    
    copyAllExplicitColoursTo (*ed);
    return ed;
}

void CustomTextButton::setButtonText (const String& newText)
{
    lastTextValue = newText;
    textValue = newText;
    Button::setButtonText(newText);
}

void CustomTextButton::mouseDoubleClick (const MouseEvent& e)
{
    //if (editDoubleClick && ! e.mods.isPopupMenu())
        //Button::mouseDown(e);
    if ( ! e.mods.isPopupMenu())
        showEditor();
    //this->setButtonText("text");
}

void CustomTextButton::mouseDown (const MouseEvent& e) 
{
     //beginDragAutoRepeat (1000);
    if(e.getNumberOfClicks()<2)
        Button::mouseDown(e);
}
 
void CustomTextButton::mouseUp (const MouseEvent& e)
{
    //beginDragAutoRepeat (1000);
    //if(e.getNumberOfClicks()<2)
        Button::mouseUp(e);
}

void CustomTextButton::showEditor()
{
    if (editor == nullptr)
    {
        addAndMakeVisible (editor = createEditorComponent());
        //editor = createEditorComponent();
        editor->setText (getButtonText(), false);
        editor->setColour (TextEditor::backgroundColourId, Colour(0xff444444));
        editor->setColour (TextEditor::textColourId, Colours::white);
        editor->setColour (TextEditor::focusedOutlineColourId, Colour(0xffffab00));
        editor->addListener (this);
        //editor->setAlwaysOnTop(true);
        editor->grabKeyboardFocus();
        
        //editor->setBounds (148, 132, 62, 24);
        if (editor == nullptr) // may be deleted by a callback
            return;

        editor->setHighlightedRegion (Range<int> (0, textValue.toString().length()));

        resized();
        repaint();

        editorShown (editor);

        enterModalState (false);
        editor->grabKeyboardFocus();     
    }
}

void CustomTextButton::textWasEdited() {}
void CustomTextButton::textWasChanged() {}
void CustomTextButton::editorShown (TextEditor*) {}

void CustomTextButton::addListener (CustomTextButtonListener* const listener)
{
    listeners.add (listener);
}

void CustomTextButton::removeListener (CustomTextButtonListener* const listener)
{
    listeners.remove (listener);
}

void CustomTextButton::callChangeListeners()
{
    Component::BailOutChecker checker (this);
    listeners.callChecked (checker, &CustomTextButtonListener::CustomTextButtonTextChanged, this);  // (can't use Label::Listener due to idiotic VC2005 bug)
}

void CustomTextButton::resized()
{
    if (editor != nullptr)
        editor->setBoundsInset (BorderSize<int> (0));
}

void CustomTextButton::valueChanged (Value&)
{
    //if (lastTextValue != textValue.toString())
    //{
	String a1[16]={"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16"};
	String a2[16]={"ID 1","ID 2","ID 3","ID 4","ID 5","ID 6","ID 7","ID 8","ID 9","ID 10","ID 11","ID 12","ID 13","ID 14","ID 15","ID 16"};
	String a3[16]={"CH 1","CH 2","CH 3","CH 4","CH 5","CH 6","CH 7","CH 8","CH 9","CH 10","CH 11","CH 12","CH 13","CH 14","CH 15","CH 16"};
	if(chooseflag==0)
	{
		int s = textValue.toString().getIntValue();
		bool haswrite =false;
    
		for(int i = 0 ;i<16;i++)
		{
			if(textValue.toString().compare(String(i+1)+"*")==0)
			{
				setButtonText (String(i+1)+"*");
				repaint();
				haswrite = true;
			}
			/*else if(textValue.toString().compare(String(i+1))==0)
			{
				setButtonText (String(i+1));
				repaint();
				haswrite = true;
			}*/
		}
		if(s > 0 && s<17 && !haswrite)
		{
			setButtonText (String(s));
			repaint();
		}
	}
	else if(chooseflag==1)
	{
		for(int i = 0 ;i<16;i++)
		{
			if(textValue.toString().compare(a1[i])==0 || textValue.toString().compare(a2[i])==0)
			{
				setButtonText ("ID "+String(i+1));
				repaint();
			}
		}
	}
	else if(chooseflag==2)
	{
		for(int i = 0 ;i<16;i++)
		{
			if(textValue.toString().compare(a1[i])==0 || textValue.toString().compare(a3[i])==0)
			{
				setButtonText ("CH "+String(i+1));
				//textValue="CH "+ String(i+1);
				repaint();
			}
			else if(textValue.toString().compare("Off")==0 || textValue.toString().compare("off")==0 || textValue.toString().compare("OFF")==0 || textValue.toString().compare("oFF")==0)
			{
				setButtonText ("Off");
				//textValue="Off";
				repaint();
			}
		}
	}
    //}
}

void CustomTextButton::componentVisibilityChanged (Component& component)
{
    setVisible (component.isVisible());
}

void CustomTextButton::componentParentHierarchyChanged (Component& component)
{
    if (Component* parent = component.getParentComponent())
        parent->addChildComponent (this);
}

void CustomTextButton::internalClickCallback (const ModifierKeys& modifiers)
{
    Button::internalClickCallback(modifiers);
    //this->setToggleState(0,dontSendNotification);
    sendClickMessage1 (modifiers);
}

void CustomTextButton::sendClickMessage1 (const ModifierKeys& modifiers)
{
    Component::BailOutChecker checker (this);

    
    clicked (modifiers);

    if (! checker.shouldBailOut())
        listeners.callChecked (checker, &CustomTextButtonListener::CustomTextbuttonClicked, this);  // (can't use Button::Listener due to idiotic VC2005 bug)
}
//===================================================
class LabelKeyboardFocusTraverser   : public KeyboardFocusTraverser
{
public:
    LabelKeyboardFocusTraverser() {}

    Component* getNextComponent (Component* c)     { return KeyboardFocusTraverser::getNextComponent (getComp (c)); }
    Component* getPreviousComponent (Component* c) { return KeyboardFocusTraverser::getPreviousComponent (getComp (c)); }

    static Component* getComp (Component* current)
    {
        return dynamic_cast <TextEditor*> (current) != nullptr
                 ? current->getParentComponent() : current;
    }
};

KeyboardFocusTraverser* CustomTextButton::createFocusTraverser()
{
    return new LabelKeyboardFocusTraverser();
}
//===========================================================================
bool CustomTextButton::updateFromTextEditorContents (TextEditor& ed)
{
    const String newText (ed.getText());

    if (textValue.toString() != newText)
    {
        lastTextValue = newText;
        textValue = newText;

        repaint();

        textWasChanged();

        if (ownerComponent != nullptr)
            componentMovedOrResized (*ownerComponent, true, true);

        return true;
    }

    return false;
}

void CustomTextButton::componentMovedOrResized (Component& component, bool /*wasMoved*/, bool /*wasResized*/)
{
    const Font f (getLookAndFeel().getTextButtonFont (*this));

    
        setSize (jmin (f.getStringWidth (textValue.toString()) + 8, component.getX()),
                 component.getHeight());

        setTopRightPosition (component.getX(), component.getY());
    
}

void CustomTextButton::hideEditor (const bool discardCurrentEditorContents)
{
    if (editor != nullptr)
    {
        WeakReference<Component> deletionChecker (this);

        ScopedPointer<TextEditor> outgoingEditor (editor);

        editorAboutToBeHidden (outgoingEditor);

        const bool changed = (! discardCurrentEditorContents)
                               && updateFromTextEditorContents (*outgoingEditor);
        outgoingEditor = nullptr;
        repaint();

        if (changed)
            textWasEdited();

        if (deletionChecker != nullptr)
            exitModalState (0);

        if (changed && deletionChecker != nullptr)
            callChangeListeners();
    }
}

void CustomTextButton::inputAttemptWhenModal()
{
    if (editor != nullptr)
    {
        if (lossOfFocusDiscardsChanges)
            textEditorEscapeKeyPressed (*editor);
        else
            textEditorReturnKeyPressed (*editor);
    }
}


void CustomTextButton::editorAboutToBeHidden (TextEditor*)
{
    if (ComponentPeer* const peer = getPeer())
        peer->dismissPendingTextInput();
}
//==============================================================================
void CustomTextButton::textEditorTextChanged (TextEditor& ed)
{
    if (editor != nullptr)
    {
        jassert (&ed == editor);

        if (! (hasKeyboardFocus (true) || isCurrentlyBlockedByAnotherModalComponent()))
        {
            if (lossOfFocusDiscardsChanges)
                textEditorEscapeKeyPressed (ed);
            else
                textEditorReturnKeyPressed (ed);
       }
    }
}

void CustomTextButton::textEditorReturnKeyPressed (TextEditor& ed)
{
    if (editor != nullptr)
    {
        jassert (&ed == editor);

        const bool changed = updateFromTextEditorContents (ed);
        hideEditor (true);

        if (changed)
        {
            WeakReference<Component> deletionChecker (this);
            textWasEdited();

            if (deletionChecker != nullptr)
                callChangeListeners();
        }
    }
}

void CustomTextButton::textEditorEscapeKeyPressed (TextEditor& ed)
{
    if (editor != nullptr)
    {
        jassert (&ed == editor);
        (void) ed;

        editor->setText (textValue.toString(), false);
        hideEditor (true);
    }
}

void CustomTextButton::textEditorFocusLost (TextEditor& ed)
{
    textEditorTextChanged (ed);
}

void CustomTextButton::setchooseflag(int s)
{
    //chooseflag = s;
}
int CustomTextButton::getchooseflag()
{
    return chooseflag;
}

Value CustomTextButton:: GetValue()
{
    return textValue;
}