// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_cc_entry_datatableOption_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_cc_entry_datatableOption_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.OnFocusReceived");

	Uw_cc_entry_datatableOption_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_Button Clicked__DelegateSignature
// (BlueprintEvent)

void Uw_cc_entry_datatableOption_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_Button Clicked__DelegateSignature");

	Uw_cc_entry_datatableOption_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_cc_entry_datatableOption_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.Construct");

	Uw_cc_entry_datatableOption_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.ExecuteUbergraph_w_cc_entry_datatableOption
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_cc_entry_datatableOption_C::ExecuteUbergraph_w_cc_entry_datatableOption(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.ExecuteUbergraph_w_cc_entry_datatableOption");

	Uw_cc_entry_datatableOption_C_ExecuteUbergraph_w_cc_entry_datatableOption_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.SelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SelectedRow                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_cc_entry_datatableOption_C::SelectionChanged__DelegateSignature(const struct FName& SelectedRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.SelectionChanged__DelegateSignature");

	Uw_cc_entry_datatableOption_C_SelectionChanged__DelegateSignature_Params params;
	params.SelectedRow = SelectedRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.Button_Select__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*           HairAsset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_cc_entry_datatableOption_C::Button_Select__DelegateSignature(class USkeletalMesh* HairAsset)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cc_entry_datatableOption.w_cc_entry_datatableOption_C.Button_Select__DelegateSignature");

	Uw_cc_entry_datatableOption_C_Button_Select__DelegateSignature_Params params;
	params.HairAsset = HairAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
