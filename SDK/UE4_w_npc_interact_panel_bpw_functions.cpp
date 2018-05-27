// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_panel_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_npc_interact_panel_bpw.w_npc_interact_panel_bpw_C.Get_BottomSwoosh_Visibility_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_npc_interact_panel_bpw_C::Get_BottomSwoosh_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_panel_bpw.w_npc_interact_panel_bpw_C.Get_BottomSwoosh_Visibility_1");

	Uw_npc_interact_panel_bpw_C_Get_BottomSwoosh_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
