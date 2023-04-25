#include "PackageViewerWindow.h"
#include "EditWindow.h"


void windows::PackageViewerWindow::renderClassOrStruct(EngineStructs::Package& package, int index)
{
    auto& struc = package.structs[index];
    
    //copy button for clipboard
    if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(reinterpret_cast<__int64>(&struc.memoryAddress))).c_str()))
    {
        char address[30];
        sprintf_s(address, "0x%llX", struc.memoryAddress);
        IGHelper::copyToClipBoard(std::string(address));
        LogWindow::Log(LogWindow::log_4, "PACKAGEVIEWER", "Copied address to clipboard!");
    }
    ImGui::SameLine();
    //render some infos in green
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
    ImGui::Text("Memory address: 0x%p", struc.memoryAddress);
    ImGui::Text("Package index: %d", index);
    ImGui::Text("Size: 0x%04X (0x%06X - 0x%06X)", struc.size - struc.inheretedSize, struc.inheretedSize, struc.size);
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
    if(struc.inherited)
    {
        ImGui::TextColored(IGHelper::Colors::commentGreen, "Inheritance: ");
        ImGui::SameLine();
        //in a child struct because they get very long sometimes and user can scroll the child struct
        ImGui::BeginChild(std::string("##childstrucwindow" + struc.fullName).c_str(), ImVec2(1000, 50), false, ImGuiWindowFlags_HorizontalScrollbar);
        for (int i = 0; i < struc.supers.size(); i++)
        {
            //allow clicking on it for redirection
            if(ImGui::Button(std::string(struc.supers[i] + "##" + std::to_string(i) + struc.cppName).c_str()))
            {
                openTabFromCName(struc.supers[i]);
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
	    ImGui::Dummy(ImVec2(30,30));
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
        ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
        ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
        if(ImGui::Button(std::string(struc.supers[0] + "##" + std::to_string(reinterpret_cast<__int64>(&struc.supers[0]))).c_str()))
        {
            openTabFromCName(struc.supers[0]);
        }
        ImGui::PopStyleColor(6);
    }
    ImGui::SameLine(-10);
    ImGui::Text("{");
    int i = 0;
    for (auto& member : struc.members)
    {
        if (member.missed || member.userEdited)
        {
            
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
            if (ImGui::Button(merge(ICON_FA_PENCIL, std::string("##" + std::to_string(reinterpret_cast<__int64>(&member.missed))))))
            {
                EditWindow::pushEdit(&struc, &member);
            }
            ImGui::SameLine();
        }


        ImGui::SetCursorPosX(50);
        if(!member.type.clickable)
            ImGui::TextColored(IGHelper::Colors::varTypeBlue, member.type.name.c_str());
        else
        {
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0,0,0,0));
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0,0,0,0));
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0,0,0,0));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_Text, member.type.propertyType != PropertyType::EnumProperty ? IGHelper::Colors::classGreen : IGHelper::Colors::numberGreen);
            
            if(member.type.subTypes.size() > 0)
            {
                i++;
                ImGui::BeginChild(std::string("##childitemwindow" + struc.fullName + std::to_string(i)).c_str(), ImVec2(370, 37), false, ImGuiWindowFlags_HorizontalScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
                //ImGui::SetScrollX(0);

                ImGui::SameLineEx(-5);
                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);

                if (ImGui::Button(std::string(member.type.name + "##" + std::to_string(reinterpret_cast<__int64>(&member.type.name))).c_str()))
                {
                    if (!openTabFromCName(member.type.name))
                    {
                        LogWindow::Log(LogWindow::log_4, "PACKAGEVIEWER", "Object %s not found!", member.type.name.c_str());
                    }
                }
                ImGui::SameLineEx(-1);
                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
                ImGui::TextColored(IGHelper::Colors::white, "<");
                ImGui::SameLineEx(-6);

                for(int j = 0; j < member.type.subTypes.size(); j++)
                {
                    auto& subType = member.type.subTypes[j];
                    if (subType.clickable)
                    {
                        ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
                        if (ImGui::Button(std::string(subType.name + "##" + std::to_string(reinterpret_cast<__int64>(&subType.name))).c_str()) && !openTabFromCName(subType.name))
                        {
                            LogWindow::Log(LogWindow::log_4, "PACKAGEVIEWER", "Object %s not found!", subType.name.c_str());
                        }
                        ImGui::SameLineEx(-5);
                        if (member.type.subTypes[j].propertyType == PropertyType::ObjectProperty || member.type.subTypes[j].propertyType == PropertyType::ClassProperty)
                        {
                            ImGui::TextColored(IGHelper::Colors::white, "*");
                            ImGui::SameLineEx(2);
                        }
                    }
                    else
                    {
                        ImGui::SameLineEx(2, -3);
                        ImGui::TextColored(IGHelper::Colors::varTypeBlue, subType.name.c_str());
                        ImGui::SameLineEx(2);
                    }

                    

                    if(j < member.type.subTypes.size() - 1)
                    {
                        ImGui::SameLineEx(-4, -3);
                        ImGui::TextColored(IGHelper::Colors::white, ",");
                        ImGui::SameLineEx(2);
                    }
                }

                ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 3);
                ImGui::TextColored(IGHelper::Colors::white, ">");
                
                ImGui::EndChild();
            }
            else
            {

                bool clicked = false;
                ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 5);
                if (ImGui::Button(std::string(member.type.name + "##" + std::to_string(reinterpret_cast<__int64>(&member.type.name))).c_str()))
                    clicked = true;

                if (member.type.propertyType == PropertyType::ObjectProperty || member.type.propertyType == PropertyType::ClassProperty)
                {
                    ImGui::SameLineEx(-5);
                    ImGui::TextColored(IGHelper::Colors::white, "*");
                }

                if(clicked && !openTabFromCName(member.type.name))
                {
	                LogWindow::Log(LogWindow::log_4, "PACKAGEVIEWER", "Object %s not found!", member.type.name.c_str());
                }
                

            }
            ImGui::PopStyleColor(6);
            
        }
        ImGui::SameLine();
        ImGui::SetCursorPosX(440);
        ImGui::TextColored(IGHelper::Colors::varPink, member.name.length() > 48 ? "%.48s.." : "%s", member.name.c_str());
        if (ImGui::IsItemHovered() && member.name.length() > 48)
        {
            ImGui::BeginTooltip();
            ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
            std::string st = member.name;
            if (member.isBit)
                st += " : 1";
            ImGui::TextUnformatted(st.c_str());
            ImGui::PopTextWrapPos();
            ImGui::EndTooltip();
        }
        if (member.isBit)
        {
            ImGui::SameLine();
            ImGui::Text(":");
            ImGui::SameLine();
            ImGui::TextColored(IGHelper::Colors::numberGreen, "1");
        }

        ImGui::SameLine();
        ImGui::SetCursorPosX(960);
        if (member.isBit)
			ImGui::TextColored(IGHelper::Colors::commentGreen, "0x%04X:%d", member.offset, member.bitOffset);
        else 
            ImGui::TextColored(IGHelper::Colors::commentGreen, "0x%04X", member.offset);
        ImGui::SameLine();
        ImGui::SetCursorPosX(1050);
        ImGui::TextColored(IGHelper::Colors::commentGreen, "(0x%04X)", member.size);
        if (member.type.subTypes.size() > 0)
        {
            ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 7);
        }
    }
}

void windows::PackageViewerWindow::renderEnum(const EngineStructs::Package& package, const int index)
{
	const auto& eEnum = package.enums[index];
	
    if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(reinterpret_cast<__int64>(&eEnum.memoryAddress))).c_str()))
    {
        char address[30];
        sprintf_s(address, "0x%llX", eEnum.memoryAddress);
        IGHelper::copyToClipBoard(std::string(address));
        LogWindow::Log(LogWindow::log_4, "PACKAGEVIEWER", "Copied address to clipboard!");
    }
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
	ImGui::Text("Memory address: 0x%p", eEnum.memoryAddress);
	ImGui::Text("Enum index: %d (Package index: %d)", index, index + package.structs.size());

	ImGui::Text("Items: %d", eEnum.members.size());
	ImGui::Text("Name: %s", eEnum.fullName.c_str());
	ImGui::PopStyleColor();
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted(eEnum.fullName.c_str());
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}
	ImGui::TextColored(IGHelper::Colors::varTypeBlue, "enum ");
	ImGui::SameLine();
	ImGui::TextColored(IGHelper::Colors::classGreen, eEnum.cppName.c_str());
	ImGui::SameLine();
	ImGui::Text(":");
	ImGui::SameLine();
	ImGui::TextColored(IGHelper::Colors::numberGreen, eEnum.type.c_str()); //enum col is number col
	for (int i = 0; i < eEnum.members.size(); i++)
	{
		ImGui::SetCursorPosX(50);
		ImGui::TextColored(IGHelper::Colors::numberGreen, eEnum.members[i].first.c_str());
		ImGui::SameLine();
		ImGui::SetCursorPosX(650);
		ImGui::Text("=");
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::numberGreen, "%d", eEnum.members[i].second);
	}
}

void windows::PackageViewerWindow::setOpenTabsClosed()
{
    //for(auto& tab : Tabs)
    //{
    //    tab.open = false;
    //}
}


void windows::PackageViewerWindow::updateNavBar(NavigationTab& navtab, int itemSelected)
{
    //dont do anything if the user tries to go into the tab that is currently the tab
    int currentTab = navtab.tabIndex[navtab.currentVecIndex];
    if (currentTab == itemSelected)
        return;
    //remove all forward possibilities if were somewhere in the middle
    while (navtab.tabIndex.size() > navtab.currentVecIndex + 1)
    {
        navtab.tabIndex.pop_back();
    }
    
    navtab.tabIndex.push_back(itemSelected);
    navtab.currentVecIndex++;
}







bool windows::PackageViewerWindow::openTabFromCName(const std::string& name)
{
	const auto info = EngineCore::getInfoOfObject(name);
    if (info.packageIndex != -1)
    {
        //ImGui::SetTabItemClosed(package.packageName.c_str());
        const auto vecIndex = EngineCore::getVectorIndexForPackageIndex(info.packageIndex);
        if (vecIndex != -1)
        {
            //if enum add enum offset to it
            createTab(vecIndex, info.isStruct ? info.objectIndex : info.objectIndex + EngineCore::getPackages()[vecIndex].structs.size());
            return true;
        }

    }
    return false;
}

void windows::PackageViewerWindow::generatePackage(std::ofstream& file, const EngineStructs::Package& package)
{
    for(const auto& struc : package.structs)
    {
        if (struc.isClass)
            file << "/// Class " << struc.fullName << std::endl;
        else
            file << "/// Struct " << struc.fullName << std::endl;
    	char buf[100] = { 0 };
    	sprintf_s(buf, "Size: 0x%04X (0x%06X - 0x%06X)", struc.size - struc.inheretedSize, struc.inheretedSize, struc.size);
    	file << "/// " << buf << std::endl;
        if(struc.isClass)
    		file << "class " << struc.cppName;
        else
            file << "struct " << struc.cppName;

        if (struc.inherited && struc.isClass)
            file << " : public " << struc.supers[0];
        else if (struc.inherited)
            file << " : " << struc.supers[0];

        file << "\n{ " << std::endl;

        if (struc.isClass)
            file << "public:" << std::endl;

        for(const auto& member : struc.members)
        {
            char finalBuf[300];
            char nameBuf[200];
            std::string name = member.name;
            if (member.isBit)
                name += " : 1";
            sprintf_s(nameBuf, "%-50s %s;", member.type.stringify().c_str(), name.c_str());
            if(member.isBit)
				sprintf_s(finalBuf, "	%-110s // 0x%04X:%d (0x%04X) ", nameBuf, member.offset, member.bitOffset, member.size);
            else
                sprintf_s(finalBuf, "	%-110s // 0x%04X   (0x%04X) ", nameBuf, member.offset, member.size);
            file << finalBuf << " " <<static_cast<int>(member.type.propertyType);
            if (member.userEdited)
                file << "USER-MODIFIED";
            else if (member.missed)
                file << "MISSED";
            file << std::endl;

        }
        file << "};\n\n";

    }
    for(const auto& enu : package.enums)
    {
        file << "/// Enum " << enu.fullName << std::endl;
        char buf[100] = { 0 };
        sprintf_s(buf, "Size: 0x%02d", enu.members.size());
        file << "/// " << buf << std::endl;
        file << "enum " << enu.cppName << " : " << enu.type << std::endl;
        file << "{" << std::endl;
        int j = 0;
        for (const auto& member : enu.members)
        {
            j++;
            char memberBuf[300];
            sprintf_s(memberBuf, "	%-80s = %d%s", member.first.c_str(), member.second, j == enu.members.size() ? "" : ",");
            file << memberBuf << std::endl;
        }
        file << "};\n\n";
    }
}

windows::PackageViewerWindow::PackageViewerWindow()
{

}

void windows::PackageViewerWindow::renderTabs()
{
    auto& packages = EngineCore::getPackages();
    bool showing = false;
    for (auto& tab : Tabs)
    {
        auto& package = packages[tab.packageSelected];
        if (ImGui::BeginTabItem(package.packageName.c_str(), &tab.open, tab.focus ? ImGuiTabItemFlags_SetSelected : ImGuiTabItemFlags_None))
        {
            showing = true;
            if (tab.focus)
            {
                tab.focus = false;
            }

            ImGui::BeginDisabled(tab.navTab.currentVecIndex < 1 ? true : false);
            if (ImGui::ArrowButton("navtab_btn_left", ImGuiDir_Left))
            {
                tab.navTab.currentVecIndex--;
                tab.itemSelected = tab.navTab.tabIndex[tab.navTab.currentVecIndex];
            }
            ImGui::SameLine();
            ImGui::EndDisabled();
            ImGui::BeginDisabled(tab.navTab.currentVecIndex >= tab.navTab.tabIndex.size() - 1 ? true : false);
            if (ImGui::ArrowButton("navtab_btn_right", ImGuiDir_Right))
            {
                tab.navTab.currentVecIndex++;
                tab.itemSelected = tab.navTab.tabIndex[tab.navTab.currentVecIndex];
            }
            ImGui::EndDisabled();
            ImGui::SameLine();
            const auto packageTextPosY = ImGui::GetCursorPosY();
            ImGui::TextColored(IGHelper::Colors::packagePurple, "Package %s", package.packageName.c_str());

            ImGui::BeginChild(std::string("tabchildviewer" + package.packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 420, ImGui::GetWindowSize().y - 85), true);

            //heavy cpu usage on large packages!
            if (tab.itemSelected == -1)
            {
                for (int i = 0; i < package.itemCount; i++)
                {
                    if (i < package.structs.size())
                        renderClassOrStruct(package, i);
                    else
                    {
                        const int enumSelected = i - package.structs.size();
                        if (enumSelected < package.enums.size())
                        {
                            renderEnum(package, enumSelected);
                        }
                    }

                    ImGui::Dummy(ImVec2(30, 40));
                    ImGui::Separator();
                }
            }
            else
            {
                if (tab.itemSelected < package.structs.size())
                    renderClassOrStruct(package, tab.itemSelected);
                else
                {
                    const int enumSelected = tab.itemSelected - package.structs.size();
                    if (enumSelected < package.enums.size())
                    {
                        renderEnum(package, enumSelected);
                    }
                }
            }
            ImGui::EndChild();
            ImGui::SameLine();
            ImGui::SetCursorPosY(packageTextPosY);
            ImGui::BeginChild("packageContentsChild", ImVec2(400, ImGui::GetWindowSize().y - 50), true);
            if (ImGui::ArrowButton("itemselect_btn_left", ImGuiDir_Left) && tab.itemRange >= 100)
                tab.itemRange -= 100;
            ImGui::SameLine();
            if (ImGui::ArrowButton("itemselect_btn_right", ImGuiDir_Right) && tab.itemRange + 100 < package.itemCount)
                tab.itemRange += 100;
            ImGui::SameLine();
            ImGui::Text("Items %d-%d of %d", tab.itemRange, tab.itemRange + 99 > package.itemCount ? package.itemCount : tab.itemRange + 99, package.itemCount);

            if (ImGui::BeginListBox(std::string("##packageContentslistbox" + package.packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 20, ImGui::GetWindowSize().y - 50)))
            {
                ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.0f, 1.0f, 0.0f, 1.0f));
                if (ImGui::Selectable("Show entire Package")) {
                    tab.itemSelected = -1;
                }
                ImGui::PopStyleColor();

                for (int i = tab.itemRange; i < package.itemCount && i < tab.itemRange + 99; i++)
                {
                    if (i < package.structs.size())
                    {
                        const bool is_selected = (tab.itemSelected == i);
                        ImGui::PushStyleColor(ImGuiCol_Text, package.structs.at(i).isClass ? IGHelper::Colors::classOrange : IGHelper::Colors::red);
                        if (ImGui::Selectable(std::string((package.structs.at(i).isClass ? "C##" : "S##") + package.structs.at(i).cppName).c_str(), is_selected)) {
                            tab.itemSelected = i;
                            updateNavBar(tab.navTab, i);
                        }
                        ImGui::PopStyleColor();
                        ImGui::SameLine();
                        ImGui::TextColored(package.structs.at(i).members.size() > 0 ? IGHelper::Colors::white : IGHelper::Colors::grayedOut, package.structs.at(i).cppName.c_str());
                        if (is_selected && ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(package.structs.at(i).cppName.c_str());
                            ImGui::EndTooltip();
                        }
                    }
                    else
                    {
                        const int j = i - package.structs.size();
                        //hmmm
                        if (j >= package.enums.size())
                            continue;

                        const bool is_selected = (tab.itemSelected == i);
                        ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::enumBlue);
                        if (ImGui::Selectable(std::string("E##" + package.enums.at(j).cppName).c_str(), is_selected)) {
                            tab.itemSelected = i;
                            updateNavBar(tab.navTab, i);
                        }
                        ImGui::PopStyleColor();
                        ImGui::SameLine();
                        ImGui::Text(package.enums.at(j).cppName.c_str());
                        if (is_selected && ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(package.enums.at(j).cppName.c_str());
                            ImGui::EndTooltip();
                        }
                    }
                }
                ImGui::EndListBox();
            }
            ImGui::EndChild();
            ImGui::EndTabItem();

        }
    }
    if(Tabs.size() == 0 || !showing)
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
	ImGui::BeginChild("PackageViewerChild", ImVec2(ImGui::GetWindowSize().x - 350, ImGui::GetWindowSize().y - 350), true, ImGuiWindowFlags_NoScrollbar);
	
    
    if (ImGui::BeginTabBar("PackageTabtab", ImGuiTabBarFlags_Reorderable))
    {
        renderTabs();
        ImGui::EndTabBar();
    }
	ImGui::EndChild();

    EditWindow::renderEdits();
    

	return false;
}

void windows::PackageViewerWindow::createTab(const int package, const int itemSelected)
{
    //dont create double packages
    for(auto& tab : Tabs)
    {
        if (tab.packageSelected == package)
        {
            tab.itemSelected = itemSelected;
            tab.focus = true;
            tab.open = true;
            updateNavBar(tab.navTab, itemSelected);

            return;
            
        }
            
    }
    //setOpenTabsClosed();
    PackageTab t;
    t.packageSelected = package;
    t.itemSelected = itemSelected;
    t.focus = true;
    t.open = true;
    t.navTab.currentVecIndex = 0;
    t.navTab.tabIndex.push_back(itemSelected);
    Tabs.push_back(t);
}
