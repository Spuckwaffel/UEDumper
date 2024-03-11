
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/FortNPCCharacterLocator.FortNPCCharacterLocatorFragment
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortNPCCharacterLocatorFragment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UNPCCharacterDefinition*>)  CharacterDefinition                                         OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FName)                                     RoleName                                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
};

