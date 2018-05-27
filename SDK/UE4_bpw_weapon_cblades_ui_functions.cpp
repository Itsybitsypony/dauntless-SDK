// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_weapon_cblades_ui_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Get_AetherMeter_FillColorAndOpacity_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Ubpw_weapon_cblades_ui_C::Get_AetherMeter_FillColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Get_AetherMeter_FillColorAndOpacity_1");

	Ubpw_weapon_cblades_ui_C_Get_AetherMeter_FillColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.UpdateAmmoIndicators
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_weapon_cblades_ui_C::UpdateAmmoIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.UpdateAmmoIndicators");

	Ubpw_weapon_cblades_ui_C_UpdateAmmoIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Get_AetherMeter_Percent_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Ubpw_weapon_cblades_ui_C::Get_AetherMeter_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Get_AetherMeter_Percent_1");

	Ubpw_weapon_cblades_ui_C_Get_AetherMeter_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_weapon_cblades_ui_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Construct");

	Ubpw_weapon_cblades_ui_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_cblades_ui_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Tick");

	Ubpw_weapon_cblades_ui_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.OnAmmoCountChanged_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAmmoCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_cblades_ui_C::OnAmmoCountChanged_Event_1(int NewAmmoCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.OnAmmoCountChanged_Event_1");

	Ubpw_weapon_cblades_ui_C_OnAmmoCountChanged_Event_1_Params params;
	params.NewAmmoCount = NewAmmoCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.ExecuteUbergraph_bpw_weapon_cblades_ui
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_weapon_cblades_ui_C::ExecuteUbergraph_bpw_weapon_cblades_ui(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.ExecuteUbergraph_bpw_weapon_cblades_ui");

	Ubpw_weapon_cblades_ui_C_ExecuteUbergraph_bpw_weapon_cblades_ui_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
