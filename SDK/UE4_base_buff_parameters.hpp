#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_buff.base_buff_C.GetModifyDamageEventPriority
struct Abase_buff_C_GetModifyDamageEventPriority_Params
{
	int                                                Priority;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_buff.base_buff_C.CustomModifyDamageEventData
struct Abase_buff_C_CustomModifyDamageEventData_Params
{
	struct FDamageEventData                            DamageEventData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       DamageTags;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ModifiedDamageEventData;                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FDamageEventData                            OverriddenDamageEventData;                                // (Parm, OutParm)
	bool                                               ShouldOverrideDamageTags;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       OverriddenDamageTags;                                     // (Parm, OutParm)
};

// Function base_buff.base_buff_C.GetVFXAttachPoint
struct Abase_buff_C_GetVFXAttachPoint_Params
{
	class USceneComponent*                             AttachComponent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function base_buff.base_buff_C.UserConstructionScript
struct Abase_buff_C_UserConstructionScript_Params
{
};

// Function base_buff.base_buff_C.OnAdded
struct Abase_buff_C_OnAdded_Params
{
};

// Function base_buff.base_buff_C.OnRemoved
struct Abase_buff_C_OnRemoved_Params
{
};

// Function base_buff.base_buff_C.ReceiveDestroyed
struct Abase_buff_C_ReceiveDestroyed_Params
{
};

// Function base_buff.base_buff_C.ExecuteUbergraph_base_buff
struct Abase_buff_C_ExecuteUbergraph_base_buff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
