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

#ifndef _LOOKANDFEEL_V5_H_
#define _LOOKANDFEEL_V5_H_
//==============================================================================
/**
    
*/



class JUCE_API  LookAndFeel_V5   : public LookAndFeel
{
public:
    LookAndFeel_V5();
    ~LookAndFeel_V5();
     void drawButtonText (Graphics& g, TextButton& button, bool isMouseOverButton, bool isButtonDown)override;
     void drawButtonBackground (Graphics& g, Button& button, const Colour& backgroundColour,
                               bool isMouseOverButton, bool isButtonDown)override ;
     
private:
     //JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LookAndFeel_V5)
};


#endif