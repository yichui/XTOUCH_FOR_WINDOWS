#include "../JuceLibraryCode/JuceHeader.h"
#include "LookAndFeel_V5.h"
#include "MyTextButton.h"
LookAndFeel_V5::LookAndFeel_V5()
{
    const Colour textButtonColour (0xff333333); 
    setColour (TextButton::buttonColourId, textButtonColour);
}

LookAndFeel_V5::~LookAndFeel_V5() {}

static void drawButtonShape (Graphics& g, const Path& outline, Colour baseColour, float height)
{
    const float mainBrightness = baseColour.getBrightness();
    const float mainAlpha = baseColour.getFloatAlpha();

    g.setGradientFill (ColourGradient (baseColour.brighter (/*0.2f*/0.0), 0.0f, 0.0f,
                                       baseColour.darker (/*0.25f*/0.0), 0.0f, height, false));
    g.fillPath (outline);

    g.setColour (Colours::white.withAlpha (0.4f * mainAlpha * mainBrightness * mainBrightness));
    g.strokePath (outline, PathStrokeType (1.0f), AffineTransform::translation (0.0f, 1.0f)
                                                        .scaled (1.0f, (height - 1.6f) / height));

    g.setColour (Colours::black.withAlpha (0.4f * mainAlpha));
    g.strokePath (outline, PathStrokeType (0.0f));
}

void LookAndFeel_V5::drawButtonText (Graphics& g, TextButton& button, bool isMouseOverButton, bool isButtonDown)
{
    Font font (getTextButtonFont (button));
    g.setFont (font);
    g.setColour (button.findColour (/*button.getToggleState()*/ isMouseOverButton||isButtonDown? TextButton::textColourOnId
                                                            : TextButton::textColourOffId)
                       .withMultipliedAlpha (button.isEnabled() ? 1.0f : 0.5f));

    const int yIndent = jmin (4, button.proportionOfHeight (0.3f));
    const int cornerSize = jmin (button.getHeight(), button.getWidth()) / 2;

    const int fontHeight = roundToInt (font.getHeight() * 0.6f);
    const int leftIndent  = jmin (fontHeight, 2 + cornerSize / (button.isConnectedOnLeft() ? 4 : 2));
    const int rightIndent = jmin (fontHeight, 2 + cornerSize / (button.isConnectedOnRight() ? 4 : 2));

    g.drawFittedText (button.getButtonText(),
        leftIndent+(button.getHeight()*5)/5,
                      yIndent,
                      button.getWidth() - leftIndent - rightIndent,
                      button.getHeight() - yIndent * 2,
                      Justification::centredLeft, 2);
}

void LookAndFeel_V5::drawButtonBackground(Graphics& g, Button& button, const Colour& backgroundColour,
                                           bool isMouseOverButton, bool isButtonDown)
{
    Colour baseColour (backgroundColour.withMultipliedSaturation (button.hasKeyboardFocus (true) ? 1.3f : 0.9f)
                                       .withMultipliedAlpha (button.isEnabled() ? /*0.9f : 0.5f*/1.3f:0.9f));

    if (isButtonDown || isMouseOverButton)
        //baseColour = baseColour.contrasting (isButtonDown ? 0.2f : 0.1f);
        //baseColour = Colour(0x991111aa);
        baseColour = Colour(0xffd2691e);
    const bool flatOnLeft   = button.isConnectedOnLeft();
    const bool flatOnRight  = button.isConnectedOnRight();
    const bool flatOnTop    = button.isConnectedOnTop();
    const bool flatOnBottom = button.isConnectedOnBottom();

    const float width  = button.getWidth() - 1.0f;
    const float height = button.getHeight() - 1.0f;

    if (width > 0 && height > 0)
    {
        const float cornerSize = 4.0f;

        

        
        Path outline;
        outline.addRoundedRectangle (0.5f, 0.5f, width, height, cornerSize, cornerSize,
                                     ! (flatOnLeft  || flatOnTop),
                                     ! (flatOnRight || flatOnTop),
                                     ! (flatOnLeft  || flatOnBottom),
                                     ! (flatOnRight || flatOnBottom));
        drawButtonShape (g, outline, baseColour, height);

        Rectangle<int> & area = button.getLocalBounds();
        Rectangle<int> r(area.reduced(1));
        Rectangle<float>iconArea (r.removeFromLeft ((r.getHeight() * 5) / 4).reduced (3).toFloat());
        if(button.getToggleState())
        {
            const Path tick (getTickShape (1.0f));
            if (isButtonDown || isMouseOverButton)
                g.setColour (Colour(0xffffab00));
            else
                g.setColour (Colour(0xffffab00));
            g.fillPath (tick, tick.getTransformToScaleToFit (iconArea, true));
        //
        }
    }
}

