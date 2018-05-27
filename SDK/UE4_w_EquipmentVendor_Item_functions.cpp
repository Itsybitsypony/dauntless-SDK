// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentVendor_Item_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Can Craft
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_EquipmentVendor_Item_C::Can_Craft()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Can Craft");

	Uw_EquipmentVendor_Item_C_Can_Craft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Set Id
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString Uw_EquipmentVendor_Item_C::Get_Set_Id()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Set Id");

	Uw_EquipmentVendor_Item_C_Get_Set_Id_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Armour Type
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EArmorType                     ArmorType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::Get_Armour_Type(EArmorType* ArmorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Armour Type");

	Uw_EquipmentVendor_Item_C_Get_Armour_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArmorType != nullptr)
		*ArmorType = params.ArmorType;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Setup Progression Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TEnumAsByte<EProgressionLink>  Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::Setup_Progression_Item(const class FString& Item_ID, TEnumAsByte<EProgressionLink> Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Setup Progression Item");

	Uw_EquipmentVendor_Item_C_Setup_Progression_Item_Params params;
	params.Item_ID = Item_ID;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Item Tier
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Tier                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::Get_Item_Tier(class UArchonInventoryItem* Item, int* Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Item Tier");

	Uw_EquipmentVendor_Item_C_Get_Item_Tier_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tier != nullptr)
		*Tier = params.Tier;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          Equipment_Item                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Set                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_EquipmentVendor_Item_C::Setup(class UEquipmentItem* Equipment_Item, const class FString& Set)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Setup");

	Uw_EquipmentVendor_Item_C_Setup_Params params;
	params.Equipment_Item = Equipment_Item;
	params.Set = Set;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_EquipmentVendor_Item_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Reset");

	Uw_EquipmentVendor_Item_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Crafting Button Label
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   Label                          (Parm, OutParm)
// bool                           IsUpgrade                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::Get_Crafting_Button_Label(struct FText* Label, bool* IsUpgrade)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Crafting Button Label");

	Uw_EquipmentVendor_Item_C_Get_Crafting_Button_Label_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Label != nullptr)
		*Label = params.Label;
	if (IsUpgrade != nullptr)
		*IsUpgrade = params.IsUpgrade;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Player Inventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonInventory*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AArchonInventory* Uw_EquipmentVendor_Item_C::Get_Player_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Player Inventory");

	Uw_EquipmentVendor_Item_C_Get_Player_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Archon Catalog
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UArchonCatalog*          Catalog                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::Get_Archon_Catalog(class UArchonCatalog** Catalog)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Get Archon Catalog");

	Uw_EquipmentVendor_Item_C_Get_Archon_Catalog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Catalog != nullptr)
		*Catalog = params.Catalog;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.From Catalog Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonCatalogItem      ArchonCatalogItem              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_EquipmentVendor_Item_C::From_Catalog_Item(struct FArchonCatalogItem* ArchonCatalogItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.From Catalog Item");

	Uw_EquipmentVendor_Item_C_From_Catalog_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ArchonCatalogItem != nullptr)
		*ArchonCatalogItem = params.ArchonCatalogItem;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnLoaded_9BDB3C684F11894DBEBCDABD617D0DF5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::OnLoaded_9BDB3C684F11894DBEBCDABD617D0DF5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnLoaded_9BDB3C684F11894DBEBCDABD617D0DF5");

	Uw_EquipmentVendor_Item_C_OnLoaded_9BDB3C684F11894DBEBCDABD617D0DF5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EquipmentVendor_Item_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Construct");

	Uw_EquipmentVendor_Item_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Icon Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Icon                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_EquipmentVendor_Item_C::Icon_Updated(TAssetPtr<class UTexture2D> Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Icon Updated");

	Uw_EquipmentVendor_Item_C_Icon_Updated_Params params;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Tick");

	Uw_EquipmentVendor_Item_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentVendor_Item_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Show Hover");

	Uw_EquipmentVendor_Item_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentVendor_Item_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Hide Hover");

	Uw_EquipmentVendor_Item_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_EquipmentVendor_Item_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnMouseEnter");

	Uw_EquipmentVendor_Item_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_EquipmentVendor_Item_C::BndEvt__Button_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature");

	Uw_EquipmentVendor_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_88_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_EquipmentVendor_Item_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.OnMouseLeave");

	Uw_EquipmentVendor_Item_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.On Item Refreshed
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentVendor_Item_C::On_Item_Refreshed()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.On Item Refreshed");

	Uw_EquipmentVendor_Item_C_On_Item_Refreshed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Focus Item
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentVendor_Item_C::Focus_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.Focus Item");

	Uw_EquipmentVendor_Item_C_Focus_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.ExecuteUbergraph_w_EquipmentVendor_Item
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::ExecuteUbergraph_w_EquipmentVendor_Item(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.ExecuteUbergraph_w_EquipmentVendor_Item");

	Uw_EquipmentVendor_Item_C_ExecuteUbergraph_w_EquipmentVendor_Item_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.On Hover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_EquipmentVendor_Item_C* Armour_Item                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Item_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentVendor_Item_C::On_Hover__DelegateSignature(class Uw_EquipmentVendor_Item_C* Armour_Item, int Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentVendor_Item.w_EquipmentVendor_Item_C.On Hover__DelegateSignature");

	Uw_EquipmentVendor_Item_C_On_Hover__DelegateSignature_Params params;
	params.Armour_Item = Armour_Item;
	params.Item_Index = Item_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
