
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Struct /Script/AttachableWheelsRuntime.AttachableWheelAttachData
/// Size: 0x0058 (0x000000 - 0x000058)
struct FAttachableWheelAttachData
{ 
	SDK_UNDEFINED(8,11816) /* TWeakObjectPtr<UPrimitiveComponent*> */ __um(PrimitiveComponent);                    // 0x0000   (0x0008)  
	FVector                                            Pos;                                                        // 0x0008   (0x0018)  
	FVector                                            Axis1;                                                      // 0x0020   (0x0018)  
	FVector                                            Axis2;                                                      // 0x0038   (0x0018)  
	float                                              Damping;                                                    // 0x0050   (0x0004)  
	FName                                              AttachmentName;                                             // 0x0054   (0x0004)  
};

/// Struct /Script/AttachableWheelsRuntime.AttachableWheelRuntimeData
/// Size: 0x000C (0x000000 - 0x00000C)
struct FAttachableWheelRuntimeData
{ 
	float                                              Torque;                                                     // 0x0000   (0x0004)  
	float                                              Velocity;                                                   // 0x0004   (0x0004)  
	float                                              SteerAngle;                                                 // 0x0008   (0x0004)  
};

/// Class /Script/AttachableWheelsRuntime.AttachableWheel
/// Size: 0x0098 (0x000290 - 0x000328)
class AAttachableWheel : public AActor
{ 
public:
	class UStaticMeshComponent*                        WheelMeshComponent;                                         // 0x0290   (0x0008)  
	FRotator                                           WheelOrientation;                                           // 0x0298   (0x0018)  
	float                                              WheelDistance;                                              // 0x02B0   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x02B4   (0x0004)  MISSED
	class UPhysicsConstraintComponent*                 AxleConstraint;                                             // 0x02B8   (0x0008)  
	FAttachableWheelAttachData                         AttachData;                                                 // 0x02C0   (0x0058)  
	bool                                               bAutoCreateAttachableWheelsComponent;                       // 0x0318   (0x0001)  
	bool                                               bEnableWheelWheelCollision;                                 // 0x0319   (0x0001)  
	unsigned char                                      UnknownData01_5[0x2];                                       // 0x031A   (0x0002)  MISSED
	FAttachableWheelRuntimeData                        RuntimeData;                                                // 0x031C   (0x000C)  


	/// Functions
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.SetRuntimeData
	// void SetRuntimeData(float Torque, float Velocity, float SteerAngle);                                                  // [0xab26afc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnRep_RuntimeData
	// void OnRep_RuntimeData(FAttachableWheelRuntimeData& RuntimeDataPrev);                                                 // [0xab26a78] Final|Native|Protected|HasOutParms 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData
	// void OnRep_AttachData(FAttachableWheelAttachData& AttachDataPrev);                                                    // [0xab269b8] Final|Native|Protected|HasOutParms 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged
	// void OnPhysicsStateChanged(class UPrimitiveComponent* PrimitiveComponent, EComponentPhysicsStateChange StateChange);  // [0xab268f4] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnDetached
	// void OnDetached(class UPrimitiveComponent* DetachedComponent);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.OnAttached
	// void OnAttached(class UPrimitiveComponent* AttachedComponent);                                                        // [0x18a39e4] Event|Protected|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData
	// bool GetWorldSpaceAttachData(FAttachableWheelAttachData& OutAttachData, class UPrimitiveComponent* PrimitiveComponent, FName BodyName); // [0xab26560] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent
	// class UPrimitiveComponent* GetAttachedComponent();                                                                    // [0xab2629c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.GetAttachData
	// FAttachableWheelAttachData GetAttachData();                                                                           // [0xab26244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DrawDebug
	// void DrawDebug();                                                                                                     // [0x36203b0] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.DetachFrom
	// bool DetachFrom(class UPrimitiveComponent* InComponent);                                                              // [0xab2619c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.Detach
	// void Detach();                                                                                                        // [0xab26108] Final|Native|Public|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachTo
	// bool AttachTo(class UPrimitiveComponent* InComponent, FVector& WorldLocation, FVector& AxleDirection, FVector SteerAxis); // [0xab25e74] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AttachableWheelsRuntime.AttachableWheel.AttachInPlace
	// bool AttachInPlace(class UPrimitiveComponent* InComponent);                                                           // [0xab25de4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AttachableWheelsRuntime.AttachableWheelsComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UAttachableWheelsComponent : public UActorComponent
{ 
public:
	SDK_UNDEFINED(80,11817) /* TSet<AAttachableWheel*> */ __um(AttachedWheels);                                    // 0x00A0   (0x0050)  


	/// Functions
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached
	// void OnWheelDetached(class AAttachableWheel* AttachedWheel);                                                          // [0x18a39e4] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached
	// void OnWheelAttached(class AAttachableWheel* AttachedWheel);                                                          // [0x18a39e4] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal
	// bool HandleWheelDetached_Internal(class AAttachableWheel* AttachedWheel);                                             // [0xab26864] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal
	// bool HandleWheelAttached_Internal(class AAttachableWheel* AttachedWheel);                                             // [0xab267d4] Final|Native|Protected 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels
	// TArray<AAttachableWheel*> GetAttachedWheels();                                                                        // [0xab264f4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis
	// class AAttachableWheel* GetAttachedWheelClosestOnAxis(FVector& Point, float& OutClosetDistanceToAxis, FVector& OutClosestPointOnAxis, FVector& OutClosestAxis); // [0xab262c0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DrawDebug
	// void DrawDebug();                                                                                                     // [0x36203b0] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels
	// int32_t DetachAllWheels();                                                                                            // [0xab2611c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

