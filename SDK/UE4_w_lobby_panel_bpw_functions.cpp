// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_lobby_panel_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.SetModifiers
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           Modifiers                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_lobby_panel_bpw_C::SetModifiers(TArray<struct FName>* Modifiers)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.SetModifiers");

	Uw_lobby_panel_bpw_C_SetModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Modifiers != nullptr)
		*Modifiers = params.Modifiers;
}


// Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_lobby_panel_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.Construct");

	Uw_lobby_panel_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.ExecuteUbergraph_w_lobby_panel_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_lobby_panel_bpw_C::ExecuteUbergraph_w_lobby_panel_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_lobby_panel_bpw.w_lobby_panel_bpw_C.ExecuteUbergraph_w_lobby_panel_bpw");

	Uw_lobby_panel_bpw_C_ExecuteUbergraph_w_lobby_panel_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
