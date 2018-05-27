// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentDetail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentDetail.w_EquipmentDetail_C.GetDisplayItemLevel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EUpgradeableItemLevel          ItemLevel                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::GetDisplayItemLevel(class UEquipmentItem* Equipment, EUpgradeableItemLevel* ItemLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.GetDisplayItemLevel");

	Uw_EquipmentDetail_C_GetDisplayItemLevel_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemLevel != nullptr)
		*ItemLevel = params.ItemLevel;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.GetDisplayItemID
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentDetail_C::GetDisplayItemID(class UEquipmentItem* Equipment, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.GetDisplayItemID");

	Uw_EquipmentDetail_C_GetDisplayItemID_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.UpdateItemDetails-DescriptionAndPermCells
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsArmour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponType                    WeaponTypeIfWeapon             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EUpgradeableItemLevel          UpgradeLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::UpdateItemDetails_DescriptionAndPermCells(const class FString& ItemID, bool IsArmour, EWeaponType WeaponTypeIfWeapon, EUpgradeableItemLevel UpgradeLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.UpdateItemDetails-DescriptionAndPermCells");

	Uw_EquipmentDetail_C_UpdateItemDetails_DescriptionAndPermCells_Params params;
	params.ItemID = ItemID;
	params.IsArmour = IsArmour;
	params.WeaponTypeIfWeapon = WeaponTypeIfWeapon;
	params.UpgradeLevel = UpgradeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.GetPermanentCellData
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           IsArmour                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EWeaponType                    WeaponTypeIfWeapon             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EUpgradeableItemLevel          UpgradeLevel                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPermanentCell>  PermanentCells                 (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentDetail_C::GetPermanentCellData(const class FString& ItemID, bool IsArmour, EWeaponType WeaponTypeIfWeapon, EUpgradeableItemLevel UpgradeLevel, TArray<struct FPermanentCell>* PermanentCells)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.GetPermanentCellData");

	Uw_EquipmentDetail_C_GetPermanentCellData_Params params;
	params.ItemID = ItemID;
	params.IsArmour = IsArmour;
	params.WeaponTypeIfWeapon = WeaponTypeIfWeapon;
	params.UpgradeLevel = UpgradeLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PermanentCells != nullptr)
		*PermanentCells = params.PermanentCells;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.FormatPowerDelta
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Output                         (Parm, OutParm)

void Uw_EquipmentDetail_C::FormatPowerDelta(float Delta, struct FText* Output)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.FormatPowerDelta");

	Uw_EquipmentDetail_C_FormatPowerDelta_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.CreateArmorSetElementalResistanceWidgets
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Felement_float_pair> ElementFloatPairs              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct Felement_float_pair> DeltaArray                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_EquipmentDetail_C::CreateArmorSetElementalResistanceWidgets(TArray<struct Felement_float_pair>* ElementFloatPairs, TArray<struct Felement_float_pair>* DeltaArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.CreateArmorSetElementalResistanceWidgets");

	Uw_EquipmentDetail_C_CreateArmorSetElementalResistanceWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ElementFloatPairs != nullptr)
		*ElementFloatPairs = params.ElementFloatPairs;
	if (DeltaArray != nullptr)
		*DeltaArray = params.DeltaArray;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Should Show Keywords
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// struct FName                   BonusName                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

bool Uw_EquipmentDetail_C::Should_Show_Keywords(struct FName* BonusName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Should Show Keywords");

	Uw_EquipmentDetail_C_Should_Show_Keywords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BonusName != nullptr)
		*BonusName = params.BonusName;

	return params.ReturnValue;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Clear Preview Keywords
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_C::Clear_Preview_Keywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Clear Preview Keywords");

	Uw_EquipmentDetail_C_Clear_Preview_Keywords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Create Keyword Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Delta                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShowAllSetBonuses              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentDetail_Keyword_C* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class Uw_EquipmentDetail_Keyword_C* Uw_EquipmentDetail_C::Create_Keyword_Widget(const struct FName& Keyword, int Count, int Delta, bool ShowAllSetBonuses)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Create Keyword Widget");

	Uw_EquipmentDetail_C_Create_Keyword_Widget_Params params;
	params.Keyword = Keyword;
	params.Count = Count;
	params.Delta = Delta;
	params.ShowAllSetBonuses = ShowAllSetBonuses;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Widget for Keyword
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentDetail_Keyword_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Get_Widget_for_Keyword(const struct FName& Keyword, class Uw_EquipmentDetail_Keyword_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Get Widget for Keyword");

	Uw_EquipmentDetail_C_Get_Widget_for_Keyword_Params params;
	params.Keyword = Keyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Crafted Item Id
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Crafted_Item_Id                (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentDetail_C::Get_Crafted_Item_Id(const class FString& Item_ID, class FString* Crafted_Item_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Get Crafted Item Id");

	Uw_EquipmentDetail_C_Get_Crafted_Item_Id_Params params;
	params.Item_ID = Item_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Crafted_Item_Id != nullptr)
		*Crafted_Item_Id = params.Crafted_Item_Id;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Keywords for Armour Item
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FName>           Keywords                       (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentDetail_C::Get_Keywords_for_Armour_Item(const class FString& ItemID, TArray<struct FName>* Keywords)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Get Keywords for Armour Item");

	Uw_EquipmentDetail_C_Get_Keywords_for_Armour_Item_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Keywords != nullptr)
		*Keywords = params.Keywords;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Update ItemDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Update_ItemDetails(class UEquipmentItem* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Update ItemDetails");

	Uw_EquipmentDetail_C_Update_ItemDetails_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Keyword Abilities for Count
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FArmourSetTableData     Set_Data                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UClass*>          Abilities                      (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentDetail_C::Get_Keyword_Abilities_for_Count(int Count, struct FArmourSetTableData* Set_Data, TArray<class UClass*>* Abilities)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Get Keyword Abilities for Count");

	Uw_EquipmentDetail_C_Get_Keyword_Abilities_for_Count_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Set_Data != nullptr)
		*Set_Data = params.Set_Data;
	if (Abilities != nullptr)
		*Abilities = params.Abilities;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Count Keyword on Equipped Armour
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Count_Keyword_on_Equipped_Armour(const struct FName& Keyword, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Count Keyword on Equipped Armour");

	Uw_EquipmentDetail_C_Count_Keyword_on_Equipped_Armour_Params params;
	params.Keyword = Keyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Add Lantern Keywords
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_C::Add_Lantern_Keywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Add Lantern Keywords");

	Uw_EquipmentDetail_C_Add_Lantern_Keywords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Add Armour Item Keywords
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EArmorType                     Armor_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Add_Armour_Item_Keywords(EArmorType Armor_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Add Armour Item Keywords");

	Uw_EquipmentDetail_C_Add_Armour_Item_Keywords_Params params;
	params.Armor_Type = Armor_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Setup Armour Keywords
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_C::Setup_Armour_Keywords()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Setup Armour Keywords");

	Uw_EquipmentDetail_C_Setup_Armour_Keywords_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Lookup Weapon Power
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EUpgradeableItemLevel          Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Global_Power                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> NonZeroElementalFloatArray     (Parm, OutParm, ZeroConstructor)
// EElementType                   Elemental_Type                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Lookup_Weapon_Power(const class FString& ItemID, EUpgradeableItemLevel Level, float* Global_Power, TArray<struct Felement_float_pair>* NonZeroElementalFloatArray, EElementType* Elemental_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Lookup Weapon Power");

	Uw_EquipmentDetail_C_Lookup_Weapon_Power_Params params;
	params.ItemID = ItemID;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Global_Power != nullptr)
		*Global_Power = params.Global_Power;
	if (NonZeroElementalFloatArray != nullptr)
		*NonZeroElementalFloatArray = params.NonZeroElementalFloatArray;
	if (Elemental_Type != nullptr)
		*Elemental_Type = params.Elemental_Type;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Weapon Power Delta
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Item_Power                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_EquipmentDetail_C::Get_Weapon_Power_Delta(float Item_Power)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Get Weapon Power Delta");

	Uw_EquipmentDetail_C_Get_Weapon_Power_Delta_Params params;
	params.Item_Power = Item_Power;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Weapon Power Number
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EUpgradeableItemLevel          Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Formatted_Number               (Parm, OutParm)
// float                          Raw_Value                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Get_Weapon_Power_Number(const class FString& ItemID, EUpgradeableItemLevel Level, struct FText* Formatted_Number, float* Raw_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Get Weapon Power Number");

	Uw_EquipmentDetail_C_Get_Weapon_Power_Number_Params params;
	params.ItemID = ItemID;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Formatted_Number != nullptr)
		*Formatted_Number = params.Formatted_Number;
	if (Raw_Value != nullptr)
		*Raw_Value = params.Raw_Value;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Armour Power Delta
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Item_Power                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     ArmourType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_EquipmentDetail_C::Get_Armour_Power_Delta(float Item_Power, EArmorType ArmourType)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Get Armour Power Delta");

	Uw_EquipmentDetail_C_Get_Armour_Power_Delta_Params params;
	params.Item_Power = Item_Power;
	params.ArmourType = ArmourType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Lookup Armour Power
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EUpgradeableItemLevel          Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Global_Resistance              (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct Felement_float_pair> ElementalResistances           (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentDetail_C::Lookup_Armour_Power(const class FString& ItemID, EUpgradeableItemLevel Level, float* Global_Resistance, TArray<struct Felement_float_pair>* ElementalResistances)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Lookup Armour Power");

	Uw_EquipmentDetail_C_Lookup_Armour_Power_Params params;
	params.ItemID = ItemID;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Global_Resistance != nullptr)
		*Global_Resistance = params.Global_Resistance;
	if (ElementalResistances != nullptr)
		*ElementalResistances = params.ElementalResistances;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Get Armour Power Number
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EUpgradeableItemLevel          Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Formatted_Number               (Parm, OutParm)
// float                          Raw_Value                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Get_Armour_Power_Number(const class FString& ItemID, EUpgradeableItemLevel Level, struct FText* Formatted_Number, float* Raw_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Get Armour Power Number");

	Uw_EquipmentDetail_C_Get_Armour_Power_Number_Params params;
	params.ItemID = ItemID;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Formatted_Number != nullptr)
		*Formatted_Number = params.Formatted_Number;
	if (Raw_Value != nullptr)
		*Raw_Value = params.Raw_Value;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Update Details
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Update_Details(class UEquipmentItem* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Update Details");

	Uw_EquipmentDetail_C_Update_Details_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Add Required Component
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCatalogRecipeComponent Component                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Did_Add                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Add_Required_Component(const struct FCatalogRecipeComponent& Component, bool* Did_Add)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Add Required Component");

	Uw_EquipmentDetail_C_Add_Required_Component_Params params;
	params.Component = Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Did_Add != nullptr)
		*Did_Add = params.Did_Add;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.OnLoaded_E917FFD742239F8AF6CD248096D555D3
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::OnLoaded_E917FFD742239F8AF6CD248096D555D3(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.OnLoaded_E917FFD742239F8AF6CD248096D555D3");

	Uw_EquipmentDetail_C_OnLoaded_E917FFD742239F8AF6CD248096D555D3_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EquipmentDetail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Construct");

	Uw_EquipmentDetail_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Display Craftable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentItem*          Equipment                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Display_Craftable(class UEquipmentItem* Equipment)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Display Craftable");

	Uw_EquipmentDetail_C_Display_Craftable_Params params;
	params.Equipment = Equipment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Update Icon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_EquipmentDetail_C::Update_Icon(TAssetPtr<class UTexture2D> Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Update Icon");

	Uw_EquipmentDetail_C_Update_Icon_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.On Keywords Updated
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_C::On_Keywords_Updated()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.On Keywords Updated");

	Uw_EquipmentDetail_C_On_Keywords_Updated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Reset Display
// (BlueprintCallable, BlueprintEvent)

void Uw_EquipmentDetail_C::Reset_Display()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Reset Display");

	Uw_EquipmentDetail_C_Reset_Display_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.Vendor Type Updated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EquipmentVendor>   Vendor_Type                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::Vendor_Type_Updated(TEnumAsByte<EquipmentVendor> Vendor_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.Vendor Type Updated");

	Uw_EquipmentDetail_C_Vendor_Type_Updated_Params params;
	params.Vendor_Type = Vendor_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentDetail.w_EquipmentDetail_C.ExecuteUbergraph_w_EquipmentDetail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentDetail_C::ExecuteUbergraph_w_EquipmentDetail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentDetail.w_EquipmentDetail_C.ExecuteUbergraph_w_EquipmentDetail");

	Uw_EquipmentDetail_C_ExecuteUbergraph_w_EquipmentDetail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
