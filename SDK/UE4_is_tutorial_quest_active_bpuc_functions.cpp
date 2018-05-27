// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_is_tutorial_quest_active_bpuc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function is_tutorial_quest_active_bpuc.is_tutorial_quest_active_bpuc_C.OnGetDescription
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uis_tutorial_quest_active_bpuc_C::OnGetDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function is_tutorial_quest_active_bpuc.is_tutorial_quest_active_bpuc_C.OnGetDescription");

	Uis_tutorial_quest_active_bpuc_C_OnGetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function is_tutorial_quest_active_bpuc.is_tutorial_quest_active_bpuc_C.OnEvaluate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonPlayerController** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest**                 OwningQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uis_tutorial_quest_active_bpuc_C::OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function is_tutorial_quest_active_bpuc.is_tutorial_quest_active_bpuc_C.OnEvaluate");

	Uis_tutorial_quest_active_bpuc_C_OnEvaluate_Params params;
	params.PlayerController = PlayerController;
	params.OwningQuest = OwningQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
