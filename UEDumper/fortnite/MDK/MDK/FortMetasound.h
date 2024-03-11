
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FortMetasound.FortMetaSoundInterfaceSubsystem
/// Size: 0x00C0 (0x000030 - 0x0000F0)
class UFortMetaSoundInterfaceSubsystem : public UAudioEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Enum /Script/FortMetasound.EFortMetaSoundAutoInterfaceTypes
/// Size: 0x05
enum class EFortMetaSoundAutoInterfaceTypes : uint8_t
{
	EFortMetaSoundAutoInterfaceTypes__None                                           = 0,
	EFortMetaSoundAutoInterfaceTypes__Movement                                       = 1,
	EFortMetaSoundAutoInterfaceTypes__Time                                           = 2,
	EFortMetaSoundAutoInterfaceTypes__ActiveSound                                    = 4,
	EFortMetaSoundAutoInterfaceTypes__EFortMetaSoundAutoInterfaceTypes_MAX           = 5
};

/// Enum /Script/FortMetasound.EFortAudioAffiliation
/// Size: 0x05
enum class EFortAudioAffiliation : uint8_t
{
	EFortAudioAffiliation__Local                                                     = 0,
	EFortAudioAffiliation__Friendly                                                  = 1,
	EFortAudioAffiliation__Enemy                                                     = 2,
	EFortAudioAffiliation__Neutral                                                   = 3,
	EFortAudioAffiliation__EFortAudioAffiliation_MAX                                 = 4
};

