
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: GameplayAbilities

/// Class /Game/GameplayEffectTemplates/GET_DamageParent.GET_DamageParent_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_DamageParent_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_AfflictedParent.GET_AfflictedParent_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_AfflictedParent_C : public UGET_DamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_TagContainer.GET_TagContainer_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_TagContainer_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_PeriodicDamageParent.GET_PeriodicDamageParent_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_PeriodicDamageParent_C : public UGET_AfflictedParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_PeriodicPhysicalDamage_C : public UGET_PeriodicDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_Status_FullHealth.GET_Status_FullHealth_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_Status_FullHealth_C : public UGET_TagContainer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_PeriodicEnergyDamage.GET_PeriodicEnergyDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_PeriodicEnergyDamage_C : public UGET_PeriodicPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_CooldownDuration.GET_CooldownDuration_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_CooldownDuration_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/Get_DirectDamageParent.Get_DirectDamageParent_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGet_DirectDamageParent_C : public UGET_DamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectEnvironmentDamage.GET_DirectEnvironmentDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_DirectEnvironmentDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_FatalDamage.GET_FatalDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_FatalDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectVehicleDamage.GET_DirectVehicleDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_DirectVehicleDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_FallingDamage.GET_FallingDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_FallingDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectPhysicalDamage.GET_DirectPhysicalDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_DirectPhysicalDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_EnergyCost.GET_EnergyCost_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_EnergyCost_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectEnergyDamage.GET_DirectEnergyDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_DirectEnergyDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_KnockbackImmunityTag.GET_KnockbackImmunityTag_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_KnockbackImmunityTag_C : public UGET_TagContainer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_Cooldown.GET_Cooldown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_Cooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/Hero/GET_Cooldown_Hero.GET_Cooldown_Hero_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_Cooldown_Hero_C : public UGET_Cooldown_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/Hero/GET_Cooldown_Hero_Active.GET_Cooldown_Hero_Active_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_Cooldown_Hero_Active_C : public UGET_Cooldown_Hero_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectCreatureDamage.GET_DirectCreatureDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGET_DirectCreatureDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

