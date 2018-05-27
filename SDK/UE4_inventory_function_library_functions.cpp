// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_inventory_function_library_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function inventory_function_library.inventory_function_library_C.GetAllItemsWithQuanityFromBundle
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Bundle                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayFabCatalogItemQuantity> ItemsWithQuantity              (Parm, OutParm, ZeroConstructor)

void Uinventory_function_library_C::STATIC_GetAllItemsWithQuanityFromBundle(const struct FName& Bundle, class UObject* WorldContextObject, class UObject* __WorldContext, TArray<struct FPlayFabCatalogItemQuantity>* ItemsWithQuantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetAllItemsWithQuanityFromBundle");

	Uinventory_function_library_C_GetAllItemsWithQuanityFromBundle_Params params;
	params.Bundle = Bundle;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemsWithQuantity != nullptr)
		*ItemsWithQuantity = params.ItemsWithQuantity;
}


// Function inventory_function_library.inventory_function_library_C.ItemKindToArmorType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidArmorType                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmorType                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_ItemKindToArmorType(EItemGroupType Kind, class UObject* __WorldContext, bool* ValidArmorType, EArmorType* ArmorType)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.ItemKindToArmorType");

	Uinventory_function_library_C_ItemKindToArmorType_Params params;
	params.Kind = Kind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidArmorType != nullptr)
		*ValidArmorType = params.ValidArmorType;
	if (ArmorType != nullptr)
		*ArmorType = params.ArmorType;
}


// Function inventory_function_library.inventory_function_library_C.GetTransmogID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                  ItemInstanceId                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString Uinventory_function_library_C::STATIC_GetTransmogID(const class FString& ItemInstanceId, const class FString& ItemID, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetTransmogID");

	Uinventory_function_library_C_GetTransmogID_Params params;
	params.ItemInstanceId = ItemInstanceId;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function inventory_function_library.inventory_function_library_C.CheckQuestRequirements
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          EquipmentItem                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonPlayerController* PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           QuestRequirementsMet           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           QuestsThatFailed               (Parm, OutParm, ZeroConstructor)

void Uinventory_function_library_C::STATIC_CheckQuestRequirements(class UEquipmentItem* EquipmentItem, class AArchonPlayerController* PlayerController, class UObject* __WorldContext, bool* QuestRequirementsMet, TArray<struct FName>* QuestsThatFailed)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.CheckQuestRequirements");

	Uinventory_function_library_C_CheckQuestRequirements_Params params;
	params.EquipmentItem = EquipmentItem;
	params.PlayerController = PlayerController;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestRequirementsMet != nullptr)
		*QuestRequirementsMet = params.QuestRequirementsMet;
	if (QuestsThatFailed != nullptr)
		*QuestsThatFailed = params.QuestsThatFailed;
}


// Function inventory_function_library.inventory_function_library_C.CanPlayerViewCraftableItem
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayFabCraftedCatalogTableData CraftedItemCatalogData         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsViewable                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_CanPlayerViewCraftableItem(class UObject* __WorldContext, struct FPlayFabCraftedCatalogTableData* CraftedItemCatalogData, bool* IsViewable)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.CanPlayerViewCraftableItem");

	Uinventory_function_library_C_CanPlayerViewCraftableItem_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CraftedItemCatalogData != nullptr)
		*CraftedItemCatalogData = params.CraftedItemCatalogData;
	if (IsViewable != nullptr)
		*IsViewable = params.IsViewable;
}


// Function inventory_function_library.inventory_function_library_C.GetLocalInventory
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonInventory*        LocalInventory                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_GetLocalInventory(class UObject* __WorldContext, class AArchonInventory** LocalInventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetLocalInventory");

	Uinventory_function_library_C_GetLocalInventory_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalInventory != nullptr)
		*LocalInventory = params.LocalInventory;
}


// Function inventory_function_library.inventory_function_library_C.GetLocalLoadout
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonLoadout*          LocalLoadout                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_GetLocalLoadout(class UObject* __WorldContext, class AArchonLoadout** LocalLoadout)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetLocalLoadout");

	Uinventory_function_library_C_GetLocalLoadout_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalLoadout != nullptr)
		*LocalLoadout = params.LocalLoadout;
}


// Function inventory_function_library.inventory_function_library_C.WeaponTypeToItemKind
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EWeaponType                    WeaponType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context_Object                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 ItemKind                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_WeaponTypeToItemKind(EWeaponType WeaponType, class UObject* Context_Object, class UObject* __WorldContext, EItemGroupType* ItemKind)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.WeaponTypeToItemKind");

	Uinventory_function_library_C_WeaponTypeToItemKind_Params params;
	params.WeaponType = WeaponType;
	params.Context_Object = Context_Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemKind != nullptr)
		*ItemKind = params.ItemKind;
}


// Function inventory_function_library.inventory_function_library_C.GetItemKind
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 ItemKind                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_GetItemKind(const class FString& ItemID, class UObject* __WorldContext, EItemGroupType* ItemKind)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetItemKind");

	Uinventory_function_library_C_GetItemKind_Params params;
	params.ItemID = ItemID;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemKind != nullptr)
		*ItemKind = params.ItemKind;
}


// Function inventory_function_library.inventory_function_library_C.ItemKindToQuickItemSlot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidArmorSlot                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EQuickItemSlot                 ArmorSlotType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_ItemKindToQuickItemSlot(EItemGroupType Kind, class UObject* __WorldContext, bool* ValidArmorSlot, EQuickItemSlot* ArmorSlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.ItemKindToQuickItemSlot");

	Uinventory_function_library_C_ItemKindToQuickItemSlot_Params params;
	params.Kind = Kind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidArmorSlot != nullptr)
		*ValidArmorSlot = params.ValidArmorSlot;
	if (ArmorSlotType != nullptr)
		*ArmorSlotType = params.ArmorSlotType;
}


// Function inventory_function_library.inventory_function_library_C.GetFirstInstanceIDOfItemID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class AArchonPlayerController* Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  FirstInstanceID                (Parm, OutParm, ZeroConstructor)

void Uinventory_function_library_C::STATIC_GetFirstInstanceIDOfItemID(const class FString& ItemID, class AArchonPlayerController* Controller, class UObject* __WorldContext, class FString* FirstInstanceID)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetFirstInstanceIDOfItemID");

	Uinventory_function_library_C_GetFirstInstanceIDOfItemID_Params params;
	params.ItemID = ItemID;
	params.Controller = Controller;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FirstInstanceID != nullptr)
		*FirstInstanceID = params.FirstInstanceID;
}


// Function inventory_function_library.inventory_function_library_C.SetupEquipItemTooltip
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  NewTooltipInstanceID           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UPanelWidget*            ParentWidget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  StringStoringTooltipInstanceID (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class Uw_EquipItem_tooltip_bpw_C* VariableStoringTooltipWidget   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           InLobby                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_SetupEquipItemTooltip(const class FString& NewTooltipInstanceID, class UPanelWidget* ParentWidget, bool InLobby, class UObject* __WorldContext, class FString* StringStoringTooltipInstanceID, class Uw_EquipItem_tooltip_bpw_C** VariableStoringTooltipWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.SetupEquipItemTooltip");

	Uinventory_function_library_C_SetupEquipItemTooltip_Params params;
	params.NewTooltipInstanceID = NewTooltipInstanceID;
	params.ParentWidget = ParentWidget;
	params.InLobby = InLobby;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringStoringTooltipInstanceID != nullptr)
		*StringStoringTooltipInstanceID = params.StringStoringTooltipInstanceID;
	if (VariableStoringTooltipWidget != nullptr)
		*VariableStoringTooltipWidget = params.VariableStoringTooltipWidget;
}


// Function inventory_function_library.inventory_function_library_C.QuickItemSlotToItemKind
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EQuickItemSlot                 QuickItemSlot                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context_Object                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 ItemKind                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_QuickItemSlotToItemKind(EQuickItemSlot QuickItemSlot, class UObject* Context_Object, class UObject* __WorldContext, EItemGroupType* ItemKind)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.QuickItemSlotToItemKind");

	Uinventory_function_library_C_QuickItemSlotToItemKind_Params params;
	params.QuickItemSlot = QuickItemSlot;
	params.Context_Object = Context_Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemKind != nullptr)
		*ItemKind = params.ItemKind;
}


// Function inventory_function_library.inventory_function_library_C.GetGearTypeFromItemKind
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemGroupType                 ItemKind                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Egear_type>        GearType                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_GetGearTypeFromItemKind(EItemGroupType ItemKind, class UObject* __WorldContext, TEnumAsByte<Egear_type>* GearType)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetGearTypeFromItemKind");

	Uinventory_function_library_C_GetGearTypeFromItemKind_Params params;
	params.ItemKind = ItemKind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GearType != nullptr)
		*GearType = params.GearType;
}


// Function inventory_function_library.inventory_function_library_C.GetItemPowerLevel
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ItemHasPowerOrResistanceStat   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          GlobalPower                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> ElementalPowers                (Parm, OutParm, ZeroConstructor)

void Uinventory_function_library_C::STATIC_GetItemPowerLevel(const class FString& InstanceId, const class FString& ItemID, class UObject* WorldContextObject, class UObject* __WorldContext, bool* ItemHasPowerOrResistanceStat, float* GlobalPower, TArray<struct Felement_float_pair>* ElementalPowers)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetItemPowerLevel");

	Uinventory_function_library_C_GetItemPowerLevel_Params params;
	params.InstanceId = InstanceId;
	params.ItemID = ItemID;
	params.WorldContextObject = WorldContextObject;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemHasPowerOrResistanceStat != nullptr)
		*ItemHasPowerOrResistanceStat = params.ItemHasPowerOrResistanceStat;
	if (GlobalPower != nullptr)
		*GlobalPower = params.GlobalPower;
	if (ElementalPowers != nullptr)
		*ElementalPowers = params.ElementalPowers;
}


// Function inventory_function_library.inventory_function_library_C.ArmorSlotTypeToItemKind
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Earmor_slot_enum>  ArmorSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 Context_Object                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 ItemKind                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_ArmorSlotTypeToItemKind(TEnumAsByte<Earmor_slot_enum> ArmorSlot, class UObject* Context_Object, class UObject* __WorldContext, EItemGroupType* ItemKind)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.ArmorSlotTypeToItemKind");

	Uinventory_function_library_C_ArmorSlotTypeToItemKind_Params params;
	params.ArmorSlot = ArmorSlot;
	params.Context_Object = Context_Object;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemKind != nullptr)
		*ItemKind = params.ItemKind;
}


// Function inventory_function_library.inventory_function_library_C.Merge
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         Array1                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UObject*>         Array2                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Esort_type>        SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Esort_direction>   SortDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         MergedList                     (Parm, OutParm, ZeroConstructor)

void Uinventory_function_library_C::STATIC_Merge(TEnumAsByte<Esort_type> SortType, TEnumAsByte<Esort_direction> SortDirection, class UObject* __WorldContext, TArray<class UObject*>* Array1, TArray<class UObject*>* Array2, TArray<class UObject*>* MergedList)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.Merge");

	Uinventory_function_library_C_Merge_Params params;
	params.SortType = SortType;
	params.SortDirection = SortDirection;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array1 != nullptr)
		*Array1 = params.Array1;
	if (Array2 != nullptr)
		*Array2 = params.Array2;
	if (MergedList != nullptr)
		*MergedList = params.MergedList;
}


// Function inventory_function_library.inventory_function_library_C.MergeSort
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>         List                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TEnumAsByte<Esort_type>        SortType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Esort_direction>   SortDirection                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UObject*>         SortedList                     (Parm, OutParm, ZeroConstructor)

void Uinventory_function_library_C::STATIC_MergeSort(TEnumAsByte<Esort_type> SortType, TEnumAsByte<Esort_direction> SortDirection, class UObject* __WorldContext, TArray<class UObject*>* List, TArray<class UObject*>* SortedList)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.MergeSort");

	Uinventory_function_library_C_MergeSort_Params params;
	params.SortType = SortType;
	params.SortDirection = SortDirection;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (List != nullptr)
		*List = params.List;
	if (SortedList != nullptr)
		*SortedList = params.SortedList;
}


// Function inventory_function_library.inventory_function_library_C.GetItemIDFromInstanceID
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ItemIDFound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Uinventory_function_library_C::STATIC_GetItemIDFromInstanceID(const class FString& InstanceId, class UObject* __WorldContext, bool* ItemIDFound, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetItemIDFromInstanceID");

	Uinventory_function_library_C_GetItemIDFromInstanceID_Params params;
	params.InstanceId = InstanceId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemIDFound != nullptr)
		*ItemIDFound = params.ItemIDFound;
	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function inventory_function_library.inventory_function_library_C.ItemKindToArmorSlotType
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// EItemGroupType                 Kind                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ValidArmorSlot                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Earmor_slot_enum>  ArmorSlotType                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_ItemKindToArmorSlotType(EItemGroupType Kind, class UObject* __WorldContext, bool* ValidArmorSlot, TEnumAsByte<Earmor_slot_enum>* ArmorSlotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.ItemKindToArmorSlotType");

	Uinventory_function_library_C_ItemKindToArmorSlotType_Params params;
	params.Kind = Kind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValidArmorSlot != nullptr)
		*ValidArmorSlot = params.ValidArmorSlot;
	if (ArmorSlotType != nullptr)
		*ArmorSlotType = params.ArmorSlotType;
}


// Function inventory_function_library.inventory_function_library_C.IsItemEquipped
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsItemEquipped                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// EItemGroupType                 SlotKind                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_IsItemEquipped(const class FString& InstanceId, class UObject* __WorldContext, bool* IsItemEquipped, EItemGroupType* SlotKind)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.IsItemEquipped");

	Uinventory_function_library_C_IsItemEquipped_Params params;
	params.InstanceId = InstanceId;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsItemEquipped != nullptr)
		*IsItemEquipped = params.IsItemEquipped;
	if (SlotKind != nullptr)
		*SlotKind = params.SlotKind;
}


// Function inventory_function_library.inventory_function_library_C.GetEquippedItemForSlot
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemGroupType                 SlotKind                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAnItemEquipped_              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)
// class FString                  InstanceId                     (Parm, OutParm, ZeroConstructor)
// class UArchonInventoryItem*    Item                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uinventory_function_library_C::STATIC_GetEquippedItemForSlot(EItemGroupType SlotKind, class UObject* __WorldContext, bool* IsAnItemEquipped_, class FString* ItemID, class FString* InstanceId, class UArchonInventoryItem** Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function inventory_function_library.inventory_function_library_C.GetEquippedItemForSlot");

	Uinventory_function_library_C_GetEquippedItemForSlot_Params params;
	params.SlotKind = SlotKind;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAnItemEquipped_ != nullptr)
		*IsAnItemEquipped_ = params.IsAnItemEquipped_;
	if (ItemID != nullptr)
		*ItemID = params.ItemID;
	if (InstanceId != nullptr)
		*InstanceId = params.InstanceId;
	if (Item != nullptr)
		*Item = params.Item;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
