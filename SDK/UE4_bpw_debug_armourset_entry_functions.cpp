// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_armourset_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.GetKeywordCountForItem
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonArmorSetItem*     Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Keyword                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_armourset_entry_C::GetKeywordCountForItem(class AArchonArmorSetItem* Item, const struct FName& Keyword, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.GetKeywordCountForItem");

	Ubpw_debug_armourset_entry_C_GetKeywordCountForItem_Params params;
	params.Item = Item;
	params.Keyword = Keyword;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.IsArmourClassNameEquipped
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ClassName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEquipped                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_armourset_entry_C::IsArmourClassNameEquipped(const struct FName& ClassName, bool* IsEquipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.IsArmourClassNameEquipped");

	Ubpw_debug_armourset_entry_C_IsArmourClassNameEquipped_Params params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsEquipped != nullptr)
		*IsEquipped = params.IsEquipped;
}


// Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.GetEquippedKeywordCount
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_armourset_entry_C::GetEquippedKeywordCount(const struct FName& RowName, int* Count)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.GetEquippedKeywordCount");

	Ubpw_debug_armourset_entry_C_GetEquippedKeywordCount_Params params;
	params.RowName = RowName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   KeywordRow                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_armourset_entry_C::SetData(const struct FName& KeywordRow)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.SetData");

	Ubpw_debug_armourset_entry_C_SetData_Params params;
	params.KeywordRow = KeywordRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
