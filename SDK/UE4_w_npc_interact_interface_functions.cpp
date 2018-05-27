// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_npc_interact_interface.w_npc_interact_interface_C.NPCInteractInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Avendor_interactive_bp_C* Vendor                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fnpc_ui_struct          NPCMenuTuning                  (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_npc_interact_interface_C::NPCInteractInitialize(class Avendor_interactive_bp_C* Vendor, const struct Fnpc_ui_struct& NPCMenuTuning)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_npc_interact_interface.w_npc_interact_interface_C.NPCInteractInitialize");

	Uw_npc_interact_interface_C_NPCInteractInitialize_Params params;
	params.Vendor = Vendor;
	params.NPCMenuTuning = NPCMenuTuning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
