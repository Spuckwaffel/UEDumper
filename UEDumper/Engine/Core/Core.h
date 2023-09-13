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

#define ENGINE_CORE class

//forwarded classes
class UEnum;
class UStruct;
class UFunction;
class FFieldClass;
class UProperty;

//forwarded declaration
namespace EngineStructs
{
	struct Member;
	struct Struct;
	struct Enum;
	struct Function;
	struct Package;
}


ENGINE_CORE EngineCore
{
public:



	//objectinfo struct that holds the info of a defined struct/class/enum/function
	struct ObjectInfo
	{

		enum ObjectType
		{
			OI_Struct,
			OI_Class,
			OI_Enum,
			OI_Function,
			OI_MAX
		};

		ObjectType type;
		//the raw package index, convert to runtime index
		int packageIndex;
		//index of the object in the specific vector
		int objectIndex;

		//converts the struct to a JSON object
		nlohmann::json toJson() const
		{
			nlohmann::json j;
			j["type"] = type;
			j["packageIndex"] = packageIndex;
			j["objectIndex"] = objectIndex;
			return j;
		}

		//returns a valid object from a JSON object
		static ObjectInfo fromJson(nlohmann::json& json)
		{
			ObjectInfo j;
			j.type = json["type"];
			j.packageIndex = json["packageIndex"];
			j.objectIndex = json["objectIndex"];
			return j;
		}
	};
	

private:
#if UE_VERSION < UE_4_25
	//pointer to GNames on heap
	inline static uint64_t gNames;

#else
	//GNames address (not heap, base + offset)
	inline static uint64_t gNames;
#endif

	//map that returns the UObject ptr for the full String name
	inline static std::unordered_map<std::string, uint64_t> fullStringCache{};

	//mal that returns the String of a FNames ComparisonIndex
	inline static std::unordered_map<int, std::string> FNameCache{};

	friend class ObjectsManager;

	friend struct EngineStructs::Struct;

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
	 * \brief generates all the members for the specific struct or class
	 * \param object UStruct from memory with all its data
	 * \param data Struct where the members are going to be added
	 */
	static bool generateStructOrClass(UStruct* object, std::vector<EngineStructs::Struct>& data);

	/**
	 * \brief generates an enum for the specific enum
	 * \param object UEnum from memory with all its data
	 * \param data Enum where the enum fields are going to be added
	 */
	static bool generateEnum(const UEnum* object, std::vector<EngineStructs::Enum>& data);

	/**
	* \brief generates a function for the specific struct
	* \param object UStruct from memory with all its data
	* \param data Function where the function is going to be added
	*/
	static bool generateFunctions(const UStruct* object, std::vector<EngineStructs::Function>& data);

	/**
	 * \brief adds a member to the member array in case it has place. Only use after generation of the members.
	 * \param eStruct the target struct
	 * \param member the member
	 */
	static bool RUNAddMemberToMemberArray(EngineStructs::Struct& eStruct, const EngineStructs::Member& member);

	/**
	 * \brief (re)generates the cookedmembers array in the given struct
	 * \param eStruct the struct where the cookedmembers array should be (re)generated
	 */
	static void cookMemberArray(EngineStructs::Struct& eStruct);
	
public:

	/// constructors

	/**
	 * \brief basic constructor
	 */
	EngineCore();

	static bool initSuccess();

	//Dump generation

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
	 * \brief as functions store tuples for the function information this gets the function
	 * \param package the package where the function is in
	 * \param functionIndex index in the function vector
	 * \return the function and its parent struct
	 */
	static std::pair<std::reference_wrapper<const EngineStructs::Function>, std::reference_wrapper<const EngineStructs::Struct>> getFunctionFromVectorIndex(
		const EngineStructs::Package& package, int functionIndex);

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
	 * \brief USE ONLY BEFORE PACKAGE GENERATION! Overrides a existing struct with user defined data.
	 * When calling overrideStruct, the engine will skip the entire struct defined by the game. Creating a
	 * invalid struct that doesnt match the size that the game expects will most likely result in broken
	 * SDKs and live editor crashes.
	 * \param eStruct the struct filled with the data
	 */
	static void overrideStruct(EngineStructs::Struct& eStruct);

	/**
	 * \brief USE ONLY BEFORE PACKAGE GENERATION! Creates a new struct that gets added to the BasicTypes package.
	 * Use this to create structs the game has but arent present in the SDK. 
	 * \param eStruct the struct that gets created
	 */
	static void createStruct(const EngineStructs::Struct& eStruct);

	/**
	 * \brief USE ONLY BEFORE PACKAGE GENERATION! Overrides (only!) unknown member blocks or bits with user defined members.
	 * If you try to override a existing and valid member, it gets not overridden.
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
	static void runtimeOverrideStructMembers(EngineStructs::Struct* eStruct, const std::vector<EngineStructs::Member>& members);

	/**
	 * \brief ONLY AFTER FULL PACKAGE GENERATION!
	 * Saves all the states and data to disk into a .uedproj file that can get loaded 
	 */
	static void saveToDisk(int& progressDone, int& totalProgress);

	/**
	 * \brief USE ONLY BEFORE ANY GENERATION! Loads a valid project into the core that can be used in offline mode
	 * \param filepath path to the file
	 * \return true upon success
	 */
	static bool loadProject(const std::string& filepath, int& progressDone, int& totalProgress);

	/**
	 * \brief generates a file with all the struct definitions for StructDefinitions.h that were previously defined and via runtime defined
	 */
	static void generateStructDefinitionsFile();


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

};

