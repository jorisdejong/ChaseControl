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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "TabComponent.h"
#include "Interface.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
TabComponent::TabComponent ()
{
    addAndMakeVisible (tabbedComponent = new TabbedComponent (TabbedButtonBar::TabsAtTop));
    tabbedComponent->setTabBarDepth (30);
    tabbedComponent->addTab (TRANS("Layer 1"), Colours::lightgrey, new Interface(), true);
    tabbedComponent->addTab (TRANS("Layer 2"), Colours::lightgrey, new Interface(), true);
    tabbedComponent->addTab (TRANS("Layer 3"), Colours::lightgrey, new Interface(), true);
    tabbedComponent->setCurrentTabIndex (0);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (2048, 1536);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

TabComponent::~TabComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    tabbedComponent = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void TabComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xff373737));

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void TabComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    tabbedComponent->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (1.0000f));
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="TabComponent" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="2048" initialHeight="1536">
  <BACKGROUND backgroundColour="ff373737"/>
  <TABBEDCOMPONENT name="new tabbed component" id="d82ee5c5168b0711" memberName="tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="0 0 100% 100%" orientation="top"
                   tabBarDepth="30" initialTab="0">
    <TAB name="Layer 1" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="Interface.cpp"/>
    <TAB name="Layer 2" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="Interface.cpp"/>
    <TAB name="Layer 3" colour="ffd3d3d3" useJucerComp="1" contentClassName=""
         constructorParams="" jucerComponentFile="Interface.cpp"/>
  </TABBEDCOMPONENT>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
