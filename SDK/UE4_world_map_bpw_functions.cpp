// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_world_map_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function world_map_bpw.world_map_bpw_C.RefreshNoRegionsPanel
// (Public, BlueprintCallable, BlueprintEvent)

void Uworld_map_bpw_C::RefreshNoRegionsPanel()
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.RefreshNoRegionsPanel");

	Uworld_map_bpw_C_RefreshNoRegionsPanel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uworld_map_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.OnKeyDown");

	Uworld_map_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function world_map_bpw.world_map_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uworld_map_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.GetDefaultFocusedWidget");

	Uworld_map_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function world_map_bpw.world_map_bpw_C.CloseSilently
// (BlueprintCallable, BlueprintEvent)

void Uworld_map_bpw_C::CloseSilently()
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.CloseSilently");

	Uworld_map_bpw_C_CloseSilently_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.InputSwap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsGamepad                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uworld_map_bpw_C::InputSwap(bool IsGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.InputSwap");

	Uworld_map_bpw_C_InputSwap_Params params;
	params.IsGamepad = IsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.Close
// (BlueprintCallable, BlueprintEvent)

void Uworld_map_bpw_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.Close");

	Uworld_map_bpw_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.TryPlayRevealAnimationSequence
// (BlueprintCallable, BlueprintEvent)

void Uworld_map_bpw_C::TryPlayRevealAnimationSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.TryPlayRevealAnimationSequence");

	Uworld_map_bpw_C_TryPlayRevealAnimationSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_6_OnZoneClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class Uw_world_map_zone_bpw_C* Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uworld_map_bpw_C::BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_6_OnZoneClicked__DelegateSignature(class Uw_world_map_zone_bpw_C* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_6_OnZoneClicked__DelegateSignature");

	Uworld_map_bpw_C_BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_6_OnZoneClicked__DelegateSignature_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_40_OnZoneFocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class Uw_world_map_zone_bpw_C* Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uworld_map_bpw_C::BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_40_OnZoneFocused__DelegateSignature(class Uw_world_map_zone_bpw_C* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_40_OnZoneFocused__DelegateSignature");

	Uworld_map_bpw_C_BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_40_OnZoneFocused__DelegateSignature_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_44_OnZoneUnfocused__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class Uw_world_map_zone_bpw_C* Zone                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uworld_map_bpw_C::BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_44_OnZoneUnfocused__DelegateSignature(class Uw_world_map_zone_bpw_C* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_44_OnZoneUnfocused__DelegateSignature");

	Uworld_map_bpw_C_BndEvt__WorldMapBackground_K2Node_ComponentBoundEvent_44_OnZoneUnfocused__DelegateSignature_Params params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uworld_map_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.Construct");

	Uworld_map_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function world_map_bpw.world_map_bpw_C.ExecuteUbergraph_world_map_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uworld_map_bpw_C::ExecuteUbergraph_world_map_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function world_map_bpw.world_map_bpw_C.ExecuteUbergraph_world_map_bpw");

	Uworld_map_bpw_C_ExecuteUbergraph_world_map_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
