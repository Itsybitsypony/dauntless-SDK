// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_combat_ihammer_animbp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_combat_ihammer_animbp.player_combat_ihammer_animbp_C.OnAmmoCountChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_combat_ihammer_animbp_C::OnAmmoCountChanged_Event_1(int NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_combat_ihammer_animbp.player_combat_ihammer_animbp_C.OnAmmoCountChanged_Event_1");

	Uplayer_combat_ihammer_animbp_C_OnAmmoCountChanged_Event_1_Params params;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_combat_ihammer_animbp.player_combat_ihammer_animbp_C.ExecuteUbergraph_player_combat_ihammer_animbp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_combat_ihammer_animbp_C::ExecuteUbergraph_player_combat_ihammer_animbp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_combat_ihammer_animbp.player_combat_ihammer_animbp_C.ExecuteUbergraph_player_combat_ihammer_animbp");

	Uplayer_combat_ihammer_animbp_C_ExecuteUbergraph_player_combat_ihammer_animbp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
