#pragma once

#include "stdafx.h"
#include "Engine/Core/EngineStructs.h"

namespace windows
{
	//class handler for edit popups
	class EditWindow
	{
		struct editStruc
		{
			bool bRenderEdits = false;
			EngineStructs::Member* editMember = nullptr;
			EngineStructs::Struct* editStruct = nullptr;
		};

		struct NewType
		{
			//1 and 2 in case the user wants to add a member that has subtypes
			bool clickable = false;
			bool clickable1 = false;
			bool clickable2 = false;

			bool bHas1Subtype = false;
			bool bHas2Subtypes = false;

			//str -> propertyType
			char propertyType[40] = { 0 };
			char propertyType1[40] = { 0 };
			char propertyType2[40] = { 0 };

			char propertyName[40] = { 0 };
			char propertyName1[40] = { 0 };
			char propertyName2[40] = { 0 };

			char name[40] = { 0 };
			int bitOffset = 0;
			int offset = 0;
			int size = 0;
		};

		static bool overrideStruct(std::vector<NewType>& newTypes, char* buf);

		static void renderEditField();

		static void renderEditBit();


		static inline editStruc edit;

	public:
		EditWindow();

		static void pushEdit(EngineStructs::Struct* struc, EngineStructs::Member* member);

		static void renderEdits();
	};

}

