// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_kill_behemoth_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function kill_behemoth_ab.kill_behemoth_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ukill_behemoth_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function kill_behemoth_ab.kill_behemoth_ab_C.K2_ActivateAbility");

	Ukill_behemoth_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function kill_behemoth_ab.kill_behemoth_ab_C.ExecuteUbergraph_kill_behemoth_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ukill_behemoth_ab_C::ExecuteUbergraph_kill_behemoth_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function kill_behemoth_ab.kill_behemoth_ab_C.ExecuteUbergraph_kill_behemoth_ab");

	Ukill_behemoth_ab_C_ExecuteUbergraph_kill_behemoth_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
