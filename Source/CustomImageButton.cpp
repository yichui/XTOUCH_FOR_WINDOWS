#include "CustomImageButton.h"

CustomImageButton::CustomImageButton (const String& text_):TextButton(text_), textValue (text_),lastTextValue (text_),lossOfFocusDiscardsChanges(false),chooseflag(0)
{
    this->setColour (TextButton::buttonColourId, Colours::black);
    this->setColour (TextButton::buttonOnColourId, Colour (0xffd2691e));
    this->setColour (TextButton::textColourOnId, Colour (0xffffab00));
    this->setColour (TextButton::textColourOffId, Colour (0xffffab00));
    this->setLookAndFeel(&lookAndFeelV4);
    this->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    textValue.addListener (this);
}

CustomImageButton::~CustomImageButton()
{
    textValue.removeListener (this);

    if (ownerComponent != nullptr)
        ownerComponent->removeComponentListener (this);
    editor = nullptr;
}


TextEditor* CustomImageButton::createEditorComponent()
{
    TextEditor* const ed = new TextEditor (getName());
    ed->applyFontToAllText (getLookAndFeel().getTextButtonFont (*this));
    
    copyAllExplicitColoursTo (*ed);
    return ed;
}

void CustomImageButton::setButtonText (const String& newText)
{
    lastTextValue = newText;
    textValue = newText;
    Button::setButtonText(newText);
}

void CustomImageButton::mouseDoubleClick (const MouseEvent& e)
{
    //if (editDoubleClick && ! e.mods.isPopupMenu())
        //Button::mouseDown(e);
    if ( ! e.mods.isPopupMenu())
	{
		if(!this->getButtonText().compare("-")==0)
			showEditor();
	}
    //this->setButtonText("text");
}

void CustomImageButton::mouseDown (const MouseEvent& e) 
{
     //beginDragAutoRepeat (1000);
    if(e.getNumberOfClicks()<2)
        Button::mouseDown(e);
}
 
void CustomImageButton::mouseUp (const MouseEvent& e)
{
    //beginDragAutoRepeat (1000);
    //if(e.getNumberOfClicks()<2)
        Button::mouseUp(e);
}

void CustomImageButton::showEditor()
{
    if (editor == nullptr)
    {
        addAndMakeVisible (editor = createEditorComponent());
        //editor = createEditorComponent();
        editor->setText (getButtonText(), false);
        editor->setColour (TextEditor::backgroundColourId, Colour(0xff444444));
        editor->setColour (TextEditor::textColourId, Colours::white);
        editor->setColour (TextEditor::focusedOutlineColourId, Colour(0xffffab00));
        editor ->setColour(TextEditor::highlightedTextColourId,Colour(0xff000000));
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

void CustomImageButton::textWasEdited() {}
void CustomImageButton::textWasChanged() {}
void CustomImageButton::editorShown (TextEditor*) {}

void CustomImageButton::addListener (CustomImageButtonListener* const listener)
{
    listeners.add (listener);
}

void CustomImageButton::removeListener (CustomImageButtonListener* const listener)
{
    listeners.remove (listener);
}

void CustomImageButton::callChangeListeners()
{
    Component::BailOutChecker checker (this);
    listeners.callChecked (checker, &CustomImageButtonListener::CustomImageButtonTextChanged, this);  // (can't use Label::Listener due to idiotic VC2005 bug)
}

void CustomImageButton::resized()
{
    if (editor != nullptr)
        editor->setBoundsInset (BorderSize<int> (0));
}

void CustomImageButton::valueChanged (Value&)
{     
    int s = textValue.toString().getIntValue();
    if(textValue.toString().compare("Dec/-1")==0)
    {    
        setButtonText ("Dec/-1");
        repaint();
    }
   else if(textValue.toString().compare("-")==0)
   {
        setButtonText ("-");
        repaint();
   }
   else if(textValue.toString().compare("Inc/+1")==0)
   {    
        setButtonText ("Inc/+1");
        repaint();
   }
   else if(textValue.toString().compare("Relative1")==0)
   {    
        setButtonText ("Relative1");
        repaint();
   }
   else if(textValue.toString().compare("Relative2")==0)
   {    
        setButtonText ("Relative2");
        repaint();
   }
   else if(textValue.toString().compare("Relative3")==0)
   {    
        setButtonText ("Relative3");
        repaint();
   }
    else if(s >= 0 && s<128)       
    {            
        setButtonText (String(s));        
        repaint();     
   }
        
    
    //}
}

void CustomImageButton::paintButton (Graphics& g,
                              bool isMouseOverButton,
                              bool isButtonDown)
{
    LookAndFeel& lf = getLookAndFeel();

    lf.drawButtonBackground (g, *this,
                             findColour (/*getToggleState() ? buttonOnColourId
                                                          : */buttonColourId),
                             isMouseOverButton,
                             isButtonDown);

    lf.drawButtonText (g, *this,
                       isMouseOverButton,
                       isButtonDown);
}

void CustomImageButton::componentVisibilityChanged (Component& component)
{
    setVisible (component.isVisible());
}

void CustomImageButton::componentParentHierarchyChanged (Component& component)
{
    if (Component* parent = component.getParentComponent())
        parent->addChildComponent (this);
}

void CustomImageButton::internalClickCallback (const ModifierKeys& modifiers)
{
    Button::internalClickCallback(modifiers);
    //this->setToggleState(0,dontSendNotification);
    sendClickMessage1 (modifiers);
}

void CustomImageButton::sendClickMessage1 (const ModifierKeys& modifiers)
{
    Component::BailOutChecker checker (this);

    
    clicked (modifiers);

    if (! checker.shouldBailOut())
        listeners.callChecked (checker, &CustomImageButtonListener::CustomImagebuttonClicked, this);  // (can't use Button::Listener due to idiotic VC2005 bug)
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

KeyboardFocusTraverser* CustomImageButton::createFocusTraverser()
{
    return new LabelKeyboardFocusTraverser();
}
//===========================================================================
bool CustomImageButton::updateFromTextEditorContents (TextEditor& ed)
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

void CustomImageButton::componentMovedOrResized (Component& component, bool /*wasMoved*/, bool /*wasResized*/)
{
    const Font f (getLookAndFeel().getTextButtonFont (*this));

    
        setSize (jmin (f.getStringWidth (textValue.toString()) + 8, component.getX()),
                 component.getHeight());

        setTopRightPosition (component.getX(), component.getY());
    
}

void CustomImageButton::hideEditor (const bool discardCurrentEditorContents)
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

void CustomImageButton::inputAttemptWhenModal()
{
    if (editor != nullptr)
    {
        if (lossOfFocusDiscardsChanges)
            textEditorEscapeKeyPressed (*editor);
        else
            textEditorReturnKeyPressed (*editor);
    }
}


void CustomImageButton::editorAboutToBeHidden (TextEditor*)
{
    if (ComponentPeer* const peer = getPeer())
        peer->dismissPendingTextInput();
}
//==============================================================================
void CustomImageButton::textEditorTextChanged (TextEditor& ed)
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

void CustomImageButton::textEditorReturnKeyPressed (TextEditor& ed)
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

void CustomImageButton::textEditorEscapeKeyPressed (TextEditor& ed)
{
    if (editor != nullptr)
    {
        jassert (&ed == editor);
        (void) ed;

        editor->setText (textValue.toString(), false);
        hideEditor (true);
    }
}

void CustomImageButton::textEditorFocusLost (TextEditor& ed)
{
    textEditorTextChanged (ed);
}

void CustomImageButton::setchooseflag(int s)
{
    chooseflag = s;
}
int CustomImageButton::getchooseflag()
{
    return chooseflag;
}

Value CustomImageButton:: GetValue()
{
    return textValue;
}