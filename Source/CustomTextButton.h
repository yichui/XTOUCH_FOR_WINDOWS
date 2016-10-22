#ifndef CUSTOM_TEXTCOMPONENT_H_INCLUDED
#define CUSTOM_TEXTCOMPONENT_H_INCLUDED
#include "JuceHeader.h" 
#include "LookAndFeel_V4.h"

class JUCE_API  CustomTextButton  : public TextButton,
                                                protected TextEditorListener,
                                                private ComponentListener
                                                //public ButtonListener,
                                                //private ValueListener
{
public:
    //==============================================================================
    /** Creates an Button.

        @param name                 the name to give the component
    */
    CustomTextButton (const String& name = String::empty);

	CustomTextButton (int s,const String& text_);

    /** Destructor. */
    ~CustomTextButton();

    void showEditor();

    void setButtonText (const String& newText);

    //void setButtonText(const String& newText);

     void hideEditor (bool discardCurrentEditorContents);

    void mouseDoubleClick (const MouseEvent&) override;

    class JUCE_API  Listener
    {
    public:
        virtual ~Listener() {}
        virtual void CustomTextbuttonClicked(CustomTextButton* buttonThatWasClicked)=0;
        virtual void CustomTextButtonTextChanged (CustomTextButton* CustomTextButtonThatHasChanged) = 0;
    };
    void addListener (Listener* listener);
    void removeListener (Listener* listener);
    void callChangeListeners();

    void setchooseflag(int s);
    int getchooseflag();
    Value GetValue();

protected:
    virtual TextEditor* createEditorComponent();
    virtual void textWasEdited();
    virtual void textWasChanged();
    virtual void editorShown (TextEditor*);

    virtual void editorAboutToBeHidden (TextEditor*);
    /** @internal */
    //void paint (Graphics&) override;
    /** @internal */
    virtual void internalClickCallback (const ModifierKeys&);

    void resized() override;
    
    void componentMovedOrResized (Component&, bool wasMoved, bool wasResized) override;
        /** @internal */
    void mouseDown (const MouseEvent&) override;
    /** @internal */
    void mouseUp (const MouseEvent&) override;

    void textEditorTextChanged (TextEditor&) override;
    /** @internal */
    void textEditorReturnKeyPressed (TextEditor&) override;
    /** @internal */
    void textEditorEscapeKeyPressed (TextEditor&) override;
    /** @internal */
    void textEditorFocusLost (TextEditor&) override;
    /** @internal */
    void inputAttemptWhenModal() override;
    /** @internal */
    void valueChanged (Value&) override;
    /** @internal */
    void componentVisibilityChanged (Component&) override;
    /** @internal */
    void componentParentHierarchyChanged (Component&) override;
    /** @internal */
    KeyboardFocusTraverser* createFocusTraverser() override;

    struct JUCE_API  LookAndFeelMethods
    {
        virtual ~LookAndFeelMethods() {}

        
        virtual void drawButtonBackground (Graphics& g,
                                           CustomTextButton& button,
                                           const Colour& backgroundColour,
                                           bool isMouseOverButton,
                                           bool isButtonDown)=0;
        //virtual Font getLabelFont (Label&) = 0;

    };
private:
    //==============================================================================
    LookAndFeel_V4 lookAndFeelV4;
    Value textValue;
    int chooseflag;

    ScopedPointer<TextEditor> editor;
    
    ListenerList<Listener> listeners;
    bool lossOfFocusDiscardsChanges;
    String lastTextValue;
    WeakReference<Component> ownerComponent;
    bool updateFromTextEditorContents (TextEditor&);
    
    bool leftOfOwnerComp;

    void sendClickMessage1 (const ModifierKeys& modifiers);
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CustomTextButton)
    //bool updateFromTextEditorContents (TextEditor&);
};

typedef CustomTextButton::Listener CustomTextButtonListener;

#endif   // JUCE_IMAGEBUTTON_H_INCLUDED