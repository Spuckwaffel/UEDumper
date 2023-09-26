#pragma once
#include "stdafx.h"
#include "Engine/Core/EngineStructs.h"

class MDKGeneration
{
	//whether we already initilaized and dumped all classes
	static inline bool completed;

	static inline std::filesystem::path SDKPath{};

	static inline std::vector<std::string> allnames{};

	static void printCredits(std::ofstream& stream);

	static void generateBasicType();

	static void generatePackage(std::ofstream& stream, const EngineStructs::Package& package);
public:
	MDKGeneration();

	static void generate(int& progressDone, int& totalProgress);
};