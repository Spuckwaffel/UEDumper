#pragma once
#include "stdafx.h"

class SDKGeneration
{
	//whether we already initilaized and dumped all classes
	static inline bool completed;

	static inline std::filesystem::path SDKPath{};

	static void printCredits(std::ofstream& stream);

	static void generateBasicType();

public:
	SDKGeneration();

	static void Generate();
};
