#pragma once
#include "stdafx.h"
#include "Engine/Core/EngineStructs.h"

class SDKGeneration
{
	//whether we already initilaized and dumped all classes
	static inline bool completed;

	static inline std::filesystem::path SDKPath{};

	static inline std::vector<std::string> allnames{};

	static inline int undefinedCnt = 0;

	static void generateBasicType();



public:
	SDKGeneration();

	static void printCredits(std::ofstream& stream);

	static void generatePackage(std::ofstream& stream, const EngineStructs::Package& package, int featureFlags, std::unordered_map<std::string, std::string> &originalPackageToMerged);

	static void Generate(int& progressDone, int& totalProgress, int featureFlags);
};