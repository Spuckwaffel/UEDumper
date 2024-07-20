#pragma once

#include "Core.h"
#include "stdafx.h"
#include "../structs.h"
#include "EngineStructs.h"
#include "Frontend/Windows/LogWindow.h"
#include "Memory/memory.h"


/****************************************************
*													*
*	ObjectsManager.h General logic all about the	*
*	UObjects that are used at SDK generation or		*
*	at runtime. This class holds the size of the	*
*	UObjects up to UOBJECT_MAX_SIZE and should not	*
*	be used for live data retrieval, just for the	*
*	UnrealClasses.									*
*													*
****************************************************/

//largest size of a (UE) Class that inherits UObject plus padding bytes. You shouldnt have to edit this normally.
//But if you have to, look at the size of UFunction, these objects are the largest.
#define UOBJECT_MAX_SIZE 0x150

#if UE_VERSION >= UE_4_25
//the number of FFIELDS to cache. You shouldnt have to change this, this is just for allocating a large enough buffer
#define FFIELD_CT 400000
#define FFIELD_CLASSES_CT 100000

#endif

class EngineCore;

//forwarded classes
class UEnum;
class UStruct;
class UFunction;
class FFieldClass;
class UProperty;


//Objects manager class that keeps track of all the UObjects at SDK generation and Runtime (live editor)
class ObjectsManager
{
public:
	//UObjectArray struct. This one changes between UE versions
	//https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L198
	//-> https://github.com/EpicGames/UnrealEngine/blob/4.19/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L760
#if UE_VERSION < UE_4_20
	struct FFixedUObjectArray
	{
		/** Static master table to chunks of pointers **/
		FUObjectItem* Objects = nullptr;
		/** Number of elements we currently have **/
		uint32_t	MaxElements = 0;
		/** Current number of UObject slots */
		uint32_t	NumElements = 0;
	};

	typedef FFixedUObjectArray TypeUObjectArray;
#else
	//UE decided to use chunks for >=4.20
	//https://github.com/EpicGames/UnrealEngine/blob/4.20/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L321
	//-> https://github.com/EpicGames/UnrealEngine/blob/4.20/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L959
	//however the NumElementsPerChunk changed from 65 * 1024 to 64 * 1024 for >= 4.21
	//https://github.com/EpicGames/UnrealEngine/blob/4.21/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L321
	//-> https://github.com/EpicGames/UnrealEngine/blob/4.21/Engine/Source/Runtime/CoreUObject/Public/UObject/UObjectArray.h#L960
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

private:

	friend class EngineCore;

	enum CacheState
	{
		CS_SDKGEN = 0, //we are currently at the SDK generation state, we use our large buffer and are strict
		CS_RUNTIME = 1, //we are currently at the Runtime state, we use the SDK buffer but also track new objects
		CS_MAX = 2 //no use
	};

	inline static CacheState cacheState = CS_SDKGEN; //default is SDK GEN

	struct UObjectManager
	{

		//UBigObject struct. The readSize indicates how many bytes are valid in the array.
#pragma pack(push, 1)
		struct UBigObject
		{
			bool valid = false;
			//valid bytes in the char array
			size_t readSize = 0;
			//if you ask where if the paired UObject game ptr?
			//Well it actually is at object buff + 0! tldr Core.cpp@copyUBigObjects
			char object[UOBJECT_MAX_SIZE];
		};
#pragma pack(pop)

		//ptr to the allocated buffer where all UObject pointers related to the SDK are located
		uint64_t pGObjectPtrArray = 0;
		//ptr to the allocated buffer where all UObjects related to the SDK  are located
		uint64_t pUBigObjectArray = 0;

		//linkage like following: fn ptr to uedumper ptr
		std::unordered_map<uint64_t, UBigObject*> linkedUObjectPtrs{};

		//Object array that gets scanned once at the beginning (should match the UE versions type)
		TypeUObjectArray UObjectArray;
	};

	inline static UObjectManager gUObjectManager = {};

#if UE_VERSION >= UE_4_25

	struct FFieldManager
	{
		//FField
		int linkedFFieldIndexCount = 0;
		std::unordered_map<uint64_t, uint64_t> linkedFFieldPtrs{};

		//ptr to the allocated buffer where all FFields are located
		uint64_t pFFieldArray = 0;

		int64_t maxFFieldCacheNum = FFIELD_CT;


		//FFieldClass
		int linkedFFieldClassIndexCount = 0;
		std::unordered_map<uint64_t, uint64_t> linkedFFieldClassPtrs{};

		//ptr to the allocated buffer where all FFieldClasses are located
		uint64_t pFFieldClassArray = 0;

		int64_t maxFFieldClassCacheNum = FFIELD_CLASSES_CT;
	};

	inline static FFieldManager gFFieldManager = {};
#endif

	/**
	* \brief USE ONLY AFTER UBIGOBJECT GENERATION! Makes sure the required size is also copied
	* OPERATION CHECK NEEDED
	* \param bigObjectPtr ptr to the char buffer in the dumper (which is in linkedUObjectPtrs)
	* \param requiredSize the required size for the UObject
	*/
	static void verifyUBigObjectSize(UObjectManager::UBigObject* bigObjectPtr, int requiredSize);

	

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! ONLY USE FOR UOBJECTS! ONLY USE FOR SDK!!
	 * \param index index of the UObject
	 * \return Game pointer
	 */
	static uint64_t getUObjectPtrByIndex(int index);
	

	//The ObjectsMNanager can call this function to terminate its current job. The program either needs to terminate or fallback
	static void STOP_OPERATION();

	static inline std::string errorReason = "";

	static inline bool _STOP_OPERATION = false;

public:

	

	//basic constructor and default initializer
	ObjectsManager();

	/**
	 * \brief Checks whether this or previous operations were not success. Only true when critical memory errors happen, however they have to be handled accordingly
	 * \return critical stop called
	 */
	static bool CRITICAL_STOP_CALLED();

	/**
	 * \brief Only call this function if you are able to recover from a critical stop!
	 */
	static void resolvedStop();
	
	static std::string getErrorMessage();


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
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION! ONLY USE FOR UOBJECTS! ONLY USE FOR SDK!!
	 * \tparam T UObject inherited class
	 * \param index index of the UObject
	 * \return the cached Object
	 */
	template <typename T>
	static T* getUObjectByIndex(int32_t index)
	{
		//should never happen
		if (index > gUObjectManager.UObjectArray.NumElements)
		{
			windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "OBJECTSMANAGER",
				"HARD ERROR: getUObjectByIndex requested index %d which is out of range (max: %d)! Are you out of the SDK generation?", index, gUObjectManager.UObjectArray.NumElements);
			errorReason = windows::LogWindow::getLastLogMessage();
			STOP_OPERATION();
			return nullptr;
		}
		//this should not fail as UBigObjectArray should have the memory for all SDK index objects
		UObjectManager::UBigObject* object = reinterpret_cast<UObjectManager::UBigObject*>(gUObjectManager.pUBigObjectArray + index * sizeof(UObjectManager::UBigObject));

		if (!object->valid)
		{
			windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_WARNING, "OBJECTSMANAGER",
				"WARN: Requested index %d in getUObjectByIndex is marked invalid!", index);
			return nullptr;
		}

		verifyUBigObjectSize(object, sizeof(T));

		if (CRITICAL_STOP_CALLED())
			return nullptr;

		return reinterpret_cast<T*>(object->object);
	}

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION!\n
	 *	If you try to get a invalid uobject at SDK generation it will fail.
	 *	If you try to get a invalid (not yet indexed) uobject at runtime it will index it
	 *	Consider using in this case Memory::read (but in a optimized way)
	 *	OPERATION CHECK NEEDED
	 * \tparam T UObject inherited class
	 * \param gamePtr game pointer to the UObject
	 * \return the cached Object
	 */
	template <typename T>
	static T* getUObject(uint64_t gamePtr)
	{
#ifdef _DEBUG
		if (gamePtr < 0x100) {
			// if your pointer is less than 0x100, it's likely invalid and there's a bug. Check your structs
			//DebugBreak();
		}
#endif
		if(!gUObjectManager.linkedUObjectPtrs.contains(gamePtr))
		{
			if(cacheState == CacheState::CS_SDKGEN)
			{
				windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "OBJECTSMANAGER",
					"ERROR! Could not find the requested Pointer %llX in the cache!", gamePtr);
				printf("ERROR! Could not find the requested Pointer %llX in the cache!\n", gamePtr);
				return nullptr;
			}
			if (cacheState == CacheState::CS_RUNTIME)
			{
				//allocate enough space for the item
				UObjectManager::UBigObject* bigObject = static_cast<UObjectManager::UBigObject*>(calloc(1, sizeof(UObjectManager::UBigObject)));
				if (bigObject == nullptr)
				{
					windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_ERROR, "OBJECTSMANAGER",
						"HARD ERROR! Could not allocate a new bigObject (size %d) for %llX! Not enough ram?", sizeof(UObjectManager::UBigObject), gamePtr);
					errorReason = windows::LogWindow::getLastLogMessage();
					STOP_OPERATION();
					return nullptr;
				}
				//read the memory of the object, override the vtable and set the readsize
				Memory::read(reinterpret_cast<void*>(gamePtr), bigObject->object, sizeof(T));
				*reinterpret_cast<uint64_t*>(bigObject->object) = gamePtr;
				bigObject->readSize = sizeof(T);
				gUObjectManager.linkedUObjectPtrs.insert(std::pair(gamePtr, bigObject));
				//and return the object
				return reinterpret_cast<T*>(bigObject->object);
			}
			//invalid state
			return nullptr;
				
		}
		UObjectManager::UBigObject* bigObject = gUObjectManager.linkedUObjectPtrs[gamePtr];
		verifyUBigObjectSize(bigObject, sizeof(T));

		if (CRITICAL_STOP_CALLED())
			return nullptr;

		return reinterpret_cast<T*>(bigObject->object);
	}

	/**
	 * \brief USE ONLY AFTER UBIGOBJECT GENERATION!\n
	 *	If you try to get a invalid uobject at SDK generation it will fail.
	 *	If you try to get a invalid (not yet indexed) uobject at runtime it will index it
	 *	Consider using in this case Memory::read (but in a optimized way)
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
	 * OPERATION CHECK NEEDED
	 * \tparam T UObject inherited class
	 * \param name Full name of the UObject
	 * \param raiseHardError whether the program should raise a hard error or not upon unsuccessful find
	 * \return the cached Object
	 */
	template <typename T>
	static T* findObject(std::string name, bool raiseHardError = false)
	{
		if (CRITICAL_STOP_CALLED())
			return nullptr;

		//check if the object is in out cache
		if (EngineCore::fullStringCache.contains(name))
		{
			//get the UObject from the fn ptr in the map
			return getUObject<T>(EngineCore::fullStringCache[name]);
		}

		for (int32_t i = 0; i < gUObjectManager.UObjectArray.NumElements; i++) {

			//get the uobject for i
			auto obj = getUObjectByIndex<T>(i);

			if (CRITICAL_STOP_CALLED())
				return nullptr;

			if (!obj)
				continue;

			//get the fn ptr
			auto ptr = getUObjectPtrByIndex(i);

			if (CRITICAL_STOP_CALLED())
				return nullptr;

			std::string cname = obj->getFullName();

			if (cname == name)
			{
				//FullStringCache.insert(std::pair(name, ptr));
				//just insert here, we make a findobject only on specific objects 
				EngineCore::fullStringCache.insert(std::pair(cname, ptr));
				return obj;
			}

		}
		windows::LogWindow::Log(windows::LogWindow::logLevels::LOGLEVEL_WARNING, "OBJECTSMANAGER",
			"ERROR? Could not find name %s in FindObject!!", name.c_str());
		printf("ERROR? Could not find name %s in FindObject!!\n", name.c_str());
		if(raiseHardError)
		{
			errorReason = windows::LogWindow::getLastLogMessage();
			STOP_OPERATION();
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
		if (gFFieldManager.linkedFFieldPtrs.contains(gamePtr))
		{
			return reinterpret_cast<T*>(gFFieldManager.linkedFFieldPtrs[gamePtr]);
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

	static void setSDKGenerationDone();

	inline static uint64_t decryptPointer(uint64_t ptr)
	{
#if GOBJECTS_XOR_ECRYPTION_KEY
		return ptr ^ GOBJECTS_XOR_ECRYPTION_KEY;
#else
		return ptr;
#endif
	}
};