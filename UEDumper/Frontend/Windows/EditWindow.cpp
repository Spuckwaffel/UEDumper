// ReSharper disable CppDeprecatedEntity
#include "EditWindow.h"

#include "LogWindow.h"
#include "Engine/Core/Core.h"
#include "Frontend/IGHelper.h"


bool windows::EditWindow::overrideStruct(std::vector<NewType>& newTypes, char* buf)
{
	bool success = false;


	std::vector<EngineStructs::Member> members;
	for (int j = 0; j < newTypes.size(); j++)
	{
		EngineStructs::Member member;
		const auto& newType = newTypes[j];
		member.name = std::string(newType.name);
		member.isBit = newType.bitOffset > 0;
		member.bitOffset = newType.bitOffset;
		member.userEdited = true;
		member.offset = newType.offset;
		member.size = newType.size;
		member.missed = false;
		fieldType t;
		t.clickable = newType.clickable;
		t.name = std::string(newType.propertyName);
		t.propertyType = getPropertyTypeFromString(std::string(newType.propertyType));
		if (t.propertyType == PropertyType::Unknown)
		{
			sprintf(buf, "Invalid PropertyType for element %d!", j);
			success = false;
			break;
		}

		if (newType.bHas1Subtype)
		{
			fieldType t1;
			t1.clickable = newType.clickable1;
			t1.name = std::string(newType.propertyName1);
			t1.propertyType = getPropertyTypeFromString(std::string(newType.propertyType1));
			if (t1.propertyType == PropertyType::Unknown)
			{
				sprintf(buf, "Invalid subtype 1 PropertyType for element %d!", j);
				success = false;
				break;
			}
			t.subTypes.push_back(t1);
			if (newType.bHas2Subtypes)
			{
				fieldType t2;
				t2.clickable = newType.clickable2;
				t2.name = std::string(newType.propertyName2);
				t2.propertyType = getPropertyTypeFromString(std::string(newType.propertyType2));
				if (t2.propertyType == PropertyType::Unknown)
				{
					sprintf(buf, "Invalid subtype 2 PropertyType for element %d!", j);
					success = false;
					break;
				}
				t.subTypes.push_back(t1);
			}

		}
		member.type = t;
		members.push_back(member);
		success = true;
	}
	if (success)
	{
		LogWindow::Log(LogWindow::logLevels::LOGLEVEL_INFO, "PACKAGEVIEWER", "Updating Struct!");
		EngineCore::runtimeOverrideStructMembers(edit.editStruct, members);
		return true;
	}
	return false;
}

void windows::EditWindow::renderEditField()
{
    static bool useSubtypes = false;
    static bool use2Subtypes = false;
    static std::vector<NewType> newTypes;
    static char errorMsg[100] = { 0 };

    const ImVec2 bigWindow = IGHelper::getWindowSize();
    ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowFocus();
    ImGui::Begin("Edit Field", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_HorizontalScrollbar);
    ImGui::PopStyleVar();

    ImGui::SetWindowSize(ImVec2(1500, 700));
    const ImVec2 smallWindow = ImGui::GetWindowSize();
    ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
    ImGui::Text("You can fix the class in the editor, however using StructDefinitions.h is better. If you dont use any subtype, leave it empty.");
    ImGui::Text("Do not add unknown member bytes, they get automatically added");
    ImGui::Text("If you are unsure about any column or what name to give, please look at StructDefinitions.h as a reference.");
    ImGui::Text("Offset and size field require a hexadecimal number.");
    ImGui::TextColored(IGHelper::Colors::classOrange,
		"You are currently overriding the member %s at offset 0x%llX with a size of 0x%X bytes!", edit.editMember->name.c_str(), edit.editMember->offset, edit.editMember->size);

    if (ImGui::Button("Add new Member"))
    {
        newTypes.push_back(NewType());
    }
    ImGui::SameLine();

    if (ImGui::Checkbox("Use Subtypes##CB", &useSubtypes))
    {
        if (!useSubtypes)
            use2Subtypes = false;
    }
    if (useSubtypes)
    {
        ImGui::SameLine();
        ImGui::Checkbox("Use 2 Subtypes##CB", &use2Subtypes);
    }

    int columns = 7;
    if (useSubtypes)
        columns += 4;
    if (use2Subtypes)
        columns += 4;

    if (!ImGui::BeginTable("renderEditsTable", columns, ImGuiTableFlags_ScrollX | ImGuiTableFlags_Resizable | ImGuiTableFlags_Borders, ImVec2(1480, 400)))
    {
		ImGui::End();
		return;
    }

    //love to set the width and after all it doesnt even work most of the time
    ImGui::TableSetupColumn("Clickable##EditsTable", 0, 90);
    ImGui::TableSetupColumn("PropertyType##EditsTable", 0, 150);
    ImGui::TableSetupColumn("PropertyName##EditsTable", 0, 150);
    if (useSubtypes)
    {

	    ImGui::TableSetupColumn("Subtype 1##1EditsTable", 0, 90);
	    ImGui::TableSetupColumn("Clickable##1EditsTable", 0, 90);
	    ImGui::TableSetupColumn("PropertyType##1EditsTable", 0, 140);
	    ImGui::TableSetupColumn("PropertyName##1EditsTable", 0, 140);
	    if (use2Subtypes)
	    {
		    ImGui::TableSetupColumn("Subtype 2##1EditsTable", 0, 90);
		    ImGui::TableSetupColumn("Clickable##2EditsTable", 0, 90);
		    ImGui::TableSetupColumn("PropertyType##2EditsTable", 0, 140);
		    ImGui::TableSetupColumn("PropertyName##2EditsTable", 0, 140);
	    }
    }
    ImGui::TableSetupColumn("Member name##EditsTable", 0, 140);
    ImGui::TableSetupColumn("Bit Offset##EditsTable", 0, 90);
    ImGui::TableSetupColumn("Offset##EditsTable", 0, 60);
    ImGui::TableSetupColumn("Size##EditsTable", 0, 60);
    ImGui::TableHeadersRow();


    for (int i = 0; i < newTypes.size(); i++)
    {
	    auto& newType = newTypes[i];
	    ImGui::TableNextRow();
	    ImGui::TableNextColumn();
	    ImGui::Checkbox(std::string("##bcliclable1Cb:" + std::to_string(i)).c_str(), &newType.clickable);
	    ImGui::TableNextColumn();

	    ImGui::SetNextItemWidth(-FLT_MIN);
	    ImGui::InputTextWithHint(std::string("##PropertyType1ITWH:" + std::to_string(i)).c_str(), "ObjectProperty", newType.propertyType, sizeof(newType.propertyType));

	    ImGui::TableNextColumn();
	    ImGui::SetNextItemWidth(-FLT_MIN);
	    ImGui::InputTextWithHint(std::string("##PropertyName1ITWH:" + std::to_string(i)).c_str(), "UObject", newType.propertyName, sizeof(newType.propertyName));


	    if (useSubtypes)
	    {
		    ImGui::TableNextColumn();
		    if (ImGui::Checkbox(std::string("##bSubtype1Cb:" + std::to_string(i)).c_str(), &newType.bHas1Subtype))
		    {
			    if (!newType.bHas1Subtype)
				    newType.bHas2Subtypes = false;
		    }
		    ImGui::BeginDisabled(!newType.bHas1Subtype);
		    ImGui::TableNextColumn();
		    ImGui::Checkbox(std::string("##bcliclable2Cb:" + std::to_string(i)).c_str(), &newType.clickable1);
		    ImGui::TableNextColumn();
		    ImGui::SetNextItemWidth(-FLT_MIN);
		    ImGui::InputTextWithHint(std::string("##PropertyType2ITWH:" + std::to_string(i)).c_str(), "ObjectProperty", newType.propertyType1, sizeof(newType.propertyType1));
		    ImGui::TableNextColumn();
		    ImGui::SetNextItemWidth(-FLT_MIN);
		    ImGui::InputTextWithHint(std::string("##PropertyName2ITWH:" + std::to_string(i)).c_str(), "UClass", newType.propertyName1, sizeof(newType.propertyName1));

		    if (use2Subtypes)
		    {
			    ImGui::TableNextColumn();
			    ImGui::Checkbox(std::string("##bSubtype2Cb:" + std::to_string(i)).c_str(), &newType.bHas2Subtypes);
			    ImGui::BeginDisabled(!newType.bHas2Subtypes);
			    ImGui::TableNextColumn();
			    ImGui::Checkbox(std::string("##bcliclable3Cb:" + std::to_string(i)).c_str(), &newType.clickable2);
			    ImGui::TableNextColumn();
			    ImGui::SetNextItemWidth(-FLT_MIN);
			    ImGui::InputTextWithHint(std::string("##PropertyType3ITWH:" + std::to_string(i)).c_str(), "NameProperty", newType.propertyType2, sizeof(newType.propertyType2));
			    ImGui::TableNextColumn();
			    ImGui::SetNextItemWidth(-FLT_MIN);
			    ImGui::InputTextWithHint(std::string("##PropertyName3ITWH:" + std::to_string(i)).c_str(), "FName", newType.propertyName2, sizeof(newType.propertyName2));
			    ImGui::EndDisabled();
		    }
		    ImGui::EndDisabled();
	    }
	    ImGui::TableNextColumn();
	    ImGui::SetNextItemWidth(-FLT_MIN);
	    ImGui::InputTextWithHint(std::string("##VarName1ITWH:" + std::to_string(i)).c_str(), "CoolName", newType.name, sizeof(newType.name));
	    ImGui::TableNextColumn();
	    ImGui::PushItemWidth(40);
	    ImGui::SetNextItemWidth(-FLT_MIN);
	    ImGui::DragInt(std::string("##BitOffsetDI" + std::to_string(i)).c_str(), &newType.bitOffset, 1, 0, 7);
	    ImGui::PopItemWidth();
	    ImGui::TableNextColumn();
	    ImGui::SetNextItemWidth(-FLT_MIN);
	    ImGui::InputInt(std::string("##Offset1ITWH:" + std::to_string(i)).c_str(), &newType.offset, 0, 100, ImGuiInputTextFlags_CharsHexadecimal);
	    ImGui::TableNextColumn();
	    ImGui::SetNextItemWidth(-FLT_MIN);
	    ImGui::InputInt(std::string("##size1ITWH:" + std::to_string(i)).c_str(), &newType.size, 0, 100, ImGuiInputTextFlags_CharsHexadecimal);

    }

    ImGui::EndTable();

    ImGui::TextColored(IGHelper::Colors::red, errorMsg);
	ImGui::Dummy(ImVec2(smallWindow.x / 2 - 95, 10));
	ImGui::SameLine();
    if (ImGui::Button("Set changes") && overrideStruct(newTypes, errorMsg))
    {
		useSubtypes = false;
		use2Subtypes = false;
		newTypes.clear();
		memset(errorMsg, 0, 100);
		edit.bRenderEdits = false;
    }
	ImGui::SameLine();
	if (ImGui::Button("Cancel"))
	{
		useSubtypes = false;
		use2Subtypes = false;
		newTypes.clear();
		memset(errorMsg, 0, 100);
		edit.bRenderEdits = false;
	}
    ImGui::End();
}

void windows::EditWindow::renderEditBit()
{
    static char tempNewNameBuf[100] = { 0 };
    static char errorMsg[100] = { 0 };
	static bool isBool = true;

    const ImVec2 bigWindow = IGHelper::getWindowSize();
    ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));
    ImGui::SetNextWindowFocus();
    ImGui::Begin("Edit Bitfield", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_HorizontalScrollbar);
    ImGui::PopStyleVar();

    ImGui::SetWindowSize(ImVec2(220, 200));
	
    const ImVec2 smallWindow = ImGui::GetWindowSize();
    ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
    ImGui::Text("Change name to:");
	ImGui::Checkbox("is bool?##EditWindow::renderEditBit", &isBool);
	ImGui::PushItemWidth(200);
    ImGui::InputTextWithHint("##editfieldHelper", edit.editMember->name.c_str(), tempNewNameBuf, 50);
	ImGui::PopItemWidth();

	ImGui::TextColored(IGHelper::Colors::red, errorMsg);
    if (ImGui::Button("Set changes"))
    {
        if (strlen(tempNewNameBuf) == 0)
        {
            sprintf_s(errorMsg, "Enter a valid name!");
        }
        else
        {
            edit.bRenderEdits = false;
            edit.editMember->missed = false;
            edit.editMember->name = std::string(tempNewNameBuf);
            edit.editMember->userEdited = true;
			edit.editMember->type.name = isBool ? "bool" : "unsigned char";

            LogWindow::Log(LogWindow::logLevels::LOGLEVEL_INFO, "PACKAGEVIEWER", "Named unknown object to %s!", tempNewNameBuf);
            memset(tempNewNameBuf, 0, sizeof(tempNewNameBuf));
			memset(errorMsg, 0, 100);
        }
    }
	ImGui::SameLine();
	if (ImGui::Button("Cancel"))
	{
		memset(errorMsg, 0, 100);
		memset(errorMsg, 0, 100);
		edit.bRenderEdits = false;
	}
    
    ImGui::End();
}

windows::EditWindow::EditWindow()
{

}

void windows::EditWindow::pushEdit(EngineStructs::Struct* struc, EngineStructs::Member* member)
{
    if (edit.bRenderEdits)
        return;
    edit.bRenderEdits = true;

    edit.editMember = member;
    edit.editStruct = struc;
}

void windows::EditWindow::renderEdits()
{
    //do we have to render the edit popup?
    if (!edit.bRenderEdits || !edit.editMember || !edit.editStruct)
        return;

    if (edit.editMember->isBit)
    {
        renderEditBit();
        return;
    }
    renderEditField();
}
