#pragma once

#include "stdafx.h"
#include "../structs.h"
#include "../Userdefined/Offsets.h"
#include "EngineStructs.h"

/****************************************************
*													*
*	CORE.H: General logic and Caching here			*
*	Do not modify the classes unless you know		*
*	what you do! Should work out of the box			*
*													*
****************************************************/


//largest size of a class that inherits UObject plus padding bytes. You shouldnt have to edit this normally.
//But if you have to, UFunction objects are the largest.
#define UOBJECT_MAX_SIZE 0x150

#if UE_VERSION >= UE_4_25
//the number of FFIELDS to cache. You shouldnt have to change this, this is just for allocating a large enough buffer
#define FFIELD_CT 400000
#define FFIELD_CLASSES_CT 100000

#endif

#define ENGINE_CORE class

//forwarded classes
class UEnum;
class UStruct;
class FFieldClass;
class UProperty;

//forwarded declaration
namespace EngineStructs
{
	struct Member;
	struct Struct;
	struct Enum;
	struct Package;
}


ENGINE_CORE EngineCore
{

	//UObjectArray struct. This one changes between UE versions
	//https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L198
#if UE_VERSION < UE_4_25
	struct FFixedUObjectArray
	{
		/** Static master table to chunks of pointers **/
		FUObjectItem*	Objects = nullptr;
		/** Number of elements we currently have **/
		uint32_t	MaxElements = 0;
		/** Current number of UObject slots */
		uint32_t	NumElements = 0;
	};

	typedef FFixedUObjectArray TypeUObjectArray;
#else
	//UE decided to use chunks for >=4.25
	//https://github.com/EpicGames/UnrealEngine/blob/4.25/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L355
	struct FChunkedFixedUObjectArray
	{
		/** Master table to chunks of pointers **/
		FUObjectItem** Objects;
		/** If requested, a contiguous memory where all objects are allocated **/
		FUObjectItem* PreAllocatedObjects;
		/** Maximum number of elements **/
		int32_t MaxElements;
		/** Number of elements we currently have **/
		int32_t NumElements;
		/** Maximum number of chunks **/
		int32_t MaxChunks;
		/** Number of chunks we currently have **/
		int32_t NumChunks;
	};

	typedef FChunkedFixedUObjectArray TypeUObjectArray;
#endif

	//UBigObject struct. The readSize indicates how many bytes are valid in the array.
#pragma pack(push, 1)
	struct UBigObject
	{
		//valid bytes in the char array
		size_t readSize = 0;
		//if you ask where if the paired UObject game ptr?
		//Well it actually is at object buff + 0! tldr Core.cpp@copyUBigObjects
		char object[UOBJECT_MAX_SIZE];
	};
#pragma pack(pop)

public:

	//copystatus error used in the dump progress
	enum CopyStatus
	{
		CS_idle,
		CS_busy,
		CS_success,
		CS_error
	};

	//objectinfo struct that holds the info of a defined struct/class/enum
	struct ObjectInfo
	{
		//whether the object is a struct
		bool isStruct;
		//the raw package index, convert to runtime index
		int packageIndex;
		//index of the object in the package
		int objectIndex;

		//converts the struct to a JSON object
		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["isStruct"] = isStruct;
			j["packageIndex"] = packageIndex;
			j["objectIndex"] = objectIndex;
			return j;
		}

		//returns a valid object from a JSON object
		static ObjectInfo fromJson(nlohmann::json& json)
		{
			ObjectInfo j;
			j.isStruct = json["isStruct"];
			j.packageIndex = json["packageIndex"];
			j.objectIndex = json["objectIndex"];
			return j;
		}
	};
	

private:
	//ptr to the allocated buffer where all UObject pointers are located
	inline static uint64_t pGObjectPtrArray = 0;
	
	//ptr to the allocated buffer where all UObjects are located
	inline static uint64_t pUBigObjectArray = 0;

#if UE_VERSION >= UE_4_25
	//ptr to the allocated buffer where all FFields are located
	inline static uint64_t pFFieldArray = 0;

	//ptr to the allocated buffer where all FFieldClasses are located
	inline static uint64_t pFFieldClassArray = 0;
#endif

	//Object array that gets scanned once at the beginning
	inline static TypeUObjectArray UObjectArray;

#if UE_VERSION < UE_4_25
	//pointer to GNames on heap
	inline static uint64_t gNames;

#else
	//GNames address (not heap, base + offset)
	inline static uint64_t gNames;
#endif

	//linkage like following: fn ptr to uedumper ptr
	inline static std::unordered_map<uint64_t, UBigObject*> linkedUObjectPtrs{};

#if UE_VERSION >= UE_4_25
	inline static int linkedFFieldIndexCount = 0;
	inline static std::unordered_map<uint64_t, uint64_t> linkedFFieldPtrs{};
	inline static int linkedFFieldClassIndexCount = 0;
	inline static std::unordered_map<uint64_t, uint64_t> linkedFFieldClassPtrs{};
#endif

	//map that returns the UObject ptr for the full String name
	inline static std::unordered_map<std::string, uint64_t> fullStringCache{};

	//mal that returns the String of a FNames ComparisonIndex
	inline static std::unordered_map<int, std::string> FNameCache{};

	//general bSuccess var to store the latest operations success value in the dump progress.
	inline static bool bSuccess = false;

	//vector of all packages available
	inline static std::vector<EngineStructs::Package> packages{};

	//map that returns a ObjectInfo for its given CName
	inline static std::unordered_map<std::string, ObjectInfo> packageObjectInfos;

	//array of strings that holds all object names that dont belong to any class but are referenced
	//null unless function for getting all unknown props get called
	inline static std::vector<std::string> unknownProperties{};

	//map that returns the package index in the vector for the Package.index
	inline static std::unordered_map<int, int> packageIndexes{};

	//gets the manual overridden struct for the given full name
	inline static std::unordered_map<std::string, EngineStructs::Struct> overridingStructs{};

	//user created structs that were not defined by the engine
	inline static std::vector<EngineStructs::Struct> customStructs{};

	//gets the overridden unknown members for the given full name
	inline static std::unordered_map<std::string, EngineStructs::Struct> overridingStructMembers{};

	//vector of all offsets that got defined by the user
	inline static std::vector<Offset> offsets{};
	

	/**
	 * \brief generates unknown bit members inside the EngineStructs::Struct but also checks for user defined bit members
	 * \param count amount of unknown bits
	 * \param offset offset of the bits inside the struct
	 * \param bitOffset bit offset inside the offset (automatically increases the counter)
	 * \param eStruct Struct where the members are going to be added
	 * \param insertPosition the position of the vector where we add the data, leave nullptr if you want to add it at the end of the vector
	 */
	static void generateUnknownBitMembers(int count, int offset, int& bitOffset, EngineStructs::Struct& eStruct, int* insertPosition = nullptr);

	/**
	 * \brief generates a unknownMember inside the EngineStructs::Struct
	 * \param fromOffset starting offset
	 * \param toOffset ending offset (excluded)
	 * \param eStruct Struct where the member is going to be added
	 * \param insertPosition the position of the vector where we add the data, leave nullptr if you want to add it at the end of the vector
	 */
	static void generateUnknownMember(int fromOffset, int toOffset, EngineStructs::Struct& eStruct, int* insertPosition = nullptr);

	/**
	 * \brief tries to replace unknown member blocks with user defined data
	 * \param newMemberOffset the offset that should be reached
	 * \param currentOffset the current offset before the newest var
	 * \param eStruct current Struct where the members get added to
	 * \param insertPosition the position of the vector where we add the data, leave nullptr if you want to add it at the end of the vector
	 */
	static void findOverrideMember(int newMemberOffset, int currentOffset, int& currentBitOffset, EngineStructs::Struct& eStruct, int* insertPosition = nullptr);

	/**
	 * \brief generates all the members for the specific struct
	 * \param object UStruct from memory with all its data
	 * \param data Struct where the members are going to be added
	 */
	static bool generateStruct(UStruct* object, std::vector<EngineStructs::Struct>& data);

	/**
	 * \brief generates an enum for the specific enum
	 * \param object UEnum from memory with all its data
	 * \param data Enum where the enum fields are going to be added
	 */
	static bool generateEnum(const UEnum* object, std::vector<EngineStructs::Enum>& data);
	
public:

	/// constructors

	/**
	 * \brief basic constructor
	 */
	EngineCore();

	/// dump progress

	/**
	 * \brief only used in dumping progress!
	 * \return if the last operation was a success
	 */
	static bool lastOperationSuccess();
	

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! Checks if the game UObject pointer is indexed in the ue dumper
	 * \param UObjectPtr real pointer in the game
	 * \return true if the pointer is indexed and is able to convert
	 */
	static bool existsRealPtr(uint64_t UObjectPtr);
	

	/**
	 * \brief Copies all the bytes from the TypeUObjectArray into a large buffer
	 * \param finishedBytes bytes already copied
	 * \param totalBytes total bytes that need to be copied
	 * \param status status of the operation
	 */
	static void copyGObjectPtrs(int64_t& finishedBytes, int64_t& totalBytes, CopyStatus& status);

	/**
	 * \brief USE ONLY AFTER GOBJECTPTR GENERATION! Copies every UObject into a large buffer
	 * \param finishedBytes bytes already copied
	 * \param totalBytes total bytes that need to be copied
	 * \param status status of the operation
	 */
	static void copyUBigObjects(int64_t& finishedBytes, int64_t& totalBytes, CopyStatus& status);

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! Caches all the FNames of all cached UObjects
	 * \param finishedNames names cached
	 * \param totalNames total names that need to be cached
	 * \param status status of the operation
	 */
	static void cacheFNames(int64_t& finishedNames, int64_t& totalNames, CopyStatus& status);

	/// package generation

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! Generates all Packages
	 * \param finishedPackages generated packages
	 * \param totalPackages amount of Packages that need to be generated
	 * \param status status of the operation
	 */
	static void generatePackages(int64_t& finishedPackages, int64_t& totalPackages, CopyStatus& status);

	/**
	 * \brief USE ONLY AFTER PACKAGE GENERATION!
	 * \return returns the generated packages
	 */
	static std::vector<EngineStructs::Package>& getPackages();

	/// post package generation

	/**
	 * \brief USE ONLY AFTER PACKAGE GENERATION! Converts a CName to a ObjectInfo
	 * \param CName CName of the UObject
	 * \return ObjectInfo of the UObject
	 */
	static ObjectInfo getInfoOfObject(const std::string& CName);

	/**
	 * \brief USE ONLY AFTER PACKAGE GENERATION!
	 * As the packages vector is sorted by name, packages[i] wont match package.index.
	 * This function returns you the right vector index
	 * \param packageIndex the package.index
	 * \return the vector index
	 */
	static int getVectorIndexForPackageIndex(const int packageIndex);

	/**
	 * \brief USE ONLY AFTER PACKAGE GENERATION!
	 * getInfoOfObject might return -1 if a type definition is not found. This function lists all
	 * types that were used in structs but were never defined. (e.g TArray or TMap)
	 * \return vector of all unknown types
	 */
	static std::vector<std::string>& getAllUnknownTypes();

	/**
	 * \brief USE ONLY BEFORE PACKAGE GENERATION! Overrides a existing struct with user defined data
	 * \param eStruct the struct filled with the data
	 */
	static void overrideStruct(EngineStructs::Struct& eStruct);

	/**
	 * \brief USE ONLY BEFORE PACKAGE GENERATION! Creates a new struct that gets added to the BasicTypes package
	 * \param eStruct the struct that gets created
	 */
	static void createStruct(const EngineStructs::Struct& eStruct);

	/**
	 * \brief USE ONLY BEFORE PACKAGE GENERATION! overrides (only!) unknown member blocks  or bits with user defined members
	 * \param eStruct the struct with members that get added to the existing struct
	 */
	static void overrideStructMembers(const EngineStructs::Struct& eStruct);

	/**
	 * \brief RUNTIME ONLY! USE ONLY AFTER PACKAGE GENERATION!
	 * Overrides a existing member in a struct with new one(s)
	 * \param eStruct pointer to the struct that contains the unknown block
	 * \param members vector of members to be added
	 * \param index the member index (that has to be flagged as missed) block of the struct that gets overridden
	 */
	static void runtimeOverrideStructMembers(EngineStructs::Struct* eStruct, std::vector<EngineStructs::Member> members, int index);

	/**
	 * \brief ONLY AFTER FULL PACKAGE GENERATION!
	 * Saves all the states and data to disk into a .uedproj file that can get loaded 
	 */
	static void saveToDisk();

	/**
	 * \brief USE ONLY BEFORE ANY GENERATION! Loads a valid project into the core that can be used in offline mode
	 * \param filepath path to the file
	 * \return true upon success
	 */
	static bool loadProject(const std::string& filepath);

	/**
	 * \brief generates a file with all the struct definitions for StructDefinitions.h that were previously defined and via runtime defined
	 */
	static void generateStructDefinitionsFile();

	/**
	 * \brief 
	 * \return returns (if valid) the TypeUObjectArray
	 */
	static TypeUObjectArray getTUObject();

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! Converts a FName to string
	 * \param name FName of the object
	 * \return string of the FName
	 */
	static std::string FNameToString(FName name);

	/**
	 * \brief returns the address of the Offset element
	 * \param offset Offset struct
	 * \return the address (+ base)
	 */
	static uint64_t getOffsetAddress(const Offset& offset);

	/**
	 * \brief gets the Offset struct for the given name
	 * \param name name of the offset
	 * \return Offset struct if found
	 */
	static Offset getOffsetForName(const std::string& name);

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! Gets the vector offsets
	 * \return vector of offsets
	 */
	static std::vector<Offset> getOffsets();


	/// Section for package generation and live editor
	

	/**
	* \brief USE ONLY AFTER UBIGOBJECT GENERATION! ONLY USE FOR UOBJECTS! Makes sure the required size is also copied
	* \param bigObjectPtr ptr to the char buffer in the dumper (which is in linkedUObjectPtrs)
	* \param requiredSize the required size for the UObject
	*/
	static void verifyUBigObjectSize(UBigObject* bigObjectPtr, int requiredSize);

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! ONLY USE FOR UOBJECTS
	 * \tparam T UObject inherited class
	 * \param index index of the UObject
	 * \return the cached Object
	 */
	template <typename T>
	static T* getUObjectIndex(int32_t index)
	{
		//should never happen
		if (index > UObjectArray.NumElements)
			throw std::runtime_error("Index larger than NumElements?");
		
		UBigObject* object = reinterpret_cast<UBigObject*>(pUBigObjectArray + index * sizeof(UBigObject));

		verifyUBigObjectSize(object, sizeof(T));

		return reinterpret_cast<T*>(object->object);
	}

	/**
	 * \brief USE ONLY AFTER GOBJECTPTR GENERATION! Gets the game Pointer to the UObject
	 * \param index index of the UObject
	 * \return Game pointer
	 */
	static uint64_t getUObjectIndexPtr(int index);

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! Gets the UObject of the given game pointer
	 * \tparam T UObject inherited class
	 * \param gamePtr game pointer to the UObject
	 * \return the cached Object
	 */
	template <typename T>
	static T* getUObject(uint64_t gamePtr)
	{
		if(!existsRealPtr(gamePtr))
		{
			return nullptr;
		}

		verifyUBigObjectSize(linkedUObjectPtrs[gamePtr], sizeof(T));

		return reinterpret_cast<T*>(linkedUObjectPtrs[gamePtr]->object);
	}

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! Gets the UObject of the given game pointer
	 * \tparam T UObject inherited class
	 * \param gamePtr game pointer to the UObject
	 * \return the cached Object
	 */
	template <typename T>
	static T* getUObject(void* gamePtr)
	{
		return getUObject<T>(reinterpret_cast<uint64_t>(gamePtr));

	}

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! Gets the UObject of the full name
	 * \tparam T UObject inherited class
	 * \param name Full name of the UObject
	 * \return the cached Object
	 */
	template <typename T>
	static T* findObject(std::string name)
	{
		//check if the object is in out cache
		if (fullStringCache.contains(name))
		{
			//get the UObject from the fn ptr in the map
			return getUObject<T>(fullStringCache[name]);
		}

		for (int32_t i = 0; i < UObjectArray.NumElements; i++) {

			//get the uobject for i
			auto obj = getUObjectIndex<T>(i);

			//get the fn ptr
			auto ptr = getUObjectIndexPtr(i);
			
			std::string cname = obj->getFullName();
			
			
			if(cname == name)
			{
				//FullStringCache.insert(std::pair(name, ptr));
				//just insert here, we make a findobject only on specific objects 
				fullStringCache.insert(std::pair(cname, ptr));
				return obj;
				
			}
			
		}
		return nullptr;
	}

#if UE_VERSION >= UE_4_25

	/**
	 * \brief ONLY USE FOR FFIELDS! Caches a FField 
	 * \param  gamePtr game pointer to the FField
	 * \return ue dumper pointer to the FField
	 */
	static uint64_t cacheFField(uint64_t gamePtr);

	/**
	 * \brief ONLY USE FOR FFIELDS! Returns the FField for the game pointer
	 * \tparam T FField inherited class
	 * \param gamePtr game pointer to the FField
	 * \return the cached FField
	 */
	template <typename T>
	static T* getFField(uint64_t gamePtr)
	{
		if(linkedFFieldPtrs.contains(gamePtr))
		{
			return reinterpret_cast<T*>(linkedFFieldPtrs[gamePtr]);
		}
		//element is not cached, go add it
		
		return reinterpret_cast<T*>(cacheFField(gamePtr));
	}

	/**
	 * \brief ONLY USE FOR FFIELDS! Returns the FField for the game pointer
	 * \tparam T FField inherited class
	 * \param gamePtr game pointer to the FField
	 * \return the cached FField
	 */
	template <typename T>
	static T* getFField(void* gamePtr)
	{
		return getFField<T>(reinterpret_cast<uint64_t>(gamePtr));

	}

	/**
	 * \brief ONLY USE FOR FFIELDS! Returns the FFieldClass for the game pointer
	 * \param gamePtr game pointer to the FFieldClass
	 * \return the cached FFieldClass
	 */
	static FFieldClass* getFFieldClass(void* gamePtr);

#endif
};

