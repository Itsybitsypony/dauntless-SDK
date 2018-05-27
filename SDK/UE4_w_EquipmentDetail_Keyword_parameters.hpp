#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentDetail_Keyword_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Create Keyword Description Widget With Count
struct Uw_EquipmentDetail_Keyword_C_Create_Keyword_Description_Widget_With_Count_Params
{
	class UClass*                                      Ability_Class;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                MinimumCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentDetail_KeywordDescription_C*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.GetAllKeywordAbilities
struct Uw_EquipmentDetail_Keyword_C_GetAllKeywordAbilities_Params
{
	struct FArmourSetTableData                         Set_Data;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UClass*>                              Abilities;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Show Preview_TooltipItemOnly
struct Uw_EquipmentDetail_Keyword_C_Show_Preview_TooltipItemOnly_Params
{
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Clear Preview
struct Uw_EquipmentDetail_Keyword_C_Clear_Preview_Params
{
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Tint Widget
struct Uw_EquipmentDetail_Keyword_C_Tint_Widget_Params
{
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Set as Removed Keyword
struct Uw_EquipmentDetail_Keyword_C_Set_as_Removed_Keyword_Params
{
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Set as New Keyword
struct Uw_EquipmentDetail_Keyword_C_Set_as_New_Keyword_Params
{
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Create Keyword Description Widget
struct Uw_EquipmentDetail_Keyword_C_Create_Keyword_Description_Widget_Params
{
	class UClass*                                      Ability_Class;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentDetail_KeywordDescription_C*     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Get Keyword Abilities for Count
struct Uw_EquipmentDetail_Keyword_C_Get_Keyword_Abilities_for_Count_Params
{
	struct FArmourSetTableData                         Set_Data;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              Abilities;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Setup
struct Uw_EquipmentDetail_Keyword_C_Setup_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShowAllSetBonuses;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Show Preview
struct Uw_EquipmentDetail_Keyword_C_Show_Preview_Params
{
	int                                                Delta;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.OnLoaded_70846176465CE6AAB9AC7094AAF6D71E
struct Uw_EquipmentDetail_Keyword_C_OnLoaded_70846176465CE6AAB9AC7094AAF6D71E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.Load Icon
struct Uw_EquipmentDetail_Keyword_C_Load_Icon_Params
{
};

// Function w_EquipmentDetail_Keyword.w_EquipmentDetail_Keyword_C.ExecuteUbergraph_w_EquipmentDetail_Keyword
struct Uw_EquipmentDetail_Keyword_C_ExecuteUbergraph_w_EquipmentDetail_Keyword_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
