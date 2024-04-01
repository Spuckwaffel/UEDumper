#include "PackageViewerWindow.h"
#include "EditWindow.h"
#include "LogWindow.h"
#include "Engine/Core/Core.h"
#include "Frontend/IGHelper.h"
#include "Frontend/Fonts/fontAwesomeHelper.h"
#include "Frontend/Texture/TextureCreator.h"


void windows::PackageViewerWindow::renderSubTypes(const fieldType& type, bool inChild)
{
    if (inChild)
    {
        ImGui::BeginChild(std::string("##childitemwindow" + type.name + std::to_string(reinterpret_cast<uint64_t>(&type.name))).c_str(), ImVec2(370, 37), false, ImGuiWindowFlags_HorizontalScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
        //ImGui::SetScrollX(0);

    }

    if (ImGui::Button(std::string(type.name + "##" + std::to_string(reinterpret_cast<__int64>(&type.name))).c_str()))
    {
        if (!openTabFromCName(type.name))
        {
            LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "PACKAGEVIEWER", "Object %s not found!", type.name.c_str());
        }
    }
    ImGui::SameLineEx(0);
    ImGui::TextColored(IGHelper::Colors::white, "<");
    ImGui::SameLineEx(0);

    for (int j = 0; j < type.subTypes.size(); j++)
    {
        auto& subType = type.subTypes[j];
        if (subType.clickable)
        {
            if (ImGui::Button(std::string(subType.name + "##" + std::to_string(reinterpret_cast<__int64>(&subType.name))).c_str()) && !openTabFromCName(subType.name))
            {
                LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "PACKAGEVIEWER", "Object %s not found!", subType.name.c_str());
            }
            ImGui::SameLineEx(0);
            if (type.subTypes[j].propertyType == PropertyType::ObjectProperty || type.subTypes[j].propertyType == PropertyType::ClassProperty)
            {
                ImGui::TextColored(IGHelper::Colors::white, "*");
                ImGui::SameLineEx(0);
            }
        }
        else
        {
            ImGui::SameLineEx(0);
            ImGui::TextColored(IGHelper::Colors::varTypeBlue, subType.name.c_str());
            ImGui::SameLineEx(0);
        }



        if (j < type.subTypes.size() - 1)
        {
            ImGui::SameLineEx(0);
            ImGui::TextColored(IGHelper::Colors::white, ",");
            ImGui::SameLineEx(2);
        }
    }

    ImGui::TextColored(IGHelper::Colors::white, ">");

    if (inChild)
        ImGui::EndChild();
}

void windows::PackageViewerWindow::renderClassOrStruct(PackageTab* tab, EngineStructs::Struct& struc)
{
    //copy button for clipboard
    if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(reinterpret_cast<__int64>(&struc.memoryAddress))).c_str()))
    {
        char address[30];
        sprintf_s(address, "0x%llX", struc.memoryAddress);
        IGHelper::copyToClipBoard(std::string(address));
        LogWindow::Log(LogWindow::logLevels::LOGLEVEL_INFO, "PACKAGEVIEWER", "Copied address to clipboard!");
    }
    ImGui::SameLine();
    //render some infos in green
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
    ImGui::Text("Memory address: 0x%p", struc.memoryAddress);
    if (struc.isClass)
        ImGui::Text("Class index: %d", struc.owningVectorIndex);
    else
        ImGui::Text("Struct index: %d", struc.owningVectorIndex);
    ImGui::Text("Size: 0x%04X (0x%06X - 0x%06X (0x%06X))", struc.size - struc.getInheritedSize(), struc.getInheritedSize(), struc.size, struc.maxSize);
    ImGui::Text("Name: %s", struc.fullName.c_str());
    ImGui::PopStyleColor();
    //if the name is hovered show a tooptip because sometimes the full name is ver large
    if (ImGui::IsItemHovered())
    {
        ImGui::BeginTooltip();
        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
        ImGui::TextUnformatted(struc.fullName.c_str());
        ImGui::PopTextWrapPos();
        ImGui::EndTooltip();
    }
    //if its inherited show all the interitances
    if (struc.inherited)
    {
        ImGui::TextColored(IGHelper::Colors::commentGreen, "Inheritance: ");
        ImGui::SameLine();
        //in a child struct because they get very long sometimes and user can scroll the child struct
        ImGui::BeginChild(std::string("##childstrucwindow" + struc.fullName).c_str(), ImVec2(1000, 50), false, ImGuiWindowFlags_HorizontalScrollbar);
        for (int i = 0; i < struc.supers.size(); i++)
        {
            //allow clicking on it for redirection
            if (ImGui::Button(std::string(struc.supers[i]->cppName + "##" + std::to_string(i) + struc.cppName).c_str()))
            {
                openTabFromCName(struc.supers[i]->cppName);
            }
            if (i < struc.supers.size() - 1)
            {
                ImGui::SameLine();
                ImGui::Text(">");
                ImGui::SameLine();
            }
        }
        ImGui::EndChild();
    }
    else
    {
        ImGui::Dummy(ImVec2(30, 30));
    }
    //class or struct?
    ImGui::TextColored(IGHelper::Colors::varTypeBlue, struc.isClass ? "class " : "struct ");
    ImGui::SameLine();
    ImGui::TextColored(IGHelper::Colors::classGreen, struc.cppName.c_str());
    if (struc.inherited)
    {
        ImGui::SameLine();
        ImGui::Text(":");
        ImGui::SameLine();
        ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
        if (ImGui::Button(std::string(struc.supers[0]->cppName + "##" + std::to_string(reinterpret_cast<__int64>(&struc.supers[0]))).c_str()))
        {
            openTabFromCName(struc.supers[0]->cppName);
        }
        ImGui::PopStyleColor(6);
    }

    for (int i = 0; i < struc.cookedMembers.size(); i++)
    {
        const auto member = struc.getMemberForIndex(i);
        if (member->missed || member->userEdited)
        {

            if (ImGui::Button(merge(ICON_FA_PENCIL, std::string("##" + std::to_string(reinterpret_cast<__int64>(&member->missed))))))
            {
                EditWindow::pushEdit(&struc, member);
            }
            ImGui::SameLine();
        }


        ImGui::SetCursorPosX(50);
        if (!member->type.clickable)
            ImGui::TextColored(IGHelper::Colors::varTypeBlue, member->type.name.c_str());
        else
        {
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_Text, member->type.propertyType != PropertyType::EnumProperty ? IGHelper::Colors::classGreen : IGHelper::Colors::numberGreen);

            if (member->type.subTypes.size() > 0)
            {
                renderSubTypes(member->type, true);
            }
            else
            {

                bool clicked = false;
                if (ImGui::Button(std::string(member->type.name + "##" + std::to_string(reinterpret_cast<__int64>(&member->type.name))).c_str()))
                    clicked = true;

                if (member->type.propertyType == PropertyType::ObjectProperty || member->type.propertyType == PropertyType::ClassProperty)
                {
                    ImGui::SameLineEx(0);
                    ImGui::TextColored(IGHelper::Colors::white, "*");
                }

                if (clicked && !openTabFromCName(member->type.name))
                    LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "PACKAGEVIEWER", "Object %s not found!", member->type.name.c_str());

            }
            ImGui::PopStyleColor(6);

        }
        ImGui::SameLine();
        constexpr auto nameOffset = 440;
        ImGui::SetCursorPosX(nameOffset);
        ImGui::TextColored(IGHelper::Colors::varPink, member->name.length() > 48 ? "%.48s.." : "%s", member->name.c_str());
        auto toLower = [&](const std::string& st)
        {
            std::string s;
            for (const char c : st)
            {
                s += std::tolower(c);
            }
            return s;
        };
        ImGui::SameLine();
        std::string obj = std::string(tab->objectBuf);
        if (tab->findObject >= PackageTab::findState::FS_highlight && strcmp(toLower(member->name).c_str(), toLower(obj).c_str()) == 0)
        {
            const float posX = ImGui::GetCursorPosX();
            const float posY = ImGui::GetCursorPosY() + ImGui::GetFontSize() + 6 - ImGui::GetScrollY() + 80;
            if (tab->findObject == PackageTab::findState::FS_hard)
            {
                ImGui::SetScrollFromPosY(posY);
                //so we dont scroll over and over here, which also means if items have the same name
                //only the first gets targeted
                tab->findObject = PackageTab::findState::FS_highlight;
            }
            //fancy highlight
            ImGui::GetWindowDrawList()->AddRectFilled(
                ImVec2(ImGui::GetWindowPos().x + nameOffset, posY),
                ImVec2(ImGui::GetWindowPos().x + posX - 3, posY + ImGui::GetFontSize() + 5),
                ImGui::GetColorU32(IGHelper::colToVec(179, 59, 0, 100)));
        }

        if (ImGui::IsItemHovered() && member->name.length() > 48)
        {
            ImGui::BeginTooltip();
            ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
            std::string st = member->name;
            if (member->isBit)
                st += " : 1";
            ImGui::TextUnformatted(st.c_str());
            ImGui::PopTextWrapPos();
            ImGui::EndTooltip();
        }
        if (member->isBit)
        {
            //sameline was here before, however it got added above already
            ImGui::Text(":");
            ImGui::SameLine();
            ImGui::TextColored(IGHelper::Colors::numberGreen, "1");
        }

        ImGui::SameLine();
        ImGui::SetCursorPosX(960);
        if (member->isBit)
            ImGui::TextColored(IGHelper::Colors::commentGreen, "0x%04X:%d", member->offset, member->bitOffset);
        else
            ImGui::TextColored(IGHelper::Colors::commentGreen, "0x%04X", member->offset);
        ImGui::SameLine();
        ImGui::SetCursorPosX(1050);
        ImGui::TextColored(IGHelper::Colors::commentGreen, "(0x%04X)", member->size);
        if (member->type.subTypes.size() > 0)
        {
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 7);
        }
    }
}

void windows::PackageViewerWindow::renderEnum(const EngineStructs::Enum& enu)
{

    if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(reinterpret_cast<__int64>(&enu.memoryAddress))).c_str()))
    {
        char address[30];
        sprintf_s(address, "0x%llX", enu.memoryAddress);
        IGHelper::copyToClipBoard(std::string(address));
        LogWindow::Log(LogWindow::logLevels::LOGLEVEL_INFO, "PACKAGEVIEWER", "Copied address to clipboard!");
    }
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
    ImGui::Text("Memory address: 0x%p", enu.memoryAddress);
    ImGui::Text("Enum index: %d", enu.owningVectorIndex);

    ImGui::Text("Items: %d", enu.members.size());
    ImGui::Text("Name: %s", enu.fullName.c_str());
    ImGui::PopStyleColor();
    if (ImGui::IsItemHovered())
    {
        ImGui::BeginTooltip();
        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
        ImGui::TextUnformatted(enu.fullName.c_str());
        ImGui::PopTextWrapPos();
        ImGui::EndTooltip();
    }
    ImGui::TextColored(IGHelper::Colors::varTypeBlue, "enum ");
    ImGui::SameLine();
    ImGui::TextColored(IGHelper::Colors::classGreen, enu.cppName.c_str());
    ImGui::SameLine();
    ImGui::Text(":");
    ImGui::SameLine();
    ImGui::TextColored(IGHelper::Colors::numberGreen, enu.type.c_str()); //enum col is number col
    for (int i = 0; i < enu.members.size(); i++)
    {
        ImGui::SetCursorPosX(50);
        ImGui::TextColored(IGHelper::Colors::numberGreen, enu.members[i].first.c_str());
        ImGui::SameLine();
        ImGui::SetCursorPosX(650);
        ImGui::Text("=");
        ImGui::SameLine();
        ImGui::TextColored(IGHelper::Colors::numberGreen, "%d", enu.members[i].second);
    }
}

void windows::PackageViewerWindow::renderFunction(const EngineStructs::Function& func)
{
    auto copyToClipBoard = [&](uint64_t address)
    {
        if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(address)).c_str()))
        {
            char addressBuf[30];
            sprintf_s(addressBuf, "0x%llX", address);
            IGHelper::copyToClipBoard(std::string(addressBuf));
            LogWindow::Log(LogWindow::logLevels::LOGLEVEL_INFO, "PACKAGEVIEWER", "Copied address to clipboard!");
        }
    };

    copyToClipBoard(reinterpret_cast<uint64_t>(&func.memoryAddress));
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
    ImGui::Text("Memory address: 0x%p", func.memoryAddress);
    ImGui::Text("Function index: %d", func.owningVectorIndex);
    ImGui::PopStyleColor();
    copyToClipBoard(func.binaryOffset);
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
    ImGui::Text("Function offset in the Binary: 0x%06llX", func.binaryOffset);
    ImGui::Text("Name: %s", func.fullName.c_str());
    ImGui::PopStyleColor();
    if (ImGui::IsItemHovered())
    {
        ImGui::BeginTooltip();
        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
        ImGui::TextUnformatted(func.fullName.c_str());
        ImGui::PopTextWrapPos();
        ImGui::EndTooltip();
    }
    ImGui::TextColored(IGHelper::Colors::varBlue, "Flags: %s", func.functionFlags.c_str());
    ImGui::Dummy(ImVec2(30, 30));


    if (func.returnType.clickable)
    {
        ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);

        ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
        ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 5);

        if (ImGui::Button(std::string(func.returnType.name + "##" + std::to_string(reinterpret_cast<__int64>(&func.returnType.name))).c_str()))
        {
            if (!openTabFromCName(func.returnType.name))
                LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "PACKAGEVIEWER", "Type %s not found!", func.returnType.name.c_str());
        }
        ImGui::PopStyleColor(6);
    }
    else
        ImGui::TextColored(IGHelper::Colors::varTypeBlue, func.returnType.name.c_str());

    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0, 0, 0, 0));
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);


    if (ImGui::Button(std::string(func.owningStruct->cppName + "##" + std::to_string(reinterpret_cast<__int64>(&func.owningStruct->cppName))).c_str()))
    {
        if (!openTabFromCName(func.owningStruct->cppName))
            LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "PACKAGEVIEWER", "Type %s not found!", func.owningStruct->cppName.c_str());
    }
    ImGui::PopStyleColor(6);

    ImGui::SameLineEx(0);
    ImGui::TextColored(IGHelper::Colors::bracketGray, "::");
    ImGui::SameLineEx(0);
    ImGui::TextColored(IGHelper::Colors::functionYellow, func.cppName.c_str());
    ImGui::SameLineEx(0);
    ImGui::TextColored(IGHelper::Colors::bracketGray, "(");

    ImGui::SameLineEx(0);
    for (int i = 0; i < func.params.size(); i++)
    {
        if (ImGui::GetCursorPosX() > ImGui::GetWindowSize().x - 250)
        {
            ImGui::Dummy({ 0,0 });
            ImGui::SetCursorPosX(150);
        }


        if (std::get<0>(func.params.at(i)).clickable)
        {
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);

            if (std::get<0>(func.params.at(i)).subTypes.size() > 0)
            {
                renderSubTypes(std::get<0>(func.params.at(i)), false);
                ImGui::SameLineEx(0);
            }

            else
            {
                if (ImGui::Button(std::string(std::get<0>(func.params.at(i)).name + "##" + std::to_string(reinterpret_cast<__int64>(&std::get<0>(func.params.at(i)).name))).c_str()))
                {
                    if (!openTabFromCName(std::get<0>(func.params.at(i)).name))
                        LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "PACKAGEVIEWER", "Param type %s not found!", std::get<0>(func.params.at(i)).name.c_str());
                }
                ImGui::SameLineEx(0);
            }

            ImGui::PopStyleColor(6);

        }
        else
        {
            ImGui::TextColored(IGHelper::Colors::varTypeBlue, std::get<0>(func.params.at(i)).name.c_str());
            ImGui::SameLineEx(0);
        }


        if (std::get<3>(func.params.at(i)) > 1)
        {
            ImGui::TextColored(IGHelper::Colors::paramGray, "*");
            ImGui::SameLine();
        }
        else if (std::get<2>(func.params.at(i)) & EPropertyFlags::CPF_OutParm)
        {
            ImGui::TextColored(IGHelper::Colors::paramGray, "&");
            ImGui::SameLine();
        }
        else
            ImGui::SameLine();

        if (i < func.params.size() - 1)
            ImGui::TextColored(IGHelper::Colors::paramGray, "%s, ", std::get<1>(func.params.at(i)).c_str());
        else
            ImGui::TextColored(IGHelper::Colors::paramGray, std::get<1>(func.params.at(i)).c_str());
        ImGui::SameLineEx(-2);
    }
    ImGui::TextColored(IGHelper::Colors::bracketGray, ")");
}

void windows::PackageViewerWindow::setOpenTabsClosed()
{
    //for(auto& tab : Tabs)
    //{
    //    tab.open = false;
    //}
}


void windows::PackageViewerWindow::updateNavBar(NavigationTab& navtab, void* itemSelected, ObjectInfo::ObjectType typeSelected)
{
    //dont do anything if the user tries to go into the tab that is currently the tab
    const auto currentTab = navtab.tabIndex[navtab.currentVecIndex];
    if (currentTab.first == itemSelected && currentTab.second == typeSelected)
        return;
    //remove all forward possibilities if were somewhere in the middle
    while (navtab.tabIndex.size() > navtab.currentVecIndex + 1)
    {
        navtab.tabIndex.pop_back();
    }

    navtab.tabIndex.push_back(std::pair(itemSelected, typeSelected));
    navtab.currentVecIndex++;
}


bool windows::PackageViewerWindow::openTabFromCName(const std::string& name)
{
    const auto info = EngineCore::getInfoOfObject(name);
    if (!info || !info->valid)
        return false;

    createTab(info->target, info->type);
    return true;
}


void windows::PackageViewerWindow::topmostCallback()
{

}


windows::PackageViewerWindow::PackageViewerWindow()
{

}

void windows::PackageViewerWindow::renderTabs()
{

    bool showing = false;
    for (int currentTab = 0; currentTab < Tabs.size(); currentTab++)
    {
        //we create some awesome copies because vector reallocation is our biggest friend :D
        auto package = Tabs[currentTab].packageSelected;

        if (ImGui::BeginTabItem(package->packageName.c_str(), &Tabs[currentTab].open, Tabs[currentTab].focus ? ImGuiTabItemFlags_SetSelected : ImGuiTabItemFlags_None))
        {
            showing = true;


            ImGui::BeginDisabled(Tabs[currentTab].navTab.currentVecIndex < 1 ? true : false);
            if (ImGui::ArrowButton("navtab_btn_left", ImGuiDir_Left))
            {
                Tabs[currentTab].navTab.currentVecIndex--;
                Tabs[currentTab].itemSelected = Tabs[currentTab].navTab.tabIndex[Tabs[currentTab].navTab.currentVecIndex].first;
                Tabs[currentTab].typeSelected = Tabs[currentTab].navTab.tabIndex[Tabs[currentTab].navTab.currentVecIndex].second;
            }
            ImGui::SameLine();
            ImGui::EndDisabled();
            ImGui::BeginDisabled(Tabs[currentTab].navTab.currentVecIndex >= Tabs[currentTab].navTab.tabIndex.size() - 1 ? true : false);
            if (ImGui::ArrowButton("navtab_btn_right", ImGuiDir_Right))
            {
                Tabs[currentTab].navTab.currentVecIndex++;
                Tabs[currentTab].itemSelected = Tabs[currentTab].navTab.tabIndex[Tabs[currentTab].navTab.currentVecIndex].first;
                Tabs[currentTab].typeSelected = Tabs[currentTab].navTab.tabIndex[Tabs[currentTab].navTab.currentVecIndex].second;
            }
            ImGui::EndDisabled();
            ImGui::SameLine();
            const auto packageTextPosY = ImGui::GetCursorPosY();
            ImGui::TextColored(IGHelper::Colors::packagePurple, "Package %s", package->packageName.c_str());

            ImGui::SameLine();
            ImGui::SetCursorPosX(ImGui::GetWindowSize().x - 730);
            ImGui::PushItemWidth(278);
            //disabled if it snot a struct or class. I mean who needs enum search? And functions is useless, use the search top left....
            ImGui::BeginDisabled(Tabs[currentTab].typeSelected != ObjectInfo::OI_Class && Tabs[currentTab].typeSelected != ObjectInfo::OI_Struct);
            std::string beforeTest = std::string(Tabs[currentTab].objectBuf);
            //we cant scroll here as we arent in any scroll window
            if (ImGui::InputTextWithHint("##CNameSearchBox", "Search...", Tabs[currentTab].objectBuf, sizeof(Tabs[currentTab].objectBuf) - 1, ImGuiInputTextFlags_EnterReturnsTrue))
            {
                //tells the renderX functions to find the Object (used for scrolling)
                Tabs[currentTab].findObject = PackageTab::findState::FS_hard;
            }
            //highlight mode + buffer changed -> reset
            if (Tabs[currentTab].findObject == PackageTab::findState::FS_highlight && strcmp(beforeTest.c_str(), std::string(Tabs[currentTab].objectBuf).c_str()) != 0)
            {
                Tabs[currentTab].findObject = PackageTab::findState::FS_none;
            }
            ImGui::SameLine();
            if (ImGui::Button(ICON_FA_MAGNIFYING_GLASS))
            {
                Tabs[currentTab].findObject = PackageTab::findState::FS_hard;
            }
            ImGui::EndDisabled();
            ImGui::PopItemWidth();
            ImGui::BeginChild(std::string("tabchildviewer" + package->packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 420, ImGui::GetWindowSize().y - 85), true);

            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 0,0 });

            //heavy cpu usage on large packages!
            if (!Tabs[currentTab].itemSelected)
            {
                auto addSpacing = [&]
                {
                    ImGui::Dummy(ImVec2(30, 40));
                    ImGui::Separator();
                };

                if (Tabs[currentTab].typeSelected == ObjectInfo::OI_Struct)
                {
                    for (auto& struc : package->structs)
                    {
                        renderClassOrStruct(&Tabs[currentTab], struc);
                        addSpacing();
                    }
                }

                if (Tabs[currentTab].typeSelected == ObjectInfo::OI_Class)
                {
                    for (auto& struc : package->classes)
                    {
                        renderClassOrStruct(&Tabs[currentTab], struc);
                        addSpacing();
                    }
                }

                if (Tabs[currentTab].typeSelected == ObjectInfo::OI_Enum)
                {
                    for (const auto& enu : package->enums)
                    {
                        renderEnum(enu);
                        addSpacing();
                    }
                }
                if (Tabs[currentTab].typeSelected == ObjectInfo::OI_Function)
                {
                    for (const auto& func : package->functions)
                    {
                        renderFunction(*func);
                        addSpacing();
                    }
                }
            }
            else
            {
                if (Tabs[currentTab].typeSelected == ObjectInfo::ObjectType::OI_Class)
                    renderClassOrStruct(&Tabs[currentTab], *static_cast<EngineStructs::Struct*>(Tabs[currentTab].itemSelected));

                if (Tabs[currentTab].typeSelected == ObjectInfo::ObjectType::OI_Struct)
                    renderClassOrStruct(&Tabs[currentTab], *static_cast<EngineStructs::Struct*>(Tabs[currentTab].itemSelected));

                if (Tabs[currentTab].typeSelected == ObjectInfo::ObjectType::OI_Function)
                    renderFunction(*static_cast<EngineStructs::Function*>(Tabs[currentTab].itemSelected));

                if (Tabs[currentTab].typeSelected == ObjectInfo::ObjectType::OI_Enum)
                    renderEnum(*static_cast<EngineStructs::Enum*>(Tabs[currentTab].itemSelected));

            }
            ImGui::PopStyleVar();
            ImGui::EndChild();
            ImGui::SameLine();
            ImGui::SetCursorPosY(packageTextPosY);
            ImGui::BeginChild("packageContentsChild", ImVec2(400, ImGui::GetWindowSize().y - 50), true);

            auto renderItemRange = [&](int& range, int maxCount) mutable
            {
                if (ImGui::ArrowButton("itemselect_btn_left", ImGuiDir_Left) && range >= 100)
                    range -= 100;
                ImGui::SameLine();
                if (ImGui::ArrowButton("itemselect_btn_right", ImGuiDir_Right) && range + 100 < maxCount)
                    range += 100;
                ImGui::SameLine();
                ImGui::Text("Items %d-%d of %d", range, range + 99 > maxCount ? maxCount : range + 99, maxCount);
            };


            auto renderStructorClass = [&](bool isClass)
            {
                auto& dataVector = isClass ? package->classes : package->structs;
                const ObjectInfo::ObjectType type = isClass ? ObjectInfo::ObjectType::OI_Class : ObjectInfo::ObjectType::OI_Struct;
                auto& itemRange = isClass ? Tabs[currentTab].itemRange_C : Tabs[currentTab].itemRange_S;
                renderItemRange(itemRange, dataVector.size());

                if (ImGui::BeginListBox(std::string("##packageContentslistbox" + package->packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 20, ImGui::GetWindowSize().y - 85)))
                {
                    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::varPink);
                    if (ImGui::Selectable(isClass ? "Show all Classes" : "Show all Structs")) {
                        Tabs[currentTab].itemSelected = nullptr;
                        Tabs[currentTab].typeSelected = type;
                    }
                    ImGui::PopStyleColor();

                    for (int j = itemRange; j < dataVector.size() && j < itemRange + 99; j++)
                    {
                        const bool is_selected = (Tabs[currentTab].itemSelected == &dataVector[j] && Tabs[currentTab].typeSelected == type);
                        ImGui::PushStyleColor(ImGuiCol_Text, dataVector.at(j).cookedMembers.size() > 0 ? IGHelper::Colors::white : IGHelper::Colors::grayedOut);
                        if (ImGui::Selectable(dataVector.at(j).cppName.c_str(), is_selected)) {
                            Tabs[currentTab].itemSelected = &dataVector[j];
                            Tabs[currentTab].typeSelected = type;
                            updateNavBar(Tabs[currentTab].navTab, &dataVector[j], Tabs[currentTab].typeSelected);
                        }
                        ImGui::PopStyleColor();
                        if (is_selected && ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(dataVector.at(j).cppName.c_str());
                            ImGui::EndTooltip();
                        }
                    }
                    ImGui::EndListBox();
                }
            };

            //unused parameters to add support for the beginTab lambda

            auto renderFunctions = [&](bool unused)
            {
                renderItemRange(Tabs[currentTab].itemRange_F, package->functions.size());

                if (ImGui::BeginListBox(std::string("##packageContentslistbox" + package->packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 20, ImGui::GetWindowSize().y - 85)))
                {
                    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::varPink);
                    if (ImGui::Selectable("Show all Functions")) {
                        Tabs[currentTab].itemSelected = nullptr;
                        Tabs[currentTab].typeSelected = ObjectInfo::ObjectType::OI_Function;
                    }
                    ImGui::PopStyleColor();

                    for (int j = Tabs[currentTab].itemRange_F; j < package->combinedStructsAndClasses.size() && j < Tabs[currentTab].itemRange_F + 99; j++)
                    {
                        auto& struc = package->combinedStructsAndClasses[j];

                        if (struc->functions.size() == 0)
                            continue;

                        ImGui::Selectable(std::string("##" + struc->cppName + " functions").c_str(), false, ImGuiSelectableFlags_Disabled);
                        ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
                        ImGui::SameLine();
                        ImGui::Text(struc->cppName.c_str());
                        ImGui::PopStyleColor();

                        for (auto& func : struc->functions)
                        {
                            const bool is_selected = (Tabs[currentTab].itemSelected == &func && Tabs[currentTab].typeSelected == ObjectInfo::ObjectType::OI_Function);
                            ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::green);
                            if (ImGui::Selectable(std::string(std::string(ICON_FA_ANGLES_RIGHT) + "##" + func.cppName).c_str(), is_selected)) {

                                Tabs[currentTab].itemSelected = &func;
                                Tabs[currentTab].typeSelected = ObjectInfo::ObjectType::OI_Function;
                                updateNavBar(Tabs[currentTab].navTab, &func, Tabs[currentTab].typeSelected);
                            }
                            ImGui::PopStyleColor();
                            ImGui::SameLine();
                            ImGui::Text(func.cppName.c_str());
                            if (is_selected && ImGui::IsItemHovered()) {
                                ImGui::BeginTooltip();
                                ImGui::Text(std::string(struc->cppName + "::" + func.cppName).c_str());
                                ImGui::EndTooltip();
                            }
                        }

                    }
                    ImGui::EndListBox();
                }
            };

            auto renderEnums = [&](bool unused)
            {
                renderItemRange(Tabs[currentTab].itemRange_E, package->enums.size());

                if (ImGui::BeginListBox(std::string("##packageContentslistbox" + package->packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 20, ImGui::GetWindowSize().y - 85)))
                {
                    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::varPink);
                    if (ImGui::Selectable("Show all Enums")) {
                        Tabs[currentTab].itemSelected = nullptr;
                        Tabs[currentTab].typeSelected = ObjectInfo::ObjectType::OI_Enum;
                    }
                    ImGui::PopStyleColor();

                    for (int j = Tabs[currentTab].itemRange_E; j < package->enums.size() && j < Tabs[currentTab].itemRange_E + 99; j++)
                    {
                        auto& enu = package->enums[j];
                        const bool is_selected = (Tabs[currentTab].itemSelected == &enu && Tabs[currentTab].typeSelected == ObjectInfo::ObjectType::OI_Enum);
                        if (ImGui::Selectable(enu.cppName.c_str(), is_selected)) {
                            Tabs[currentTab].itemSelected = &enu;
                            Tabs[currentTab].typeSelected = ObjectInfo::ObjectType::OI_Enum;
                            updateNavBar(Tabs[currentTab].navTab, &enu, Tabs[currentTab].typeSelected);
                        }
                        if (is_selected && ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(enu.cppName.c_str());
                            ImGui::EndTooltip();
                        }
                    }
                    ImGui::EndListBox();
                }
            };

            if (ImGui::BeginTabBar("PackageContentsTabBar"))
            {

                auto beginTab = [&](const char* str, const ImVec4& col, bool focus, const std::function<void(bool)>& func, bool param = false)
                {
                    ImGui::PushStyleColor(ImGuiCol_Text, col);
                    if (ImGui::BeginTabItem(str, nullptr, focus ? ImGuiTabItemFlags_SetSelected : ImGuiTabItemFlags_None))
                    {
                        ImGui::PopStyleColor();
                        func(param);

                        ImGui::EndTabItem();
                    }
                    else
                        ImGui::PopStyleColor();
                };
                //ugly code any %
                //i hate pushstylecol and popstylecol

                beginTab("Structs##PackageContentsTabBar", IGHelper::Colors::red, Tabs[currentTab].focus && Tabs[currentTab].typeSelected == ObjectInfo::OI_Struct, renderStructorClass, false);
                beginTab("Classes##PackageContentsTabBar", IGHelper::Colors::classOrange, Tabs[currentTab].focus && Tabs[currentTab].typeSelected == ObjectInfo::OI_Class, renderStructorClass, true);
                beginTab("Functions##PackageContentsTabBar", IGHelper::Colors::yellow, Tabs[currentTab].focus && Tabs[currentTab].typeSelected == ObjectInfo::OI_Function, renderFunctions);
                beginTab("Enums##PackageContentsTabBar", IGHelper::Colors::enumBlue, Tabs[currentTab].focus && Tabs[currentTab].typeSelected == ObjectInfo::OI_Enum, renderEnums);

                ImGui::EndTabBar();
            }

            ImGui::EndChild();
            ImGui::EndTabItem();

            if (Tabs[currentTab].focus)
            {
                Tabs[currentTab].focus = false;
            }
        }
    }
    if (Tabs.size() == 0 || !showing)
    {
        ImGui::Dummy(ImVec2(10, 70));
        ImGui::Image(TextureCreator::getTexture("logo"), ImVec2(400, 400), ImVec2(0, 0), ImVec2(1, 1), ImVec4(1, 1, 1, 0.6f));
        ImGui::SameLine();
        ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 30);
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() + 360);

        ImGui::TextColored(IGHelper::Colors::grayedOut, "UE Dumper by Spuckwaffel. Select a Package to get started.");
    }
}

bool windows::PackageViewerWindow::render()
{
    if (alreadyCompleted) return true;

    ImGui::SameLine();
    ImGui::BeginChild("PackageViewerChild", ImVec2(ImGui::GetWindowSize().x - 350, ImGui::GetWindowSize().y - LogWindow::getLogWindowYSize() - 40), true, ImGuiWindowFlags_NoScrollbar);


    if (ImGui::BeginTabBar("PackageTabtab", ImGuiTabBarFlags_Reorderable))
    {
        renderTabs();
        ImGui::EndTabBar();
    }
    ImGui::EndChild();

    EditWindow::renderEdits();


    return false;
}

void windows::PackageViewerWindow::createTab(void* typeSt, const ObjectInfo::ObjectType type)
{
    //dont create double packages
    EngineStructs::Package* package = nullptr;
    if (type == ObjectInfo::ObjectType::OI_Struct || type == ObjectInfo::ObjectType::OI_Class)
    {
        const auto st = static_cast<EngineStructs::Struct*>(typeSt);
        package = st->owningPackage;

    }

    else if (type == ObjectInfo::ObjectType::OI_Function)
        package = static_cast<EngineStructs::Function*>(typeSt)->owningStruct->owningPackage;
    else if (type == ObjectInfo::ObjectType::OI_Enum)
        package = static_cast<EngineStructs::Enum*>(typeSt)->owningPackage;

    if (!package)
        return;

    for (auto& tab : Tabs)
    {
        if (tab.packageSelected == package)
        {
            tab.itemSelected = typeSt;
            tab.focus = true;
            tab.open = true;
            tab.typeSelected = type;
            updateNavBar(tab.navTab, typeSt, type);

            return;

        }

    }
    //setOpenTabsClosed();
    PackageTab t{};
    t.packageSelected = package;
    t.itemSelected = typeSt;
    t.focus = true;
    t.open = true;
    t.navTab.currentVecIndex = 0;
    t.typeSelected = type;
    t.navTab.tabIndex.push_back(std::pair(typeSt, type));
    Tabs.push_back(t);
}