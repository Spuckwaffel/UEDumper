
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/OptimusSettings.OptimusSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UOptimusSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EOptimusDefaultDeformerMode)               DefaultMode                                                 OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TWeakObjectPtr<UMeshDeformer*>)            DefaultDeformer                                             OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UMeshDeformer*>)            DefaultRecomputeTangentDeformer                             OFFSET(get<T>, {0x58, 32, 0, 0})
};

/// Enum /Script/OptimusSettings.EOptimusDefaultDeformerMode
/// Size: 0x03
enum class EOptimusDefaultDeformerMode : uint8_t
{
	EOptimusDefaultDeformerMode__Never                                               = 0,
	EOptimusDefaultDeformerMode__OptIn                                               = 1,
	EOptimusDefaultDeformerMode__Always                                              = 2
};

