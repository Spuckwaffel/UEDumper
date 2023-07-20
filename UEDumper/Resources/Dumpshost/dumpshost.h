#pragma once

#include "stdafx.h"

#include <string>
#include <filesystem>


namespace DumpsHost
{
	//unchanged dumpsHost functions, thanks Hinnie!
	void AddOffset(const std::string& string, uint64_t offset);

	void AddClass(const nlohmann::json& json);
	void AddFunction(const nlohmann::json& json);

	void AddStruct(const nlohmann::json& json);
	void AddEnum(const nlohmann::json& json);

	void AddInheritInfo(const nlohmann::json& json);

	void Dump(std::filesystem::path directory);

	//custom function
	void Generate(int& progressDone, int& totalProgress);
}