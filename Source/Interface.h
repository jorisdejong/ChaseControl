/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.1.0

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


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TabbedComponent> tabbedComponent;
    ScopedPointer<ImageButton> imageButton4;
    ScopedPointer<ImageButton> imageButton6;
    ScopedPointer<ImageButton> imageButton7;
    ScopedPointer<ImageButton> imageButton9;
    ScopedPointer<ImageButton> imageButton15;
    ScopedPointer<ImageButton> imageButton16;
    ScopedPointer<ImageButton> imageButton17;
    ScopedPointer<ImageButton> imageButton18;
    ScopedPointer<ImageButton> imageButton19;
    ScopedPointer<ImageButton> imageButton20;
    ScopedPointer<ImageButton> imageButton21;
    ScopedPointer<ImageButton> imageButton22;
    ScopedPointer<ImageButton> imageButton47;
    ScopedPointer<ImageButton> imageButton48;
    ScopedPointer<ImageButton> imageButton49;
    ScopedPointer<ImageButton> imageButton50;
    ScopedPointer<ImageButton> imageButton51;
    ScopedPointer<ImageButton> imageButton52;
    ScopedPointer<ImageButton> imageButton53;
    ScopedPointer<ImageButton> imageButton54;
    ScopedPointer<ImageButton> imageButton55;
    ScopedPointer<ImageButton> imageButton56;
    ScopedPointer<ImageButton> imageButton57;
    ScopedPointer<ImageButton> imageButton58;
    ScopedPointer<ImageButton> imageButton59;
    ScopedPointer<ImageButton> imageButton60;
    ScopedPointer<ImageButton> imageButton61;
    ScopedPointer<ImageButton> imageButton62;
    ScopedPointer<ImageButton> imageButton67;
    ScopedPointer<ImageButton> imageButton68;
    ScopedPointer<ImageButton> imageButton69;
    ScopedPointer<Slider> slider;
    ScopedPointer<ImageButton> imageButton70;
    ScopedPointer<ImageButton> imageButton63;
    ScopedPointer<ImageButton> imageButton64;
    ScopedPointer<ImageButton> imageButton65;
    ScopedPointer<ImageButton> imageButton66;
    ScopedPointer<ImageButton> imageButton71;
    ScopedPointer<ImageButton> imageButton72;
    ScopedPointer<ImageButton> imageButton73;
    ScopedPointer<ImageButton> imageButton74;
    ScopedPointer<ImageButton> imageButton75;
    ScopedPointer<ImageButton> imageButton76;
    ScopedPointer<ImageButton> imageButton77;
    ScopedPointer<ImageButton> imageButton78;
    ScopedPointer<Label> Label01;
    ScopedPointer<ImageButton> imageButton79;
    ScopedPointer<ImageButton> imageButton80;
    ScopedPointer<ImageButton> RESETBPM;
    ScopedPointer<ImageButton> imageButton83;
    ScopedPointer<Label> Label3;
    ScopedPointer<ImageButton> imageButton2;
    ScopedPointer<ImageButton> imageButton3;
    ScopedPointer<ImageButton> imageButton5;
    ScopedPointer<ImageButton> imageButton10;
    ScopedPointer<ImageButton> imageButton11;
    ScopedPointer<ImageButton> imageButton12;
    ScopedPointer<ImageButton> imageButton13;
    ScopedPointer<ImageButton> imageButton14;
    ScopedPointer<ImageButton> imageButton23;
    ScopedPointer<ImageButton> imageButton24;
    ScopedPointer<ImageButton> imageButton25;
    ScopedPointer<ImageButton> imageButton26;
    ScopedPointer<ImageButton> imageButton27;
    ScopedPointer<ImageButton> imageButton28;
    ScopedPointer<ImageButton> imageButton29;
    ScopedPointer<ImageButton> imageButton30;
    ScopedPointer<Label> Label2;
    ScopedPointer<Label> Label4;
    ScopedPointer<Label> Label5;
    ScopedPointer<Label> Label6;
    ScopedPointer<ImageButton> imageButton31;
    ScopedPointer<ImageButton> imageButton32;
    ScopedPointer<ImageButton> imageButton33;
    ScopedPointer<ImageButton> imageButton34;
    ScopedPointer<ImageButton> imageButton35;
    ScopedPointer<ImageButton> imageButton37;
    ScopedPointer<ImageButton> imageButton38;
    ScopedPointer<ImageButton> imageButton8;
    ScopedPointer<ImageButton> imageButton39;
    Image cachedImage__1024x112_rekordbalk01_png;
    Image cachedImage__1024x21_balkGrijs_02_png;
    Image cachedImage__1024x16_balkGrijs_01_png;
    Image cachedImage__1024x52_rekordbalk01_png;
    Image cachedImage__1024x224_rekordbalk03_png;
    Image cachedImage__1024x224_rekordbalk05_png;
    Image cachedImage__1024x16_balkGrijs_01_png;
    Image cachedImage__1024x16_balkGrijs_01_png;
    Image cachedImage__1024x52_rekordbalk01_png;
    Image cachedImage__1024x21_balkGrijs_05_png;
    Image cachedImage__1024x112_rekordbalk01_png;
    Image cachedImage__1024x16_balkGrijs_01_png;
    Image cachedImage__1024x112_rekordbalk01_png;
    Image cachedImage__1024x16_balkGrijs_01_png;
    Image cachedImage__1024x16_balkGrijs_01_png;
    Image cachedImage__1024x112_rekordbalk01_png;
    Image cachedImage__1024x16_balkGrijs_01_png;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Interface)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_156B5A0DC5E114BE__
