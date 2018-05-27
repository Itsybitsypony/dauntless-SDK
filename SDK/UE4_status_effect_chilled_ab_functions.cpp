// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_status_effect_chilled_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function status_effect_chilled_ab.status_effect_chilled_ab_C.OnFinish_494B1AF24F5F68C22102F09F3AEA900B
// (BlueprintCallable, BlueprintEvent)

void Ustatus_effect_chilled_ab_C::OnFinish_494B1AF24F5F68C22102F09F3AEA900B()
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_chilled_ab.status_effect_chilled_ab_C.OnFinish_494B1AF24F5F68C22102F09F3AEA900B");

	Ustatus_effect_chilled_ab_C_OnFinish_494B1AF24F5F68C22102F09F3AEA900B_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_chilled_ab.status_effect_chilled_ab_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ustatus_effect_chilled_ab_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_chilled_ab.status_effect_chilled_ab_C.K2_ActivateAbilityFromEvent");

	Ustatus_effect_chilled_ab_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_chilled_ab.status_effect_chilled_ab_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)

void Ustatus_effect_chilled_ab_C::K2_OnEndAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_chilled_ab.status_effect_chilled_ab_C.K2_OnEndAbility");

	Ustatus_effect_chilled_ab_C_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function status_effect_chilled_ab.status_effect_chilled_ab_C.ExecuteUbergraph_status_effect_chilled_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ustatus_effect_chilled_ab_C::ExecuteUbergraph_status_effect_chilled_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function status_effect_chilled_ab.status_effect_chilled_ab_C.ExecuteUbergraph_status_effect_chilled_ab");

	Ustatus_effect_chilled_ab_C_ExecuteUbergraph_status_effect_chilled_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
