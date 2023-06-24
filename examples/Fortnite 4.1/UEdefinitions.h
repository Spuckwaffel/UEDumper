#pragma once
#include <minwindef.h>

/************************************************************************************************
*							VERY IMPORTANT! PLEASE EDIT FOR YOUR GAME
*
*	This file contains engine definitions you have to edit depending on the game.
*	If you are unfamiliar with the names, ask for help or try it out.
*	You will have to recompile the program if you make changes.
*	This is very important for the struct sizes, they change depending of your settings.
*	Every setting has its own Unreal engine comment and use the same naming as the UE
*	definitions so you can easily look them up.
*
*
************************************************************************************************/

/// This file contains engine definitions that you have to edit depending on the game!
///	These values have to be set and the program has to recompile to set set the settings



//supported unreal engine versions, dont edit
#define UE_4_19		0
#define UE_4_20		1
#define UE_4_21		2
#define UE_4_22		3
#define UE_4_23		4
#define UE_4_24		5
#define UE_4_25		6
#define UE_4_26		7
#define UE_4_27		8
#define UE_5_00		9
#define UE_5_01		10
#define UE_5_02		11


/* UE version settings */

//set your games ue version
#define UE_VERSION UE_4_19


/* FName settings */


 //in case the FNames are encrypted, it will use your decryption function in FName_decryption.h
#define USE_FNAME_ENCRYPTION TRUE

//set this to TRUE if your game uses WITH_CASE_PRESERVING_NAME (WITH_EDITORONLY_DATA)
//default FALSE
#define WITH_CASE_PRESERVING_NAME FALSE


#if UE_VERSION < UE_4_25
//in EngineCore::FNameToString theres a premade FNameEntry calculation. Though games sometimes have a offset on that calculation
//such as Fortnite (version 3.5). Make sure to find that offset and set it!
//default 0
#define GNAMES_POOL_OFFSET 232
#endif

//only exists for UE version 5.1 and above
#if UE_VERSION > UE_5_00
//UECOMMENT: Storing it in the name table may save memory overall but new number suffixes will cause the name table to grow like unique strings do
//default FALSE
#define UE_FNAME_OUTLINE_NUMBER FALSE
#endif


/* UFunction settings */

/** Enable fast calls for event thunks into an event graph that have no parameters  */
//default TRUE
#define UE_BLUEPRINT_EVENTGRAPH_FASTCALLS TRUE

//only exists for UE version 5.0 and above
#if UE_VERSION >= UE_5_00
//Make sure that live coding define is available. Normally this is supplied by UBT
//default FALSE
#define WITH_LIVE_CODING FALSE
#endif


/* UStruct settings */

#if UE_VERSION >= UE_4_25
//stores an array of parents per struct and uses this to compare - faster than 1 and thread-safe but can have issues with BP reinstancing and hot reload
//default TRUE
#define USTRUCT_FAST_ISCHILDOF_IMPL TRUE
#endif


#define FORTNITE_41