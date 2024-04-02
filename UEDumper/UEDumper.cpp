#include "stdafx.h"

#include <absl/flags/flag.h>
#include <absl/flags/parse.h>

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

#include "FeatureFlags.h"
#include "Engine/Generation/SDK.h"

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

#if FEATUURE_FLAG_ENABLE_ALPHA_AUTOMATED_SDK_DUMPING
ABSL_FLAG(std::optional<std::string>, project_file, std::nullopt, "Load a given project file");
ABSL_FLAG(bool, autogenerate_sdk, false, "Automatically begin SDK generation, then exit upon completion");
ABSL_FLAG(bool, experimental, false, "Whether to use experimental options");

void createBackgroundTasks(bool &mainDoneSignal);
#endif

/**
 * \brief Main program function
 * \return EXIT_SUCCESS
 */
int main(int argc, char** argv)
{
#if FEATUURE_FLAG_ENABLE_ALPHA_AUTOMATED_SDK_DUMPING
    absl::ParseCommandLine(argc, argv);
#endif

    puts("Hello world! Do not close this window. Most of the log is in the imgui window, but some messages appear here.");
    //initialization of LogWindow not needed to call Log functions
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "**********************************");
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "Loading UEDumper...");
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "%s", EngineSettings::getDumperVersion().c_str());
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "**********************************");

    //TextureCreator constructor that inherits IGHelper for our imgui window
    IGHelper(L"UE Dumper", true, 1920, 1050);
    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ONLY_LOG, "MAIN", "Loaded imgui helper library...");

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
    bool done = false, bCreatedBackgroundTasks = false;
    while (!done) 
    {
        //handles any messages
        IGHelper::handleMsg(&done);

        IGHelper::newFrame();
        
        //create the large window
    	ImGui::Begin("MainWindow", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoTitleBar);
        ImGui::SetWindowSize(ImVec2(IGHelper::getWindowSize().x, IGHelper::getWindowSize().y));
        ImGui::SetWindowPos(ImVec2(0, 0), ImGuiCond_Once);

        windows::TopRowButtons::renderTopRowButtons();

        //either render only the live editor or the package editor
        if (windows::DumpProgress::isAlreadyCompleted() && windows::LiveEditor::LiveEditorStarted())
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
        //please handle code within the callbacks carefully as all windows presented that most likely call setWindowFocus will disable all interactions
        //with other buttons (such as the top row buttons)
        windows::LogWindow::topmostCallback();
        windows::LiveEditor::topmostCallback();
        windows::PackageViewerWindow::topmostCallback();
        windows::PackageWindow::topmostCallback();

        ImGui::End();

#if FEATUURE_FLAG_ENABLE_ALPHA_AUTOMATED_SDK_DUMPING
        if (!bCreatedBackgroundTasks)
        {
            bCreatedBackgroundTasks = true;
            createBackgroundTasks(done);
        }
#endif

        IGHelper::render();
    }

    IGHelper::shutdown();

    return EXIT_SUCCESS;
}

#if FEATUURE_FLAG_ENABLE_ALPHA_AUTOMATED_SDK_DUMPING

void autogenerateSDK(bool& done)
{
    // user specified a project file to load via the command line - load via the package window to display progress info
    const int featureFlags = absl::GetFlag(FLAGS_experimental) ? FeatureFlags::SDK::EXPERIMENTAL_INTERNAL : FeatureFlags::SDK::STABLE;

    std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [featureFlags, &done] {
        int anyProgressDone = 0;
        int anyProgressTotal = 1;
        windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "PACKAGEWINDOW", "Creating SDK...");
        puts("Creating SDK...");
        SDKGeneration::Generate(anyProgressDone, anyProgressTotal, featureFlags);
        windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "PACKAGEWINDOW", "Done!");
        puts("SDK generation completed!");
        done = true;
    }))).reset();
}

void createBackgroundTasks(bool &mainDoneSignal)
{
    if (absl::GetFlag(FLAGS_project_file).has_value())
    {
        windows::HelloWindow::disable();
        std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [&mainDoneSignal] {
            windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "ENGINECORE", "Auto-loading package...");

            int anyProgressDone = 0;
            int anyProgressTotal = 1;
            
            if (EngineCore::loadProject(absl::GetFlag(FLAGS_project_file).value(), anyProgressDone, anyProgressTotal))
            {
                windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "ENGINECORE", "Project opened!");
                puts("Project opened!");
                windows::HelloWindow::setCompleted();

                if (absl::GetFlag(FLAGS_autogenerate_sdk))
                {
                    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "ENGINECORE", "Waiting for project to load...");
                    puts("Waiting for project to load...");
                    while (anyProgressDone < anyProgressTotal) std::this_thread::sleep_for(std::chrono::milliseconds(100));

                    windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "ENGINECORE", "Project loaded!");
                    puts("Project loaded!");

                    autogenerateSDK(mainDoneSignal);
                }
            }
            else {
                windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "ENGINECORE", "Failed to open project!");
                puts("Failed to open project!");
                mainDoneSignal = true;
            }
        }))).reset();
    }
    else if (absl::GetFlag(FLAGS_autogenerate_sdk))
    {
        windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_INFO, "MAIN", "Project file must be specified to auto generate an SDK");
        mainDoneSignal = true;
    }
}

#endif