#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BehemothAction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_BehemothAction.BP_BehemothAction_C.ChooseMontageToPlay
struct ABP_BehemothAction_C_ChooseMontageToPlay_Params
{
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.AuthSetNewCooldown
struct ABP_BehemothAction_C_AuthSetNewCooldown_Params
{
	float                                              NewCooldown;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.IsActionAvailable
struct ABP_BehemothAction_C_IsActionAvailable_Params
{
	bool                                               IsActionAvailable;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.GetScalingFactor
struct ABP_BehemothAction_C_GetScalingFactor_Params
{
	struct FVector                                     ScalingFactor;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.GetScaledSimplifiedAttackVectors
struct ABP_BehemothAction_C_GetScaledSimplifiedAttackVectors_Params
{
	TArray<struct FVector>                             Vectors1;                                                 // (Parm, OutParm, ZeroConstructor)
	TArray<struct FVector>                             Vectors2;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BehemothAction.BP_BehemothAction_C.Evaluate
struct ABP_BehemothAction_C_Evaluate_Params
{
	float                                              Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.ClosestPointToLine
struct ABP_BehemothAction_C_ClosestPointToLine_Params
{
	struct FVector                                     LineStart;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     LineEnd;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FVector                                     Point;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.SimplifyVectors
struct ABP_BehemothAction_C_SimplifyVectors_Params
{
	TArray<struct FVector>                             Vectors;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Epsilon;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             SimplifiedVectors;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function BP_BehemothAction.BP_BehemothAction_C.TestAttackVectorCollision
struct ABP_BehemothAction_C_TestAttackVectorCollision_Params
{
	bool                                               ActionAllowed;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.SetBehemothNavlinkMovement
struct ABP_BehemothAction_C_SetBehemothNavlinkMovement_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.GetHitAreaPositionWS
struct ABP_BehemothAction_C_GetHitAreaPositionWS_Params
{
	struct FStruct_ActionHitArea                       HitArea;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     NewParam;                                                 // (Parm, OutParm, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.PreAttackLogic
struct ABP_BehemothAction_C_PreAttackLogic_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.PostAttackLogic
struct ABP_BehemothAction_C_PostAttackLogic_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.ActionSpecifcTests
struct ABP_BehemothAction_C_ActionSpecifcTests_Params
{
	bool                                               TestsPassed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.StartCooldown
struct ABP_BehemothAction_C_StartCooldown_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.ActionSpecificEvaluate
struct ABP_BehemothAction_C_ActionSpecificEvaluate_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Score;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.EndCooldown
struct ABP_BehemothAction_C_EndCooldown_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.UserConstructionScript
struct ABP_BehemothAction_C_UserConstructionScript_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.ReceiveTick
struct ABP_BehemothAction_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_BehemothAction.BP_BehemothAction_C.ReceiveBeginPlay
struct ABP_BehemothAction_C_ReceiveBeginPlay_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.SimplifyAttackVectors
struct ABP_BehemothAction_C_SimplifyAttackVectors_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.DisplayVectors
struct ABP_BehemothAction_C_DisplayVectors_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.ReceiveDestroyed
struct ABP_BehemothAction_C_ReceiveDestroyed_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.ClearDebugDraw
struct ABP_BehemothAction_C_ClearDebugDraw_Params
{
};

// Function BP_BehemothAction.BP_BehemothAction_C.ExecuteUbergraph_BP_BehemothAction
struct ABP_BehemothAction_C_ExecuteUbergraph_BP_BehemothAction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
