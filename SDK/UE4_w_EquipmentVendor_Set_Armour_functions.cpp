// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentVendor_Set_Armour_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Item From Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidget*                 Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Armour_C::Get_Item_From_Index(int Index, class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Item From Index");

	Uw_EquipmentVendor_Set_Armour_C_Get_Item_From_Index_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get_SetLabel_ColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Uw_EquipmentVendor_Set_Armour_C::Get_SetLabel_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get_SetLabel_ColorAndOpacity_1");

	Uw_EquipmentVendor_Set_Armour_C_Get_SetLabel_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Armor Item Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UEquipmentItem*          Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentVendor_Item_C* Armour_Item_Widget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Armour_C::Get_Armor_Item_Widget(class UEquipmentItem* Equipment, class Uw_EquipmentVendor_Item_C** Armour_Item_Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Armor Item Widget");

	Uw_EquipmentVendor_Set_Armour_C_Get_Armor_Item_Widget_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Armour_Item_Widget != nullptr)
		*Armour_Item_Widget = params.Armour_Item_Widget;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Archon Catalog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonCatalog*          Catalog                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Armour_C::Get_Archon_Catalog(class UArchonCatalog** Catalog)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Get Archon Catalog");

	Uw_EquipmentVendor_Set_Armour_C_Get_Archon_Catalog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Catalog != nullptr)
		*Catalog = params.Catalog;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Name                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_EquipmentVendor_Set_Armour_C::Set_Name(const class FString& Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Name");

	Uw_EquipmentVendor_Set_Armour_C_Set_Name_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Items
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UEquipmentItem*>  Items                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_EquipmentVendor_Set_Armour_C::Set_Items(TArray<class UEquipmentItem*>* Items)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Items");

	Uw_EquipmentVendor_Set_Armour_C_Set_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EquipmentVendor_Set_Armour_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Construct");

	Uw_EquipmentVendor_Set_Armour_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Armour_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Tick");

	Uw_EquipmentVendor_Set_Armour_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Focus Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Armour_C::Focus_Item(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Focus Item");

	Uw_EquipmentVendor_Set_Armour_C_Focus_Item_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void Uw_EquipmentVendor_Set_Armour_C::BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Uw_EquipmentVendor_Set_Armour_C_BndEvt__DetailsButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Details
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentVendor_Set_Armour_C::Set_Details()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Details");

	Uw_EquipmentVendor_Set_Armour_C_Set_Details_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Inventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonInventory*        Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Armour_C::Set_Inventory(class AArchonInventory* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.Set Inventory");

	Uw_EquipmentVendor_Set_Armour_C_Set_Inventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.ExecuteUbergraph_w_EquipmentVendor_Set_Armour
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Set_Armour_C::ExecuteUbergraph_w_EquipmentVendor_Set_Armour(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.ExecuteUbergraph_w_EquipmentVendor_Set_Armour");

	Uw_EquipmentVendor_Set_Armour_C_ExecuteUbergraph_w_EquipmentVendor_Set_Armour_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.OnSetDetails__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SetName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_EquipmentVendor_Set_Armour_C::OnSetDetails__DelegateSignature(const class FString& SetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Set_Armour.w_EquipmentVendor_Set_Armour_C.OnSetDetails__DelegateSignature");

	Uw_EquipmentVendor_Set_Armour_C_OnSetDetails__DelegateSignature_Params params;
	params.SetName = SetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
