#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_enragebonus_buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function damage_enragebonus_buff.damage_enragebonus_buff_C.RemoveBonusEffect
struct Adamage_enragebonus_buff_C_RemoveBonusEffect_Params
{
};

// Function damage_enragebonus_buff.damage_enragebonus_buff_C.ApplyEffect
struct Adamage_enragebonus_buff_C_ApplyEffect_Params
{
	bool                                               Bonus;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function damage_enragebonus_buff.damage_enragebonus_buff_C.UserConstructionScript
struct Adamage_enragebonus_buff_C_UserConstructionScript_Params
{
};

// Function damage_enragebonus_buff.damage_enragebonus_buff_C.OnAdded
struct Adamage_enragebonus_buff_C_OnAdded_Params
{
};

// Function damage_enragebonus_buff.damage_enragebonus_buff_C.OnGameplayEventTriggered
struct Adamage_enragebonus_buff_C_OnGameplayEventTriggered_Params
{
	struct FGameplayEventData*                         Payload;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function damage_enragebonus_buff.damage_enragebonus_buff_C.MulticastOnAdded
struct Adamage_enragebonus_buff_C_MulticastOnAdded_Params
{
};

// Function damage_enragebonus_buff.damage_enragebonus_buff_C.ExecuteUbergraph_damage_enragebonus_buff
struct Adamage_enragebonus_buff_C_ExecuteUbergraph_damage_enragebonus_buff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
