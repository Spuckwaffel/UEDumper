
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: HairStrandsCore
/// dependency: OptimusCore

/// Enum /Script/HairStrandsDeformer.EOptimusGroomExecDomain
/// Size: 0x04
enum class EOptimusGroomExecDomain : uint8_t
{
	EOptimusGroomExecDomain__None                                                    = 0,
	EOptimusGroomExecDomain__ControlPoint                                            = 1,
	EOptimusGroomExecDomain__Curve                                                   = 2,
	EOptimusGroomExecDomain__EOptimusGroomExecDomain_MAX                             = 3
};

/// Class /Script/HairStrandsDeformer.OptimusGroomDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGroomDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/HairStrandsDeformer.OptimusGroomDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusGroomDataProvider : public UComputeDataProvider
{ 
public:
	class UGroomComponent*                             Groom;                                                      // 0x0028   (0x0008)  
};

/// Class /Script/HairStrandsDeformer.OptimusGroomExecDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface
{ 
public:
	unsigned char                                      UnknownData00_3[0x8];                                       // 0x0028   (0x0008)  MISSED
	EOptimusGroomExecDomain                            Domain;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData01_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/HairStrandsDeformer.OptimusGroomExecDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusGroomExecDataProvider : public UComputeDataProvider
{ 
public:
	class UGroomComponent*                             GroomComponent;                                             // 0x0028   (0x0008)  
	EOptimusGroomExecDomain                            Domain;                                                     // 0x0030   (0x0001)  
	unsigned char                                      UnknownData00_6[0x7];                                       // 0x0031   (0x0007)  MISSED
};

/// Class /Script/HairStrandsDeformer.OptimusGroomGuideDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGroomGuideDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/HairStrandsDeformer.OptimusGroomGuideDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusGroomGuideDataProvider : public UComputeDataProvider
{ 
public:
	class UGroomComponent*                             Groom;                                                      // 0x0028   (0x0008)  
};

/// Class /Script/HairStrandsDeformer.OptimusGroomWriteDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface
{ 
public:
};

/// Class /Script/HairStrandsDeformer.OptimusGroomWriteDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusGroomWriteDataProvider : public UComputeDataProvider
{ 
public:
	class UGroomComponent*                             GroomComponent;                                             // 0x0028   (0x0008)  
	unsigned char                                      UnknownData00_6[0x8];                                       // 0x0030   (0x0008)  MISSED
};

/// Class /Script/HairStrandsDeformer.OptimusGroomComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGroomComponentSource : public UOptimusComponentSource
{ 
public:
};

