#include "PackageViewerWindow.h"
#include "EditWindow.h"
#include "LogWindow.h"
#include "Engine/Core/Core.h"
#include "Frontend/IGHelper.h"
#include "Frontend/Fonts/fontAwesomeHelper.h"
#include "Frontend/Texture/TextureCreator.h"


void windows::PackageViewerWindow::renderSubTypes(const fieldType& type, bool inChild)
{
    if(inChild)
    {
        ImGui::BeginChild(std::string("##childitemwindow" + type.name + std::to_string(reinterpret_cast<uint64_t>(&type.name))).c_str(), ImVec2(370, 37), false, ImGuiWindowFlags_HorizontalScrollbar | ImGuiWindowFlags_NoScrollWithMouse);
        //ImGui::SetScrollX(0);
        
    }

    if (ImGui::Button(std::string(type.name + "##" + std::to_string(reinterpret_cast<__int64>(&type.name))).c_str()))
    {
        if (!openTabFromCName(type.name))
        {
            LogWindow::Log(LogWindow::log_2, "PACKAGEVIEWER", "Object %s not found!", type.name.c_str());
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
                LogWindow::Log(LogWindow::log_2, "PACKAGEVIEWER", "Object %s not found!", subType.name.c_str());
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

    if(inChild)
		ImGui::EndChild();
}

void windows::PackageViewerWindow::renderClassOrStruct(PackageTab& tab, int index, EngineStructs::Struct& struc)
{
    //copy button for clipboard
    if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(reinterpret_cast<__int64>(&struc.memoryAddress))).c_str()))
    {
        char address[30];
        sprintf_s(address, "0x%llX", struc.memoryAddress);
        IGHelper::copyToClipBoard(std::string(address));
        LogWindow::Log(LogWindow::log_2, "PACKAGEVIEWER", "Copied address to clipboard!");
    }
    ImGui::SameLine();
    //render some infos in green
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
    ImGui::Text("Memory address: 0x%p", struc.memoryAddress);
    if(struc.isClass)
		ImGui::Text("Class index: %d", index);
    else
        ImGui::Text("Struct index: %d", index);
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

    for (auto& member : struc.cookedMembers)
    {
        if (member.missed || member.userEdited)
        {
            
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
                renderSubTypes(member.type, true);
            }
            else
            {

                bool clicked = false;
                if (ImGui::Button(std::string(member.type.name + "##" + std::to_string(reinterpret_cast<__int64>(&member.type.name))).c_str()))
                    clicked = true;

                if (member.type.propertyType == PropertyType::ObjectProperty || member.type.propertyType == PropertyType::ClassProperty)
                {
                    ImGui::SameLineEx(0);
                    ImGui::TextColored(IGHelper::Colors::white, "*");
                }

                if(clicked && !openTabFromCName(member.type.name))
                    LogWindow::Log(LogWindow::log_2, "PACKAGEVIEWER", "Object %s not found!", member.type.name.c_str());
                
            }
            ImGui::PopStyleColor(6);
            
        }
        ImGui::SameLine();
        constexpr auto nameOffset = 440;
        ImGui::SetCursorPosX(nameOffset);
        ImGui::TextColored(IGHelper::Colors::varPink, member.name.length() > 48 ? "%.48s.." : "%s", member.name.c_str());
        auto toLower = [&](const std::string& st)
        {
            std::string s;
            for(const char c : st)
            {
                s += std::tolower(c);
            }
            return s;
        };
        ImGui::SameLine();
        std::string obj = std::string(tab.objectBuf);
        if(tab.findObject >= PackageTab::findState::FS_highlight && strcmp(toLower(member.name).c_str(), toLower(obj).c_str()) == 0)
        {
            const float posX = ImGui::GetCursorPosX();
            const float posY = ImGui::GetCursorPosY() + ImGui::GetFontSize() + 6 - ImGui::GetScrollY() + 80;
            if(tab.findObject == PackageTab::findState::FS_hard)
            {
                ImGui::SetScrollFromPosY(posY);
                //so we dont scroll over and over here, which also means if items have the same name
                //only the first gets targeted
                tab.findObject = PackageTab::findState::FS_highlight;
            }
            //fancy highlight
            ImGui::GetWindowDrawList()->AddRectFilled(
                ImVec2(ImGui::GetWindowPos().x + nameOffset, posY), 
                ImVec2(ImGui::GetWindowPos().x + posX - 3, posY + ImGui::GetFontSize() + 5), 
                ImGui::GetColorU32(IGHelper::colToVec(179, 59, 0, 100)));
        }
        
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
            //sameline was here before, however it got added above already
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

void windows::PackageViewerWindow::renderEnum(int index, const EngineStructs::Enum& enu)
{
	
    if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(reinterpret_cast<__int64>(&enu.memoryAddress))).c_str()))
    {
        char address[30];
        sprintf_s(address, "0x%llX", enu.memoryAddress);
        IGHelper::copyToClipBoard(std::string(address));
        LogWindow::Log(LogWindow::log_2, "PACKAGEVIEWER", "Copied address to clipboard!");
    }
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
	ImGui::Text("Memory address: 0x%p", enu.memoryAddress);
	ImGui::Text("Enum index: %d", index);

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

void windows::PackageViewerWindow::renderFunction(int index, std::pair<const EngineStructs::Function&, const EngineStructs::Struct&> pair)
{
    auto copyToClipBoard = [&](uint64_t address)
    {
        if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(address)).c_str()))
        {
            char addressBuf[30];
            sprintf_s(addressBuf, "0x%llX", address);
            IGHelper::copyToClipBoard(std::string(addressBuf));
            LogWindow::Log(LogWindow::log_2, "PACKAGEVIEWER", "Copied address to clipboard!");
        }
    };

    const auto& func = pair.first;

    copyToClipBoard(reinterpret_cast<uint64_t>(&func.memoryAddress));
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
    ImGui::Text("Memory address: 0x%p", func.memoryAddress);
    ImGui::Text("Function index: %d", index);
    ImGui::PopStyleColor();
    copyToClipBoard(func.binaryOffset);
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::commentGreen);
    ImGui::Text("Function offset in the Binary: 0x%p", func.binaryOffset);
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
    

    if(func.returnType.clickable)
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
                LogWindow::Log(LogWindow::log_2, "PACKAGEVIEWER", "Type %s not found!", func.returnType.name.c_str());
        }
        ImGui::PopStyleColor(6);
    }
    else
		ImGui::TextColored(IGHelper::Colors::varTypeBlue, func.returnType.name.c_str());

    ImGui::SameLine();
    ImGui::TextColored(IGHelper::Colors::classGreen, pair.second.cppName.c_str());
    ImGui::SameLineEx(0);
    ImGui::TextColored(IGHelper::Colors::bracketGray, "::");
    ImGui::SameLineEx(0);
    ImGui::TextColored(IGHelper::Colors::functionYellow, func.cppName.c_str());
    ImGui::SameLineEx(0);
    ImGui::TextColored(IGHelper::Colors::bracketGray, "(");
    
    ImGui::SameLineEx(0);
    for(int i = 0; i < func.params.size(); i++)
    {
        if (ImGui::GetCursorPosX() > ImGui::GetWindowSize().x - 250)
        {
            ImGui::Dummy({ 0,0 });
            ImGui::SetCursorPosX(150);
        }
            
			
        if(std::get<0>(func.params.at(i)).clickable)
        {
            ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_BorderShadow, ImVec4(0, 0, 0, 0));
            ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);

            if(std::get<0>(func.params.at(i)).subTypes.size() > 0)
            {
                renderSubTypes(std::get<0>(func.params.at(i)), false);
                ImGui::SameLineEx(0);
            }
                
            else
            {
                if (ImGui::Button(std::string(std::get<0>(func.params.at(i)).name + "##" + std::to_string(reinterpret_cast<__int64>(&std::get<0>(func.params.at(i)).name))).c_str()))
                {
                    if (!openTabFromCName(std::get<0>(func.params.at(i)).name))
                        LogWindow::Log(LogWindow::log_2, "PACKAGEVIEWER", "Param type %s not found!", std::get<0>(func.params.at(i)).name.c_str());
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
            

	    if(std::get<3>(func.params.at(i)) > 1)
	    {
            ImGui::TextColored(IGHelper::Colors::paramGray, "*");
            ImGui::SameLine();
	    }
        else if(std::get<2>(func.params.at(i)) & EPropertyFlags::CPF_OutParm)
        {
            ImGui::TextColored(IGHelper::Colors::paramGray, "&");
            ImGui::SameLine();
        }
        else
            ImGui::SameLine();

        if(i < func.params.size() - 1)
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


void windows::PackageViewerWindow::updateNavBar(NavigationTab& navtab, int itemSelected, EngineCore::ObjectInfo::ObjectType typeSelected)
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
    if (info.packageIndex != -1)
    {
        //ImGui::SetTabItemClosed(package.packageName.c_str());
        const auto vecIndex = EngineCore::getVectorIndexForPackageIndex(info.packageIndex);
        if (vecIndex != -1)
        {
            createTab(vecIndex, info.objectIndex, info.type);
            return true;
        }

    }
    return false;
}

void windows::PackageViewerWindow::generatePackage(std::ofstream& file, const EngineStructs::Package& package)
{
    auto generateStruct = [&](const std::vector<EngineStructs::Struct>& DataStruc)
    {
        for (const auto& struc : DataStruc)
        {
            if (struc.isClass)
                file << "/// Class " << struc.fullName << std::endl;
            else
                file << "/// Struct " << struc.fullName << std::endl;
            char buf[100] = { 0 };
            sprintf_s(buf, "Size: 0x%04X (0x%06X - 0x%06X)", struc.size - struc.inheretedSize, struc.inheretedSize, struc.size);
            file << "/// " << buf << std::endl;
            if (struc.isClass)
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

            for (const auto& member : struc.cookedMembers)
            {
                char finalBuf[600];
                char nameBuf[500];
                std::string name = member.name;
                if (member.isBit)
                    name += " : 1";
                sprintf_s(nameBuf, "%-50s %s;", member.type.stringify().c_str(), name.c_str());
                if (member.isBit)
                    sprintf_s(finalBuf, "	%-110s // 0x%04X:%d (0x%04X) ", nameBuf, member.offset, member.bitOffset, member.size);
                else
                    sprintf_s(finalBuf, "	%-110s // 0x%04X   (0x%04X) ", nameBuf, member.offset, member.size);
                file << finalBuf << " "; // << static_cast<int>(member.type.propertyType);
                if (member.userEdited)
                    file << "USER-MODIFIED";
                else if (member.missed)
                    file << "MISSED";
                file << std::endl;

            }

            // Add function section header
            if (!struc.functions.empty())
            {
                file << "\n\n\t/// Functions" << std::endl;
            }

            for (const auto& func : struc.functions)
            {
                file << "\t// Function " << func.fullName << std::endl;
                char funcBuf[1200];
                std::string params = func.returnType.stringify() + " " + func.cppName.c_str() + "(";
                for (auto param : func.params)
                {
                    params += std::get<0>(param).stringify();
                    if (std::get<3>(param) > 1)
                        params += "*";
                    else if (std::get<2>(param) & EPropertyFlags::CPF_OutParm)
                        params += "&";
                    params += " " + std::get<1>(param) + ", ";
                }
                if (func.params.size() > 0)
					params = params.erase(params.size() - 2);
                params += ");";



                sprintf_s(funcBuf, "	%-120s // [0x%llx] %-20s ", params.c_str(), func.binaryOffset, func.functionFlags.c_str());
                file << funcBuf << std::endl;
            }
            file << "};\n\n";

        }
    };

    generateStruct(package.classes);
    generateStruct(package.structs);
    
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

void windows::PackageViewerWindow::topmostCallback()
{

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


            ImGui::BeginDisabled(tab.navTab.currentVecIndex < 1 ? true : false);
            if (ImGui::ArrowButton("navtab_btn_left", ImGuiDir_Left))
            {
                tab.navTab.currentVecIndex--;
                tab.itemSelected = tab.navTab.tabIndex[tab.navTab.currentVecIndex].first;
                tab.typeSelected = tab.navTab.tabIndex[tab.navTab.currentVecIndex].second;
            }
            ImGui::SameLine();
            ImGui::EndDisabled();
            ImGui::BeginDisabled(tab.navTab.currentVecIndex >= tab.navTab.tabIndex.size() - 1 ? true : false);
            if (ImGui::ArrowButton("navtab_btn_right", ImGuiDir_Right))
            {
                tab.navTab.currentVecIndex++;
                tab.itemSelected = tab.navTab.tabIndex[tab.navTab.currentVecIndex].first;
                tab.typeSelected = tab.navTab.tabIndex[tab.navTab.currentVecIndex].second;
            }
            ImGui::EndDisabled();
            ImGui::SameLine();
            const auto packageTextPosY = ImGui::GetCursorPosY();
            ImGui::TextColored(IGHelper::Colors::packagePurple, "Package %s", package.packageName.c_str());

            ImGui::SameLine();
            ImGui::SetCursorPosX(ImGui::GetWindowSize().x - 730);
            ImGui::PushItemWidth(278);
            //disabled if it snot a struct or class. I mean who needs enum search? And functions is useless, use the search top left....
            ImGui::BeginDisabled(tab.typeSelected != EngineCore::ObjectInfo::OI_Class && tab.typeSelected != EngineCore::ObjectInfo::OI_Struct);
            std::string beforeTest = std::string(tab.objectBuf);
            //we cant scroll here as we arent in any scroll window
            if (ImGui::InputTextWithHint("##CNameSearchBox", "Search for Object...", tab.objectBuf, sizeof(tab.objectBuf) - 1, ImGuiInputTextFlags_EnterReturnsTrue))
            {
                //tells the renderX functions to find the Object (used for scrolling)
                tab.findObject = PackageTab::findState::FS_hard;
            }
            //highlight mode + buffer changed -> reset
            if(tab.findObject == PackageTab::findState::FS_highlight && strcmp(beforeTest.c_str(), std::string(tab.objectBuf).c_str()) != 0)
            {
                tab.findObject = PackageTab::findState::FS_none;
            }
            ImGui::SameLine();
            if (ImGui::Button(ICON_FA_SEARCH))
            {
                tab.findObject = PackageTab::findState::FS_hard;
            }
            ImGui::EndDisabled();
            ImGui::PopItemWidth();
            ImGui::BeginChild(std::string("tabchildviewer" + package.packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 420, ImGui::GetWindowSize().y - 85), true);

            ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 0,0 });

            //heavy cpu usage on large packages!
            if (tab.itemSelected == -1)
            {
                auto addSpacing = [&]
                {
                    ImGui::Dummy(ImVec2(30, 40));
                    ImGui::Separator();
                };

                int i = 0;

                if(tab.typeSelected == EngineCore::ObjectInfo::OI_Struct)
                {
                    for (auto& struc : package.structs)
                    {
                        renderClassOrStruct(tab, i++, struc);
                        addSpacing();
                    }
                }

                if (tab.typeSelected == EngineCore::ObjectInfo::OI_Class)
                {
                    for (auto& struc : package.classes)
                    {
                        renderClassOrStruct(tab, i++, struc);
                        addSpacing();
                    }
                }

                if (tab.typeSelected == EngineCore::ObjectInfo::OI_Enum)
                {
                    for (const auto& enu : package.enums)
                    {
                        renderEnum(i++, enu);
                        addSpacing();
                    }
                }
                if (tab.typeSelected == EngineCore::ObjectInfo::OI_Function)
                {
                    for(i = 0; i < package.functions.size(); i++)
                    {
                        renderFunction(i++, EngineCore::getFunctionFromVectorIndex(package, i));
                        addSpacing();
                    }
                }
            }
            else
            {
                if(tab.typeSelected == EngineCore::ObjectInfo::ObjectType::OI_Class && package.classes.size() > tab.itemSelected)
                    renderClassOrStruct(tab, tab.itemSelected, package.classes[tab.itemSelected]);

                if (tab.typeSelected == EngineCore::ObjectInfo::ObjectType::OI_Struct && package.structs.size() > tab.itemSelected)
                    renderClassOrStruct(tab, tab.itemSelected, package.structs[tab.itemSelected]);

                if (tab.typeSelected == EngineCore::ObjectInfo::ObjectType::OI_Function)
                    renderFunction(tab.itemSelected, EngineCore::getFunctionFromVectorIndex(package, tab.itemSelected));

                if (tab.typeSelected == EngineCore::ObjectInfo::ObjectType::OI_Enum && package.enums.size() > tab.itemSelected)
                    renderEnum(tab.itemSelected, package.enums[tab.itemSelected]);
                
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
                const auto& dataVector = isClass ? package.classes : package.structs;
                const EngineCore::ObjectInfo::ObjectType type = isClass ? EngineCore::ObjectInfo::ObjectType::OI_Class : EngineCore::ObjectInfo::ObjectType::OI_Struct;
                auto& itemRange = isClass ? tab.itemRange_C : tab.itemRange_S;
                renderItemRange(itemRange, dataVector.size());
                
                if (ImGui::BeginListBox(std::string("##packageContentslistbox" + package.packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 20, ImGui::GetWindowSize().y - 85)))
                {
                    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::varPink);
                    if (ImGui::Selectable(isClass ? "Show all Classes" : "Show all Structs")) {
                        tab.itemSelected = -1;
                        tab.typeSelected = type;
                    }
                    ImGui::PopStyleColor();

                    for (int i = itemRange; i < dataVector.size() && i < itemRange + 99; i++)
                    {
                        const bool is_selected = (tab.itemSelected == i && tab.typeSelected == type);
                        ImGui::PushStyleColor(ImGuiCol_Text, dataVector.at(i).cookedMembers.size() > 0 ? IGHelper::Colors::white : IGHelper::Colors::grayedOut);
                        if (ImGui::Selectable(dataVector.at(i).cppName.c_str(), is_selected)) {
                            tab.itemSelected = i;
                            tab.typeSelected = type;
                            updateNavBar(tab.navTab, i, tab.typeSelected);
                        }
                        ImGui::PopStyleColor();
                        if (is_selected && ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(dataVector.at(i).cppName.c_str());
                            ImGui::EndTooltip();
                        }
                    }
                    ImGui::EndListBox();
                }
            };

            //unused parameters to add support for the beginTab lambda

            auto renderFunctions = [&](bool unused)
            {
                renderItemRange(tab.itemRange_F, package.functions.size());

                if (ImGui::BeginListBox(std::string("##packageContentslistbox" + package.packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 20, ImGui::GetWindowSize().y - 85)))
                {
                    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::varPink);
                    if (ImGui::Selectable("Show all Functions")) {
                        tab.itemSelected = -1;
                        tab.typeSelected = EngineCore::ObjectInfo::ObjectType::OI_Function;
                    }
                    ImGui::PopStyleColor();

                    for (int i = tab.itemRange_F; i < package.functions.size() && i <  tab.itemRange_F + 99; i++)
                    {
                        const bool is_selected = (tab.itemSelected == i && tab.typeSelected == EngineCore::ObjectInfo::ObjectType::OI_Function);
                        

                        const auto& func = EngineCore::getFunctionFromVectorIndex(package, i);



                        //the tuple contains at last information the index of the function in the struct vector, if its 0, do->
                        if(std::get<2>(package.functions.at(i)) == 0)
                        {
                            ImGui::Selectable(std::string("##" + func.second.get().cppName + " functions").c_str(), false, ImGuiSelectableFlags_Disabled);
                            ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
                            ImGui::SameLine();
                            ImGui::Text(std::string(func.second.get().cppName + " functions").c_str());
                            ImGui::PopStyleColor();
                        }
                        ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::green);
                        if (ImGui::Selectable(std::string(std::string(ICON_FA_ANGLE_DOUBLE_RIGHT) + "##" + func.first.get().cppName).c_str(), is_selected)) {
                            
                            tab.itemSelected = i;
                            tab.typeSelected = EngineCore::ObjectInfo::ObjectType::OI_Function;
                            updateNavBar(tab.navTab, i, tab.typeSelected);
                        }
                        ImGui::PopStyleColor();
                        ImGui::SameLine();
                        ImGui::Text(func.first.get().cppName.c_str());
                        if (is_selected && ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(std::string(func.second.get().cppName + "::" + func.first.get().cppName).c_str());
                            ImGui::EndTooltip();
                        }
                    }
                    ImGui::EndListBox();
                }
            };

            auto renderEnums = [&](bool unused)
            {
                renderItemRange(tab.itemRange_E, package.enums.size());

                if (ImGui::BeginListBox(std::string("##packageContentslistbox" + package.packageName).c_str(), ImVec2(ImGui::GetWindowSize().x - 20, ImGui::GetWindowSize().y - 85)))
                {
                    ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::varPink);
                    if (ImGui::Selectable("Show all Enums")) {
                        tab.itemSelected = -1;
                        tab.typeSelected = EngineCore::ObjectInfo::ObjectType::OI_Enum;
                    }
                    ImGui::PopStyleColor();

                    for (int i = tab.itemRange_E; i < package.enums.size() && i < tab.itemRange_E + 99; i++)
                    {
                        const bool is_selected = (tab.itemSelected == i && tab.typeSelected == EngineCore::ObjectInfo::ObjectType::OI_Enum);
                        if (ImGui::Selectable(package.enums.at(i).cppName.c_str(), is_selected)) {
                            tab.itemSelected = i;
                            tab.typeSelected = EngineCore::ObjectInfo::ObjectType::OI_Enum;
                            updateNavBar(tab.navTab, i, tab.typeSelected);
                        }
                        if (is_selected && ImGui::IsItemHovered()) {
                            ImGui::BeginTooltip();
                            ImGui::Text(package.enums.at(i).cppName.c_str());
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

                beginTab("Structs##PackageContentsTabBar", IGHelper::Colors::red,tab.focus && tab.typeSelected == EngineCore::ObjectInfo::OI_Struct,renderStructorClass, false);
                beginTab("Classes##PackageContentsTabBar", IGHelper::Colors::classOrange, tab.focus&& tab.typeSelected == EngineCore::ObjectInfo::OI_Class, renderStructorClass, true);
                beginTab("Functions##PackageContentsTabBar", IGHelper::Colors::yellow, tab.focus&& tab.typeSelected == EngineCore::ObjectInfo::OI_Function, renderFunctions);
                beginTab("Enums##PackageContentsTabBar", IGHelper::Colors::enumBlue, tab.focus&& tab.typeSelected == EngineCore::ObjectInfo::OI_Enum, renderEnums);

                ImGui::EndTabBar();
            }

            ImGui::EndChild();
            ImGui::EndTabItem();

            if (tab.focus)
            {
                tab.focus = false;
            }
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

void windows::PackageViewerWindow::createTab(const int package, const int itemSelected, const EngineCore::ObjectInfo::ObjectType type)
{
    //dont create double packages
    for(auto& tab : Tabs)
    {
        if (tab.packageSelected == package)
        {
            tab.itemSelected = itemSelected;
            tab.focus = true;
            tab.open = true;
            tab.typeSelected = type;
            updateNavBar(tab.navTab, itemSelected, type);

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
    t.typeSelected = type;
    t.navTab.tabIndex.push_back(std::pair(itemSelected, type));
    Tabs.push_back(t);
}
