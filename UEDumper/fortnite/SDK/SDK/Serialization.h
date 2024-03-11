
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

#pragma once
/// dependency: BasicType
/// dependency: CoreUObject

/// Struct /Script/Serialization.StructSerializerNumericTestStruct
/// Size: 0x0030 (0x000000 - 0x000030)
struct FStructSerializerNumericTestStruct
{ 
	int8_t                                             Int8;                                                       // 0x0000   (0x0001)  
	unsigned char                                      UnknownData00_5[0x1];                                       // 0x0001   (0x0001)  MISSED
	int16_t                                            Int16;                                                      // 0x0002   (0x0002)  
	int32_t                                            int32;                                                      // 0x0004   (0x0004)  
	int64_t                                            Int64;                                                      // 0x0008   (0x0008)  
	char                                               uint8;                                                      // 0x0010   (0x0001)  
	unsigned char                                      UnknownData01_5[0x1];                                       // 0x0011   (0x0001)  MISSED
	uint16_t                                           UInt16;                                                     // 0x0012   (0x0002)  
	uint32_t                                           uint32;                                                     // 0x0014   (0x0004)  
	uint64_t                                           UInt64;                                                     // 0x0018   (0x0008)  
	float                                              float0;                                                     // 0x0020   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x0024   (0x0004)  MISSED
	double                                             Double;                                                     // 0x0028   (0x0008)  
};

/// Struct /Script/Serialization.StructSerializerBooleanTestStruct
/// Size: 0x0003 (0x000000 - 0x000003)
struct FStructSerializerBooleanTestStruct
{ 
	bool                                               BoolFalse;                                                  // 0x0000   (0x0001)  
	bool                                               BoolTrue;                                                   // 0x0001   (0x0001)  
	bool                                               Bitfield0 : 1;                                              // 0x0002:0 (0x0001)  
	bool                                               Bitfield1 : 1;                                              // 0x0002:1 (0x0001)  
	bool                                               Bitfield2Set : 1;                                           // 0x0002:2 (0x0001)  
	bool                                               Bitfield3 : 1;                                              // 0x0002:3 (0x0001)  
	bool                                               Bitfield4Set : 1;                                           // 0x0002:4 (0x0001)  
	bool                                               Bitfield5Set : 1;                                           // 0x0002:5 (0x0001)  
	bool                                               Bitfield6 : 1;                                              // 0x0002:6 (0x0001)  
	bool                                               Bitfield7Set : 1;                                           // 0x0002:7 (0x0001)  
};

/// Struct /Script/Serialization.StructSerializerObjectTestStruct
/// Size: 0x00A0 (0x000000 - 0x0000A0)
struct FStructSerializerObjectTestStruct
{ 
	class UClass*                                      RawClass;                                                   // 0x0000   (0x0008)  
	class UClass*                                      WrappedClass;                                               // 0x0008   (0x0008)  
	class UClass*                                      SubClass;                                                   // 0x0010   (0x0008)  
	SDK_UNDEFINED(32,15545) /* TWeakObjectPtr<UClass*> */ __um(SoftClass);                                         // 0x0018   (0x0020)  
	class UObject*                                     RawObject;                                                  // 0x0038   (0x0008)  
	class UObject*                                     WrappedObject;                                              // 0x0040   (0x0008)  
	SDK_UNDEFINED(8,15546) /* TWeakObjectPtr<UMetaData*> */ __um(WeakObject);                                      // 0x0048   (0x0008)  
	SDK_UNDEFINED(32,15547) /* TWeakObjectPtr<UMetaData*> */ __um(SoftObject);                                     // 0x0050   (0x0020)  
	FSoftClassPath                                     ClassPath;                                                  // 0x0070   (0x0018)  
	FSoftObjectPath                                    ObjectPath;                                                 // 0x0088   (0x0018)  
};

/// Struct /Script/Serialization.StructSerializerBuiltinTestStruct
/// Size: 0x00D0 (0x000000 - 0x0000D0)
struct FStructSerializerBuiltinTestStruct
{ 
	FGuid                                              Guid;                                                       // 0x0000   (0x0010)  
	FName                                              Name;                                                       // 0x0010   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0014   (0x0004)  MISSED
	SDK_UNDEFINED(16,15548) /* FString */              __um(String);                                               // 0x0018   (0x0010)  
	SDK_UNDEFINED(24,15549) /* FText */                __um(Text);                                                 // 0x0028   (0x0018)  
	FVector                                            Vector;                                                     // 0x0040   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0058   (0x0008)  MISSED
	FVector4                                           Vector4;                                                    // 0x0060   (0x0020)  
	FRotator                                           Rotator;                                                    // 0x0080   (0x0018)  
	unsigned char                                      UnknownData02_5[0x8];                                       // 0x0098   (0x0008)  MISSED
	FQuat                                              Quat;                                                       // 0x00A0   (0x0020)  
	FColor                                             Color;                                                      // 0x00C0   (0x0004)  
	unsigned char                                      UnknownData03_6[0xC];                                       // 0x00C4   (0x000C)  MISSED
};

/// Struct /Script/Serialization.StructSerializerLWCTypesTest
/// Size: 0x0360 (0x000000 - 0x000360)
struct FStructSerializerLWCTypesTest
{ 
	FVector                                            Vector;                                                     // 0x0000   (0x0018)  
	FVector2D                                          Vector2D;                                                   // 0x0018   (0x0010)  
	unsigned char                                      UnknownData00_5[0x8];                                       // 0x0028   (0x0008)  MISSED
	FVector4                                           Vector4;                                                    // 0x0030   (0x0020)  
	FMatrix                                            Matrix;                                                     // 0x0050   (0x0080)  
	FPlane                                             Plane;                                                      // 0x00D0   (0x0020)  
	FQuat                                              Quat;                                                       // 0x00F0   (0x0020)  
	FRotator                                           Rotator;                                                    // 0x0110   (0x0018)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x0128   (0x0008)  MISSED
	FTransform                                         Transform;                                                  // 0x0130   (0x0060)  
	FBox                                               Box;                                                        // 0x0190   (0x0038)  
	FBox2D                                             Box2D;                                                      // 0x01C8   (0x0028)  
	FBoxSphereBounds                                   BoxSphereBounds;                                            // 0x01F0   (0x0038)  
	FOrientedBox                                       OrientedBox;                                                // 0x0228   (0x0078)  
	float                                              float0;                                                     // 0x02A0   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x02A4   (0x0004)  MISSED
	double                                             Double;                                                     // 0x02A8   (0x0008)  
	TArray<FVector>                                    VectorArray;                                                // 0x02B0   (0x0010)  
	SDK_UNDEFINED(80,15550) /* TMap<FString, FVector> */ __um(StrToVec);                                           // 0x02C0   (0x0050)  
	SDK_UNDEFINED(80,15551) /* TSet<FVector> */        __um(VectorSet);                                            // 0x0310   (0x0050)  
};

/// Struct /Script/Serialization.OrientedBoxFloat
/// Size: 0x003C (0x000000 - 0x00003C)
struct FOrientedBoxFloat
{ 
	FVector3f                                          Center;                                                     // 0x0000   (0x000C)  
	FVector3f                                          AxisX;                                                      // 0x000C   (0x000C)  
	FVector3f                                          AxisY;                                                      // 0x0018   (0x000C)  
	FVector3f                                          AxisZ;                                                      // 0x0024   (0x000C)  
	float                                              ExtentX;                                                    // 0x0030   (0x0004)  
	float                                              ExtentY;                                                    // 0x0034   (0x0004)  
	float                                              ExtentZ;                                                    // 0x0038   (0x0004)  
};

/// Struct /Script/Serialization.StructSerializerNonLWCTypesTest
/// Size: 0x0220 (0x000000 - 0x000220)
struct FStructSerializerNonLWCTypesTest
{ 
	FVector3f                                          Vector;                                                     // 0x0000   (0x000C)  
	FVector2f                                          Vector2D;                                                   // 0x000C   (0x0008)  
	unsigned char                                      UnknownData00_5[0xC];                                       // 0x0014   (0x000C)  MISSED
	FVector4f                                          Vector4;                                                    // 0x0020   (0x0010)  
	FMatrix44f                                         Matrix;                                                     // 0x0030   (0x0040)  
	FPlane4f                                           Plane;                                                      // 0x0070   (0x0010)  
	FQuat4f                                            Quat;                                                       // 0x0080   (0x0010)  
	FRotator3f                                         Rotator;                                                    // 0x0090   (0x000C)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x009C   (0x0004)  MISSED
	FTransform3f                                       Transform;                                                  // 0x00A0   (0x0030)  
	FBox3f                                             Box;                                                        // 0x00D0   (0x001C)  
	FBox2f                                             Box2D;                                                      // 0x00EC   (0x0014)  
	FBoxSphereBounds3f                                 BoxSphereBounds;                                            // 0x0100   (0x001C)  
	FOrientedBoxFloat                                  OrientedBox;                                                // 0x011C   (0x003C)  
	float                                              float0;                                                     // 0x0158   (0x0004)  
	unsigned char                                      UnknownData02_5[0x4];                                       // 0x015C   (0x0004)  MISSED
	double                                             Double;                                                     // 0x0160   (0x0008)  
	TArray<FVector3f>                                  VectorArray;                                                // 0x0168   (0x0010)  
	SDK_UNDEFINED(80,15552) /* TMap<FString, FVector3f> */ __um(StrToVec);                                         // 0x0178   (0x0050)  
	SDK_UNDEFINED(80,15553) /* TSet<FVector3f> */      __um(VectorSet);                                            // 0x01C8   (0x0050)  
	unsigned char                                      UnknownData03_6[0x8];                                       // 0x0218   (0x0008)  MISSED
};

/// Struct /Script/Serialization.StructSerializerByteArray
/// Size: 0x0038 (0x000000 - 0x000038)
struct FStructSerializerByteArray
{ 
	int32_t                                            Dummy1;                                                     // 0x0000   (0x0004)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x0004   (0x0004)  MISSED
	TArray<char>                                       ByteArray;                                                  // 0x0008   (0x0010)  
	int32_t                                            Dummy2;                                                     // 0x0018   (0x0004)  
	unsigned char                                      UnknownData01_5[0x4];                                       // 0x001C   (0x0004)  MISSED
	TArray<int8_t>                                     Int8Array;                                                  // 0x0020   (0x0010)  
	int32_t                                            Dummy3;                                                     // 0x0030   (0x0004)  
	unsigned char                                      UnknownData02_6[0x4];                                       // 0x0034   (0x0004)  MISSED
};

/// Struct /Script/Serialization.StructSerializerArrayTestStruct
/// Size: 0x0060 (0x000000 - 0x000060)
struct FStructSerializerArrayTestStruct
{ 
	TArray<int32_t>                                    Int32Array;                                                 // 0x0000   (0x0010)  
	TArray<char>                                       ByteArray;                                                  // 0x0010   (0x0010)  
	int32_t                                            StaticSingleElement;                                        // 0x0020   (0x0004)  
	int32_t                                            StaticInt32Array;                                           // 0x0024   (0x000C)  
	float                                              StaticFloatArray;                                           // 0x0030   (0x000C)  
	unsigned char                                      UnknownData00_5[0x4];                                       // 0x003C   (0x0004)  MISSED
	TArray<FVector>                                    VectorArray;                                                // 0x0040   (0x0010)  
	TArray<FStructSerializerBuiltinTestStruct>         StructArray;                                                // 0x0050   (0x0010)  
};

/// Struct /Script/Serialization.StructSerializerMapTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
struct FStructSerializerMapTestStruct
{ 
	SDK_UNDEFINED(80,15554) /* TMap<int32_t, FString> */ __um(IntToStr);                                           // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,15555) /* TMap<FString, FString> */ __um(StrToStr);                                           // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,15556) /* TMap<FString, FVector> */ __um(StrToVec);                                           // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,15557) /* TMap<FString, FStructSerializerBuiltinTestStruct> */ __um(StrToStruct);             // 0x00F0   (0x0050)  
};

/// Struct /Script/Serialization.StructSerializerSetTestStruct
/// Size: 0x0140 (0x000000 - 0x000140)
struct FStructSerializerSetTestStruct
{ 
	SDK_UNDEFINED(80,15558) /* TSet<FString> */        __um(StrSet);                                               // 0x0000   (0x0050)  
	SDK_UNDEFINED(80,15559) /* TSet<int32_t> */        __um(IntSet);                                               // 0x0050   (0x0050)  
	SDK_UNDEFINED(80,15560) /* TSet<FName> */          __um(NameSet);                                              // 0x00A0   (0x0050)  
	SDK_UNDEFINED(80,15561) /* TSet<FStructSerializerBuiltinTestStruct> */ __um(StructSet);                        // 0x00F0   (0x0050)  
};

/// Struct /Script/Serialization.StructSerializerTestStruct
/// Size: 0x07F0 (0x000000 - 0x0007F0)
struct FStructSerializerTestStruct
{ 
	FStructSerializerNumericTestStruct                 Numerics;                                                   // 0x0000   (0x0030)  
	FStructSerializerBooleanTestStruct                 Booleans;                                                   // 0x0030   (0x0003)  
	unsigned char                                      UnknownData00_5[0x5];                                       // 0x0033   (0x0005)  MISSED
	FStructSerializerObjectTestStruct                  Objects;                                                    // 0x0038   (0x00A0)  
	unsigned char                                      UnknownData01_5[0x8];                                       // 0x00D8   (0x0008)  MISSED
	FStructSerializerBuiltinTestStruct                 Builtins;                                                   // 0x00E0   (0x00D0)  
	FStructSerializerArrayTestStruct                   Arrays;                                                     // 0x01B0   (0x0060)  
	FStructSerializerMapTestStruct                     Maps;                                                       // 0x0210   (0x0140)  
	FStructSerializerSetTestStruct                     Sets;                                                       // 0x0350   (0x0140)  
	FStructSerializerLWCTypesTest                      LWCTypes;                                                   // 0x0490   (0x0360)  
};

