// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_invulnerabilty_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function invulnerabilty_ab.invulnerabilty_ab_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGameplayEventData*     EventData                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uinvulnerabilty_ab_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function invulnerabilty_ab.invulnerabilty_ab_C.K2_ActivateAbilityFromEvent");

	Uinvulnerabilty_ab_C_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function invulnerabilty_ab.invulnerabilty_ab_C.ExecuteUbergraph_invulnerabilty_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinvulnerabilty_ab_C::ExecuteUbergraph_invulnerabilty_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function invulnerabilty_ab.invulnerabilty_ab_C.ExecuteUbergraph_invulnerabilty_ab");

	Uinvulnerabilty_ab_C_ExecuteUbergraph_invulnerabilty_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
