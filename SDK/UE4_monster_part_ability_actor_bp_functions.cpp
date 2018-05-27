// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_monster_part_ability_actor_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function monster_part_ability_actor_bp.monster_part_ability_actor_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Amonster_part_ability_actor_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function monster_part_ability_actor_bp.monster_part_ability_actor_bp_C.UserConstructionScript");

	Amonster_part_ability_actor_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monster_part_ability_actor_bp.monster_part_ability_actor_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Amonster_part_ability_actor_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function monster_part_ability_actor_bp.monster_part_ability_actor_bp_C.ReceiveBeginPlay");

	Amonster_part_ability_actor_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function monster_part_ability_actor_bp.monster_part_ability_actor_bp_C.ExecuteUbergraph_monster_part_ability_actor_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amonster_part_ability_actor_bp_C::ExecuteUbergraph_monster_part_ability_actor_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function monster_part_ability_actor_bp.monster_part_ability_actor_bp_C.ExecuteUbergraph_monster_part_ability_actor_bp");

	Amonster_part_ability_actor_bp_C_ExecuteUbergraph_monster_part_ability_actor_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
