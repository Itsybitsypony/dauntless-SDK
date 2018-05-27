// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentProgression_Tier_Armour_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Tier Label
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Tier_Armour_C::Set_Tier_Label(int Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Tier Label");

	Uw_EquipmentProgression_Tier_Armour_C_Set_Tier_Label_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Item Links
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArmorType                     Armour_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressionLink>  Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressionLink>  NextTier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Tier_Armour_C::Set_Item_Links(EArmorType Armour_Type, TEnumAsByte<EProgressionLink> Progress, TEnumAsByte<EProgressionLink> NextTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Item Links");

	Uw_EquipmentProgression_Tier_Armour_C_Set_Item_Links_Params params;
	params.Armour_Type = Armour_Type;
	params.Progress = Progress;
	params.NextTier = NextTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Get Inventory
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonInventory*        Inventory                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Tier_Armour_C::Get_Inventory(class AArchonInventory** Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Get Inventory");

	Uw_EquipmentProgression_Tier_Armour_C_Get_Inventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Inventory != nullptr)
		*Inventory = params.Inventory;
}


// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Item
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressionLink>  Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressionLink>  NextTier                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Tier_Armour_C::Set_Item(const class FString& ItemID, int Tier, TEnumAsByte<EProgressionLink> Progress, TEnumAsByte<EProgressionLink> NextTier)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Item");

	Uw_EquipmentProgression_Tier_Armour_C_Set_Item_Params params;
	params.ItemID = ItemID;
	params.Tier = Tier;
	params.Progress = Progress;
	params.NextTier = NextTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EquipmentProgression_Tier_Armour_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Construct");

	Uw_EquipmentProgression_Tier_Armour_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Item Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_EquipmentVendor_Item_C* Armour_Item                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Item_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Tier_Armour_C::Item_Hover(class Uw_EquipmentVendor_Item_C* Armour_Item, int Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Item Hover");

	Uw_EquipmentProgression_Tier_Armour_C_Item_Hover_Params params;
	params.Armour_Item = Armour_Item;
	params.Item_Index = Item_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Inventory
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonInventory*        Inventory                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Tier_Armour_C::Set_Inventory(class AArchonInventory* Inventory)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.Set Inventory");

	Uw_EquipmentProgression_Tier_Armour_C_Set_Inventory_Params params;
	params.Inventory = Inventory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.ExecuteUbergraph_w_EquipmentProgression_Tier_Armour
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Tier_Armour_C::ExecuteUbergraph_w_EquipmentProgression_Tier_Armour(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.ExecuteUbergraph_w_EquipmentProgression_Tier_Armour");

	Uw_EquipmentProgression_Tier_Armour_C_ExecuteUbergraph_w_EquipmentProgression_Tier_Armour_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.On Item Hover__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_EquipmentVendor_Item_C* Armour_Item                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Item_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_Tier_Armour_C::On_Item_Hover__DelegateSignature(class Uw_EquipmentVendor_Item_C* Armour_Item, int Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression_Tier_Armour.w_EquipmentProgression_Tier_Armour_C.On Item Hover__DelegateSignature");

	Uw_EquipmentProgression_Tier_Armour_C_On_Item_Hover__DelegateSignature_Params params;
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
