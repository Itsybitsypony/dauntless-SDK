// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentProgression_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EquipmentProgression.w_EquipmentProgression_C.Player Has Recipe for Bundle
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  BundleId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
// class FString                  RecipeID                       (Parm, OutParm, ZeroConstructor)

bool Uw_EquipmentProgression_C::Player_Has_Recipe_for_Bundle(const class FString& BundleId, class FString* RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Player Has Recipe for Bundle");

	Uw_EquipmentProgression_C_Player_Has_Recipe_for_Bundle_Params params;
	params.BundleId = BundleId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RecipeID != nullptr)
		*RecipeID = params.RecipeID;

	return params.ReturnValue;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Bundle Id
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentProgression_C::Get_Bundle_Id(const class FString& Category, int Tier, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Get Bundle Id");

	Uw_EquipmentProgression_C_Get_Bundle_Id_Params params;
	params.Category = Category;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Bundle Has Recipe
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_EquipmentProgression_C::Bundle_Has_Recipe(const class FString& Category, int Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Bundle Has Recipe");

	Uw_EquipmentProgression_C_Bundle_Has_Recipe_Params params;
	params.Category = Category;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Item Id
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ItemID                         (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentProgression_C::Get_Item_Id(const class FString& Category, int Tier, class FString* ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Get Item Id");

	Uw_EquipmentProgression_C_Get_Item_Id_Params params;
	params.Category = Category;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ItemID != nullptr)
		*ItemID = params.ItemID;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Higher Tier Progress Link
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TEnumAsByte<EProgressionLink>> CategoryProgress               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressionLink>  Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_C::Get_Higher_Tier_Progress_Link(int Tier, TArray<TEnumAsByte<EProgressionLink>>* CategoryProgress, TEnumAsByte<EProgressionLink>* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Get Higher Tier Progress Link");

	Uw_EquipmentProgression_C_Get_Higher_Tier_Progress_Link_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CategoryProgress != nullptr)
		*CategoryProgress = params.CategoryProgress;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Lower Tier Progress Link
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<TEnumAsByte<EProgressionLink>> CategoryProgress               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressionLink>  Progress                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_C::Get_Lower_Tier_Progress_Link(int Tier, TArray<TEnumAsByte<EProgressionLink>>* CategoryProgress, TEnumAsByte<EProgressionLink>* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Get Lower Tier Progress Link");

	Uw_EquipmentProgression_C_Get_Lower_Tier_Progress_Link_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CategoryProgress != nullptr)
		*CategoryProgress = params.CategoryProgress;
	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Has Recipe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EProgressionLink>  Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_EquipmentProgression_C::Has_Recipe(TEnumAsByte<EProgressionLink> Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Has Recipe");

	Uw_EquipmentProgression_C_Has_Recipe_Params params;
	params.Progress = Progress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Item Id
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString Uw_EquipmentProgression_C::Get_Armour_Item_Id(int Tier, const class FString& Category, bool Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Item Id");

	Uw_EquipmentProgression_C_Get_Armour_Item_Id_Params params;
	params.Tier = Tier;
	params.Category = Category;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Setup Armour Category Progression
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<TEnumAsByte<EProgressionLink>> CategoryProgression            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uw_EquipmentProgression_C::Setup_Armour_Category_Progression(const class FString& Category, TArray<TEnumAsByte<EProgressionLink>>* CategoryProgression)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Setup Armour Category Progression");

	Uw_EquipmentProgression_C_Setup_Armour_Category_Progression_Params params;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CategoryProgression != nullptr)
		*CategoryProgression = params.CategoryProgression;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Player Can Craft Item
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_EquipmentProgression_C::Player_Can_Craft_Item(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Player Can Craft Item");

	Uw_EquipmentProgression_C_Player_Can_Craft_Item_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Tier Progress
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            PlayerTier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EProgressionLink>  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<EProgressionLink> Uw_EquipmentProgression_C::Get_Armour_Tier_Progress(const class FString& Category, int PlayerTier, int Tier)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Tier Progress");

	Uw_EquipmentProgression_C_Get_Armour_Tier_Progress_Params params;
	params.Category = Category;
	params.PlayerTier = PlayerTier;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Read Armour Progression
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TEnumAsByte<EProgressionLink>> Progress                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  Category                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            PlayerTier                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_C::Read_Armour_Progression(const class FString& Category, int PlayerTier, TArray<TEnumAsByte<EProgressionLink>>* Progress)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Read Armour Progression");

	Uw_EquipmentProgression_C_Read_Armour_Progression_Params params;
	params.Category = Category;
	params.PlayerTier = PlayerTier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Progress != nullptr)
		*Progress = params.Progress;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Recipe
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class FString>          BundleItems                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Has_Recipe                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (Parm, OutParm, ZeroConstructor)

void Uw_EquipmentProgression_C::Get_Recipe(TArray<class FString>* BundleItems, bool* Has_Recipe, class FString* RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Get Recipe");

	Uw_EquipmentProgression_C_Get_Recipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BundleItems != nullptr)
		*BundleItems = params.BundleItems;
	if (Has_Recipe != nullptr)
		*Has_Recipe = params.Has_Recipe;
	if (RecipeID != nullptr)
		*RecipeID = params.RecipeID;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Tier Widget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Tier                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_EquipmentProgression_Tier_Armour_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_C::Get_Armour_Tier_Widget(int Tier, class Uw_EquipmentProgression_Tier_Armour_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Get Armour Tier Widget");

	Uw_EquipmentProgression_C_Get_Armour_Tier_Widget_Params params;
	params.Tier = Tier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Set Name
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SetName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_EquipmentProgression_C::Set_Name(const class FString& SetName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Set Name");

	Uw_EquipmentProgression_C_Set_Name_Params params;
	params.SetName = SetName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Setup Armour Progression
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SetName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<class UArchonInventoryItem*> InventoryItems                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           AutoFocus                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArmorType                     Manual_Focus                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_C::Setup_Armour_Progression(const class FString& SetName, bool AutoFocus, EArmorType Manual_Focus, TArray<class UArchonInventoryItem*>* InventoryItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Setup Armour Progression");

	Uw_EquipmentProgression_C_Setup_Armour_Progression_Params params;
	params.SetName = SetName;
	params.AutoFocus = AutoFocus;
	params.Manual_Focus = Manual_Focus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InventoryItems != nullptr)
		*InventoryItems = params.InventoryItems;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.Item Hover
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_EquipmentVendor_Item_C* Armour_Item                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Item_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_C::Item_Hover(class Uw_EquipmentVendor_Item_C* Armour_Item, int Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.Item Hover");

	Uw_EquipmentProgression_C_Item_Hover_Params params;
	params.Armour_Item = Armour_Item;
	params.Item_Index = Item_Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.ExecuteUbergraph_w_EquipmentProgression
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_C::ExecuteUbergraph_w_EquipmentProgression(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.ExecuteUbergraph_w_EquipmentProgression");

	Uw_EquipmentProgression_C_ExecuteUbergraph_w_EquipmentProgression_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EquipmentProgression.w_EquipmentProgression_C.On Item Hovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_EquipmentVendor_Item_C* Armour_Item                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Item_Index                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EquipmentProgression_C::On_Item_Hovered__DelegateSignature(class Uw_EquipmentVendor_Item_C* Armour_Item, int Item_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EquipmentProgression.w_EquipmentProgression_C.On Item Hovered__DelegateSignature");

	Uw_EquipmentProgression_C_On_Item_Hovered__DelegateSignature_Params params;
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
