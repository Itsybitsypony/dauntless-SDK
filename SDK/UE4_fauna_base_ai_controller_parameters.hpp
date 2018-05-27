#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_base_ai_controller_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function fauna_base_ai_controller.fauna_base_ai_controller_C.UserConstructionScript
struct Afauna_base_ai_controller_C_UserConstructionScript_Params
{
};

// Function fauna_base_ai_controller.fauna_base_ai_controller_C.ReceiveTick
struct Afauna_base_ai_controller_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_ai_controller.fauna_base_ai_controller_C.OnPossess
struct Afauna_base_ai_controller_C_OnPossess_Params
{
	class APawn**                                      PossessedPawn;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function fauna_base_ai_controller.fauna_base_ai_controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature
struct Afauna_base_ai_controller_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature_Params
{
	TArray<class AActor*>                              UpdatedActors;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function fauna_base_ai_controller.fauna_base_ai_controller_C.ExecuteUbergraph_fauna_base_ai_controller
struct Afauna_base_ai_controller_C_ExecuteUbergraph_fauna_base_ai_controller_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
