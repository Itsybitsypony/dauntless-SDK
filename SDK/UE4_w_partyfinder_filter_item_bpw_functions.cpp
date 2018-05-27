// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_partyfinder_filter_item_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_partyfinder_filter_item_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.OnFocusReceived");

	Uw_partyfinder_filter_item_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_partyfinder_filter_item_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.Construct");

	Uw_partyfinder_filter_item_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_partyfinder_filter_item_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.OnSynchronizeProperties");

	Uw_partyfinder_filter_item_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.BndEvt__FilterCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partyfinder_filter_item_bpw_C::BndEvt__FilterCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.BndEvt__FilterCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Uw_partyfinder_filter_item_bpw_C_BndEvt__FilterCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.ExecuteUbergraph_w_partyfinder_filter_item_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partyfinder_filter_item_bpw_C::ExecuteUbergraph_w_partyfinder_filter_item_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.ExecuteUbergraph_w_partyfinder_filter_item_bpw");

	Uw_partyfinder_filter_item_bpw_C_ExecuteUbergraph_w_partyfinder_filter_item_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.OnCheckStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsChecked                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_partyfinder_filter_item_bpw_C::OnCheckStateChanged__DelegateSignature(bool IsChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_partyfinder_filter_item_bpw.w_partyfinder_filter_item_bpw_C.OnCheckStateChanged__DelegateSignature");

	Uw_partyfinder_filter_item_bpw_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.IsChecked = IsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
