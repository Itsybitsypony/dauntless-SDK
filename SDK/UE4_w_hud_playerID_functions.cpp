// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_hud_playerID_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_hud_playerID.w_hud_playerID_C.UpdatePlayerID
// (BlueprintCallable, BlueprintEvent)

void Uw_hud_playerID_C::UpdatePlayerID()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_playerID.w_hud_playerID_C.UpdatePlayerID");

	Uw_hud_playerID_C_UpdatePlayerID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_hud_playerID.w_hud_playerID_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_hud_playerID_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_playerID.w_hud_playerID_C.Construct");

	Uw_hud_playerID_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_hud_playerID.w_hud_playerID_C.ExecuteUbergraph_w_hud_playerID
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_hud_playerID_C::ExecuteUbergraph_w_hud_playerID(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_hud_playerID.w_hud_playerID_C.ExecuteUbergraph_w_hud_playerID");

	Uw_hud_playerID_C_ExecuteUbergraph_w_hud_playerID_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
