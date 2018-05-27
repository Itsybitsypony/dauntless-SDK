// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_loadout_pickerbox_groupPip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.TogglePip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_pickerbox_groupPip_C::TogglePip(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.TogglePip");

	Uw_loadout_pickerbox_groupPip_C_TogglePip_Params params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.OnLoaded_A058EA6248D678A919D5DF91B8CA543D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_pickerbox_groupPip_C::OnLoaded_A058EA6248D678A919D5DF91B8CA543D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.OnLoaded_A058EA6248D678A919D5DF91B8CA543D");

	Uw_loadout_pickerbox_groupPip_C_OnLoaded_A058EA6248D678A919D5DF91B8CA543D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.OnLoaded_A058EA6248D678A919D5DF9159C486A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_pickerbox_groupPip_C::OnLoaded_A058EA6248D678A919D5DF9159C486A9(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.OnLoaded_A058EA6248D678A919D5DF9159C486A9");

	Uw_loadout_pickerbox_groupPip_C_OnLoaded_A058EA6248D678A919D5DF9159C486A9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_loadout_pickerbox_groupPip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.Construct");

	Uw_loadout_pickerbox_groupPip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_loadout_pickerbox_groupPip_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature");

	Uw_loadout_pickerbox_groupPip_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_loadout_pickerbox_groupPip_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.OnSynchronizeProperties");

	Uw_loadout_pickerbox_groupPip_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.ExecuteUbergraph_w_loadout_pickerbox_groupPip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_pickerbox_groupPip_C::ExecuteUbergraph_w_loadout_pickerbox_groupPip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.ExecuteUbergraph_w_loadout_pickerbox_groupPip");

	Uw_loadout_pickerbox_groupPip_C_ExecuteUbergraph_w_loadout_pickerbox_groupPip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.PipClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_loadout_pickerbox_groupPip_C::PipClick__DelegateSignature(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_loadout_pickerbox_groupPip.w_loadout_pickerbox_groupPip_C.PipClick__DelegateSignature");

	Uw_loadout_pickerbox_groupPip_C_PipClick__DelegateSignature_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
