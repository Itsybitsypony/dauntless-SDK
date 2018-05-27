// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_npc_interactive_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function quest_npc_interactive_bp.quest_npc_interactive_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aquest_npc_interactive_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_npc_interactive_bp.quest_npc_interactive_bp_C.UserConstructionScript");

	Aquest_npc_interactive_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_npc_interactive_bp.quest_npc_interactive_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aquest_npc_interactive_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_npc_interactive_bp.quest_npc_interactive_bp_C.ReceiveBeginPlay");

	Aquest_npc_interactive_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_npc_interactive_bp.quest_npc_interactive_bp_C.ExecuteUbergraph_quest_npc_interactive_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aquest_npc_interactive_bp_C::ExecuteUbergraph_quest_npc_interactive_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_npc_interactive_bp.quest_npc_interactive_bp_C.ExecuteUbergraph_quest_npc_interactive_bp");

	Aquest_npc_interactive_bp_C_ExecuteUbergraph_quest_npc_interactive_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
