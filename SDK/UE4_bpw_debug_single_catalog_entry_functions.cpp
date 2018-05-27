// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_single_catalog_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_debug_single_catalog_entry_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.GetVisibility_2");

	Ubpw_debug_single_catalog_entry_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_debug_single_catalog_entry_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.GetVisibility_1");

	Ubpw_debug_single_catalog_entry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.SetTierRarity
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      ArchonCatalogItem              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ubpw_debug_single_catalog_entry_C::SetTierRarity(struct FArchonCatalogItem* ArchonCatalogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.SetTierRarity");

	Ubpw_debug_single_catalog_entry_C_SetTierRarity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArchonCatalogItem != nullptr)
		*ArchonCatalogItem = params.ArchonCatalogItem;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.SetKind
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_catalog_entry_C::SetKind(EItemGroupType Kind)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.SetKind");

	Ubpw_debug_single_catalog_entry_C_SetKind_Params params;
	params.Kind = Kind;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.GetToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ubpw_debug_single_catalog_entry_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.GetToolTipWidget_1");

	Ubpw_debug_single_catalog_entry_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.GetBrush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Ubpw_debug_single_catalog_entry_C::GetBrush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.GetBrush_1");

	Ubpw_debug_single_catalog_entry_C_GetBrush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.SetDisplayName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_debug_single_catalog_entry_C::SetDisplayName(const struct FArchonCatalogItem& CatalogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.SetDisplayName");

	Ubpw_debug_single_catalog_entry_C_SetDisplayName_Params params;
	params.CatalogItem = CatalogItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.SetDisplayPrice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_debug_single_catalog_entry_C::SetDisplayPrice(const struct FArchonCatalogItem& CatalogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.SetDisplayPrice");

	Ubpw_debug_single_catalog_entry_C_SetDisplayPrice_Params params;
	params.CatalogItem = CatalogItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_debug_single_catalog_entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.Construct");

	Ubpw_debug_single_catalog_entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_debug_single_catalog_entry_C::BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature");

	Ubpw_debug_single_catalog_entry_C_BndEvt__Button_Purchase_K2Node_ComponentBoundEvent_444_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_debug_single_catalog_entry_C::BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature");

	Ubpw_debug_single_catalog_entry_C_BndEvt__Button_Grant_K2Node_ComponentBoundEvent_453_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_debug_single_catalog_entry_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");

	Ubpw_debug_single_catalog_entry_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.AddItem
// (BlueprintCallable, BlueprintEvent)

void Ubpw_debug_single_catalog_entry_C::AddItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.AddItem");

	Ubpw_debug_single_catalog_entry_C_AddItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_debug_single_catalog_entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature");

	Ubpw_debug_single_catalog_entry_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.ExecuteUbergraph_bpw_debug_single_catalog_entry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_single_catalog_entry_C::ExecuteUbergraph_bpw_debug_single_catalog_entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_single_catalog_entry.bpw_debug_single_catalog_entry_C.ExecuteUbergraph_bpw_debug_single_catalog_entry");

	Ubpw_debug_single_catalog_entry_C_ExecuteUbergraph_bpw_debug_single_catalog_entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
