#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_weapon_stat_detail_panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.RefreshWidget
struct Uw_weapon_stat_detail_panel_C_RefreshWidget_Params
{
};

// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.CreateStatWidget
struct Uw_weapon_stat_detail_panel_C_CreateStatWidget_Params
{
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_EquipmentDetail_Keyword_C*                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.Construct
struct Uw_weapon_stat_detail_panel_C_Construct_Params
{
};

// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.UpdateOnEquipped
struct Uw_weapon_stat_detail_panel_C_UpdateOnEquipped_Params
{
};

// Function w_weapon_stat_detail_panel.w_weapon_stat_detail_panel_C.ExecuteUbergraph_w_weapon_stat_detail_panel
struct Uw_weapon_stat_detail_panel_C_ExecuteUbergraph_w_weapon_stat_detail_panel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
