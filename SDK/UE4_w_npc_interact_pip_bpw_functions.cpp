// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_pip_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_npc_interact_pip_bpw.w_npc_interact_pip_bpw_C.SetPipState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_npc_interact_pip_bpw_C::SetPipState(bool Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_pip_bpw.w_npc_interact_pip_bpw_C.SetPipState");

	Uw_npc_interact_pip_bpw_C_SetPipState_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_npc_interact_pip_bpw.w_npc_interact_pip_bpw_C.ExecuteUbergraph_w_npc_interact_pip_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_npc_interact_pip_bpw_C::ExecuteUbergraph_w_npc_interact_pip_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_pip_bpw.w_npc_interact_pip_bpw_C.ExecuteUbergraph_w_npc_interact_pip_bpw");

	Uw_npc_interact_pip_bpw_C_ExecuteUbergraph_w_npc_interact_pip_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
