#include "TopRowButtons.h"

#include "LiveEditor.h"
#include "DumpProgress.h"
#include "HelloWindow.h"
#include "LogWindow.h"
#include "PackageWindow.h"
#include "Frontend/IGHelper.h"
#include "Frontend/Fonts/fontAwesomeHelper.h"
#include "Frontend/Texture/TextureCreator.h"
#include "Settings/EngineSettings.h"

void windows::TopRowButtons::renderHelpWindow()
{
    const ImVec2 bigWindow = IGHelper::getWindowSize();
    ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowFocus();
    ImGui::Begin("Help", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
    ImGui::SetWindowSize(ImVec2(800, 800), ImGuiCond_Once);
    const ImVec2 smallWindow = ImGui::GetWindowSize();
    ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
    ImGui::PopStyleVar();
    ImGui::Image(TextureCreator::getTexture("logo"), ImVec2(230, 230));
    ImGui::SameLine();
    ImGui::BeginChild("HelpChild", ImVec2(520, 280), false, ImGuiWindowFlags_NoScrollWithMouse);
    ImGui::TextWrapped("UE Dumper by Spuckwaffel. All rights reserved. Designed for personal use.");
    if(ImGui::Button(merge(ICON_FA_TWITTER, " Follow")))
        system("start https://twitter.com/Spuckwaffel");
    ImGui::EndChild();
    ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 50);
    ImVec2 childSize;
    if(EngineSettings::_UE_VERSION >= UE_5_00)
        childSize = ImVec2(780, 500);
    else
        childSize = ImVec2(780, 400);
    EngineSettings::drawEngineSettings(childSize, &bRenderHelpWindow);
    ImGui::End();
    
}

windows::TopRowButtons::TopRowButtons()
{

}

void windows::TopRowButtons::renderTopRowButtons()
{
    //if were on the dump progress some stuff is disabled
    const bool dumping = DumpProgress::isBusy();

    ImGui::SameLineEx(0, -5);
    if (ImGui::Button("Project"))
    {
        ImGui::OpenPopup("ProjectPopup");
    }
    ImGui::SameLineEx(5, -5);
    if (ImGui::Button("Edit"))
    {
        ImGui::OpenPopup("EditPopup");
    }
    ImGui::SameLineEx(5, -5);

    //even if its useless if live editor is disabled, give the user a visual appearance of a disabled button
    if ((!EngineSettings::liveEditorEnabled() && HelloWindow::isCompleted() ) || DumpProgress::isAlreadyCompleted())
    {
        ImGui::BeginDisabled(!EngineSettings::liveEditorEnabled() || dumping);
        static bool bLiveTriggered = false;
        if (!LiveEditor::LiveEditorStarted())
        {

            if (ImGui::Button("Live editor"))
                bLiveTriggered = true;
            if (bLiveTriggered && LiveEditor::renderLaunchPopup())
                bLiveTriggered = false;
        }
        else
        {
            if (ImGui::Button("SDK editor"))
                bLiveTriggered = true;
            if (bLiveTriggered && LiveEditor::renderQuitPopup())
                bLiveTriggered = false;
        }
        ImGui::EndDisabled();
    }
    ImGui::SameLineEx(5, -5);
    if(ImGui::Button("Help") && !dumping)
    {
        bRenderHelpWindow = true;
    }

    if (ImGui::BeginPopup("EditPopup"))
    {
        LogWindow::renderEditPopup();
        if(!dumping)
        {
            PackageWindow::renderEditPopup();
            LiveEditor::renderEditPopUp();
        }
        
        ImGui::EndPopup();
    }
    if (ImGui::BeginPopup("ProjectPopup"))
    {
        if (!dumping)
        {
            PackageWindow::renderProjectPopup();
            HelloWindow::renderProjectPopup();
        }
        
        ImGui::EndPopup();
    }

    if(!EngineSettings::liveEditorEnabled() && HelloWindow::isCompleted())
    {
        ImGui::SameLineEx(20, -5);
        ImGui::TextColored(IGHelper::Colors::grayedOut, "OFFLINE_MODE");
    }

    if(bRenderHelpWindow)
    {
        renderHelpWindow();
    }
}
