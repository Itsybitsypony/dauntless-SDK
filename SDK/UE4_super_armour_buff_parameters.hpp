#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_super_armour_buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function super_armour_buff.super_armour_buff_C.UserConstructionScript
struct Asuper_armour_buff_C_UserConstructionScript_Params
{
};

// Function super_armour_buff.super_armour_buff_C.Timeline_2__FinishedFunc
struct Asuper_armour_buff_C_Timeline_2__FinishedFunc_Params
{
};

// Function super_armour_buff.super_armour_buff_C.Timeline_2__UpdateFunc
struct Asuper_armour_buff_C_Timeline_2__UpdateFunc_Params
{
};

// Function super_armour_buff.super_armour_buff_C.MulticastOnAdded
struct Asuper_armour_buff_C_MulticastOnAdded_Params
{
};

// Function super_armour_buff.super_armour_buff_C.End Multicast
struct Asuper_armour_buff_C_End_Multicast_Params
{
};

// Function super_armour_buff.super_armour_buff_C.OnDamageReceived
struct Asuper_armour_buff_C_OnDamageReceived_Params
{
	float*                                             DamageReceived;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonAbilityDamageInfo*                   DamageInfo;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function super_armour_buff.super_armour_buff_C.MultiShield
struct Asuper_armour_buff_C_MultiShield_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function super_armour_buff.super_armour_buff_C.OnRemoved
struct Asuper_armour_buff_C_OnRemoved_Params
{
};

// Function super_armour_buff.super_armour_buff_C.ExecuteUbergraph_super_armour_buff
struct Asuper_armour_buff_C_ExecuteUbergraph_super_armour_buff_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
