#ifndef MBTCOMPONENT_H_INCLUDED
#define MBTCOMPONENT_H_INCLUDED


#include "JuceHeader.h" 
#include "LookAndFeel_V5.h"

class JUCE_API MyTextButton : public TextButton
{
public:
    //==============================================================================
    /** Creates an ImageButton.

        Use setImage() to specify the image to use. The colours and opacities that
        are specified here can be changed later using setImages().

        @param name                 the name to give the component
    */
    MyTextButton(const String& name = String::empty);

    /** Destructor. */
    ~MyTextButton();

    void settickflag(int a);
    int gettickflag();

    //void setToggleState (bool shouldBeOn, NotificationType notification);

    /*struct JUCE_API  LookAndFeelMethods
    {
        virtual ~LookAndFeelMethods() {}

        virtual void drawButtonBackground (Graphics&, MyTextButton& button, const Colour& backgroundColour,
                                           bool isMouseOverButton, bool isButtonDown) = 0;
    };*/
    virtual Font getFont();
protected:
     void paintButton (Graphics& g,
                              bool isMouseOverButton,
                              bool isButtonDown) override;
private:
//==============================================================================
    
    int tickflag;
    LookAndFeel_V5 lookAndFeelV5;
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MyTextButton)

};


#endif