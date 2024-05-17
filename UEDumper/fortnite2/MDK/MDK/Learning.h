
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: NNE

/// Class /Script/Learning.LearningNeuralNetworkData
/// Size: 0x0038 (0x000028 - 0x000060)
class ULearningNeuralNetworkData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   InputSize                                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   OutputSize                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   CompatibilityHash                                           OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<char>)                              FileData                                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(class UNNEModelData*)                      ModelData                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
};

