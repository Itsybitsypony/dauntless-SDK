#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Buffs_Doomsday_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GC_GameplayCue_Buffs_Doomsday.GC_GameplayCue_Buffs_Doomsday_C.UserConstructionScript
struct AGC_GameplayCue_Buffs_Doomsday_C_UserConstructionScript_Params
{
};

// Function GC_GameplayCue_Buffs_Doomsday.GC_GameplayCue_Buffs_Doomsday_C.K2_HandleGameplayCue
struct AGC_GameplayCue_Buffs_Doomsday_C_K2_HandleGameplayCue_Params
{
	class AActor**                                     MyTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function GC_GameplayCue_Buffs_Doomsday.GC_GameplayCue_Buffs_Doomsday_C.CustomEvent_1
struct AGC_GameplayCue_Buffs_Doomsday_C_CustomEvent_1_Params
{
};

// Function GC_GameplayCue_Buffs_Doomsday.GC_GameplayCue_Buffs_Doomsday_C.ExecuteUbergraph_GC_GameplayCue_Buffs_Doomsday
struct AGC_GameplayCue_Buffs_Doomsday_C_ExecuteUbergraph_GC_GameplayCue_Buffs_Doomsday_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
