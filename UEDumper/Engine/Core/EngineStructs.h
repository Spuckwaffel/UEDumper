#pragma once
#include <algorithm>
#include <vector>
#include <cstdint>

#include "../structs.h"

//type struct that is used for a field in the package
struct fieldType
{
	//clickable if redirection is supported
	bool clickable = false;
	//typedef of the type
	PropertyType propertyType = PropertyType::Unknown;
	//typedef but better naming case. This is needed as some properties have multiple names (bool <-> unsigned char)
	std::string name = "";

	//int size_internal; //useless most of the time because we have engine size, just good for TArray or TSet for easier access to the sizes in live editor

	//a subtype is a (maybe) clickable type. Sometimes there exist more, so vector.
	//it makes it possible to click objects e.g in a TArray<x,y> for redirection
	std::vector<fieldType> subTypes = {};

	//essentially for dumps.host
	std::string stringify() const
	{
		std::string typeStr = name;

		if (subTypes.size() > 0)
		{
			typeStr += "<";


			for (int i = 0; i < subTypes.size(); i++)
			{
				typeStr += subTypes[i].name;

				if ((subTypes[i].propertyType == PropertyType::ObjectProperty || subTypes[i].propertyType == PropertyType::ClassProperty) && clickable)
					typeStr += "*";

				if (i < subTypes.size() - 1)
					typeStr += ", ";

			}

			typeStr += ">";

		}
		else
		{
			if ((propertyType == PropertyType::ObjectProperty || propertyType == PropertyType::ClassProperty) && clickable)
			{
				typeStr += "*";
			}
		}
		return typeStr;

	}

	nlohmann::json toJson() const
	{
		nlohmann::json j;
		j["clickable"] = clickable;
		j["propertyType"] = propertyType;
		j["name"] = name;
		nlohmann::json jsubTypes;
		for (const auto& subType : subTypes)
			jsubTypes.push_back(subType.toJson());
		j["subTypes"] = jsubTypes;
		return j;
	}
	static fieldType fromJson(const nlohmann::json& json)
	{
		fieldType t;
		t.clickable = json["clickable"];
		t.propertyType = json["propertyType"];
		t.name = json["name"];
		nlohmann::json jsubTypes = json["subTypes"];
		for (const nlohmann::json& subType : jsubTypes)
			t.subTypes.push_back(fromJson(subType));
		return t;
	}

};

//used for the packages
namespace EngineStructs
{
	/**
	 * \brief Member struct. Contains info about a single member
	 */
	struct Member
	{

		fieldType type; //type of the member
		std::string name; //name of the member
		int offset = 0; //offset of the member (real offset)
		int size = 0; //size of the member
		bool missed = false; //if the member is actually a missed member and is just used to fill up bytes
		bool isBit = false; //if the member is a bit (": 1")
		int bitOffset = 0;
		bool userEdited = false; //if the member is edited by a user

		bool operator==(Member obj) const { return obj.name == name && obj.offset == offset && obj.bitOffset == bitOffset; }

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["type"] = type.toJson();
			j["name"] = name;
			j["offset"] = offset;
			j["size"] = size;
			j["missed"] = missed;
			j["isBit"] = isBit;
			j["bitOffset"] = bitOffset;
			j["userEdited"] = userEdited;
			return j;
		}

		static Member fromJson(const nlohmann::json& json)
		{
			Member m;
			m.type = fieldType::fromJson(json["type"]);
			m.name = json["name"];
			m.offset = json["offset"];
			m.size = json["size"];
			m.missed = json["missed"];
			m.isBit = json["isBit"];
			m.bitOffset = json["bitOffset"];
			m.userEdited = json["userEdited"];
			return m;
		}
	};

	/**
	 * \brief Function struct. Contains info about a single function
	 */
	struct Function
	{
		uintptr_t memoryAddress;
		std::string fullName;
		std::string cppName;
		std::string params;
		std::string flags;
		uint64_t func = 0;

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["memoryAddress"] = memoryAddress;
			j["fullName"] = fullName;
			j["cppName"] = cppName;
			j["flags"] = flags;
			j["func"] = func;
			return j;
		}

		static Function fromJson(const nlohmann::json& json)
		{
			Function f;
			f.memoryAddress = json["memoryAddress"];
			f.fullName = json["fullName"];
			f.cppName = json["cppName"];
			f.flags = json["flags"];
			f.func = json["func"];
			return f;
		}
	};

	/**
	 * \brief Struct/Class struct. Contains members and information about the Struct/Class
	 */
	struct Struct
	{
		bool isClass = false; //if struct is actually a class
		uintptr_t memoryAddress = 0; //the real memory address where the struct is
		std::string fullName; //the full name of the struct
		std::string cppName; //the cppName of the struct
		std::vector<std::string> supers{}; //all the structs it inherits
		bool inherited = false; //if the struct is inherited
		int size = 0; //true size of the struct
		int inheretedSize = 0; //size of the inherited structs
		int unknownCount = 0; //keep track of all missed vars, only used for the package viewer to edit unknowndata
		std::vector<Member> members{}; //array of all members of the struct
		std::vector<Function> functions{}; //array of all functions of the struct

		bool operator==(const Struct& st) const
		{
			return st.fullName == fullName;
		}

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["isClass"] = isClass;
			j["memoryAddress"] = memoryAddress;
			j["fullName"] = fullName;
			j["cppName"] = cppName;
			j["supers"] = supers;
			j["inherited"] = inherited;
			j["size"] = size;
			j["inheretedSize"] = inheretedSize;
			j["unknownCount"] = unknownCount;
			nlohmann::json jMembers;
			for (const auto& member : members)
				jMembers.push_back(member.toJson());
			j["members"] = jMembers;
			nlohmann::json jFunctions;
			for (const auto& fn : functions)
				jFunctions.push_back(fn.toJson());
			j["functions"] = jFunctions;
			return j;
		}

		static Struct fromJson(const nlohmann::json& json)
		{
			Struct s;
			s.isClass = json["isClass"];
			s.memoryAddress = json["memoryAddress"];
			s.fullName = json["fullName"];
			s.cppName = json["cppName"];
			s.supers = json["supers"];
			s.inherited = json["inherited"];
			s.size = json["size"];
			s.inheretedSize = json["inheretedSize"];
			s.unknownCount = json["unknownCount"];
			const nlohmann::json jMembers = json["members"];
			for (const nlohmann::json& member : jMembers)
				s.members.push_back(Member::fromJson(member));
			const nlohmann::json jFunctions = json["functions"];
			for (const nlohmann::json& fn : jFunctions)
				s.functions.push_back(Function::fromJson(fn));

			return s;
		}
	};

	struct Enum
	{
		uintptr_t memoryAddress;
		std::string fullName;
		std::string cppName;
		std::string type;
		std::vector<std::pair<std::string, int>>members;

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["memoryAddress"] = memoryAddress;
			j["fullName"] = fullName;
			j["cppName"] = cppName;
			j["type"] = type;
			nlohmann::json jMembers;
			for(const auto& member : members)
			{
				nlohmann::json jMember;
				jMember["first"] = member.first;
				jMember["second"] = member.second;
				jMembers.push_back(jMember);
			}
			j["members"] = jMembers;
			return j;
		}

		static Enum fromJson(const nlohmann::json& json)
		{
			Enum e;
			e.memoryAddress = json["memoryAddress"];
			e.fullName = json["fullName"];
			e.cppName = json["cppName"];
			e.type = json["type"];
			const nlohmann::json jMembers = json["members"];
			for (const nlohmann::json& member : jMembers)
				e.members.push_back(std::pair(member["first"], member["second"]));

			return e;
		}
	};

	struct Package
	{
		std::string packageName;
		int index;
		int itemCount;
		std::vector<Struct> structs;
		std::vector<Enum> enums;

		static bool packageCompare(const Package& a, const Package& b) {
			if (a.packageName == "BasicType")
				return true;
			if (b.packageName == "BasicType")
				return false;

			std::string sa = a.packageName;
			std::string sb = b.packageName;
			std::ranges::transform(sa, sa.begin(),
			                       [](unsigned char c) { return std::tolower(c); });
			std::ranges::transform(sb, sb.begin(),
			                       [](unsigned char c) { return std::tolower(c); });
			return sa < sb;
		}

		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["packageName"] = packageName;
			j["index"] = index;
			j["itemCount"] = itemCount;
			nlohmann::json jStructs;
			for(const auto& struc : structs)
				jStructs.push_back(struc.toJson());
			j["structs"] = jStructs;
			nlohmann::json jEnums;
			for (const auto& enu : enums)
				jEnums.push_back(enu.toJson());
			j["enums"] = jEnums;
			return j;
		}

		static Package fromJson(const nlohmann::json& json)
		{
			Package p;
			p.packageName = json["packageName"];
			p.index = json["index"];
			p.itemCount = json["itemCount"];
			nlohmann::json jStructs = json["structs"];
			for (const nlohmann::json& struc : jStructs)
				p.structs.push_back(Struct::fromJson(struc));
			nlohmann::json jEnums = json["enums"];
			for (const nlohmann::json& enu : jEnums)
				p.enums.push_back(Enum::fromJson(enu));

			return p;
		}
	};
};