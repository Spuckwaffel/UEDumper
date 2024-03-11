
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: HairStrandsCore
/// dependency: OptimusCore

/// Class /Script/HairStrandsDeformer.OptimusGroomDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGroomDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HairStrandsDeformer.OptimusGroomDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusGroomDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UGroomComponent*)                    Groom                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/HairStrandsDeformer.OptimusGroomExecDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusGroomExecDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EOptimusGroomExecDomain)                   Domain                                                      OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/HairStrandsDeformer.OptimusGroomExecDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusGroomExecDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UGroomComponent*)                    GroomComponent                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(EOptimusGroomExecDomain)                   Domain                                                      OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/HairStrandsDeformer.OptimusGroomGuideDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGroomGuideDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HairStrandsDeformer.OptimusGroomGuideDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusGroomGuideDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UGroomComponent*)                    Groom                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/HairStrandsDeformer.OptimusGroomWriteDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGroomWriteDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HairStrandsDeformer.OptimusGroomWriteDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UOptimusGroomWriteDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UGroomComponent*)                    GroomComponent                                              OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/HairStrandsDeformer.OptimusGroomComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusGroomComponentSource : public UOptimusComponentSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/HairStrandsDeformer.EOptimusGroomExecDomain
/// Size: 0x04
enum class EOptimusGroomExecDomain : uint8_t
{
	EOptimusGroomExecDomain__None                                                    = 0,
	EOptimusGroomExecDomain__ControlPoint                                            = 1,
	EOptimusGroomExecDomain__Curve                                                   = 2,
	EOptimusGroomExecDomain__EOptimusGroomExecDomain_MAX                             = 3
};

