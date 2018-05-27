// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_single_inventory_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Add Transmog None Option
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_debug_single_inventory_entry_C::Add_Transmog_None_Option()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Add Transmog None Option");

	Ubpw_debug_single_inventory_entry_C_Add_Transmog_None_Option_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Lantern Transmog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonInventory*        Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_inventory_entry_C::Setup_Lantern_Transmog(class AArchonInventory* Inventory, bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Lantern Transmog");

	Ubpw_debug_single_inventory_entry_C_Setup_Lantern_Transmog_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Weapon Transmog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonInventory*        Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_inventory_entry_C::Setup_Weapon_Transmog(class AArchonInventory* Inventory, bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Weapon Transmog");

	Ubpw_debug_single_inventory_entry_C_Setup_Weapon_Transmog_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Armor Transmog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonInventory*        Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Succeeded                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_inventory_entry_C::Setup_Armor_Transmog(class AArchonInventory* Inventory, bool* Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Setup Armor Transmog");

	Ubpw_debug_single_inventory_entry_C_Setup_Armor_Transmog_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Succeeded != nullptr)
		*Succeeded = params.Succeeded;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.GetToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ubpw_debug_single_inventory_entry_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.GetToolTipWidget_1");

	Ubpw_debug_single_inventory_entry_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.VisibleForBundle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_debug_single_inventory_entry_C::VisibleForBundle()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.VisibleForBundle");

	Ubpw_debug_single_inventory_entry_C_VisibleForBundle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Ubpw_debug_single_inventory_entry_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.GetBrush_1");

	Ubpw_debug_single_inventory_entry_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.SetAmountAndType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_debug_single_inventory_entry_C::SetAmountAndType(const struct FArchonCatalogItem& CatalogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.SetAmountAndType");

	Ubpw_debug_single_inventory_entry_C_SetAmountAndType_Params params;
	params.CatalogItem = CatalogItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.SetDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_debug_single_inventory_entry_C::SetDisplayName(const struct FArchonCatalogItem& CatalogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.SetDisplayName");

	Ubpw_debug_single_inventory_entry_C_SetDisplayName_Params params;
	params.CatalogItem = CatalogItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_debug_single_inventory_entry_C::BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature");

	Ubpw_debug_single_inventory_entry_C_BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_debug_single_inventory_entry_C::BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature");

	Ubpw_debug_single_inventory_entry_C_BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_debug_single_inventory_entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.Construct");

	Ubpw_debug_single_inventory_entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Transmog_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                  SelectedItem                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       SelectionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_inventory_entry_C::BndEvt__Transmog_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, TEnumAsByte<ESelectInfo> SelectionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.BndEvt__Transmog_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Ubpw_debug_single_inventory_entry_C_BndEvt__Transmog_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.ExecuteUbergraph_bpw_debug_single_inventory_entry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_inventory_entry_C::ExecuteUbergraph_bpw_debug_single_inventory_entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_inventory_entry.bpw_debug_single_inventory_entry_C.ExecuteUbergraph_bpw_debug_single_inventory_entry");

	Ubpw_debug_single_inventory_entry_C_ExecuteUbergraph_bpw_debug_single_inventory_entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
