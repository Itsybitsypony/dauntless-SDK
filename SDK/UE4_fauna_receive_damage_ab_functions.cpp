// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_receive_damage_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function fauna_receive_damage_ab.fauna_receive_damage_ab_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ufauna_receive_damage_ab_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_receive_damage_ab.fauna_receive_damage_ab_C.K2_ActivateAbilityFromEvent");

	Ufauna_receive_damage_ab_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_receive_damage_ab.fauna_receive_damage_ab_C.ExecuteUbergraph_fauna_receive_damage_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufauna_receive_damage_ab_C::ExecuteUbergraph_fauna_receive_damage_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_receive_damage_ab.fauna_receive_damage_ab_C.ExecuteUbergraph_fauna_receive_damage_ab");

	Ufauna_receive_damage_ab_C_ExecuteUbergraph_fauna_receive_damage_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
