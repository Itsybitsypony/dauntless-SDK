// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dot_fire_playertobehemoth_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dot_fire_playertobehemoth_ab.dot_fire_playertobehemoth_ab_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Udot_fire_playertobehemoth_ab_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_fire_playertobehemoth_ab.dot_fire_playertobehemoth_ab_C.K2_ActivateAbilityFromEvent");

	Udot_fire_playertobehemoth_ab_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dot_fire_playertobehemoth_ab.dot_fire_playertobehemoth_ab_C.ExecuteUbergraph_dot_fire_playertobehemoth_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udot_fire_playertobehemoth_ab_C::ExecuteUbergraph_dot_fire_playertobehemoth_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dot_fire_playertobehemoth_ab.dot_fire_playertobehemoth_ab_C.ExecuteUbergraph_dot_fire_playertobehemoth_ab");

	Udot_fire_playertobehemoth_ab_C_ExecuteUbergraph_dot_fire_playertobehemoth_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
