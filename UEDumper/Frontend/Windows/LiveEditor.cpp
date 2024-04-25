#include "LiveEditor.h"

#include "LogWindow.h"
#include "Engine/Core/Core.h"
#include "Engine/Live/LiveMemory.h"
#include "Engine/UEClasses/UnrealClasses.h"
#include "Frontend/IGHelper.h"
#include "Frontend/StrucGraph.h"
#include <Memory/Memory.h>
#include <Engine/Userdefined/Datatypes.h>

#include "Frontend/Fonts/fontAwesomeHelper.h"
#include <Engine/Core/ObjectsManager.h>

void windows::LiveEditor::renderAddAddress()
{
	auto isHex = [](const std::string& st)
		{
			for (const char c : st) {
				if (!isxdigit(c)) {
					return false;
				}
			}

			return true;
		};



	ImGui::TextWrapped("Give your new inspector a name. The memory address has to be a UObject, otherwise the editor will not work");

	static char errorText[100] = { 0 };
	ImGui::PushItemWidth(200);
	ImGui::InputTextWithHint("Hex address##renderAddAddress", "0xSomeAddress", addAddressAddressValue, sizeof(addAddressAddressValue) - 1);
	ImGui::InputTextWithHint("Name##renderAddAddress", "World", addAddressNameValue, sizeof(addAddressNameValue) - 1);
	ImGui::PopItemWidth();
	ImGui::TextColored(IGHelper::Colors::classOrange, errorText);
	ImGui::Dummy(ImVec2(100, 0));
	ImGui::SameLine();
	if (ImGui::Button("Cancel##renderAddAddress", ImVec2(120, 30)))
	{
		memset(errorText, 0, sizeof(errorText));
		memset(addAddressNameValue, 0, sizeof(addAddressNameValue));
		memset(addAddressAddressValue, 0, sizeof(addAddressAddressValue));
		bRenderAddInspector = false;
	}
	ImGui::SameLine();

	ImGui::BeginDisabled(strlen(addAddressAddressValue) < 4 || strlen(addAddressNameValue) < 4 ? true : false);
	if (ImGui::Button("Add##renderAddAddress", ImVec2(120, 30)))
	{
		std::string st = std::string(addAddressAddressValue);
		if (st.find_first_of("x") == 1)
		{
			st = st.substr(2);
		}
		if (isHex(st))
		{
			EditorTab tab;
			tab.type = TabTypeAddress;
			tab.name = std::string(addAddressNameValue);
			tab.address = std::stoull(st, nullptr, 16);

			const std::string structName = Memory::read<UObject>(tab.address).getClass()->getCName();

			//using here goto because it makes reading the code actually better than using if else if else

			if (structName == "nil")
			{
				sprintf_s(errorText, "Getting UObject type failed!");
				ImGui::EndDisabled();
				return;
			}

			LogWindow::Log(LogWindow::logLevels::LOGLEVEL_ONLY_LOG, "LIVE", "Looking for %s...", structName.c_str());
			const auto info = EngineCore::getInfoOfObject(structName);
			if (!info || !info->valid)
			{
				sprintf_s(errorText, "Object not found in the packages!");
				ImGui::EndDisabled();
				return;
			}

			tab.struc = static_cast<EngineStructs::Struct*>(info->target);
			tab.isClass = info->type == ObjectInfo::OI_Class;

			tab.found = true;
			memset(errorText, 0, sizeof(errorText));
			LiveMemory::addNewBlock(tab.address, tab.struc->size);
			tabs.push_back(tab);
			bRenderAddInspector = false;
			ImGui::EndDisabled();
			memset(errorText, 0, sizeof(errorText));
			memset(addAddressNameValue, 0, sizeof(addAddressNameValue));
			memset(addAddressAddressValue, 0, sizeof(addAddressAddressValue));
			return;

		}
		sprintf_s(errorText, "Only hexadecimal characters supported!");

	}
	ImGui::EndDisabled();
}

void windows::LiveEditor::renderAddOffset()
{
	static char displayName[40] = "UWorld";
	static char errorText[100] = { 0 };
	static uint64_t address = 0;
	static uint64_t followAddress = 0;
	static bool checked = false;
	static bool once = false;

	ImGui::TextWrapped("Add a offset you added in Offset.h. Any Offset or sig requires to lead to a pointer that points "
		"to the UObject. e.g offset leads to 0x7FFF8001ABC where a pointer is pointing to 0x12333445C. Any time the "
		"pointer points to a different address, the live editor will update too.");



	std::vector<Offset> offsetsVec{};
	for (const auto& offset : EngineCore::getOffsets())
	{
		if (offset.flag & OFFSET_LIVE_EDITOR)
			offsetsVec.push_back(offset);
	}
	if (offsetsVec.size() == 0)
	{
		ImGui::TextColored(IGHelper::Colors::red, "You have no offsets deined that have the OFFSET_LIVE_EDITOR flag.");
		return;
	}

	static int selector = 0;
	auto check = [&]() mutable
		{
			address = EngineCore::getOffsetAddress(offsetsVec[selector]);

			if (!address)
			{
				sprintf_s(errorText, "The offset is 0!");
			}
			else
			{
				followAddress = Memory::read<uint64_t>(address);
				if (!followAddress)
					sprintf_s(errorText, "The address in the offset is 0!");
				else
					checked = true;
			}
		};

	//check the 0 index already and only once
	if (!once)
	{
		once = true;
		check();
	}


	if (ImGui::BeginCombo(std::string("OffsetCombo##renderAddOffset").c_str(), selector >= 0 ? offsetsVec[selector].name.c_str() : ""))
	{

		for (int i = 0; i < offsetsVec.size(); ++i)
		{
			const bool isSelected = (selector == i);
			if (ImGui::Selectable(offsetsVec[i].name.c_str(), isSelected))
			{
				checked = false;
				selector = i;

				check();
			}
			if (isSelected)
			{
				ImGui::SetItemDefaultFocus();
			}
		}
		ImGui::EndCombo();
	}

	ImGui::InputTextWithHint("Display name", "UWorld", displayName, sizeof(displayName));

	if (address > 0)
		ImGui::Text("Offset leads to : 0x%llX", address);
	if (followAddress > 0)
		ImGui::Text("Pointer at offset pointing to: 0x%llX", followAddress);
	else
		ImGui::TextColored(IGHelper::Colors::classOrange, errorText);



	ImGui::Dummy(ImVec2(100, 0));
	ImGui::SameLine();
	if (ImGui::Button("Cancel##renderAddOffset", ImVec2(120, 30)))
	{
		bRenderAddInspector = false;
		memset(errorText, 0, sizeof(errorText));
		memset(displayName, 0, sizeof(displayName));
		address = 0;
		followAddress = 0;
		checked = false;
		once = false;
	}
	ImGui::SameLine();
	ImGui::BeginDisabled(address == 0 || followAddress == 0 || !checked);
	if (ImGui::Button("Add##renderAddOffset", ImVec2(120, 30)))
	{

		EditorTab tab;
		tab.type = TabTypeOffset;
		tab.name = std::string(displayName);
		tab.address = address;

		if (Memory::read<UObject>(followAddress).getClass())
		{
			const std::string structName = Memory::read<UObject>(followAddress).getClass()->getCName();
			if (structName != "nil" && !structName.empty())
			{
				const auto info = EngineCore::getInfoOfObject(structName);
				if (!info || !info->valid)
				{
					sprintf_s(errorText, "Object not found in the packages!");
					LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "LIVE EDITOR", "Object not found in the packages!");
					goto failed;
				}
				tab.struc = static_cast<EngineStructs::Struct*>(info->target);

				tab.isClass = info->type == ObjectInfo::OI_Class;

				tab.origin = std::string(offsetsVec[selector].name) + "->";
				tab.found = true;
				memset(errorText, 0, sizeof(errorText));
				//keep track of offset if it changes. If it does, live editor will handle changes
				LiveMemory::addNewBlock(address, 8);
				tabs.push_back(tab);

				populateStrucGraph(tab.struc);
				performSearch();

				bRenderAddInspector = false;
				ImGui::EndDisabled();
				memset(errorText, 0, sizeof(errorText));
				memset(displayName, 0, sizeof(displayName));
				address = 0;
				followAddress = 0;
				checked = false;
				once = false;
				return;
			}
			LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "LIVE EDITOR", "Getting UObject type failed!");
			sprintf_s(errorText, "Getting UObject type failed!");
		}

	failed:
		checked = false;

	}
	ImGui::EndDisabled();
}


void windows::LiveEditor::renderAddInspector()
{
	if (!bRenderAddInspector)
		return;


	static ImVec2 smallWindow = ImVec2(500, 270);
	const ImVec2 bigWindow = IGHelper::getWindowSize();

	ImGui::SetCursorPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));

	ImGui::BeginChild("Add New Inspector", smallWindow, true, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
	IGHelper::placeInCenter(merge(ICON_FA_MAGNIFYING_GLASS_PLUS, " Add New Inspector"));
	if (ImGui::BeginTabBar("TabBar"))
	{
		auto isAddingAddressFromSearchBox = addAddressAddressValue != "";
		if (ImGui::BeginTabItem("Add Address", &isAddingAddressFromSearchBox))
		{
			smallWindow = ImVec2(500, 270);
			renderAddAddress();
			ImGui::EndTabItem();
		}

		// Render the Add Offset tab
		if (ImGui::BeginTabItem("Add Offset"))
		{
			smallWindow = ImVec2(500, 380);
			renderAddOffset();
			ImGui::EndTabItem();
		}

		ImGui::EndTabBar();
	}

	ImGui::EndChild();
}


std::string windows::LiveEditor::appendSecret(const std::string& secret, const std::string& newName, const int offset)
{
	return std::string(secret + "->" + std::to_string(offset) + newName);
}

void windows::LiveEditor::drawReadWriteableField(LiveMemory::MemoryBlock* block, const int offset, const int bitOffset, bool isBit, const fieldType& type, const std::string& secret)
{
	if (!block)
		return;

	//create a unique secret
	const std::string varSecret = std::string("##" + secret + std::to_string(offset) + ":" + std::to_string(bitOffset)).c_str();
	//for the boxes
	ImGui::PushItemWidth(70);

	//go through all the supported types
	//i really cba making a pragma here to save like 10 lines of code
	switch (type.propertyType)
	{
	case PropertyType::Int8Property:
	{
		auto val = block->read<int8_t>(offset);
		if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_S8, &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}

	case PropertyType::Int16Property:
	{
		auto val = block->read<int16_t>(offset);
		if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_S16, &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}

	case PropertyType::IntProperty:
	{
		auto val = block->read<int>(offset);
		if (ImGui::DragInt(varSecret.c_str(), &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}

	case PropertyType::Int64Property:
	{
		auto val = block->read<int64_t>(offset);
		if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_S64, &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}

	case PropertyType::UInt16Property:
	{
		auto val = block->read<uint16_t>(offset);
		if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_U16, &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}

	case PropertyType::UInt32Property:
	{
		auto val = block->read<uint32_t>(offset);
		if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_U32, &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}

	case PropertyType::UInt64Property:
	{
		auto val = block->read<uint64_t>(offset);
		if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_U64, &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}

	case PropertyType::DoubleProperty:
	{
		auto val = block->read<double>(offset);
		if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_Double, &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}
	case PropertyType::FloatProperty:
	{
		auto val = block->read<float>(offset);
		if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_Float, &val))
		{
			block->write(offset, val);
			Memory::write(block->gameAddress + offset, val);
		}
		break;
	}
	case PropertyType::ByteProperty:
	case PropertyType::BoolProperty:
	{
		//these types should have a scalar
		if (type.name == TYPE_CHAR)
		{
			auto val = block->read<int8_t>(offset);
			if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_S8, &val))
			{
				block->write(offset, val);
				Memory::write(block->gameAddress + offset, val);
			}
			break;
		}
		if (type.name == TYPE_UCHAR)
		{
			auto val = block->read<uint8_t>(offset);
			if (ImGui::DragScalar(varSecret.c_str(), ImGuiDataType_U8, &val))
			{
				block->write(offset, val);
				Memory::write(block->gameAddress + offset, val);
			}
			break;
		}
		//or the basic boolean support
		bool value;
		if (isBit)
		{
			value = (block->read<char>(offset) >> bitOffset & 1) == 1;
		}
		else
		{
			value = block->read<bool>(offset);
		}
		if (ImGui::Checkbox(std::string("##" + secret + std::to_string(offset) + ":" + std::to_string(bitOffset)).c_str(), &value))
		{
			char c = Memory::read<char>(block->gameAddress + offset);
			if (value) //upon clicking we obviously wanna change the value, so we take the inverted
				c |= (1 << bitOffset);  // Set nth bit to 1
			else
				c &= ~(1 << bitOffset);  // Set nth bit to 0
			Memory::write(block->gameAddress + offset, c);
			block->write(offset, c);
		}
		break;
	}

	default:
		ImGui::PopItemWidth();
		//uncomment to see whether a nonclickable prop is not supported
		//ImGui::SameLineEx(5, 0);
		//ImGui::Text("Not supported");
		ImGui::Dummy({ 0,0 });
		return;
	}
	ImGui::PopItemWidth();
}

void windows::LiveEditor::drawMemberArrayProperty(const EngineStructs::Member& member, LiveMemory::MemoryBlock* block, const std::string& secret, int innerOffset, uint64_t parentAddr, int depth)
{
	if (!block)
		return;

	ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
	if (ImGui::TreeNode(std::string(member.type.name + "##" + secret + std::to_string(member.offset + innerOffset)).c_str()))
	{
		ImGui::PopStyleColor();
		//if the TArray does not have 1 subtype its broken
		if (member.type.subTypes.size() != 1)
		{
			ImGui::Text("Broken TArray!");
			ImGui::TreePop();
			return;
		}

		ImGui::SameLine();
		//show the tarrays class 
		ImGui::TextColored(IGHelper::Colors::classGreen, member.type.subTypes[0].name.c_str());
		//the tarray is full of pointers to the classes
		if (member.type.subTypes[0].propertyType == PropertyType::ObjectProperty || member.type.subTypes[0].propertyType == PropertyType::ClassProperty)
		{
			ImGui::SameLineEx(0);
			ImGui::Text("*");
		}
		ImGui::SameLine();

		ImGui::TextColored(IGHelper::Colors::varPink, member.name.c_str());

		//the template type doesnt matter at all, it will get resolvd below, this is just for the basic info
		const auto arr = block->read<TArray<uint64_t>>(member.offset + innerOffset);
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::grayedOut, "(Count: %d) 0x%llX", arr.Count, arr.Data);

		//nothing to show if data is invalid
		if (arr.Data == nullptr || arr.Count <= 0)
		{
			ImGui::TreePop();
			return;
		}

		//no clickable types are rendered here (int float etc)
		if (!member.type.subTypes[0].clickable && getSize(member.type.subTypes[0].name) > 0 && getSize(member.type.subTypes[0].name) != -1)
		{
			//get the size by getting the size via the subtype name
			const auto subBlock = LiveMemory::addNewBlock(reinterpret_cast<uint64_t>(arr.Data), getSize(member.type.subTypes[0].name) * arr.Count);
			if (!subBlock)
			{
				ImGui::TreePop();
				return;
			}
			for (int i = 0; i < arr.Count; i++)
			{
				drawReadWriteableField(subBlock, getSize(member.type.subTypes[0].name) * i, 0, false, member.type.subTypes[0], appendSecret(secret, member.type.name + std::to_string(reinterpret_cast<uint64_t>(arr.Data)), i));
			}
			ImGui::TreePop();
			return;
		}

		EngineStructs::Struct* st;
		if (!isValidStructName(reinterpret_cast<uint64_t>(arr.Data), member.type.subTypes[0].name, st))
		{
			ImGui::TextColored(IGHelper::Colors::red, "Struct or Class doesnt exist in the SDK!");
			ImGui::TreePop();
			return;
		}

		//were working with classes
		if (member.type.subTypes[0].propertyType == PropertyType::ObjectProperty || member.type.subTypes[0].propertyType == PropertyType::ClassProperty)
		{
			//add the memory block that holds the pointers
			const auto arrBlock = LiveMemory::addNewBlock(reinterpret_cast<uint64_t>(arr.Data), 8 * arr.Count); //TArray stores pointers so * 8
			if (!arrBlock)
			{
				ImGui::TextColored(IGHelper::Colors::red, "Could not load memory block for the array!");
				ImGui::TreePop();
				return;
			}
			//we get the first pointer so we can check what class the array indexes really are (tarray lies just like pointers)
			const uint64_t firstIndexPtr = arrBlock->read<uint64_t>(0);
			//look for the struct
			if (!isValidStructName(firstIndexPtr, member.type.subTypes[0].name, st, true))
			{
				//this should never fail!
				ImGui::TextColored(IGHelper::Colors::red, "Struct or Class doesnt exist in the SDK!");
				ImGui::TreePop();
				return;
			}

			//create a vector where we will iterate through
			std::vector<uint64_t> objs(arr.Count);

			//check if the buffer is present and then copy the data into it
			if (arrBlock->buffer)
				memcpy(objs.data(), reinterpret_cast<void*>(arrBlock->buffer), arr.Count * 8);

			for (int i = 0; i < objs.size(); i++)
			{
				//get the pointer to the index
				const auto& objPtr = objs[i];
				ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);

				char addressBuf[30] = { 0 };
				sprintf_s(addressBuf, "0x%llX", objPtr);

				//create a tree node for it
				if (ImGui::TreeNode(std::string(std::to_string(i) + " " + member.type.subTypes[0].name + "##" + secret + std::to_string(objPtr)).c_str()))
				{
					ImGui::PopStyleColor();
					ImGui::SameLineEx(0);
					//add the *
					ImGui::Text("*");
					ImGui::SameLine();

					ImGui::TextColored(IGHelper::Colors::varBlue, std::string(addressBuf).c_str());
					//add a memory block for the index struct
					LiveMemory::addNewBlock(objPtr, st->size);
					//and render it
					renderStruct(st, objPtr, member.name, appendSecret(secret, member.type.name + std::to_string(objPtr), member.offset + innerOffset), "", depth + 1);
					ImGui::TreePop();
					continue;
				}
				ImGui::PopStyleColor();
				ImGui::SameLineEx(0);
				ImGui::Text("*");
				ImGui::SameLine();
				//draw a spinner if its not ready
				if (!arrBlock->valid())
					ImGui::Spinner();
				else
					ImGui::TextColored(IGHelper::Colors::varBlue, std::string(addressBuf).c_str());
			}
		}
		else
		{

			const auto subBlock = LiveMemory::addNewBlock(reinterpret_cast<uint64_t>(arr.Data), st->size * arr.Count); //TArray stores direct blocks
			if (!subBlock)
			{
				ImGui::TextColored(IGHelper::Colors::red, "Could not load memory block for the array!");
				ImGui::TreePop();
				return;
			}
			//then draw every index
			for (int i = 0; i < arr.Count; i++)
				drawStructProperty(st, member.name + "_" + std::to_string(i), subBlock,
					appendSecret(secret, member.type.name + std::to_string(reinterpret_cast<uint64_t>(arr.Data)), i), st->size * i + innerOffset, depth + 1);
		}
		ImGui::TreePop();
		return;
	}
	//if the tree is collapsed show some basic info
	ImGui::PopStyleColor();

	//draw the subtype
	if (member.type.subTypes.size() > 0)
	{
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::classGreen, member.type.subTypes[0].name.c_str());
		if (member.type.subTypes[0].propertyType == PropertyType::ObjectProperty || member.type.subTypes[0].propertyType == PropertyType::ClassProperty)
		{
			//and the *
			ImGui::SameLineEx(0);
			ImGui::Text("*");
		}
	}
	ImGui::SameLine();
	ImGui::TextColored(IGHelper::Colors::varPink, member.name.c_str());
	ImGui::SameLine();
	//spinner if not valid yet
	if (!block->valid())
		ImGui::Spinner();
	else
	{
		//just to show count and pointer
		const auto arr = block->read<TArray<uint64_t>>(member.offset);
		ImGui::TextColored(IGHelper::Colors::grayedOut, "(Count: %d) 0x%llX", arr.Count, arr.Data);
	}
}

void windows::LiveEditor::drawStructProperty(const EngineStructs::Struct* struc, const std::string& name, LiveMemory::MemoryBlock* block, const std::string& secret, int offset, int depth)
{
	if (!block)
		return;
	const auto& subStruct = struc;
	//these structs are special and get shown in a oneliner
	if (struc->cppName == "FVector" || struc->cppName == "FRotator")
	{
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);
		ImGui::TextColored(IGHelper::Colors::classGreen, struc->cppName.c_str());
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::varPink, name.c_str());
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::grayedOut, "(");
		ImGui::SameLineEx(0);
		for (const auto& subMember : struc->definedMembers)
		{
			//simple drawing otherwise its too long
			drawNonclickableMember(subMember, block, offset, secret, true);
			ImGui::SameLineEx(10, -3);
		}
		ImGui::TextColored(IGHelper::Colors::grayedOut, ")");
		return;
	}
	//show a cool color pallette
	if (struc->cppName == "FLinearColor")
	{
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);
		ImGui::TextColored(IGHelper::Colors::classGreen, struc->cppName.c_str());
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::varPink, name.c_str());
		//read the color just like this, also reading single because template is complaining 
		ImVec4 color = ImVec4(block->read<float>(offset), block->read<float>(offset + 4), block->read<float>(offset + 8), block->read<float>(offset + 0xC));

		ImGui::PushItemWidth(400);
		ImGui::SameLine();
		if (ImGui::ColorEdit4(std::string("##" + struc->cppName + secret + std::to_string(offset)).c_str(), &color.x))
		{
			//write any changes
			block->write(offset, color);
			Memory::write(block->gameAddress + offset, color);
		}
		ImGui::PopItemWidth();
		return;
	}
	ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
	//the average struct
	if (ImGui::TreeNode(std::string(struc->cppName + "##" + secret + std::to_string(offset)).c_str()))
	{
		ImGui::PopStyleColor();
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::varPink, name.c_str());
		//show super structs here just like classes
		if (subStruct->inherited)
		{
			for (int i = subStruct->supers.size(); i > 0; i--) //recusrive because last elem of vec is uobject
			{
				auto& super = subStruct->supers[i - 1];

				EngineStructs::Struct* superStruct;
				//get the struct for its game address and draw the members
				if (isValidStructName(block->gameAddress, super->cppName, superStruct))
				{
					ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);

					if (ImGui::TreeNodeEx(std::string(superStruct->cppName + "##" + secret + std::to_string(offset)).c_str(), ImGuiTreeNodeFlags_NoTreePushOnOpen)) //secret: 0x7FF + UObject
					{
						ImGui::PopStyleColor();
						drawMembers(superStruct, block->gameAddress, secret, offset, depth);
					}
					else
						ImGui::PopStyleColor();
				}
			}
		}
		//no supers? draw then without treenodes
		else
		{
			drawMembers(subStruct, block->gameAddress, secret, offset, depth);
		}
		ImGui::TreePop();

	}
	else
	{
		//if tree is not open draw simple info
		ImGui::PopStyleColor();
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::varPink, name.c_str());
	}
}

void windows::LiveEditor::drawNonclickableMember(const EngineStructs::Member& member, LiveMemory::MemoryBlock* block, int innerOffset, const std::string& secret, bool simple)
{
	//invalid block?
	if (!block)
		return;

	//makes sure to use the right offset
	const int combinedOffset = member.offset + innerOffset;

	//sometimes we dont wanna display the typename
	if (simple)
		ImGui::TextColored(IGHelper::Colors::varPink, "%s:", member.name.c_str());
	else
	{
		ImGui::TextColored(IGHelper::Colors::varTypeBlue, member.type.name.c_str());
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::varPink, member.name.c_str());
	}
	//yeah the indent is annoying
	ImGui::SameLineEx(8, -3);

	//data not loaded?
	if (!block->valid())
		ImGui::Spinner();
	else
		drawReadWriteableField(block, combinedOffset, member.bitOffset, member.isBit, member.type, secret);

}

void windows::LiveEditor::drawMemberObjectProperty(const EngineStructs::Member& member, LiveMemory::MemoryBlock* block, const std::string& secret, int innerOffset, uint64_t parentAddr, int depth)
{
	//get the ptr so we can display it fancy
	const auto memberPtr = block->read<uint64_t>(member.offset + innerOffset);
	ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
	if (ImGui::TreeNode(std::string(member.type.name + "##" + secret + std::to_string(member.offset + innerOffset)).c_str()))
	{
		ImGui::PopStyleColor();

		//display the *
		ImGui::SameLineEx(0);
		ImGui::Text("*");

		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::varPink, member.name.c_str());

		ImGui::SameLine();
		ImGui::TextColored(IGHelper::colToVec(255, 255, 255, 150), "0x%llX", memberPtr);
		//check whether its a valid struct and look for the best because SDKS dont point to the right one
		EngineStructs::Struct* newStruct;
		//if member ptr is 0 theres nothing to display
		if (memberPtr != 0 && isValidStructName(memberPtr, member.type.name, newStruct, true))
		{
			//add the new block so we can track the data for it
			if (!LiveMemory::addNewBlock(memberPtr, newStruct->size))
			{
				LogWindow::Log(LogWindow::logLevels::LOGLEVEL_WARNING, "LIVEEDITOR", "Could not add new memory block for %p (%s) with size %d!", memberPtr, member.name, newStruct->size);
			}
			//and render it
			else
				renderStruct(newStruct, memberPtr, member.name, appendSecret(secret, member.type.name, member.offset + innerOffset), "", depth + 1); //secret is 0x7FF+UOject+namePrivate
		}

		ImGui::TreePop();
		return;
	}
	//if the tree isnt open still display name name
	ImGui::PopStyleColor();

	ImGui::SameLineEx(0);
	ImGui::Text("*");
	ImGui::SameLine();
	ImGui::TextColored(IGHelper::Colors::varPink, member.name.c_str());
	ImGui::SameLine();
	if (!block->valid())
		ImGui::Spinner();
	else
		ImGui::TextColored(IGHelper::colToVec(255, 255, 255, 150), "0x%llX", memberPtr);
}

void windows::LiveEditor::drawTEnumAsByteProperty(const EngineStructs::Member& member, const EngineStructs::Enum* subEnum, LiveMemory::MemoryBlock* block,
	const std::string& secret, int innerOffset)
{
	std::vector<std::string> items;

	// Use std::transform to extract the first elements of each pair
	std::ranges::transform(subEnum->members, std::back_inserter(items),
		[](const std::pair<std::string, int>& pair) {
			return pair.first;
		});

	ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);

	ImGui::TextColored(IGHelper::Colors::classGreen, member.type.name.c_str());
	ImGui::SameLine();
	//i think this is not really needed
	//ImGui::TextColored(IGHelper::Colors::numberGreen, member.type.subTypes[0].name.c_str());
	//ImGui::SameLine();
	ImGui::TextColored(IGHelper::Colors::varPink, member.name.c_str());

	int value = block->read<uint8_t>(member.offset + innerOffset);

	//as some enums arent numbered 1, 2, ... max like EAudioBusChannels
	//	enum class EAudioBusChannels
	//	EAudioBusChannels__Mono = 0,
	//		EAudioBusChannels__Stereo = 1,
	//		EAudioBusChannels__Quad = 3,
	//		EAudioBusChannels__FivePointOne = 5,
	//		EAudioBusChannels__SevenPointOne = 7,
	//		EAudioBusChannels__EAudioBusChannels_MAX = 8,
	//we have to get the vector index for the specific value
	for (int i = 0; i < subEnum->members.size(); ++i) {
		if (subEnum->members[i].second == value) {
			value = i;
			break;
		}
	}

	ImGui::SameLineEx(10, -3);
	ImGui::PushItemWidth(350);
	if (ImGui::BeginCombo(std::string("##" + secret + member.name).c_str(), value >= 0 ? items[value].c_str() : ""))
	{
		for (int i = 0; i < items.size() - 1; ++i) //dont allow picker to be MAX
		{
			const bool isSelected = (value == i);
			if (ImGui::Selectable(items[i].c_str(), isSelected))
			{
				value = i;

				LogWindow::Log(LogWindow::logLevels::LOGLEVEL_ONLY_LOG, "LIVEEDITOR", "selected new index %d (%s : %d)", value, subEnum->members[value].first.c_str(), subEnum->members[value].second);
				uint8_t newData = subEnum->members[value].second;
				block->write(member.offset + innerOffset, newData);
				Memory::write(block->gameAddress + member.offset + innerOffset, newData);
			}
			if (isSelected)
			{
				ImGui::SetItemDefaultFocus();
			}
		}
		ImGui::EndCombo();
	}
	ImGui::PopItemWidth();
}


void windows::LiveEditor::drawMembers(const EngineStructs::Struct* struc, uint64_t address, const std::string& secret, int innerOffset, int depth)
{
	if (depth >= MAX_RECURSION_DEPTH_SAFEGUARD)
	{
		// we've hit our safeguard to avoid stack overflows from happening
		ImGui::TextColored(IGHelper::Colors::red, "Max recursion depth reached");
		return;
	}

	//finally we get the values!
	//get the memory block which should be allocated by the functions before
	const auto block = LiveMemory::getMemoryBlock(address);

	//invalid block?
	if (!block)
	{
		ImGui::TextColored(IGHelper::Colors::red, "Invalid memory block??");
		return;
	}


	//draw the secret for debug purposes.
	//ImGui::TextColored(IGHelper::Colors::grayedOut, secret.c_str());

	//iterate through all the members of the struct
	for (const auto& member : struc->definedMembers)
	{
		//ignore missed members
		if (member.missed)
			continue;

		//get the current cursor pos so we can use it below
		const auto posX = ImGui::GetCursorPosX();
		//also draw the bit if it is one

		if (member.isBit)
			ImGui::TextColored(IGHelper::Colors::red, "+%04X:%d", member.offset + innerOffset, member.bitOffset);
		else
			ImGui::TextColored(IGHelper::Colors::red, "+%04X", member.offset + innerOffset);

		ImGui::SameLine();
		//just for better ui look so everything is in one straight line we use a fixed 75 offset
		ImGui::SetCursorPosX(posX + 75);

		//is it a clickable property?
		//TODO: add more support
		if (member.type.clickable)
		{
			switch (member.type.propertyType)
			{
				//like ULevel* persistentlevel
				//draw classes that have a pointer
			case PropertyType::ObjectProperty:
			case PropertyType::ClassProperty:
				drawMemberObjectProperty(member, block, secret, innerOffset, struc->memoryAddress, depth + 1);
				break;
				//support for TArray<AActor*> actors
			case PropertyType::ArrayProperty:
				drawMemberArrayProperty(member, block, secret, innerOffset, struc->memoryAddress, depth + 1);
				break;

				//for structs inside a struct that are directly in it
				//applies to FVector etc too
			case PropertyType::StructProperty:
			{
				//we have to resolve the struct here
				EngineStructs::Struct* subStruct;

				if (isValidStructName(address, member.type.name, subStruct))
				{
					//draw the substruct
					//also inneroffset (thats always needed) plus member offset because the struct is within the current struct
					drawStructProperty(subStruct, member.name, block, secret, innerOffset + member.offset, depth + 1);
				}
				break;
			}

			case PropertyType::NameProperty:
				//support for FNames
				//all props that are directly displayed need a 10 indent
				ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);
				ImGui::TextColored(IGHelper::Colors::classGreen, member.type.name.c_str());
				ImGui::SameLine();
				ImGui::TextColored(IGHelper::Colors::varPink, member.name.c_str());
				ImGui::SameLine();
				//read the fname and show it
				ImGui::TextColored(IGHelper::Colors::stringRed, EngineCore::FNameToString(block->read<FName>(member.offset + innerOffset)).c_str());
				break;

				//TEnumAsByte support
			case PropertyType::ByteProperty:
			{
				EngineStructs::Enum* subEnum;
				//we have to use the first subtype which is the enum name
				if (member.type.subTypes.size() == 1 && isValidEnumName(member.type.subTypes[0].name, subEnum))
				{
					drawTEnumAsByteProperty(member, subEnum, block, secret, innerOffset);
				}
				break;
			}
			default:
				//no support? Just draw the typename and name
				//all props that are directly displayed need a 10 indent
				ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);
				ImGui::TextColored(IGHelper::Colors::classGreen, member.type.name.c_str());
				ImGui::SameLine();
				ImGui::TextColored(IGHelper::Colors::varPink, member.name.c_str());
				//some fancy spinner next to the member
				if (!block->valid())
				{
					ImGui::SameLine();
					ImGui::Spinner();
				}
				break;
			}
			continue;
		}

		//non clickable types can be (mostly) directly modified like ints floats etc
		//all props that are directly displayed need a 10 indent
		ImGui::SetCursorPosX(ImGui::GetCursorPosX() + 10);
		drawNonclickableMember(member, block, innerOffset, secret);
	}

}


void windows::LiveEditor::renderStruct(const EngineStructs::Struct* struc, uint64_t address, const std::string& name, const std::string& secret, const std::string& origin, int depth)
{
	//copy the address to clipboard
	if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + std::to_string(address) + secret).c_str()))
	{
		char addressBuf[30];
		sprintf_s(addressBuf, "0x%llX", address);
		IGHelper::copyToClipBoard(std::string(addressBuf));
		LogWindow::Log(LogWindow::logLevels::LOGLEVEL_INFO, "PACKAGEVIEWER", "Copied address to clipboard!");
	}
	//print the origin or the address
	ImGui::SameLine();
	if (origin.length() > 0)
		ImGui::TextColored(IGHelper::Colors::red, origin.c_str());
	else
		ImGui::TextColored(IGHelper::Colors::red, "0x%llX", address);

	ImGui::SameLine();
	//copy the struct name
	if (ImGui::Button(std::string(std::string(ICON_FA_CLIPBOARD) + "##" + struc->cppName + secret).c_str()))
	{
		IGHelper::copyToClipBoard(struc->cppName);
		LogWindow::Log(LogWindow::logLevels::LOGLEVEL_ONLY_LOG, "PACKAGEVIEWER", "Copied struct name to clipboard!");
	}
	ImGui::SameLine();
	//print the struct name and representative name
	ImGui::TextColored(IGHelper::Colors::classGreen, struc->cppName.c_str());
	ImGui::SameLine();
	ImGui::TextColored(IGHelper::Colors::varBlue, name.c_str());
	//as we dont only want to show (for axample) the class world and the other classes too, we have to go through all supers
	//recusrive because last elem of vec is uobject and uobject gets displayed first
	//example look:
	//uobject
	//ustruct
	//..
	//finalClass
	for (int i = struc->supers.size(); i > 0; i--)
	{
		auto& super = struc->supers[i - 1];

		EngineStructs::Struct* superStruct;
		//find the strucr for the given name
		//dont look for best because we specifically want that struct
		if (isValidStructName(address, super->cppName, superStruct))
		{

			//push a fancy color
			ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);

			//show a treenode, but so it has no indent we use treenodeEx with ImGuiTreeNodeFlags_NoTreePushOnOpen
			if (ImGui::TreeNodeEx(std::string(superStruct->cppName + "##" + appendSecret(secret, superStruct->cppName, struc->getInheritedSize())).c_str(), ImGuiTreeNodeFlags_NoTreePushOnOpen)) //secret: 0x7FF + UObject
			{
				ImGui::PopStyleColor();
				//draw the members of the struct
				drawMembers(superStruct, address, secret, 0, depth);
				//some fancy seperator to indicate the end of the struct
				ImGui::Separator();

			}
			else
				ImGui::PopStyleColor();
		}
		//somehow its a invalid struct?
		else
			ImGui::TextColored(IGHelper::Colors::red, "Struct not found!");
	}
	//two code pieces here, one we have to indicate via a treenode our real (in this case) uworld class
	//but if there are no other supers (like uobject) we dont need a treenode and can draw it directly (just like below)
	if (struc->supers.size() > 0)
	{
		ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
		//create a non indent treenode
		if (ImGui::TreeNodeEx(std::string(struc->cppName + "##" + appendSecret(secret, struc->cppName, struc->getInheritedSize())).c_str(), ImGuiTreeNodeFlags_NoTreePushOnOpen))
		{
			ImGui::PopStyleColor();
			//draw our struct
			drawMembers(struc, address, secret, 0, depth);

		}
		else
			ImGui::PopStyleColor();
	}
	else
	{
		//draw the struct without a treenode because were the only struct and there are no superstructs
		drawMembers(struc, address, secret);
	}
	//always the fancy seperator
	ImGui::Separator();
}

bool windows::LiveEditor::isValidStructName(uint64_t classPointer, const std::string& CName, EngineStructs::Struct*& outStruct, bool lookForBest)
{
	if (classPointer != 0 && guessSuperClass && lookForBest)
	{
		//get the super class by getting the uobjects class name

		std::string superName = "";
		bool found = false;
		//already searched this address?
		if (realSuperClassCache.contains(classPointer))
		{
			superName = realSuperClassCache[classPointer];
			found = true;
		}
		else
		{
			//we cannot use enginecores functions because some objets arent in the object list generated
			//for the SDK! So we have to do it all here and (most likely) read data multiple times
			const auto obj = ObjectsManager::getUObject<UObject>(classPointer);
			if (obj->getClass())
				superName = obj->getClass()->getCName();
		}
		if (superName == "nil" || superName.empty())
			goto tryAgain;

		const auto info = EngineCore::getInfoOfObject(superName);
		if (!info || !info->valid || !(info->type == ObjectInfo::OI_Class || info->type == ObjectInfo::OI_Struct)) //invalid!
			goto tryAgain;

		outStruct = static_cast<EngineStructs::Struct*>(info->target);

		//found it! Adding...
		if (!found)
			realSuperClassCache.insert(std::pair(classPointer, superName));
		return true;
	}
tryAgain:

	const auto info = EngineCore::getInfoOfObject(CName);
	if (!info || !info->valid)
		return false;

	outStruct = static_cast<EngineStructs::Struct*>(info->target);

	return true;
}

bool windows::LiveEditor::isValidEnumName(const std::string& CName, EngineStructs::Enum*& enu)
{
	const auto info = EngineCore::getInfoOfObject(CName);
	if (!info || !info->valid || info->type != ObjectInfo::OI_Enum) //invalid!
		return false;

	enu = static_cast<EngineStructs::Enum*>(info->target);

	return true;

}


windows::LiveEditor::LiveEditor()
{

}

bool windows::LiveEditor::renderLaunchPopup()
{
	static bool accepted = false;
	if (accepted)
	{
		liveEditorStarted = true;
		return true;
	}
	ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));

	const ImVec2 bigWindow = IGHelper::getWindowSize();

	ImGui::SetNextWindowFocus();

	ImGui::Begin(merge(ICON_FA_QUESTION, " Live Editor - Warning"), nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
	ImGui::SetWindowSize(ImVec2(400, 200), ImGuiCond_Once);
	const ImVec2 smallWindow = ImGui::GetWindowSize();
	ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
	ImGui::PopStyleVar();

	ImGui::TextWrapped("You are about to launch the live editor. Make sure you saved all your changes before starting "
		"the the live editor, because crashes can happen very easily. This is still a beta feature!");
	ImGui::Dummy(ImVec2(60, 0));
	ImGui::SameLine();
	if (ImGui::Button("Cancel", ImVec2(120, 30)))
	{
		ImGui::End();
		return true;
	}

	ImGui::SameLine();
	if (ImGui::Button("Continue", ImVec2(120, 30)))
	{
		LiveMemory::cacheBlocks();
		liveEditorStarted = true;
		accepted = true;
		ImGui::End();
		return true;
	}

	ImGui::End();
	return false;
}

bool windows::LiveEditor::renderQuitPopup()
{
	static bool accepted = false;
	if (accepted)
	{
		liveEditorStarted = false;
		return true;
	}
	ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));

	const ImVec2 bigWindow = IGHelper::getWindowSize();

	ImGui::SetNextWindowFocus();

	ImGui::Begin(merge(ICON_FA_QUESTION, " Live Editor - Warning"), nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
	ImGui::SetWindowSize(ImVec2(400, 200), ImGuiCond_Once);
	const ImVec2 smallWindow = ImGui::GetWindowSize();
	ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
	ImGui::PopStyleVar();

	ImGui::TextWrapped("You are about to quit the live editor. All your progress is saved and all structs automatically update "
		"if you make any changes in the editor.");
	ImGui::Dummy(ImVec2(60, 0));
	ImGui::SameLine();
	if (ImGui::Button("Cancel", ImVec2(120, 30)))
	{
		ImGui::End();
		return true;
	}

	ImGui::SameLine();
	if (ImGui::Button("Continue", ImVec2(120, 30)))
	{
		liveEditorStarted = false;
		accepted = true;
		ImGui::End();
		return true;
	}

	ImGui::End();
	return false;
}

void windows::LiveEditor::renderLiveEditor()
{

	ImGui::BeginChild("LiveTabChild", ImVec2(330, ImGui::GetWindowSize().y - LogWindow::getLogWindowYSize() - 40), true, ImGuiWindowFlags_NoScrollbar);
	if (ImGui::Button("Add Inspector"))
		bRenderAddInspector = true;
	if (tabs.size() > 0)
		if (ImGui::Button("Search for class/member"))
			bRenderSearchBox = true;

	if (ImGui::BeginListBox("##liveInspectorList", ImVec2(ImGui::GetWindowSize().x - 15, ImGui::GetWindowSize().y - 50)))
	{

		for (int i = 0; i < tabs.size(); i++)
		{
			const bool is_selected = (tabPicked == i);
			if (ImGui::Selectable(tabs[i].name.c_str(), is_selected))
			{
				tabPicked = i;
				bRenderSearchResults = false;

				StrucGraph::getInstance()->clear();
				populateStrucGraph(tabs[i].struc);
				performSearch();

				LogWindow::Log(LogWindow::logLevels::LOGLEVEL_INFO, "LIVE", "opened tab %d", tabPicked);
			}
		}
		ImGui::EndListBox();
	}
	ImGui::EndChild();

	ImGui::SameLine();

	ImGui::BeginChild("LiveViewerChild", ImVec2(ImGui::GetWindowSize().x - 350, ImGui::GetWindowSize().y - LogWindow::getLogWindowYSize() - 40), true, ImGuiWindowFlags_NoScrollbar);
	ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 0,0 });

	auto renderTab = [&](EditorTab tab) {
		//whether the given type is a direct address, then render the struct directly for the address
		if (tab.type == TabTypeAddress)
		{
			renderStruct(tab.struc, tab.address, tab.name, tab.name + std::to_string(tab.address)); //secret is a Address, so 0x3cFFFF
		}
		//whether its a offset and we have to read the read adress
		else if (tab.type == TabTypeOffset && LiveMemory::getMemoryBlock(tab.address))
		{
			const auto block = LiveMemory::getMemoryBlock(tab.address); //should be 8 bytes (holding the struct address)

			const uint64_t address = block->read<uint64_t>(0); //read the address

			//if the address is not 0 the pointer (should be) valid
			if (address != 0)
			{
				//add a new block for the struct for the specific address and its size to fetch the data
				LiveMemory::addNewBlock(address, tab.struc->size);

				char addressBuf[30] = { 0 };
				sprintf_s(addressBuf, "0x%llX", address);

				//render it!
				renderStruct(tab.struc, address, tab.name, tab.name + std::to_string(tab.address), tab.origin + std::string(addressBuf), 0); //secret is a Address, so 0x3cFFFF
			}
			//we have to wait for the blocks initialization
			else
			{
				ImGui::TextColored(IGHelper::Colors::classOrange, "Wait");
				ImGui::SameLine();
				ImGui::Spinner();
			}
		}
		};

	ImGui::BeginChild("LiveViewerChildInspector", ImVec2(ImGui::GetWindowSize().x, ImGui::GetWindowSize().y), true, ImGuiWindowFlags_HorizontalScrollbar);
	ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 0,0 });

	if (tabs.size() > 0 && tabPicked < tabs.size() && !bRenderAddInspector && !bRenderSearchBox)
	{
		const auto& tab = tabs[tabPicked];

		renderTab(tab);
	}
	else
	{
		ImGui::TextColored(IGHelper::Colors::classOrange, "Please select an item from the inspector on the left, or add something to inspect");
	}

	ImGui::PopStyleVar();
	ImGui::EndChild();

	ImGui::PopStyleVar();
	ImGui::EndChild();

	renderAddInspector();
	renderSearchBox();
}

bool windows::LiveEditor::LiveEditorStarted()
{
	return liveEditorStarted;
}

void windows::LiveEditor::renderEditPopUp()
{
	if (!liveEditorStarted)
		return;

	ImGui::Spacing();
	ImGui::Checkbox("Get Object by Class", &guessSuperClass);
	ImGui::SameLine();
	ImGui::Text(ICON_FA_QUESTION);
	if (ImGui::IsItemHovered())
	{
		ImGui::BeginTooltip();
		ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
		ImGui::TextUnformatted("Normally when opening a node (e.g AActor* actor), it will display the AActor class and its inherited classes. "
			"Though most of the time the UObject actually has even more classes than defined from the Engine. By enabling this, the "
			"Engine will search the UObject->ClassPrivate->SuperStruct.Name to get the real class and inherited classes. Careful, this "
			"might give wong results! If no SuperStruct exists, it will use the Engine definition.");
		ImGui::PopTextWrapPos();
		ImGui::EndTooltip();
	}
	if (guessSuperClass)
	{
		if (ImGui::Button("Clear superclass cache"))
		{
			LogWindow::Log(LogWindow::logLevels::LOGLEVEL_INFO, "LIVE", "Cleared superclass cache!");
			realSuperClassCache.clear();
		}
		ImGui::SameLine();
		ImGui::Text(ICON_FA_QUESTION);
		if (ImGui::IsItemHovered())
		{
			ImGui::BeginTooltip();
			ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
			ImGui::TextUnformatted("In case you enabled the \"Guess Object by class\" you can clear the cache that holds information of UObjects "
				"real classes in case you get wrong results.");
			ImGui::PopTextWrapPos();
			ImGui::EndTooltip();
		}
	}

}

void windows::LiveEditor::topmostCallback()
{
}

void windows::LiveEditor::renderSearchBox()
{
	if (!bRenderSearchBox) return;

	static ImVec2 smallWindow = ImVec2(860, 730);
	static ImVec2 closeButtonPos = ImVec2(10, 10);
	const ImVec2 bigWindow = IGHelper::getWindowSize();

	ImGui::SetCursorPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, (bigWindow.y / 2 - smallWindow.y / 2) - 100));

	ImGui::BeginChild("Search for classes/members", smallWindow, true, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
	IGHelper::placeInCenter(merge(ICON_FA_MAGNIFYING_GLASS_PLUS, " Search for classes/members"));
	
	auto trim = [](char* str) {
		// Trim leading whitespace
		while (std::isspace(*str)) {
			str++;
		}

		// Trim trailing whitespace
		char* end = str + std::strlen(str) - 1;
		while (end > str && std::isspace(*end)) {
			*end-- = '\0';
		}
	};

	auto renderResult = [&](const NodeAndMember &node, const EngineStructs::Member &member, bool isLastEntry) {
		auto isPointer = false;
		auto typeColor = IGHelper::Colors::classGreen;
		auto typeInfo = member.type;
		std::string subType = "";
		if (member.type.subTypes.size() > 0) {
			typeInfo = member.type.subTypes[0];
			subType = "<" + member.type.subTypes[0].name + ">";
		}
		isPointer = typeInfo.propertyType == PropertyType::ObjectProperty || member.type.propertyType == PropertyType::ClassProperty;
		if (typeInfo.propertyType == PropertyType::BoolProperty) typeColor = IGHelper::Colors::varTypeBlue;
		if (typeInfo.propertyType == PropertyType::EnumProperty) typeColor = IGHelper::Colors::varTypeBlue;

		char addressBuf[30];
		sprintf_s(addressBuf, "0x%llX", node.first->memoryAddress + member.offset);

		ImGui::Text(isLastEntry ? ICON_FA_ANGLES_RIGHT : ICON_FA_CARET_DOWN);
		ImGui::SameLine();
		ImGui::TextColored(typeColor, (member.type.name + subType + (isPointer ? "* " : " ")).c_str());
		ImGui::SameLine();
		ImGui::TextColored(IGHelper::Colors::varPink, node.second.c_str());
		if (isPointer)
		{
			ImGui::SameLine();
			if (ImGui::Button(merge(ICON_FA_MAGNIFYING_GLASS_PLUS, ("##" + std::to_string(node.first->memoryAddress) + ":" + std::to_string(member.offset)).c_str())))
			{
				bRenderAddInspector = true;
				bRenderSearchBox = false;
				memcpy(addAddressNameValue, node.second.c_str(), sizeof(addAddressNameValue));
				sprintf_s(addAddressAddressValue, "%s", addressBuf);
			}
		}
	};

	trim(searchText);

	ImGui::InputTextWithHint("##liveInspectorSearchInput", "Search for classes and members", searchText, sizeof(searchText));
	ImGui::SameLine();
	if (ImGui::Button(ICON_FA_MAGNIFYING_GLASS))
		previousSearchText = ""; // force a new search
	performSearch();

	ImGui::BeginChild("LiveViewerSubView", ImVec2(0, ImGui::GetWindowSize().y - 120), true, ImGuiWindowFlags_NoScrollbar);
	ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, { 0,0 });

	if (bFindingPaths)
	{
		ImGui::TextColored(IGHelper::Colors::classOrange, "Searching...");
		ImGui::SameLine();
		ImGui::Spinner();
	}
	else if (bDisplayPaths)
	{
		if (discoveredPaths.size() > 0)
		{
			// sort the paths in order of length
			std::sort(discoveredPaths.begin(), discoveredPaths.end(), [](std::vector<NodeAndMember> a, std::vector<NodeAndMember> b) {
				return a.size() < b.size();
				});

			int pathNum = 0;
			auto prefix = std::string("Path ");
			auto root = tabs[tabPicked].struc;
			for (auto& path : discoveredPaths)
			{
				pathNum++;
				if (pathNum == 1) ImGui::SetNextItemOpen(true, ImGuiCond_Always);

				auto nextMemberName = path.size() > 1 ? path[1].second : "<target>";
				auto text = " via " + path[0].second + "->" + nextMemberName + +" (levels: " + std::to_string(path.size()) + ")";
				if (ImGui::TreeNode(("##Path" + std::to_string(pathNum)).c_str()))
				{
					ImGui::SameLine();
					ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::green);
					ImGui::Button((prefix + std::to_string(pathNum)).c_str());
					ImGui::PopStyleColor();
					ImGui::SameLine();
					ImGui::TextColored(IGHelper::Colors::white, text.c_str());

					int subPathIndex = 0;
					for (auto &node : path) {
						for (auto &member : node.first->definedMembers)
						{
							if (member.name == node.second) {
								renderResult(node, member, ++subPathIndex >= path.size());
								break;
							}
						}
					}

					ImGui::TreePop();
				}
				else {
					ImGui::SameLine();
					ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::green);
					ImGui::Button((prefix + std::to_string(pathNum)).c_str());
					ImGui::PopStyleColor();
					ImGui::SameLine();
					ImGui::TextColored(IGHelper::Colors::white, text.c_str());
				}
			}
		}
		else
		{
			LogWindow::Log(LogWindow::logLevels::LOGLEVEL_ERROR, "LIVE", "Failed to find any paths... this is a bug!");
		}
	}
	else
	{
		renderSearchResults();
	}

	ImGui::PopStyleVar();

	
	ImGui::EndChild();

	ImGui::SetCursorPosX(smallWindow.x / 2 - 25);
	if (ImGui::Button("Close", ImVec2(50, 30)))
		bRenderSearchBox = false;

	ImGui::EndChild();
}

void windows::LiveEditor::renderSearchResults()
{
	

	auto searchTextString = convertToLowercase(std::string(searchText));
	performSearch(searchTextString);

	auto findPaths = [&]() {
		bFindingPaths = true;
		std::make_unique<std::future<void>*>(new auto(std::async(std::launch::async, [] {
			auto& searchResult = searchResults[searchResultPicked];
			const auto& root = tabs[tabPicked].struc;

			discoveredPaths = StrucGraph::getInstance()->findAllPaths(root, NodeAndMember(searchResult, searchResultMember));
			if (searchResultMember == "")
			{
				// we need to pop the last path to get to the class - we piggy backed on a member to find it
				for (auto& path : discoveredPaths)
				{
					path.pop_back();
				}
			}
			
			bFindingPaths = false;
			bDisplayPaths = true;
		})));
	};

	if (ImGui::BeginListBox("##liveInspectorSearchResults", ImVec2(ImGui::GetWindowSize().x - 15, ImGui::GetWindowSize().y - 15)))
	{
		for (int i = 0; i < searchResults.size(); i++)
		{
			ImGui::TextColored(IGHelper::Colors::red, "+%04X", searchResults[i]->memoryAddress);
			ImGui::SameLine();

			const bool is_selected = (searchResultPicked == i);
			ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::classGreen);
			if (ImGui::TreeNodeEx(
				std::string(searchResults[i]->cppName + "##" + std::to_string(searchResults[i]->memoryAddress)).c_str(),
				ImGuiTreeNodeFlags_DefaultOpen
			))
			{
				if (ImGui::Selectable(((searchResults[i]->isClass ? "Class " : "Struct ") + searchResults[i]->cppName).c_str(), is_selected))
				{
					searchResultPicked = i;
					searchResultMember = "";
					bRenderSearchResults = false;
					findPaths();
				}

				ImGui::PushStyleColor(ImGuiCol_Text, IGHelper::Colors::varPink);
				for (auto& member : searchResults[i]->definedMembers)
				{
					if (convertToLowercase(member.name).find(searchTextString) != std::string::npos)
					{
						if (member.isBit)
							ImGui::TextColored(IGHelper::Colors::red, "+%04X:%d", member.offset, member.bitOffset);
						else
							ImGui::TextColored(IGHelper::Colors::red, "+%04X  ", member.offset);
						ImGui::SameLine();

						if (ImGui::Selectable(member.name.c_str(), is_selected))
						{
							searchResultPicked = i;
							searchResultMember = member.name;
							bRenderSearchResults = false;
							findPaths();
						}
					}
				}
				ImGui::PopStyleColor();

				ImGui::TreePop();
			}
			ImGui::PopStyleColor();
		}
		ImGui::EndListBox();
	}
}

void windows::LiveEditor::performSearch()
{
	performSearch(convertToLowercase(searchText));
}

void windows::LiveEditor::performSearch(const std::string& searchString)
{
	const auto lowercasedSearchString = convertToLowercase(searchString);

	if (lowercasedSearchString == previousSearchText) return;
	previousSearchText = lowercasedSearchString;

	bDisplayPaths = false;

	const auto strucGraph = StrucGraph::getInstance();

	searchResults.clear();
	if (lowercasedSearchString == "")
	{
		for (const auto& node : *(strucGraph->nodes()))
		{
			searchResults.push_back(node);
		}
		return;
	}

	for (const auto& node : *(strucGraph->nodes()))
	{
		if (convertToLowercase(node->cppName).find(lowercasedSearchString) != std::string::npos)
		{
			searchResults.push_back(node);
			continue;
		}
		for (auto& member : node->definedMembers)
		{
			if (convertToLowercase(member.name).find(lowercasedSearchString) != std::string::npos)
			{
				searchResults.push_back(node);
				break;
			}
		}
	}
}

void windows::LiveEditor::populateStrucGraph(EngineStructs::Struct* struc)
{
	populateStrucGraph(struc, nullptr);
}

void windows::LiveEditor::populateStrucGraph(EngineStructs::Struct* struc, EngineStructs::Struct* strucParent)
{
	auto graph = StrucGraph::getInstance();
	std::deque<std::tuple<EngineStructs::Struct*, EngineStructs::Struct*, std::string>> queue{ {struc, strucParent, ""} };
	std::unordered_set<EngineStructs::Struct*> visited;

	bool dfs = true; // false to use bfs, true to use dfs
	std::tuple<EngineStructs::Struct*, EngineStructs::Struct*, std::string> stackEntry;

	while (queue.size() > 0)
	{
		if (dfs)
		{
			stackEntry = queue[queue.size() - 1];
			queue.pop_back();
		}
		else
		{
			stackEntry = queue[0];
			queue.pop_front();
		}

		const auto [node, parent, memberName] = stackEntry;

		if (visited.contains(node)) {
			// we've discovered an alternate path to a node we previously visited, stop searching further
			graph->addEdge({ parent, memberName }, node);
			continue;
		}
		visited.insert(node);

		if (parent != nullptr)
		{
			// auto creates nodes for us
			graph->addEdge({ parent, memberName }, node);
#ifdef _DEBUG
			printf("Add edge: %s::%s -> %s\n", parent->cppName.c_str(), memberName.c_str(), node->cppName.c_str());
			assert(graph->containsEdge({ parent, memberName }, node));
#endif
		}

		if (node->supers.size() > 0)
		{
			queue.push_back(std::tuple(node->supers[0], node, std::to_string(reinterpret_cast<uint64_t>(&node->supers[0]))));
		}

		for (auto& member : node->definedMembers)
		{
			if (member.type.clickable)
			{
				const auto address = node->memoryAddress + member.offset;

				switch (member.type.propertyType)
				{
				case PropertyType::ObjectProperty:
				case PropertyType::ClassProperty:
				case PropertyType::StructProperty:
					EngineStructs::Struct* childStruc;
					if (isValidStructName(address, member.type.name, childStruc))
					{
						queue.push_back(std::tuple(childStruc, node, member.name));
					}
					break;
				case PropertyType::ArrayProperty:
					switch (member.type.subTypes[0].propertyType)
					{
					case PropertyType::ObjectProperty:
					case PropertyType::ClassProperty:
					case PropertyType::StructProperty:
						{
							const auto block = LiveMemory::getMemoryBlock(node->memoryAddress);
							if (!block) break; // invalid memory block?
							if (member.type.subTypes.size() != 1) break; // broken TArray

							const auto arr = block->read<TArray<uint64_t>>(address);
							EngineStructs::Struct* childStruc;

							if (isValidStructName(reinterpret_cast<uint64_t>(arr.Data), member.type.subTypes[0].name, childStruc))
							{
								queue.push_back(std::tuple(childStruc, node, member.name));
							}
							break;
						}
					default: ;
					}
					break;
				default: ;
				}
				continue;
			}
		}

	}
}

std::string windows::LiveEditor::convertToLowercase(const std::string& str)
{
	std::string result = "";
	for (char ch : str) result += tolower(ch);

	return result;
}