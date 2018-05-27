#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_logic_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function quest_logic_bpc.quest_logic_bpc_C.OnRep_bIsTutorialIsland
struct Uquest_logic_bpc_C_OnRep_bIsTutorialIsland_Params
{
};

// Function quest_logic_bpc.quest_logic_bpc_C.GetInputLastRecordedTime
struct Uquest_logic_bpc_C_GetInputLastRecordedTime_Params
{
	TEnumAsByte<Equest_button_input_types_enum>        Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LastRecordedTime;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function quest_logic_bpc.quest_logic_bpc_C.SetInputLastRecordedTime
struct Uquest_logic_bpc_C_SetInputLastRecordedTime_Params
{
	TEnumAsByte<Equest_button_input_types_enum>        Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function quest_logic_bpc.quest_logic_bpc_C.ClearConditionTimer
struct Uquest_logic_bpc_C_ClearConditionTimer_Params
{
	class FString                                      ConditionGUID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function quest_logic_bpc.quest_logic_bpc_C.GetConditionTimerValue
struct Uquest_logic_bpc_C_GetConditionTimerValue_Params
{
	class FString                                      ConditionID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              TimerValue;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function quest_logic_bpc.quest_logic_bpc_C.StartConditionTimer
struct Uquest_logic_bpc_C_StartConditionTimer_Params
{
	class FString                                      ConditionGUID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function quest_logic_bpc.quest_logic_bpc_C.ReceiveBeginPlay
struct Uquest_logic_bpc_C_ReceiveBeginPlay_Params
{
};

// Function quest_logic_bpc.quest_logic_bpc_C.BehemothFlee
struct Uquest_logic_bpc_C_BehemothFlee_Params
{
};

// Function quest_logic_bpc.quest_logic_bpc_C.OnOverlap
struct Uquest_logic_bpc_C_OnOverlap_Params
{
	class AActor*                                      OverlappedActor;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function quest_logic_bpc.quest_logic_bpc_C.CheckButtonInput
struct Uquest_logic_bpc_C_CheckButtonInput_Params
{
};

// Function quest_logic_bpc.quest_logic_bpc_C.ActorGameplayStart
struct Uquest_logic_bpc_C_ActorGameplayStart_Params
{
};

// Function quest_logic_bpc.quest_logic_bpc_C.StartInputMonitorTimer
struct Uquest_logic_bpc_C_StartInputMonitorTimer_Params
{
};

// Function quest_logic_bpc.quest_logic_bpc_C.OnPlayerTakeDamage
struct Uquest_logic_bpc_C_OnPlayerTakeDamage_Params
{
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function quest_logic_bpc.quest_logic_bpc_C.SetWispPickupTime
struct Uquest_logic_bpc_C_SetWispPickupTime_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function quest_logic_bpc.quest_logic_bpc_C.ExecuteUbergraph_quest_logic_bpc
struct Uquest_logic_bpc_C_ExecuteUbergraph_quest_logic_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
