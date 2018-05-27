#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_info_debug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ai_info_debug.ai_info_debug_C.POST Server Behemoth Montage Event
struct Aai_info_debug_C_POST_Server_Behemoth_Montage_Event_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Started;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_info_debug.ai_info_debug_C.UserConstructionScript
struct Aai_info_debug_C_UserConstructionScript_Params
{
};

// Function ai_info_debug.ai_info_debug_C.ReceiveBeginPlay
struct Aai_info_debug_C_ReceiveBeginPlay_Params
{
};

// Function ai_info_debug.ai_info_debug_C.ReceiveTick
struct Aai_info_debug_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_info_debug.ai_info_debug_C.Set Debug Visibility
struct Aai_info_debug_C_Set_Debug_Visibility_Params
{
};

// Function ai_info_debug.ai_info_debug_C.MontageStarted
struct Aai_info_debug_C_MontageStarted_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_info_debug.ai_info_debug_C.MontageBlendingOut
struct Aai_info_debug_C_MontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bInterrupted;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function ai_info_debug.ai_info_debug_C.ExecuteUbergraph_ai_info_debug
struct Aai_info_debug_C_ExecuteUbergraph_ai_info_debug_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
