#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_combat_combo_counter_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.DebugInfo
struct Ucombat_combo_counter_bpc_C_DebugInfo_Params
{
	bool                                               Condition;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ReceiveBeginPlay
struct Ucombat_combo_counter_bpc_C_ReceiveBeginPlay_Params
{
};

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ReceiveTick
struct Ucombat_combo_counter_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.OnComboEndedDispatcher_Event_1
struct Ucombat_combo_counter_bpc_C_OnComboEndedDispatcher_Event_1_Params
{
};

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.IncrementComboCount
struct Ucombat_combo_counter_bpc_C_IncrementComboCount_Params
{
	EArchonAttackActionKey                             AttackType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ServerSetComboCount
struct Ucombat_combo_counter_bpc_C_ServerSetComboCount_Params
{
	int                                                PrimaryCount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SecondaryCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArchonAttackActionKey                             AttackType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.ExecuteUbergraph_combat_combo_counter_bpc
struct Ucombat_combo_counter_bpc_C_ExecuteUbergraph_combat_combo_counter_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function combat_combo_counter_bpc.combat_combo_counter_bpc_C.OnComboIncremented__DelegateSignature
struct Ucombat_combo_counter_bpc_C_OnComboIncremented__DelegateSignature_Params
{
	EArchonAttackActionKey                             AttackType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
