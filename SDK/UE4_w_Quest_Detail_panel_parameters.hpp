#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Quest_Detail_panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.QuestHasKillObjective
struct Uw_Quest_Detail_panel_C_QuestHasKillObjective_Params
{
	bool                                               HasKillObjective;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_Border_Objectives_Visibility_1
struct Uw_Quest_Detail_panel_C_Get_Border_Objectives_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_ReturntoBox_Visibility_1
struct Uw_Quest_Detail_panel_C_Get_ReturntoBox_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_Redeemer_txt_Text_1
struct Uw_Quest_Detail_panel_C_Get_Redeemer_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.GetAssetName
struct Uw_Quest_Detail_panel_C_GetAssetName_Params
{
	class FString                                      ObjectPath;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ObjectName;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.GetVisibility_1
struct Uw_Quest_Detail_panel_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Construct
struct Uw_Quest_Detail_panel_C_Construct_Params
{
};

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.ExecuteUbergraph_w_Quest_Detail_panel
struct Uw_Quest_Detail_panel_C_ExecuteUbergraph_w_Quest_Detail_panel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
