/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.1

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright 2004-13 by Raw Material Software Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_156B5A0DC5E114BE__
#define __JUCE_HEADER_156B5A0DC5E114BE__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Interface  : public Component,
                   public ButtonListener,
                   public SliderListener
{
public:
    //==============================================================================
    Interface ();
    ~Interface();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void sliderValueChanged (Slider* sliderThatWasMoved);

    // Binary resources:
    static const char* _96x54Buttun_0layersCopy_png;
    static const int _96x54Buttun_0layersCopy_pngSize;
    static const char* _96x54Buttun_1layersCopy_png;
    static const int _96x54Buttun_1layersCopy_pngSize;
    static const char* _96x54Buttun_2layersCopy_png;
    static const int _96x54Buttun_2layersCopy_pngSize;
    static const char* _1024x112_rekordbalk01_png;
    static const int _1024x112_rekordbalk01_pngSize;
    static const char* _1024x224_rekordbalk01_png;
    static const int _1024x224_rekordbalk01_pngSize;
    static const char* _1024x52_rekordbalk01_png;
    static const int _1024x52_rekordbalk01_pngSize;
    static const char* _1024x224_rekordbalk03_png;
    static const int _1024x224_rekordbalk03_pngSize;
    static const char* _1024x224_rekordbalk05_png;
    static const int _1024x224_rekordbalk05_pngSize;
    static const char* _1024x224_rekordbalk04_png;
    static const int _1024x224_rekordbalk04_pngSize;
    static const char* _1024x16_balkGrijs_01_png;
    static const int _1024x16_balkGrijs_01_pngSize;
    static const char* _1024x21_balkGrijs_05_png;
    static const int _1024x21_balkGrijs_05_pngSize;
    static const char* _1024x21_balkGrijs_02_png;
    static const int _1024x21_balkGrijs_02_pngSize;
    static const char* _96x96But_05_png;
    static const int _96x96But_05_pngSize;
    static const char* _96x96But_03_png;
    static const int _96x96But_03_pngSize;
    static const char* _96x96But_04_png;
    static const int _96x96But_04_pngSize;
    static const char* _1024x16_balkGrijs_02_png;
    static const int _1024x16_balkGrijs_02_pngSize;
    static const char* _1024x16_balkGrijs_03_png;
    static const int _1024x16_balkGrijs_03_pngSize;
    static const char* _1024x16_balkGrijs_04_png;
    static const int _1024x16_balkGrijs_04_pngSize;
    static const char* _1024x112_rekordbalk01_2_png;
    static const int _1024x112_rekordbalk01_2_pngSize;
    static const char* _1024x112_rekordbalk01_1_png;
    static const int _1024x112_rekordbalk01_1_pngSize;
    static const char* _1024x112_rekordbalk01_3_png;
    static const int _1024x112_rekordbalk01_3_pngSize;
    static const char* _1024x112_rekordbalk01_4_png;
    static const int _1024x112_rekordbalk01_4_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> Label2;
    ScopedPointer<Label> Label4;
    ScopedPointer<ImageButton> controlsButton7;
    ScopedPointer<ImageButton> controlsButton5;
    ScopedPointer<ImageButton> controlsButton6;
    ScopedPointer<ImageButton> controlsButton4;
    ScopedPointer<ImageButton> scalingButton7;
    ScopedPointer<ImageButton> scalingButton8;
    ScopedPointer<ImageButton> scalingButton6;
    ScopedPointer<ImageButton> scalingButton4;
    ScopedPointer<ImageButton> scalingButton5;
    ScopedPointer<ImageButton> scalingButton3;
    ScopedPointer<ImageButton> scalingButton2;
    ScopedPointer<ImageButton> scalingButton1;
    ScopedPointer<ImageButton> sequenceButton12;
    ScopedPointer<ImageButton> sequenceButton11;
    ScopedPointer<ImageButton> sequenceButton10;
    ScopedPointer<ImageButton> sequenceButton9;
    ScopedPointer<ImageButton> sequenceButton16;
    ScopedPointer<ImageButton> sequenceButton15;
    ScopedPointer<ImageButton> sequenceButton14;
    ScopedPointer<ImageButton> sequenceButton13;
    ScopedPointer<ImageButton> sequenceButton4;
    ScopedPointer<ImageButton> sequenceButton3;
    ScopedPointer<ImageButton> sequenceButton2;
    ScopedPointer<ImageButton> sequenceButton1;
    ScopedPointer<ImageButton> sequenceButton8;
    ScopedPointer<ImageButton> sequenceButton7;
    ScopedPointer<ImageButton> sequenceButton6;
    ScopedPointer<ImageButton> sequenceButton5;
    ScopedPointer<ImageButton> stepButton16;
    ScopedPointer<ImageButton> stepButton15;
    ScopedPointer<ImageButton> stepButton14;
    ScopedPointer<Slider> slider;
    ScopedPointer<ImageButton> stepButton13;
    ScopedPointer<ImageButton> stepButton12;
    ScopedPointer<ImageButton> stepButton10;
    ScopedPointer<ImageButton> stepButton9;
    ScopedPointer<ImageButton> stepButton8;
    ScopedPointer<ImageButton> stepButton7;
    ScopedPointer<ImageButton> stepButton6;
    ScopedPointer<ImageButton> stepButton5;
    ScopedPointer<ImageButton> stepButton4;
    ScopedPointer<ImageButton> stepButton3;
    ScopedPointer<ImageButton> stepButton2;
    ScopedPointer<ImageButton> stepButton1;
    ScopedPointer<Label> Label01;
    ScopedPointer<ImageButton> controlsButton3;
    ScopedPointer<ImageButton> controlsButton2;
    ScopedPointer<ImageButton> resetBpmButton;
    ScopedPointer<ImageButton> controlsButton1;
    ScopedPointer<Label> Label3;
    ScopedPointer<ImageButton> chaseButton7;
    ScopedPointer<ImageButton> chaseButton8;
    ScopedPointer<ImageButton> chaseButton6;
    ScopedPointer<ImageButton> chaseButton4;
    ScopedPointer<ImageButton> chaseButton5;
    ScopedPointer<ImageButton> chaseButton3;
    ScopedPointer<ImageButton> chaseButton2;
    ScopedPointer<ImageButton> chaseButton1;
    ScopedPointer<ImageButton> scaleButton7;
    ScopedPointer<ImageButton> scaleButton8;
    ScopedPointer<ImageButton> scaleButton6;
    ScopedPointer<ImageButton> scaleButton4;
    ScopedPointer<ImageButton> scaleButton5;
    ScopedPointer<ImageButton> scaleButton3;
    ScopedPointer<ImageButton> scaleButton2;
    ScopedPointer<ImageButton> chaseButton9;
    ScopedPointer<Label> Label5;
    ScopedPointer<Label> Label6;
    ScopedPointer<ImageButton> controlsButton15;
    ScopedPointer<ImageButton> controlsButton16;
    ScopedPointer<ImageButton> controlsButton14;
    ScopedPointer<ImageButton> controlsButton12;
    ScopedPointer<ImageButton> controlsButton13;
    ScopedPointer<ImageButton> controlsButton9;
    ScopedPointer<ImageButton> controlsButton8;
    ScopedPointer<ImageButton> controlsButton10;
    ScopedPointer<ImageButton> controlsButton11;
    ScopedPointer<ImageButton> stepButton11;
    Image cachedImage__1024x52_rekordbalk01_png;
    Image cachedImage__1024x112_rekordbalk01_3_png;
    Image cachedImage__1024x112_rekordbalk01_2_png;
    Image cachedImage__1024x112_rekordbalk01_1_png;
    Image cachedImage__1024x21_balkGrijs_05_png;
    Image cachedImage__1024x224_rekordbalk03_png;
    Image cachedImage__1024x224_rekordbalk05_png;
    Image cachedImage__1024x112_rekordbalk01_4_png;
    Image cachedImage__1024x16_balkGrijs_01_png;
    Image cachedImage__1024x16_balkGrijs_02_png;
    Image cachedImage__1024x16_balkGrijs_03_png;
    Image cachedImage__1024x16_balkGrijs_04_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Interface)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_156B5A0DC5E114BE__
