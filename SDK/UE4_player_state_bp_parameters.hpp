#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_state_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_state_bp.player_state_bp_C.SetupCombatText
struct Aplayer_state_bp_C_SetupCombatText_Params
{
};

// Function player_state_bp.player_state_bp_C.GetRankingData
struct Aplayer_state_bp_C_GetRankingData_Params
{
	float                                              DamageGiven;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DamageTaken;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                BleedoutCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                NumRevivesPerformed;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                StaggerCount;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.HasFinishedLoading
struct Aplayer_state_bp_C_HasFinishedLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.GetSelectedSlotFName
struct Aplayer_state_bp_C_GetSelectedSlotFName_Params
{
	struct FName                                       Name;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.Use Currently Selected Quickslot Item
struct Aplayer_state_bp_C_Use_Currently_Selected_Quickslot_Item_Params
{
	bool                                               Started_Use;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.OnRep_Is Talking
struct Aplayer_state_bp_C_OnRep_Is_Talking_Params
{
};

// Function player_state_bp.player_state_bp_C.Setup Player Inventory
struct Aplayer_state_bp_C_Setup_Player_Inventory_Params
{
};

// Function player_state_bp.player_state_bp_C.Get Debug Color
struct Aplayer_state_bp_C_Get_Debug_Color_Params
{
	struct FLinearColor                                Color;                                                    // (Parm, OutParm, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.UserConstructionScript
struct Aplayer_state_bp_C_UserConstructionScript_Params
{
};

// Function player_state_bp.player_state_bp_C.SelectPreviousQuickslotItem
struct Aplayer_state_bp_C_SelectPreviousQuickslotItem_Params
{
};

// Function player_state_bp.player_state_bp_C.SelectNextQuickslotItem
struct Aplayer_state_bp_C_SelectNextQuickslotItem_Params
{
};

// Function player_state_bp.player_state_bp_C.SetInAirship
struct Aplayer_state_bp_C_SetInAirship_Params
{
	bool                                               InAirship;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.ReceiveBeginPlay
struct Aplayer_state_bp_C_ReceiveBeginPlay_Params
{
};

// Function player_state_bp.player_state_bp_C.OnPlayergiveDamage
struct Aplayer_state_bp_C_OnPlayergiveDamage_Params
{
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.IncrementStaggerCount
struct Aplayer_state_bp_C_IncrementStaggerCount_Params
{
	class AActor*                                      Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               WasInterrupt;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.SetInCity-Deprecated
struct Aplayer_state_bp_C_SetInCity_Deprecated_Params
{
	bool                                               InCity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.Guild Updated
struct Aplayer_state_bp_C_Guild_Updated_Params
{
	class AArchonGuild*                                Guild;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.Any
struct Aplayer_state_bp_C_Any_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.SelectQuickslot
struct Aplayer_state_bp_C_SelectQuickslot_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.IncrementPartBreakCount
struct Aplayer_state_bp_C_IncrementPartBreakCount_Params
{
	class AActor*                                      Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.IncrementInterruptCount
struct Aplayer_state_bp_C_IncrementInterruptCount_Params
{
	class AActor*                                      Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.ExecuteUbergraph_player_state_bp
struct Aplayer_state_bp_C_ExecuteUbergraph_player_state_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.Selected Quickslot Changed Dispatcher__DelegateSignature
struct Aplayer_state_bp_C_Selected_Quickslot_Changed_Dispatcher__DelegateSignature_Params
{
	int                                                SlotID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_state_bp.player_state_bp_C.Talking State Change Dispatcher__DelegateSignature
struct Aplayer_state_bp_C_Talking_State_Change_Dispatcher__DelegateSignature_Params
{
	bool                                               Is_Talking;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
