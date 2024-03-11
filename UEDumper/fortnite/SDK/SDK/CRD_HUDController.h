
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine

/// Class /Script/CRD_HUDController.CustomHUDLayoutComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCustomHUDLayoutComponent : public UActorComponent
{ 
public:
	char                                               DynamicUISceneLayerID;                                      // 0x00A0   (0x0001)  
	unsigned char                                      UnknownData00_5[0x7];                                       // 0x00A1   (0x0007)  MISSED
	class UDynamicUIScene*                             CachedScene;                                                // 0x00A8   (0x0008)  
	SDK_UNDEFINED(8,12588) /* TWeakObjectPtr<AFortAthenaMutator_HUDElementVisibility*> */ __um(CachedMutator);     // 0x00B0   (0x0008)  


	/// Functions
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.UpdateDynamicUIScene
	// void UpdateDynamicUIScene();                                                                                          // [0xac3dcd0] Final|Native|Protected 
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.PlayerPreRemoved
	// void PlayerPreRemoved(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);                                             // [0xac3da68] Final|Native|Protected 
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.HandleTeamIndexChanged
	// void HandleTeamIndexChanged(char TeamIndex);                                                                          // [0xac3d9ec] Final|Native|Protected 
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.HandleMinigameEnded
	// void HandleMinigameEnded();                                                                                           // [0xac3d9d8] Final|Native|Protected 
	// Function /Script/CRD_HUDController.CustomHUDLayoutComponent.GetTargetWidgetClassFromTag
	// TWeakObjectPtr<UClass*> GetTargetWidgetClassFromTag(FGameplayTag& GameplayTag);                                       // [0x18a39e4] Event|Protected|HasOutParms|BlueprintEvent 
};

