// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_cell_list_entry_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.Get_Item_Icon_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor Uw_cell_list_entry_bpw_C::Get_Item_Icon_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.Get_Item_Icon_ColorAndOpacity_1");

	Uw_cell_list_entry_bpw_C_Get_Item_Icon_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_cell_list_entry_bpw_C::SetDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetDescription");

	Uw_cell_list_entry_bpw_C_SetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_cell_list_entry_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.OnFocusReceived");

	Uw_cell_list_entry_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_cell_list_entry_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.GetVisibility_1");

	Uw_cell_list_entry_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetKind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_cell_list_entry_bpw_C::SetKind(EItemGroupType Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetKind");

	Uw_cell_list_entry_bpw_C_SetKind_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetAmountAndCellKind
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UArchonInventoryItem*    InventoryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_cell_list_entry_bpw_C::SetAmountAndCellKind(const struct FArchonCatalogItem& CatalogItem, class UArchonInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetAmountAndCellKind");

	Uw_cell_list_entry_bpw_C_SetAmountAndCellKind_Params params;
	params.CatalogItem = CatalogItem;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetDisplayName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_cell_list_entry_bpw_C::SetDisplayName(const struct FArchonCatalogItem& CatalogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.SetDisplayName");

	Uw_cell_list_entry_bpw_C_SetDisplayName_Params params;
	params.CatalogItem = CatalogItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.OnLoaded_4E2B05B24DAF71D16E4970BBA8E4FCE9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_cell_list_entry_bpw_C::OnLoaded_4E2B05B24DAF71D16E4970BBA8E4FCE9(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.OnLoaded_4E2B05B24DAF71D16E4970BBA8E4FCE9");

	Uw_cell_list_entry_bpw_C_OnLoaded_4E2B05B24DAF71D16E4970BBA8E4FCE9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_cell_list_entry_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.Construct");

	Uw_cell_list_entry_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_cell_list_entry_bpw_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature");

	Uw_cell_list_entry_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_53_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_cell_list_entry_bpw_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature");

	Uw_cell_list_entry_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_38_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_cell_list_entry_bpw_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature");

	Uw_cell_list_entry_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_51_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ExecuteUbergraph_w_cell_list_entry_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_cell_list_entry_bpw_C::ExecuteUbergraph_w_cell_list_entry_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ExecuteUbergraph_w_cell_list_entry_bpw");

	Uw_cell_list_entry_bpw_C_ExecuteUbergraph_w_cell_list_entry_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ClearTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_cell_list_entry_bpw_C::ClearTooltip__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ClearTooltip__DelegateSignature");

	Uw_cell_list_entry_bpw_C_ClearTooltip__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ItemInstanceIdTooltip__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_cell_list_entry_bpw_C::ItemInstanceIdTooltip__DelegateSignature(const class FString& InstanceId, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.ItemInstanceIdTooltip__DelegateSignature");

	Uw_cell_list_entry_bpw_C_ItemInstanceIdTooltip__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.CellButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_cell_list_entry_bpw_C::CellButtonClicked__DelegateSignature(const class FString& InstanceId, const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_cell_list_entry_bpw.w_cell_list_entry_bpw_C.CellButtonClicked__DelegateSignature");

	Uw_cell_list_entry_bpw_C_CellButtonClicked__DelegateSignature_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
