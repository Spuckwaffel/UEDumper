#pragma once
#include "stdafx.h"
#include "Engine/Core/EngineStructs.h"

class MDKGeneration
{
	//whether we already initilaized and dumped all classes
	static inline bool completed;

	static inline std::filesystem::path SDKPath{};

	static void printCredits(std::ofstream& stream);

	static void generatePackage(std::ofstream& stream, const EngineStructs::Package& package);
public:
	MDKGeneration();
};
