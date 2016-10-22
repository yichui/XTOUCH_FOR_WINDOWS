#include "MyTextButton.h"

#include "LookAndFeel_V5.h"

MyTextButton::MyTextButton(const String& text_):TextButton(text_)
{
    settickflag(false);
    this->setLookAndFeel(&lookAndFeelV5);
    this->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    this->setColour (TextButton::buttonColourId, Colour(0xff000000));
    this->setColour (TextButton::buttonOnColourId, Colour(0xffffffff));
    this->setColour (TextButton::textColourOnId, Colour (0xffffffff));
    this->setColour (TextButton::textColourOffId, Colour (0xffffab00));
}

MyTextButton::~MyTextButton(){}

void MyTextButton:: settickflag(int a)
{
    tickflag = a;
}

int MyTextButton::gettickflag()
{
    return tickflag;
}

void MyTextButton::paintButton (Graphics& g,
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

Font MyTextButton::getFont()
{
#ifdef MMM
    return Font ("Arial",jmin (15.0f, getHeight() * 0.6f) ,0/* +++ -> set to 1 if you want bold! +++ */);  //and here, a bigger font is used 18.0 replaces 15.0
#else
    return Font (jmin (15.0f, getHeight() * 0.6f));
#endif
}