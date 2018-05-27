#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_W_weapon_ihammer_ammo_shot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.Get_Casing_Boosted_Glow_ColorAndOpacity_1
struct UW_weapon_ihammer_ammo_shot_C_Get_Casing_Boosted_Glow_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.Set State
struct UW_weapon_ihammer_ammo_shot_C_Set_State_Params
{
	TEnumAsByte<Eui_ammo_states>                       Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_weapon_ihammer_ammo_shot.W_weapon_ihammer_ammo_shot_C.ExecuteUbergraph_W_weapon_ihammer_ammo_shot
struct UW_weapon_ihammer_ammo_shot_C_ExecuteUbergraph_W_weapon_ihammer_ammo_shot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
