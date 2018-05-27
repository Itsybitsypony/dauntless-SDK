#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function npc_function_library.npc_function_library_C.SetAllPlayersVisibility
struct Unpc_function_library_C_SetAllPlayersVisibility_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_function_library.npc_function_library_C.DoesPlayerMeetRequirement
struct Unpc_function_library_C_DoesPlayerMeetRequirement_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fplayercontroller_requirements              Requirement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
	TScriptInterface<class Uinteractable_npc_interface_C> Vendor;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       NoValidConditionsFoundText;                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               MeetsRequirement;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FText                                       FailureReason;                                            // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
