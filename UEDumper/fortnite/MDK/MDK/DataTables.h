
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Struct /VehicleCosmetics/DataTables/Struct_VehicleCosmetics_Painted.Struct_VehicleCosmetics_Painted
/// Size: 0x0040 (0x000000 - 0x000040)
class FStruct_VehicleCosmetics_Painted : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FLinearColor)                              PrimaryColor_32_9242D84D446944DD0D7D739136E38C28            OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              Balanced_34_F677FC9D4B1B4146E8CC9DBCB9E0943E                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              Metallic_41_F57CE68E419E301DD160BEB5D0E32BFC                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              Emissive_44_23B897DD46FCCC1FE8A014AA4FE4104B                OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /VehicleCosmetics/DataTables/Struct_VEH_Windows.Struct_VEH_Windows
/// Size: 0x0020 (0x000000 - 0x000020)
class FStruct_VEH_Windows : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UMaterialInstanceConstant*>) Window_23_9242D84D446944DD0D7D739136E38C28                 OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /VehicleCosmetics/DataTables/Struct_VEH_Skins.Struct_VEH_Skins
/// Size: 0x0020 (0x000000 - 0x000020)
class FStruct_VEH_Skins : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UMaterialInstanceConstant*>) SkinMIC_19_9242D84D446944DD0D7D739136E38C28                OFFSET(get<T>, {0x0, 32, 0, 0})
};

