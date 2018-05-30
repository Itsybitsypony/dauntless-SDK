// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_UserWidgetFunctions_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Cinematic Blocker Layer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Get_Cinematic_Blocker_Layer(class UObject* __WorldContext, int* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Cinematic Blocker Layer");

	UUserWidgetFunctions_C_Get_Cinematic_Blocker_Layer_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetTimerTextFromTimespan
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan               Timespan                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TimerText                      (Parm, OutParm)
// bool                           TimeRemaining                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_GetTimerTextFromTimespan(const struct FTimespan& Timespan, class UObject* __WorldContext, struct FText* TimerText, bool* TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetTimerTextFromTimespan");

	UUserWidgetFunctions_C_GetTimerTextFromTimespan_Params params;
	params.Timespan = Timespan;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimerText != nullptr)
		*TimerText = params.TimerText;
	if (TimeRemaining != nullptr)
		*TimeRemaining = params.TimeRemaining;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Chat Layer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ZOrder                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Get_Chat_Layer(class UObject* __WorldContext, int* ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Chat Layer");

	UUserWidgetFunctions_C_Get_Chat_Layer_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZOrder != nullptr)
		*ZOrder = params.ZOrder;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Unbind Input Swap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Swap_Event                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Unbind_Input_Swap(class APlayerController* Player_Controller, class UObject* __WorldContext, struct FScriptDelegate* Swap_Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Unbind Input Swap");

	UUserWidgetFunctions_C_Unbind_Input_Swap_Params params;
	params.Player_Controller = Player_Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Swap_Event != nullptr)
		*Swap_Event = params.Swap_Event;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get HUD Stat Type
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Eplayer_stat_type> Stat_Type                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EElementType                   Element_Type                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ELoadoutStatTypes> Loadout_State_Type             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Get_HUD_Stat_Type(TEnumAsByte<Eplayer_stat_type> Stat_Type, EElementType Element_Type, class UObject* __WorldContext, TEnumAsByte<ELoadoutStatTypes>* Loadout_State_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get HUD Stat Type");

	UUserWidgetFunctions_C_Get_HUD_Stat_Type_Params params;
	params.Stat_Type = Stat_Type;
	params.Element_Type = Element_Type;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Loadout_State_Type != nullptr)
		*Loadout_State_Type = params.Loadout_State_Type;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconFromItemID
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    Icon                           (Parm, OutParm)
// EItemRarityLevelType           Rarity_Level                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FText                   Display_Name                   (Parm, OutParm)

void UUserWidgetFunctions_C::STATIC_GetIconFromItemID(const class FString& ItemID, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* Icon, EItemRarityLevelType* Rarity_Level, struct FText* Display_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconFromItemID");

	UUserWidgetFunctions_C_GetIconFromItemID_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
	if (Rarity_Level != nullptr)
		*Rarity_Level = params.Rarity_Level;
	if (Display_Name != nullptr)
		*Display_Name = params.Display_Name;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Using Gamepad
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserWidgetFunctions_C::STATIC_Is_Using_Gamepad(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Is Using Gamepad");

	UUserWidgetFunctions_C_Is_Using_Gamepad_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Create Blocking Popup Message
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Upopup_bpw_C*            Popup                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Create_Blocking_Popup_Message(class APlayerController* OwningPlayer, const struct FText& Message, class UObject* __WorldContext, class Upopup_bpw_C** Popup)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Create Blocking Popup Message");

	UUserWidgetFunctions_C_Create_Blocking_Popup_Message_Params params;
	params.OwningPlayer = OwningPlayer;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Popup != nullptr)
		*Popup = params.Popup;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconForEquipmentItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          EquipmentItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    Icon                           (Parm, OutParm)

void UUserWidgetFunctions_C::STATIC_GetIconForEquipmentItem(class UEquipmentItem* EquipmentItem, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconForEquipmentItem");

	UUserWidgetFunctions_C_GetIconForEquipmentItem_Params params;
	params.EquipmentItem = EquipmentItem;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Create Confirmation Popup
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UConfirmPopup_bpw_C*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UConfirmPopup_bpw_C* UUserWidgetFunctions_C::STATIC_Create_Confirmation_Popup(class APlayerController* OwningPlayer, const struct FText& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Create Confirmation Popup");

	UUserWidgetFunctions_C_Create_Confirmation_Popup_Params params;
	params.OwningPlayer = OwningPlayer;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetStatsFromCells
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemInstanceIDContainingCells  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Floadout_stat_info> Stats                          (Parm, OutParm, ZeroConstructor)

void UUserWidgetFunctions_C::STATIC_GetStatsFromCells(const class FString& ItemInstanceIDContainingCells, class UObject* __WorldContext, TArray<struct Floadout_stat_info>* Stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetStatsFromCells");

	UUserWidgetFunctions_C_GetStatsFromCells_Params params;
	params.ItemInstanceIDContainingCells = ItemInstanceIDContainingCells;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Stats != nullptr)
		*Stats = params.Stats;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetRarityTextColour
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemRarityLevelType           Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Linear_Colour                  (Parm, OutParm, IsPlainOldData)
// struct FSlateColor             Slate_Colour__UI_              (Parm, OutParm)

void UUserWidgetFunctions_C::STATIC_GetRarityTextColour(EItemRarityLevelType Rarity, class UObject* __WorldContext, struct FLinearColor* Linear_Colour, struct FSlateColor* Slate_Colour__UI_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetRarityTextColour");

	UUserWidgetFunctions_C_GetRarityTextColour_Params params;
	params.Rarity = Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Linear_Colour != nullptr)
		*Linear_Colour = params.Linear_Colour;
	if (Slate_Colour__UI_ != nullptr)
		*Slate_Colour__UI_ = params.Slate_Colour__UI_;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.InsertInventoryItemSorted
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ecatalog_item_sort_type> SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Finventory_item_count> ItemArrayRef                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_InsertInventoryItemSorted(TEnumAsByte<Ecatalog_item_sort_type> SortType, class UArchonInventoryItem* Item, class UObject* __WorldContext, TArray<struct Finventory_item_count>* ItemArrayRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.InsertInventoryItemSorted");

	UUserWidgetFunctions_C_InsertInventoryItemSorted_Params params;
	params.SortType = SortType;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemArrayRef != nullptr)
		*ItemArrayRef = params.ItemArrayRef;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Format_text_ItemType
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 Type                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Type_Name                      (Parm, OutParm)

void UUserWidgetFunctions_C::STATIC_Format_text_ItemType(EItemGroupType Type, const class FString& ItemID, class UObject* __WorldContext, struct FText* Type_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Format_text_ItemType");

	UUserWidgetFunctions_C_Format_text_ItemType_Params params;
	params.Type = Type;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Type_Name != nullptr)
		*Type_Name = params.Type_Name;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetDyeConfig
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Equipped                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EArmorType                     ArmourType_ifNotEquipped_      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    Primary_Texture                (Parm, OutParm)
// TAssetPtr<class UTexture2D>    Secondary_Texture              (Parm, OutParm)

void UUserWidgetFunctions_C::STATIC_GetDyeConfig(bool Equipped, const class FString& ItemInstanceId, const class FString& ItemID, EArmorType ArmourType_ifNotEquipped_, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* Primary_Texture, TAssetPtr<class UTexture2D>* Secondary_Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetDyeConfig");

	UUserWidgetFunctions_C_GetDyeConfig_Params params;
	params.Equipped = Equipped;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.ArmourType_ifNotEquipped_ = ArmourType_ifNotEquipped_;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Primary_Texture != nullptr)
		*Primary_Texture = params.Primary_Texture;
	if (Secondary_Texture != nullptr)
		*Secondary_Texture = params.Secondary_Texture;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetEquipmentValueForLevel
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                          Base_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value_Per_Level                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EUpgradeableItemLevel          Item_Level                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Level_Value                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_GetEquipmentValueForLevel(float Base_Value, float Value_Per_Level, EUpgradeableItemLevel Item_Level, class UObject* __WorldContext, float* Level_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetEquipmentValueForLevel");

	UUserWidgetFunctions_C_GetEquipmentValueForLevel_Params params;
	params.Base_Value = Base_Value;
	params.Value_Per_Level = Value_Per_Level;
	params.Item_Level = Item_Level;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Level_Value != nullptr)
		*Level_Value = params.Level_Value;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconForItem
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FArchonCatalogItem      CatalogItem                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    Icon                           (Parm, OutParm)

void UUserWidgetFunctions_C::STATIC_GetIconForItem(class UObject* __WorldContext, struct FArchonCatalogItem* CatalogItem, TAssetPtr<class UTexture2D>* Icon)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetIconForItem");

	UUserWidgetFunctions_C_GetIconForItem_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CatalogItem != nullptr)
		*CatalogItem = params.CatalogItem;
	if (Icon != nullptr)
		*Icon = params.Icon;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetItem_from_Inventory_with_InstanceId
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UArchonInventoryItem* UUserWidgetFunctions_C::STATIC_GetItem_from_Inventory_with_InstanceId(const class FString& ItemInstanceId, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetItem_from_Inventory_with_InstanceId");

	UUserWidgetFunctions_C_GetItem_from_Inventory_with_InstanceId_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetCurrentScreenAspectRatio
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ExactRatio                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<E_aspect_mode>     AvgAspectRatio                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_GetCurrentScreenAspectRatio(class UObject* __WorldContext, float* ExactRatio, TEnumAsByte<E_aspect_mode>* AvgAspectRatio)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetCurrentScreenAspectRatio");

	UUserWidgetFunctions_C_GetCurrentScreenAspectRatio_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExactRatio != nullptr)
		*ExactRatio = params.ExactRatio;
	if (AvgAspectRatio != nullptr)
		*AvgAspectRatio = params.AvgAspectRatio;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetInputKeyInfo
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    Default_Icon                   (Parm, OutParm)
// class FString                  Default_PlayerFacingName       (Parm, OutParm, ZeroConstructor)

void UUserWidgetFunctions_C::STATIC_GetInputKeyInfo(const struct FKey& Key, class UObject* __WorldContext, TAssetPtr<class UTexture2D>* Default_Icon, class FString* Default_PlayerFacingName)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetInputKeyInfo");

	UUserWidgetFunctions_C_GetInputKeyInfo_Params params;
	params.Key = Key;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Default_Icon != nullptr)
		*Default_Icon = params.Default_Icon;
	if (Default_PlayerFacingName != nullptr)
		*Default_PlayerFacingName = params.Default_PlayerFacingName;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetWeaponMatchupText
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          GlobalPower                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          PrimaryElementPower            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EElementType                   PrimaryElementType             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   VsStrong                       (Parm, OutParm)
// struct FText                   VsWeak                         (Parm, OutParm)
// struct FText                   VsAllOrNeutral                 (Parm, OutParm)

void UUserWidgetFunctions_C::STATIC_GetWeaponMatchupText(float GlobalPower, float PrimaryElementPower, EElementType PrimaryElementType, class UObject* __WorldContext, struct FText* VsStrong, struct FText* VsWeak, struct FText* VsAllOrNeutral)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetWeaponMatchupText");

	UUserWidgetFunctions_C_GetWeaponMatchupText_Params params;
	params.GlobalPower = GlobalPower;
	params.PrimaryElementPower = PrimaryElementPower;
	params.PrimaryElementType = PrimaryElementType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VsStrong != nullptr)
		*VsStrong = params.VsStrong;
	if (VsWeak != nullptr)
		*VsWeak = params.VsWeak;
	if (VsAllOrNeutral != nullptr)
		*VsAllOrNeutral = params.VsAllOrNeutral;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetElementFloatPairDeltas
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Felement_float_pair> Removing                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct Felement_float_pair> Adding                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> Deltas                         (Parm, OutParm, ZeroConstructor)

void UUserWidgetFunctions_C::STATIC_GetElementFloatPairDeltas(class UObject* __WorldContext, TArray<struct Felement_float_pair>* Removing, TArray<struct Felement_float_pair>* Adding, TArray<struct Felement_float_pair>* Deltas)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetElementFloatPairDeltas");

	UUserWidgetFunctions_C_GetElementFloatPairDeltas_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Removing != nullptr)
		*Removing = params.Removing;
	if (Adding != nullptr)
		*Adding = params.Adding;
	if (Deltas != nullptr)
		*Deltas = params.Deltas;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.CombineElementFloatPairs
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Felement_float_pair> FloatPairs1                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct Felement_float_pair> FloatPairs2                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> CombinedArray                  (Parm, OutParm, ZeroConstructor)

void UUserWidgetFunctions_C::STATIC_CombineElementFloatPairs(class UObject* __WorldContext, TArray<struct Felement_float_pair>* FloatPairs1, TArray<struct Felement_float_pair>* FloatPairs2, TArray<struct Felement_float_pair>* CombinedArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.CombineElementFloatPairs");

	UUserWidgetFunctions_C_CombineElementFloatPairs_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FloatPairs1 != nullptr)
		*FloatPairs1 = params.FloatPairs1;
	if (FloatPairs2 != nullptr)
		*FloatPairs2 = params.FloatPairs2;
	if (CombinedArray != nullptr)
		*CombinedArray = params.CombinedArray;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.SortElementFloatPairs
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Felement_float_pair> ElementFloatPairs              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> SortedElementFloatPairs        (Parm, OutParm, ZeroConstructor)

void UUserWidgetFunctions_C::STATIC_SortElementFloatPairs(class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementFloatPairs, TArray<struct Felement_float_pair>* SortedElementFloatPairs)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.SortElementFloatPairs");

	UUserWidgetFunctions_C_SortElementFloatPairs_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementFloatPairs != nullptr)
		*ElementFloatPairs = params.ElementFloatPairs;
	if (SortedElementFloatPairs != nullptr)
		*SortedElementFloatPairs = params.SortedElementFloatPairs;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.ConvertElementFloatArrayToHUDStatArray
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Eplayer_stat_type> StatType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> ElementFloatData               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Estat_value_type>  StatValueType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Floadout_stat_info> HUDStatArray                   (Parm, OutParm, ZeroConstructor)

void UUserWidgetFunctions_C::STATIC_ConvertElementFloatArrayToHUDStatArray(TEnumAsByte<Eplayer_stat_type> StatType, TEnumAsByte<Estat_value_type> StatValueType, class UObject* __WorldContext, TArray<struct Felement_float_pair>* ElementFloatData, TArray<struct Floadout_stat_info>* HUDStatArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.ConvertElementFloatArrayToHUDStatArray");

	UUserWidgetFunctions_C_ConvertElementFloatArrayToHUDStatArray_Params params;
	params.StatType = StatType;
	params.StatValueType = StatValueType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementFloatData != nullptr)
		*ElementFloatData = params.ElementFloatData;
	if (HUDStatArray != nullptr)
		*HUDStatArray = params.HUDStatArray;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.SortLoadoutStats
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Floadout_stat_info> UnsortedHUDStatValues          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct Floadout_stat_info> SortedHUDStatValues            (Parm, OutParm, ZeroConstructor)

void UUserWidgetFunctions_C::STATIC_SortLoadoutStats(class UObject* __WorldContext, TArray<struct Floadout_stat_info>* UnsortedHUDStatValues, TArray<struct Floadout_stat_info>* SortedHUDStatValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.SortLoadoutStats");

	UUserWidgetFunctions_C_SortLoadoutStats_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UnsortedHUDStatValues != nullptr)
		*UnsortedHUDStatValues = params.UnsortedHUDStatValues;
	if (SortedHUDStatValues != nullptr)
		*SortedHUDStatValues = params.SortedHUDStatValues;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Create Popup Message
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       OwningPlayer                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Message                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Create_Popup_Message(class APlayerController* OwningPlayer, const struct FText& Message, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Create Popup Message");

	UUserWidgetFunctions_C_Create_Popup_Message_Params params;
	params.OwningPlayer = OwningPlayer;
	params.Message = Message;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.IsPartyMatchmaking
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserWidgetFunctions_C::STATIC_IsPartyMatchmaking(class APlayerController* PlayerController, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.IsPartyMatchmaking");

	UUserWidgetFunctions_C_IsPartyMatchmaking_Params params;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.GetRarityColour
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemRarityLevelType           Rarity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Linear_Colour                  (Parm, OutParm, IsPlainOldData)
// struct FSlateColor             Slate_Colour__UI_              (Parm, OutParm)

void UUserWidgetFunctions_C::STATIC_GetRarityColour(EItemRarityLevelType Rarity, class UObject* __WorldContext, struct FLinearColor* Linear_Colour, struct FSlateColor* Slate_Colour__UI_)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.GetRarityColour");

	UUserWidgetFunctions_C_GetRarityColour_Params params;
	params.Rarity = Rarity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Linear_Colour != nullptr)
		*Linear_Colour = params.Linear_Colour;
	if (Slate_Colour__UI_ != nullptr)
		*Slate_Colour__UI_ = params.Slate_Colour__UI_;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Lantern
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserWidgetFunctions_C::STATIC_Is_Item_Lantern(const class FString& ItemID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Lantern");

	UUserWidgetFunctions_C_Is_Item_Lantern_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Recipe
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserWidgetFunctions_C::STATIC_Is_Item_Recipe(const class FString& ItemID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Recipe");

	UUserWidgetFunctions_C_Is_Item_Recipe_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Keyword Count for Item Id
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Get_Keyword_Count_for_Item_Id(const struct FName& Keyword, const class FString& ItemID, class UObject* __WorldContext, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Keyword Count for Item Id");

	UUserWidgetFunctions_C_Get_Keyword_Count_for_Item_Id_Params params;
	params.Keyword = Keyword;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Keyword Count for Armour Item
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Get_Keyword_Count_for_Armour_Item(const struct FName& Keyword, class UArchonInventoryItem* Item, class UObject* __WorldContext, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Keyword Count for Armour Item");

	UUserWidgetFunctions_C_Get_Keyword_Count_for_Armour_Item_Params params;
	params.Keyword = Keyword;
	params.Item = Item;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Holding Interact Key
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerController*       Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserWidgetFunctions_C::STATIC_Is_Holding_Interact_Key(class APlayerController* Target, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Is Holding Interact Key");

	UUserWidgetFunctions_C_Is_Holding_Interact_Key_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Weapon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserWidgetFunctions_C::STATIC_Is_Item_Weapon(const class FString& ItemID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Weapon");

	UUserWidgetFunctions_C_Is_Item_Weapon_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Weapon Type
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponType                    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EWeaponType UUserWidgetFunctions_C::STATIC_Get_Weapon_Type(const class FString& ItemID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Weapon Type");

	UUserWidgetFunctions_C_Get_Weapon_Type_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Vendor Item Type
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EquipmentVendor>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EquipmentVendor> UUserWidgetFunctions_C::STATIC_Get_Vendor_Item_Type(const class FString& ItemID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Vendor Item Type");

	UUserWidgetFunctions_C_Get_Vendor_Item_Type_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Armour Type
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     armour_type                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Get_Armour_Type(const class FString& ItemID, class UObject* __WorldContext, EArmorType* armour_type)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Armour Type");

	UUserWidgetFunctions_C_Get_Armour_Type_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (armour_type != nullptr)
		*armour_type = params.armour_type;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Armour
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUserWidgetFunctions_C::STATIC_Is_Item_Armour(const class FString& ItemID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Is Item Armour");

	UUserWidgetFunctions_C_Is_Item_Armour_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Setup Input Swap
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player_Controller              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FScriptDelegate         Swap_Event                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Using_Gamepad                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Setup_Input_Swap(class APlayerController* Player_Controller, class UObject* __WorldContext, struct FScriptDelegate* Swap_Event, bool* Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Setup Input Swap");

	UUserWidgetFunctions_C_Setup_Input_Swap_Params params;
	params.Player_Controller = Player_Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Swap_Event != nullptr)
		*Swap_Event = params.Swap_Event;
	if (Using_Gamepad != nullptr)
		*Using_Gamepad = params.Using_Gamepad;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Popup Layer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ZOrder                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Get_Popup_Layer(class UObject* __WorldContext, int* ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Popup Layer");

	UUserWidgetFunctions_C_Get_Popup_Layer_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZOrder != nullptr)
		*ZOrder = params.ZOrder;
}


// Function UserWidgetFunctions.UserWidgetFunctions_C.Get Screen Layer
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ZOrder                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UUserWidgetFunctions_C::STATIC_Get_Screen_Layer(class UObject* __WorldContext, int* ZOrder)
{
	static auto fn = UObject::FindObject<UFunction>("Function UserWidgetFunctions.UserWidgetFunctions_C.Get Screen Layer");

	UUserWidgetFunctions_C_Get_Screen_Layer_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZOrder != nullptr)
		*ZOrder = params.ZOrder;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
