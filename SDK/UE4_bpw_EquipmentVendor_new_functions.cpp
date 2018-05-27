// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_EquipmentVendor_new_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetLanternSetWidget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Set_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Found_Widget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentVendor_Set_Lantern_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::GetLanternSetWidget(const class FString& Set_Name, bool* Found_Widget, class Uw_EquipmentVendor_Set_Lantern_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetLanternSetWidget");

	Ubpw_EquipmentVendor_new_C_GetLanternSetWidget_Params params;
	params.Set_Name = Set_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_Widget != nullptr)
		*Found_Widget = params.Found_Widget;
	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetupLanternSetWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Set_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_EquipmentVendor_new_C::SetupLanternSetWidget(const class FString& Set_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetupLanternSetWidget");

	Ubpw_EquipmentVendor_new_C_SetupLanternSetWidget_Params params;
	params.Set_Name = Set_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ubpw_EquipmentVendor_new_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetDefaultFocusedWidget");

	Ubpw_EquipmentVendor_new_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Set Weapon Filter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::Set_Weapon_Filter(int Selection)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Set Weapon Filter");

	Ubpw_EquipmentVendor_new_C_Set_Weapon_Filter_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get All Items For Vendor
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Get_All_Items_For_Vendor()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get All Items For Vendor");

	Ubpw_EquipmentVendor_new_C_Get_All_Items_For_Vendor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetAndStore_NPCCamera
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::GetAndStore_NPCCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetAndStore_NPCCamera");

	Ubpw_EquipmentVendor_new_C_GetAndStore_NPCCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.DoCraftVO
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    InventoryItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::DoCraftVO(class UArchonInventoryItem* InventoryItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.DoCraftVO");

	Ubpw_EquipmentVendor_new_C_DoCraftVO_Params params;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Crafted Item
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCraftingRecipeDataAsset* Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Ubpw_EquipmentVendor_new_C::Get_Crafted_Item(class UCraftingRecipeDataAsset* Recipe, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Crafted Item");

	Ubpw_EquipmentVendor_new_C_Get_Crafted_Item_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Current Item Focus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 DesiredFocusWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::Get_Desired_Current_Item_Focus(class UWidget** DesiredFocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Current Item Focus");

	Ubpw_EquipmentVendor_new_C_Get_Desired_Current_Item_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredFocusWidget != nullptr)
		*DesiredFocusWidget = params.DesiredFocusWidget;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Detail Item Focus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 DesiredFocusWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::Get_Desired_Detail_Item_Focus(class UWidget** DesiredFocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Detail Item Focus");

	Ubpw_EquipmentVendor_new_C_Get_Desired_Detail_Item_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredFocusWidget != nullptr)
		*DesiredFocusWidget = params.DesiredFocusWidget;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_EquipmentVendor_new_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnKeyDown");

	Ubpw_EquipmentVendor_new_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetText_CraftedItem
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void Ubpw_EquipmentVendor_new_C::GetText_CraftedItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GetText_CraftedItem");

	Ubpw_EquipmentVendor_new_C_GetText_CraftedItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.3D Viewer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_EquipmentVendor_new_C::_3D_Viewer(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.3D Viewer");

	Ubpw_EquipmentVendor_new_C__3D_Viewer_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Holding Crafting Key
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpw_EquipmentVendor_new_C::Is_Holding_Crafting_Key()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Holding Crafting Key");

	Ubpw_EquipmentVendor_new_C_Is_Holding_Crafting_Key_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Custom Equipment Vendor Setup
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Custom_Equipment_Vendor_Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Custom Equipment Vendor Setup");

	Ubpw_EquipmentVendor_new_C_Custom_Equipment_Vendor_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Weapon Filter Label
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EWeaponType                    Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Ubpw_EquipmentVendor_new_C::Get_Weapon_Filter_Label(EWeaponType Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Weapon Filter Label");

	Ubpw_EquipmentVendor_new_C_Get_Weapon_Filter_Label_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Weapon Filter Key
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpw_EquipmentVendor_new_C::Is_Weapon_Filter_Key(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Weapon Filter Key");

	Ubpw_EquipmentVendor_new_C_Is_Weapon_Filter_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Item Set Focus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 DesiredFocusWidget             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::Get_Desired_Item_Set_Focus(class UWidget** DesiredFocusWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Desired Item Set Focus");

	Ubpw_EquipmentVendor_new_C_Get_Desired_Item_Set_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredFocusWidget != nullptr)
		*DesiredFocusWidget = params.DesiredFocusWidget;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Weapon Set Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Set_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Found_Widget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentVendor_Set_Weapon_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::Get_Weapon_Set_Widget(const class FString& Set_Name, bool* Found_Widget, class Uw_EquipmentVendor_Set_Weapon_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Weapon Set Widget");

	Ubpw_EquipmentVendor_new_C_Get_Weapon_Set_Widget_Params params;
	params.Set_Name = Set_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_Widget != nullptr)
		*Found_Widget = params.Found_Widget;
	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Weapon Set Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Set_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_EquipmentVendor_new_C::Setup_Weapon_Set_Widget(const class FString& Set_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Weapon Set Widget");

	Ubpw_EquipmentVendor_new_C_Setup_Weapon_Set_Widget_Params params;
	params.Set_Name = Set_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Armour Set Widget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Set_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_EquipmentVendor_new_C::Setup_Armour_Set_Widget(const class FString& Set_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Armour Set Widget");

	Ubpw_EquipmentVendor_new_C_Setup_Armour_Set_Widget_Params params;
	params.Set_Name = Set_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Has Crafting Item Focus
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpw_EquipmentVendor_new_C::Has_Crafting_Item_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Has Crafting Item Focus");

	Ubpw_EquipmentVendor_new_C_Has_Crafting_Item_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Show Quest Button on start?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpw_EquipmentVendor_new_C::Show_Quest_Button_on_start_()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Show Quest Button on start?");

	Ubpw_EquipmentVendor_new_C_Show_Quest_Button_on_start__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_EquipmentVendor_new_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnPreviewKeyDown");

	Ubpw_EquipmentVendor_new_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Should Display Set
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Set_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpw_EquipmentVendor_new_C::Should_Display_Set(const class FString& Set_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Should Display Set");

	Ubpw_EquipmentVendor_new_C_Should_Display_Set_Params params;
	params.Set_Name = Set_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Inventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonInventory*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AArchonInventory* Ubpw_EquipmentVendor_new_C::Get_Inventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Inventory");

	Ubpw_EquipmentVendor_new_C_Get_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Build Crafting Payload
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingPayload        Payload                        (Parm, OutParm)

void Ubpw_EquipmentVendor_new_C::Build_Crafting_Payload(struct FCraftingPayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Build Crafting Payload");

	Ubpw_EquipmentVendor_new_C_Build_Crafting_Payload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Payload != nullptr)
		*Payload = params.Payload;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Try Crafting Item
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Request_Sent                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::Try_Crafting_Item(bool* Request_Sent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Try Crafting Item");

	Ubpw_EquipmentVendor_new_C_Try_Crafting_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Request_Sent != nullptr)
		*Request_Sent = params.Request_Sent;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Armour Set Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Set_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Found_Widget                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentVendor_Set_Armour_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::Get_Armour_Set_Widget(const class FString& Set_Name, bool* Found_Widget, class Uw_EquipmentVendor_Set_Armour_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Get Armour Set Widget");

	Ubpw_EquipmentVendor_new_C_Get_Armour_Set_Widget_Params params;
	params.Set_Name = Set_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found_Widget != nullptr)
		*Found_Widget = params.Found_Widget;
	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Start Crafting Button
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Start_Crafting_Button()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Start Crafting Button");

	Ubpw_EquipmentVendor_new_C_Start_Crafting_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Can Craft Current Item
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpw_EquipmentVendor_new_C::Can_Craft_Current_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Can Craft Current Item");

	Ubpw_EquipmentVendor_new_C_Can_Craft_Current_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_EquipmentVendor_new_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnKeyUp");

	Ubpw_EquipmentVendor_new_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Crafting Button Key
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpw_EquipmentVendor_new_C::Is_Crafting_Button_Key(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Is Crafting Button Key");

	Ubpw_EquipmentVendor_new_C_Is_Crafting_Button_Key_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Vendor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uinteractable_npc_interface_C> Vendor_NPC                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::Setup_Vendor(const TScriptInterface<class Uinteractable_npc_interface_C>& Vendor_NPC)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Setup Vendor");

	Ubpw_EquipmentVendor_new_C_Setup_Vendor_Params params;
	params.Vendor_NPC = Vendor_NPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Show Vendor
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::On_Show_Vendor()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Show Vendor");

	Ubpw_EquipmentVendor_new_C_On_Show_Vendor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__VendorButton_K2Node_ComponentBoundEvent_268_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::BndEvt__VendorButton_K2Node_ComponentBoundEvent_268_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__VendorButton_K2Node_ComponentBoundEvent_268_OnButtonClickedEvent__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_BndEvt__VendorButton_K2Node_ComponentBoundEvent_268_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Intro_VendorSelect
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Intro_VendorSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Intro_VendorSelect");

	Ubpw_EquipmentVendor_new_C_Intro_VendorSelect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.NPCInteractInitialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Avendor_interactive_bp_C* Vendor                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fnpc_ui_struct          NPCMenuTuning                  (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_EquipmentVendor_new_C::NPCInteractInitialize(class Avendor_interactive_bp_C* Vendor, const struct Fnpc_ui_struct& NPCMenuTuning)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.NPCInteractInitialize");

	Ubpw_EquipmentVendor_new_C_NPCInteractInitialize_Params params;
	params.Vendor = Vendor;
	params.NPCMenuTuning = NPCMenuTuning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Construct");

	Ubpw_EquipmentVendor_new_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_2_On Back__DelegateSignature
// (BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_2_On_Back__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_2_On Back__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_2_On_Back__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_3_On Next__DelegateSignature
// (BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_3_On_Next__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_3_On Next__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_BndEvt__FullscreenContainer_K2Node_ComponentBoundEvent_3_On_Next__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Item Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_EquipmentVendor_Item_C* Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Item_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::On_Item_Hovered(class Uw_EquipmentVendor_Item_C* Item, int Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Item Hovered");

	Ubpw_EquipmentVendor_new_C_On_Item_Hovered_Params params;
	params.Item = Item;
	params.Item_Index = Item_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Refresh Vendor Items
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Refresh_Vendor_Items()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Refresh Vendor Items");

	Ubpw_EquipmentVendor_new_C_Refresh_Vendor_Items_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_0_On Key Hold Complete__DelegateSignature
// (BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::BndEvt__CraftingButton_K2Node_ComponentBoundEvent_0_On_Key_Hold_Complete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_0_On Key Hold Complete__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_BndEvt__CraftingButton_K2Node_ComponentBoundEvent_0_On_Key_Hold_Complete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Crafted Item Granted
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::On_Crafted_Item_Granted()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Crafted Item Granted");

	Ubpw_EquipmentVendor_new_C_On_Crafted_Item_Granted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On Vendor Refresh__DelegateSignature
// (BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On_Vendor_Refresh__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On Vendor Refresh__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On_Vendor_Refresh__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_On Mouse Down__DelegateSignature
// (BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_On_Mouse_Down__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_On Mouse Down__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_BndEvt__CraftingButton_K2Node_ComponentBoundEvent_1_On_Mouse_Down__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On Mouse Up__DelegateSignature
// (BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On_Mouse_Up__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On Mouse Up__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_BndEvt__CraftingButton_K2Node_ComponentBoundEvent_2_On_Mouse_Up__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Close Screen
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Close_Screen()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Close Screen");

	Ubpw_EquipmentVendor_new_C_Close_Screen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Weapon Filter Changed
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::On_Weapon_Filter_Changed()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Weapon Filter Changed");

	Ubpw_EquipmentVendor_new_C_On_Weapon_Filter_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Init3dViewer
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Init3dViewer()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Init3dViewer");

	Ubpw_EquipmentVendor_new_C_Init3dViewer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Update 3d Preview
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Update_3d_Preview()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Update 3d Preview");

	Ubpw_EquipmentVendor_new_C_Update_3d_Preview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Armour Set Details
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SetName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Ubpw_EquipmentVendor_new_C::On_Armour_Set_Details(const class FString& SetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Armour Set Details");

	Ubpw_EquipmentVendor_new_C_On_Armour_Set_Details_Params params;
	params.SetName = SetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Escape Set Details
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::On_Escape_Set_Details()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Escape Set Details");

	Ubpw_EquipmentVendor_new_C_On_Escape_Set_Details_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GTFO
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::GTFO()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.GTFO");

	Ubpw_EquipmentVendor_new_C_GTFO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetCamera_Crafting
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::SetCamera_Crafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetCamera_Crafting");

	Ubpw_EquipmentVendor_new_C_SetCamera_Crafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetCamera_Return
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::SetCamera_Return()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.SetCamera_Return");

	Ubpw_EquipmentVendor_new_C_SetCamera_Return_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.ResetCamera
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::ResetCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.ResetCamera");

	Ubpw_EquipmentVendor_new_C_ResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Item Upgraded
// (BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::On_Item_Upgraded()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.On Item Upgraded");

	Ubpw_EquipmentVendor_new_C_On_Item_Upgraded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CategoryTabs_K2Node_ComponentBoundEvent_142_TabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::BndEvt__CategoryTabs_K2Node_ComponentBoundEvent_142_TabSelected__DelegateSignature(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.BndEvt__CategoryTabs_K2Node_ComponentBoundEvent_142_TabSelected__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_BndEvt__CategoryTabs_K2Node_ComponentBoundEvent_142_TabSelected__DelegateSignature_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.ExecuteUbergraph_bpw_EquipmentVendor_new
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_EquipmentVendor_new_C::ExecuteUbergraph_bpw_EquipmentVendor_new(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.ExecuteUbergraph_bpw_EquipmentVendor_new");

	Ubpw_EquipmentVendor_new_C_ExecuteUbergraph_bpw_EquipmentVendor_new_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Update3dItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::Update3dItem__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.Update3dItem__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_Update3dItem__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.CameraToNPC__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::CameraToNPC__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.CameraToNPC__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_CameraToNPC__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.CameraToCraftTarget__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::CameraToCraftTarget__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.CameraToCraftTarget__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_CameraToCraftTarget__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnMenuClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_EquipmentVendor_new_C::OnMenuClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_EquipmentVendor_new.bpw_EquipmentVendor_new_C.OnMenuClosed__DelegateSignature");

	Ubpw_EquipmentVendor_new_C_OnMenuClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
