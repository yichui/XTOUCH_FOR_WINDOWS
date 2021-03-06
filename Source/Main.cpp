/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainComponent.h"

extern MainComponent *pMainComponent;
//==============================================================================
class X_TOUCHApplication  : public JUCEApplication
{
public:
    //==============================================================================
    X_TOUCHApplication() {}

    const String getApplicationName()       { return ProjectInfo::projectName; }
    const String getApplicationVersion()    { return ProjectInfo::versionString; }
    bool moreThanOneInstanceAllowed()       { return false; }

    //==============================================================================
    void initialise (const String& commandLine)
    {
        // Add your application's initialisation code here..
        //LookAndFeel::getDefaultLookAndFeel().setDefaultSansSerifTypefaceName(L"AGENCYB");
        mainWindow = new MainWindow();
    }

    void shutdown()
    {
        // Add your application's shutdown code here..
        mainWindow = nullptr; // (deletes our window)
    }

    //==============================================================================
    void systemRequestedQuit()
    {
        // This is called when the app is being asked to quit: you can ignore this
        // request and let the app carry on running, or call quit() to allow the app to close.
        quit();
    }

    void anotherInstanceStarted (const String& commandLine)
    {
        // When another instance of the app is launched while this one is running,
        // this method is invoked, and the commandLine parameter tells you what
        // the other instance's command-line arguments were.
    }


    //==============================================================================
    /*
        This class implements the desktop window that contains an instance of
        our MainContentComponent class.
    */
    class MainWindow    : public DocumentWindow
    {
    public:
        MainWindow()  : DocumentWindow (" X-TOUCH Editor",
                                         Colour(0xff222222),
                                        DocumentWindow::minimiseButton | DocumentWindow::closeButton /*| DocumentWindow::maximiseButton*/)
        {
#define UNICODE 1
            cachedImage_drum_jpg = ImageCache::getFromMemory (pMainComponent->icon_png,pMainComponent->icon_pngSize);

            //getLookAndFeel().setUsingNativeAlertWindows (1);

            setIcon (cachedImage_drum_jpg);

            setTitleBarTextCentred(false);

           // setUsingNativeTitleBar (true);  // 设置显示WINDOWS风格的标题栏

            pMainComponent = new MainComponent();

            setContentOwned (pMainComponent, true);
            
            centreWithSize (getWidth(), getHeight());

            setVisible (true);
        }

        void closeButtonPressed()
        {
            // This is called when the user tries to close this window. Here, we'll just
            // ask the app to quit when this happens, but you can change this to do
            // whatever you need.
            JUCEApplication::getInstance()->systemRequestedQuit();
        }


        // Binary resources:
        

        /* Note: Be careful if you override any DocumentWindow methods - the base
           class uses a lot of them, so by overriding you might break its functionality.
           It's best to do all your work in your content component instead, but if
           you really have to override any DocumentWindow methods, make sure your
           subclass also calls the superclass's method.
        */

    private:
        JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainWindow)

       Image cachedImage_drum_jpg;
    };

private:
    ScopedPointer<MainWindow> mainWindow;
};

//==============================================================================
// This macro generates the main() routine that launches the app.
START_JUCE_APPLICATION (X_TOUCHApplication)
