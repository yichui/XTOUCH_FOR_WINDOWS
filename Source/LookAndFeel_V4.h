/*
  ==============================================================================

   This file is part of the JUCE library.
   Copyright (c) 2013 - Raw Material Software Ltd.

   Permission is granted to use this software under the terms of either:
   a) the GPL v2 (or any later version)
   b) the Affero GPL V4

   Details of these licenses can be found at: www.gnu.org/licenses

   JUCE is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR
   A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

   ------------------------------------------------------------------------------

   To release a closed-source product which uses JUCE, commercial licenses are
   available: visit www.juce.com for more information.

  ==============================================================================
*/

#ifndef _LOOKANDFEEL_V4_H_
#define _LOOKANDFEEL_V4_H_
//==============================================================================
/**
    
*/
class JUCE_API  LookAndFeel_V4   : public LookAndFeel
{
public:
    LookAndFeel_V4();
    ~LookAndFeel_V4();
    //void drawButtonText (Graphics& g, TextButton& button, bool isMouseOverButton, bool isButtonDown)override;
    void drawButtonBackground (Graphics&, Button&, const Colour& backgroundColour,
                               bool isMouseOverButton, bool isButtonDown) override;
};


#endif