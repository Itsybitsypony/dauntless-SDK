#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_weapon_cblades_ui_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Get_AetherMeter_FillColorAndOpacity_1
struct Ubpw_weapon_cblades_ui_C_Get_AetherMeter_FillColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.UpdateAmmoIndicators
struct Ubpw_weapon_cblades_ui_C_UpdateAmmoIndicators_Params
{
};

// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Get_AetherMeter_Percent_1
struct Ubpw_weapon_cblades_ui_C_Get_AetherMeter_Percent_1_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Construct
struct Ubpw_weapon_cblades_ui_C_Construct_Params
{
};

// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.Tick
struct Ubpw_weapon_cblades_ui_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.OnAmmoCountChanged_Event_1
struct Ubpw_weapon_cblades_ui_C_OnAmmoCountChanged_Event_1_Params
{
	int                                                NewAmmoCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_weapon_cblades_ui.bpw_weapon_cblades_ui_C.ExecuteUbergraph_bpw_weapon_cblades_ui
struct Ubpw_weapon_cblades_ui_C_ExecuteUbergraph_bpw_weapon_cblades_ui_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
