#pragma once
#include "stdafx.h"
#include "Engine/Core/EngineStructs.h"

class SDKGeneration
{
	//whether we already initilaized and dumped all classes
	static inline bool completed;

	static inline std::filesystem::path SDKPath{};

	

	static void generateBasicType();

	

public:
	SDKGeneration();

	static void printCredits(std::ofstream& stream);

	static void generatePackage(std::ofstream& file, const EngineStructs::Package& package);

	static void Generate(int& progressDone, int& totalProgress);
};
