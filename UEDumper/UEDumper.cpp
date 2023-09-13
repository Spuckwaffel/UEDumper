#include "stdafx.h"


#include "Frontend/Windows/HelloWindow.h"
#include "Frontend/Windows/DumpProgress.h"
#include "Frontend/Windows/PackageWindow.h"
#include "Frontend/Windows/PackageViewerWindow.h"
#include "Frontend/Windows/LiveEditor.h"
#include "Frontend/Windows/LogWindow.h"
#include "Frontend/Windows/TopRowButtons.h"
#include <Frontend/IGHelper.h>

#include "Frontend/Texture/TextureCreator.h"
#include "Memory/memory.h"
#include <Settings/EngineSettings.h>

/*
*    ██╗░░░██╗███████╗  ██████╗░██╗░░░██╗███╗░░░███╗██████╗░███████╗██████╗░
*    ██║░░░██║██╔════╝  ██╔══██╗██║░░░██║████╗░████║██╔══██╗██╔════╝██╔══██╗
*    ██║░░░██║█████╗░░  ██║░░██║██║░░░██║██╔████╔██║██████╔╝█████╗░░██████╔╝
*    ██║░░░██║██╔══╝░░  ██║░░██║██║░░░██║██║╚██╔╝██║██╔═══╝░██╔══╝░░██╔══██╗
*    ╚██████╔╝███████╗  ██████╔╝╚██████╔╝██║░╚═╝░██║██║░░░░░███████╗██║░░██║
*    ░╚═════╝░╚══════╝  ╚═════╝░░╚═════╝░╚═╝░░░░░╚═╝╚═╝░░░░░╚══════╝╚═╝░░╚═╝ By Spuckwaffel#5000
*
*   Special thanks to Blue Fire for the idea, help and suggestions.
*   Also special thanks to guttir14 (and all contributers to UnrealDumper-4.25) and CorrM (and all contributers to Unreal-Finder-Tool),
*   I've used their projects as a reference while making this tool.
*
*   Also special thanks to the contributors of this project!
*
*   Feel free to contribute to this project as it is defenitely not perfect.
*   Do not open any issues regarding "what can be done better for % performance" or "do x instead of y" that requires rewriting
*   the entire source code, I couldnt care less, you can do that.
*   Please remember this took long enough and is after all free and open source.
*/


/**
 * \brief Main program function
 * \return EXIT_SUCCESS
 */
int main()
{
    puts("Hello world! Do not close this window. Most of the log is in the imgui window, but some messages appear here.");
    //initialization of LogWindow not needed to call Log functions
    windows::LogWindow::Log(windows::LogWindow::log_2, "MAIN", "Loading program...");

    //TextureCreator constructor that inherits IGHelper for our imgui window
    IGHelper(L"UE Dumper", true, 1920, 1050);
    windows::LogWindow::Log(windows::LogWindow::log_2, "MAIN", "Loaded imgui helper library...");

    //load class constructors
    Memory();

    //texture class constructor
    TextureCreator();
    TextureCreator::createDefaultTextures();

    //windows constructors. Most of them are empty
    windows::HelloWindow();
    windows::DumpProgress();
    windows::PackageWindow();
    windows::PackageViewerWindow();
    windows::LogWindow();
    windows::TopRowButtons();
    windows::LiveEditor();

    //loads all the macros
    EngineSettings::loadMacros();

    //render loop
    bool done = false;
    while (!done) {

        //handles any messages
        IGHelper::handleMsg(&done);

        IGHelper::newFrame();
        
        //create the large window
    	ImGui::Begin("MainWindow", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar);
        ImGui::SetWindowSize(ImVec2(IGHelper::getWindowSize().x, IGHelper::getWindowSize().y));
        ImGui::SetWindowPos(ImVec2(0, 0), ImGuiCond_Once);

        windows::TopRowButtons::renderTopRowButtons();

        //either render only the live editor or the package editor
        if(windows::DumpProgress::isAlreadyCompleted() && windows::LiveEditor::LiveEditorStarted())
        {
	        windows::LiveEditor::renderLiveEditor();
        }
        else
        {
            //if the hello screen is completed go dump
            if (windows::HelloWindow::render())
            {
                //once completed packages can be shown too
                //no live editor -> loaded project -> no dumping needed
                if (!EngineSettings::liveEditorEnabled() || windows::DumpProgress::render())
                {
                    windows::PackageWindow::render();
                    windows::PackageViewerWindow::render();
                }
            }
        }

        //always display logs
        windows::LogWindow::render();

        //topmost callbacks get called here
        //please handle code within the callbacks carefully as all windows presented that most likely call setWindpwFocus will disable all interactions
        //with other buttons (such as the top row buttons)
        windows::LogWindow::topmostCallback();
        windows::LiveEditor::topmostCallback();
        windows::PackageViewerWindow::topmostCallback();
        windows::PackageWindow::topmostCallback();

        ImGui::End();

        IGHelper::render();

    }

    IGHelper::shutdown();

    return EXIT_SUCCESS;
}