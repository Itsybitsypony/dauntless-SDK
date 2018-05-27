#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_armourset_entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.GetKeywordCountForItem
struct Ubpw_debug_armourset_entry_C_GetKeywordCountForItem_Params
{
	class AArchonArmorSetItem*                         Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.IsArmourClassNameEquipped
struct Ubpw_debug_armourset_entry_C_IsArmourClassNameEquipped_Params
{
	struct FName                                       ClassName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquipped;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.GetEquippedKeywordCount
struct Ubpw_debug_armourset_entry_C_GetEquippedKeywordCount_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_armourset_entry.bpw_debug_armourset_entry_C.SetData
struct Ubpw_debug_armourset_entry_C_SetData_Params
{
	struct FName                                       KeywordRow;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
