// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_combo_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_combo_bpw.w_combo_bpw_C.SetupCombo_3
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fui_combo               ui_combo                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_combo_bpw_C::SetupCombo_3(struct Fui_combo* ui_combo)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combo_bpw.w_combo_bpw_C.SetupCombo_3");

	Uw_combo_bpw_C_SetupCombo_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ui_combo != nullptr)
		*ui_combo = params.ui_combo;
}


// Function w_combo_bpw.w_combo_bpw_C.SetupCombo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fui_combo               ui_combo                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_combo_bpw_C::SetupCombo(struct Fui_combo* ui_combo)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combo_bpw.w_combo_bpw_C.SetupCombo");

	Uw_combo_bpw_C_SetupCombo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ui_combo != nullptr)
		*ui_combo = params.ui_combo;
}


// Function w_combo_bpw.w_combo_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_combo_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combo_bpw.w_combo_bpw_C.Construct");

	Uw_combo_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combo_bpw.w_combo_bpw_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_combo_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combo_bpw.w_combo_bpw_C.Refresh");

	Uw_combo_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combo_bpw.w_combo_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_combo_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combo_bpw.w_combo_bpw_C.OnSynchronizeProperties");

	Uw_combo_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combo_bpw.w_combo_bpw_C.Setup Keys
// (BlueprintCallable, BlueprintEvent)

void Uw_combo_bpw_C::Setup_Keys()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combo_bpw.w_combo_bpw_C.Setup Keys");

	Uw_combo_bpw_C_Setup_Keys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_combo_bpw.w_combo_bpw_C.ExecuteUbergraph_w_combo_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_combo_bpw_C::ExecuteUbergraph_w_combo_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_combo_bpw.w_combo_bpw_C.ExecuteUbergraph_w_combo_bpw");

	Uw_combo_bpw_C_ExecuteUbergraph_w_combo_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
