// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_world_map_zone_button_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetZoneImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*              SelectedTexture                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_button_bpw_C::SetZoneImage(class UTexture2D* SelectedTexture)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetZoneImage");

	Uw_world_map_zone_button_bpw_C_SetZoneImage_Params params;
	params.SelectedTexture = SelectedTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsButtonEnabled                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_button_bpw_C::SetButtonEnabled(bool IsButtonEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetButtonEnabled");

	Uw_world_map_zone_button_bpw_C_SetButtonEnabled_Params params;
	params.IsButtonEnabled = IsButtonEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_world_map_zone_button_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.OnFocusReceived");

	Uw_world_map_zone_button_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetIsSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsSelected                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_world_map_zone_button_bpw_C::SetIsSelected(bool IsSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C.SetIsSelected");

	Uw_world_map_zone_button_bpw_C_SetIsSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
