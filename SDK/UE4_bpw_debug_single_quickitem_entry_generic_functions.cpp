// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_single_quickitem_entry_generic_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.hide
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_debug_single_quickitem_entry_generic_C::hide()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.hide");

	Ubpw_debug_single_quickitem_entry_generic_C_hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_debug_single_quickitem_entry_generic_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.Show");

	Ubpw_debug_single_quickitem_entry_generic_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_debug_single_quickitem_entry_generic_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.Construct");

	Ubpw_debug_single_quickitem_entry_generic_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.BndEvt__ComboBoxString_QuickItem0_K2Node_ComponentBoundEvent_346_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_quickitem_entry_generic_C::BndEvt__ComboBoxString_QuickItem0_K2Node_ComponentBoundEvent_346_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.BndEvt__ComboBoxString_QuickItem0_K2Node_ComponentBoundEvent_346_OnSelectionChangedEvent__DelegateSignature");

	Ubpw_debug_single_quickitem_entry_generic_C_BndEvt__ComboBoxString_QuickItem0_K2Node_ComponentBoundEvent_346_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.ExecuteUbergraph_bpw_debug_single_quickitem_entry_generic
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_quickitem_entry_generic_C::ExecuteUbergraph_bpw_debug_single_quickitem_entry_generic(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_quickitem_entry_generic.bpw_debug_single_quickitem_entry_generic_C.ExecuteUbergraph_bpw_debug_single_quickitem_entry_generic");

	Ubpw_debug_single_quickitem_entry_generic_C_ExecuteUbergraph_bpw_debug_single_quickitem_entry_generic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
