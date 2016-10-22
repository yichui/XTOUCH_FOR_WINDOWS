/*
  ==============================================================================

   This file is part of the JUCE library.
   Copyright (c) 2013 - Raw Material Software Ltd.

   Permission is granted to use this software under the terms of either:
   a) the GPL v2 (or any later version)
   b) the Affero GPL v3

   Details of these licenses can be found at: www.gnu.org/licenses

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

   ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.juce.com for more information.

  ==============================================================================
*/

TextButton::TextButton (const String& name, const String& toolTip)
    : Button (name)
{
    setTooltip (toolTip);
}

TextButton::~TextButton()
{
}

void TextButton::paintButton (Graphics& g,
                              bool isMouseOverButton,
                              bool isButtonDown)
{
    LookAndFeel& lf = getLookAndFeel();

    lf.drawButtonBackground (g, *this,
                             findColour (getToggleState() ? buttonOnColourId
                                                          : buttonColourId),
                             isMouseOverButton,
                             isButtonDown);

    lf.drawButtonText (g, *this,
                       isMouseOverButton,
                       isButtonDown);
}

void TextButton::colourChanged()
{
    repaint();
}

Font TextButton::getFont()
{
#ifdef MMM
    return Font ("Arial",jmin (15.0f, getHeight() * 0.6f) ,1 /* +++ -> set to 1 if you want bold! +++ */);  //and here, a bigger font is used 18.0 replaces 15.0
#else
    return Font (jmin (15.0f, getHeight() * 0.6f));
#endif
}

void TextButton::changeWidthToFitText (const int newHeight)
{
    if (newHeight >= 0)
        setSize (jmax (1, getWidth()), newHeight);

    setSize (getFont().getStringWidth (getButtonText()) + getHeight(),
             getHeight());
}
