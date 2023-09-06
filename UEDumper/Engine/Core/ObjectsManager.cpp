#include "ObjectsManager.h"

#include "Core.h"
#include "../UEClasses/UnrealClasses.h"
#include "Frontend/IGHelper.h"
#include "Frontend/Texture/TextureCreator.h"
#include "Frontend/Windows/LogWindow.h"
#include "Memory/memory.h"

void ObjectsManager::verifyUBigObjectSize(UObjectManager::UBigObject* bigObjectPtr, int requiredSize)
{
	if (requiredSize > UOBJECT_MAX_SIZE)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER",
			"HARD ERROR! A UObject tried to acces more space (%d) than it can have max (%d). Try increasing UOBJECT_MAX_SIZE", requiredSize, UOBJECT_MAX_SIZE);
		errorReason = windows::LogWindow::getLastLogMessage();
		presentTopMostCallback = true;
		throw std::runtime_error("required size way too large???");
	}

	//do we have to read more than we did at one point before?
	if (bigObjectPtr->readSize < requiredSize)
	{
		//the real uobject ptr is actually at the buffer base where normally the vtable is
		void* UObjectGamePtr = *reinterpret_cast<void**>(bigObjectPtr->object);
		//and now read the object again but at the required size
		Memory::read(UObjectGamePtr, &bigObjectPtr->object, requiredSize);
		//overwrite vtable again with the pointer
		*reinterpret_cast<void**>(bigObjectPtr->object) = UObjectGamePtr;
		//new readsize
		bigObjectPtr->readSize = requiredSize;
	}
}

uint64_t ObjectsManager::getUObjectPtrByIndex(int index)
{
	//should never happen
	if (index > gUObjectManager.UObjectArray.NumElements)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER",
			"HARD ERROR: getUObjectPtrByIndex requested index %d which is out of range (max: %d)! Are you out of the SDK generation?", index, gUObjectManager.UObjectArray.NumElements);
		errorReason = windows::LogWindow::getLastLogMessage();
		presentTopMostCallback = true;
		throw std::runtime_error("Index larger than NumElements?");
	}

	return *reinterpret_cast<uint64_t*>(gUObjectManager.pGObjectPtrArray + index * 24);
}

ObjectsManager::ObjectsManager()
{
	bOperationSuccess = false;
	const auto UObjectAddr = EngineCore::getOffsetAddress(EngineCore::getOffsetForName("OFFSET_GOBJECTS"));
	if (!UObjectAddr)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER", "UObject address offset not found / invalid!");
		errorReason = "UObject address offset not found / invalid!";
		return;
	}

	gUObjectManager.UObjectArray = Memory::read<TypeUObjectArray>(UObjectAddr);

	windows::LogWindow::Log(windows::LogWindow::log_0, "OBJECTSMANAGER", "TUObject -> 0x%p", gUObjectManager.UObjectArray.Objects);
	windows::LogWindow::Log(windows::LogWindow::log_0, "OBJECTSMANAGER", "TUObject elements: %d", gUObjectManager.UObjectArray.NumElements);

	if(!gUObjectManager.UObjectArray.Objects)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER", "TUObject pointer is invalid!");
		errorReason = "TUObject pointer is invalid! This means the OFFSET_GOBJECTS offset is wrong. Please fix this!";
		return;
	}

	if (gUObjectManager.UObjectArray.NumElements < 100)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER", "TUobject elements are invalid!");
		errorReason = "TUobject elements are invalid! This means the OFFSET_GOBJECTS offset is wrong. Please fix this!";
		return;
	}

#if UE_VERSION >= UE_4_25

	windows::LogWindow::Log(windows::LogWindow::log_0, "OBJECTSMANAGER", "TUObject -> 0x%p", gUObjectManager.UObjectArray.Objects);
	//allocating a large enough buffer for all FFields using uobject size because that should be big enough
	gFFieldManager.pFFieldArray = reinterpret_cast<uint64_t>(calloc(1, FFIELD_CT * UOBJECT_MAX_SIZE));

	if (!gFFieldManager.pFFieldArray)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER", "Could not allocate bytes for the FFields! Is FFIELD_CT too large?");
		errorReason = windows::LogWindow::getLastLogMessage();
		return;
	}
	windows::LogWindow::Log(windows::LogWindow::log_0, "OBJECTSMANAGER", "Allocated %llX bytes for FFields cache", FFIELD_CT * UOBJECT_MAX_SIZE);


	gFFieldManager.pFFieldClassArray = reinterpret_cast<uint64_t>(calloc(1, FFIELD_CLASSES_CT * sizeof(FFieldClass)));

	if (!gFFieldManager.pFFieldClassArray)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER", "Could not allocate bytes for the FFieldClasses! Is FFIELD_CLASSES_CT too large?");
		errorReason = windows::LogWindow::getLastLogMessage();
		return;
	}
	windows::LogWindow::Log(windows::LogWindow::log_0, "OBJECTSMANAGER", "Allocated %llX bytes for FFieldClass cache", FFIELD_CLASSES_CT * sizeof(FFieldClass));

	bOperationSuccess = true;
#endif
}

bool ObjectsManager::operationSuccess(std::string& errorString)
{
	errorString = errorReason;
	return bOperationSuccess;
}

std::string ObjectsManager::getErrorMessage()
{
	return errorReason;
}

void ObjectsManager::copyGObjectPtrs(int64_t& finishedBytes, int64_t& totalBytes, CopyStatus& status)
{
	bOperationSuccess = false;
	status = CS_busy;
	finishedBytes = 0;
	totalBytes = gUObjectManager.UObjectArray.NumElements * 24;
	gUObjectManager.pGObjectPtrArray = reinterpret_cast<uint64_t>(calloc(1, totalBytes));
	windows::LogWindow::Log(windows::LogWindow::log_0, "OBJECTSMANAGER", "Allocating 0x%p bytes of memory for GObjectPtrArray at 0x%p", totalBytes, gUObjectManager.pGObjectPtrArray);
	if (!gUObjectManager.pGObjectPtrArray)
	{
		status = CS_error;
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER", "Failed to allocate memory for GObjectPtrArray!");
		errorReason = windows::LogWindow::getLastLogMessage();
		return;
	}

#if UE_VERSION < UE_4_20
	//no chunks
	const uint64_t objectArrayStart = reinterpret_cast<uint64_t>(gUObjectManager.UObjectArray.Objects);

	while (finishedBytes + 0x100 < totalBytes)
	{
		Memory::read(reinterpret_cast<void*>(objectArrayStart + finishedBytes), reinterpret_cast<void*>(gUObjectManager.pGObjectPtrArray + finishedBytes), 0x100);
		finishedBytes += 0x100;
	}
	const auto reminingBytes = totalBytes - finishedBytes;
	Memory::read(reinterpret_cast<void*>(objectArrayStart + finishedBytes), reinterpret_cast<void*>(gUObjectManager.pGObjectPtrArray + finishedBytes), reminingBytes);
	finishedBytes += reminingBytes;

#else
	//chunks apperared
#if UE_VERSION == UE_4_20
	constexpr auto numElementsPerChunk = 65 * 1024;
#else
	constexpr auto numElementsPerChunk = 64 * 1024;
#endif

	constexpr auto chunkBytesSize = numElementsPerChunk * 24;

	for (int i = 0; i < gUObjectManager.UObjectArray.NumChunks; i++)
	{
		//chunks are in objects* 
		const auto chunkStart = Memory::read<uint64_t>(reinterpret_cast<uint64_t>(gUObjectManager.UObjectArray.Objects) + i * 8);
		auto chunkBytesRead = 0;
		printf("chunk %i from %llX to %llX\n", i, chunkStart, chunkStart + chunkBytesSize);
		//256 bytes is good enough, a full chunk would take 6144 reads.
		//if the cunk is only half full, we got the code below. totalBytes calculates the bytes for all existing elements
		while (finishedBytes + 0x100 < totalBytes && chunkBytesRead < chunkBytesSize)
		{
			Memory::read(reinterpret_cast<void*>(chunkStart + chunkBytesRead), reinterpret_cast<void*>(gUObjectManager.pGObjectPtrArray + finishedBytes), 0x100);
			chunkBytesRead += 0x100;
			finishedBytes += 0x100;
		}
		//fixup the remaining bytes, should only apply for the latest elements in chunk X
		if (finishedBytes + 0x100 > totalBytes && totalBytes - finishedBytes > 0)
		{
			const auto reminingBytes = totalBytes - finishedBytes;
			Memory::read(reinterpret_cast<void*>(chunkStart + chunkBytesRead), reinterpret_cast<void*>(gUObjectManager.pGObjectPtrArray + finishedBytes), reminingBytes);
			finishedBytes += reminingBytes;
		}
	}

#endif

	status = CS_success;
	windows::LogWindow::Log(windows::LogWindow::log_0, "OBJECTSMANAGER", "Loaded GObjectPtrArray succesfully!");

	bOperationSuccess = true;
}

void ObjectsManager::copyUBigObjects(int64_t& finishedBytes, int64_t& totalBytes, CopyStatus& status)
{
	bOperationSuccess = false;
	finishedBytes = 0;
	//only read UObjects atm
	totalBytes = gUObjectManager.UObjectArray.NumElements * sizeof(UObject);
	const auto allocatedBytes = gUObjectManager.UObjectArray.NumElements * sizeof(UObjectManager::UBigObject);
	status = CS_busy;
	//allocate UOBJECT_MAX_SIZE bytes for every UObject
	gUObjectManager.pUBigObjectArray = reinterpret_cast<uint64_t>(calloc(1, allocatedBytes));
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Allocating 0x%llX bytes of memory for UBigObjectArray at 0x%p", totalBytes, gUObjectManager.pUBigObjectArray);

	if (!gUObjectManager.pUBigObjectArray)
	{
		status = CS_error;

		windows::LogWindow::Log(windows::LogWindow::log_2, "ENGINECORE", "Failed to allocate memory for UBigObjectArray!");
		errorReason = windows::LogWindow::getLastLogMessage();
		return;
	}


	//go through each element
	for (int32_t i = 0; i < gUObjectManager.UObjectArray.NumElements; i++)
	{
		//get the real UObject address
		uint64_t UObjectAddress = *reinterpret_cast<uint64_t*>(gUObjectManager.pGObjectPtrArray + i * 24);
		//this happens quite often, those objects just got deleted
		//the array is like a block of cheese with holes
		if (!UObjectAddress) {
			windows::LogWindow::Log(windows::LogWindow::log_1, "ENGINECORE", "Could not resolve address for obect %d!", i);
		}
		else {
			//gets the memory address where the objects gonna be
			UObjectManager::UBigObject* newBigObject = reinterpret_cast<UObjectManager::UBigObject*>(gUObjectManager.pUBigObjectArray + i * sizeof(UObjectManager::UBigObject));
			newBigObject->readSize = sizeof(UObject);
			//read the UObject inside the buffer with UOBJECT_MAX_SIZE bytes size
			Memory::read(reinterpret_cast<void*>(UObjectAddress), newBigObject->object, sizeof(UObject));

			//these are all UObjects. We just override the VTABLE with the UObjectAddress (look at UnrealClasses.h)
			*reinterpret_cast<uint64_t*>(newBigObject->object) = UObjectAddress;

			//link the list to the ptr
			gUObjectManager.linkedUObjectPtrs.insert(std::pair(UObjectAddress, newBigObject));
		}

		finishedBytes += sizeof(UObject);
	}
	status = CS_success;
	windows::LogWindow::Log(windows::LogWindow::log_0, "ENGINECORE", "Loaded UBigObjectArray succesfully!");
	bOperationSuccess = true;
}

uint64_t ObjectsManager::cacheFField(uint64_t gamePtr)
{
	if(gFFieldManager.linkedFFieldIndexCount >= gFFieldManager.maxFFieldCacheNum)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER",
			"HARD ERROR: cacheFField wanted to cache another field but the cache is full! Try increasing FFIELD_CT (currently: %d)", FFIELD_CT);
		errorReason = windows::LogWindow::getLastLogMessage();
		presentTopMostCallback = true;
		throw std::runtime_error("FField cache full");
	}
	uint64_t realAddress = gFFieldManager.pFFieldArray + gFFieldManager.linkedFFieldIndexCount * UOBJECT_MAX_SIZE;
	Memory::read(reinterpret_cast<void*>(gamePtr), reinterpret_cast<void*>(realAddress), UOBJECT_MAX_SIZE);
	*reinterpret_cast<uint64_t*>(realAddress) = gamePtr;
	gFFieldManager.linkedFFieldPtrs.insert(std::pair(gamePtr, realAddress));
	gFFieldManager.linkedFFieldIndexCount++;
	return realAddress;
}

FFieldClass* ObjectsManager::getFFieldClass(void* gamePtr)
{
	auto ptr = reinterpret_cast<uint64_t>(gamePtr);
	if (gFFieldManager.linkedFFieldClassPtrs.contains(ptr))
	{
		return reinterpret_cast<FFieldClass*>(gFFieldManager.linkedFFieldClassPtrs[ptr]);
	}
	//element is not cached, go add it
	if (gFFieldManager.linkedFFieldClassIndexCount >= gFFieldManager.maxFFieldClassCacheNum)
	{
		windows::LogWindow::Log(windows::LogWindow::log_2, "OBJECTSMANAGER",
			"HARD ERROR: getFFieldClass wanted to cache another fieldclass but the cache is full! Try increasing FFIELD_CLASSES_CT (currently: %d)", FFIELD_CLASSES_CT);
		errorReason = windows::LogWindow::getLastLogMessage();
		presentTopMostCallback = true;
		throw std::runtime_error("FFieldClasses cache full");
	}
	uint64_t realAddress = gFFieldManager.pFFieldClassArray + gFFieldManager.linkedFFieldClassIndexCount * sizeof(FFieldClass);
	Memory::read(gamePtr, reinterpret_cast<void*>(realAddress), sizeof(FFieldClass));
	*reinterpret_cast<uint64_t*>(realAddress) = ptr;
	gFFieldManager.linkedFFieldClassPtrs.insert(std::pair(ptr, realAddress));
	gFFieldManager.linkedFFieldClassIndexCount++;
	return reinterpret_cast<FFieldClass*>(realAddress);
}

void ObjectsManager::setSDKGenerationDone()
{
	cacheState = CS_RUNTIME;
}

void ObjectsManager::topmostCallback()
{
	if(presentTopMostCallback)
	{
		const ImVec2 bigWindow = IGHelper::getWindowSize();
		ImGui::SetNextWindowFocus();
		ImGui::PushStyleVar(ImGuiStyleVar_WindowTitleAlign, ImVec2(0.5f, 0.5f));

		ImGui::Begin("Error", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoMove);
		ImGui::SetWindowSize(ImVec2(600, 300), ImGuiCond_Once);

		const ImVec2 smallWindow = ImGui::GetWindowSize();
		ImGui::SetWindowPos(ImVec2(bigWindow.x / 2 - smallWindow.x / 2, bigWindow.y / 2 - smallWindow.y / 2));
		ImGui::PopStyleVar();
		ImGui::SetCursorPosY(40);
		ImGui::Image(TextureCreator::getTexture("warninglogo"), ImVec2(200, 200));
		ImGui::SameLine();
		ImGui::BeginChild("ObjectsManagerTopMostCallbackChild", ImVec2(380, 260), ImGuiWindowFlags_NoScrollWithMouse);
		ImGui::TextWrapped("Sorry! You ran into a unrecoverable error that forces the Dumper to close.");
		ImGui::TextWrapped(errorReason.c_str());
		ImGui::EndChild();
		ImGui::Dummy(ImVec2(ImGui::GetWindowSize().x / 2 - 65, 0));
		ImGui::SameLine();
		if (ImGui::Button("Exit", ImVec2(90, 40)))
		{
			exit(EXIT_FAILURE);
		}

		ImGui::End();
	}

}
