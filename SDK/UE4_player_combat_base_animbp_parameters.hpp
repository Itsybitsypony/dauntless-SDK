#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_combat_base_animbp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_combat_base_animbp.player_combat_base_animbp_C.CheckTutorialParameters
struct Uplayer_combat_base_animbp_C_CheckTutorialParameters_Params
{
	bool                                               TutorialGameplay;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               TutorialCinematic;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.CalculateCharacterSpeedAlongDesiredVector
struct Uplayer_combat_base_animbp_C_CalculateCharacterSpeedAlongDesiredVector_Params
{
	float                                              Speed;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.IdleToLocoEnterExitConditions
struct Uplayer_combat_base_animbp_C_IdleToLocoEnterExitConditions_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.UpdateLookatPosition
struct Uplayer_combat_base_animbp_C_UpdateLookatPosition_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C. TestForArmourOffset
struct Uplayer_combat_base_animbp_C__TestForArmourOffset_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.Calculate Loco to Idle Animation Position
struct Uplayer_combat_base_animbp_C_Calculate_Loco_to_Idle_Animation_Position_Params
{
	class UAnimSequenceBase*                           Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Animation_Position_In;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Animation_Position_Out;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetCBladePullChainPositions
struct Uplayer_combat_base_animbp_C_SetCBladePullChainPositions_Params
{
	struct FName                                       Bone;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PullTargetLocation;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	TArray<struct FVector>                             Locations;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.GetInputDirection
struct Uplayer_combat_base_animbp_C_GetInputDirection_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetRootRotationOffset
struct Uplayer_combat_base_animbp_C_SetRootRotationOffset_Params
{
	class UAnimSequence*                               Sequence;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ExplicitTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.Calculate Idle to Loco Distance
struct Uplayer_combat_base_animbp_C_Calculate_Idle_to_Loco_Distance_Params
{
	float                                              PreviousDistance;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Distance;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.GetDirectionalAnim
struct Uplayer_combat_base_animbp_C_GetDirectionalAnim_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequence*                               AnimSequence;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.DrawDebugLoco
struct Uplayer_combat_base_animbp_C_DrawDebugLoco_Params
{
	bool                                               Debug;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.GetControllerCapsuleDelta
struct Uplayer_combat_base_animbp_C_GetControllerCapsuleDelta_Params
{
	float                                              ControllerCapsuleDelta;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.UpdateIKToggle
struct Uplayer_combat_base_animbp_C_UpdateIKToggle_Params
{
	class ABP_PlayerCharacter_C*                       Player_Character;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.Interp to Zero
struct Uplayer_combat_base_animbp_C_Interp_to_Zero_Params
{
	float                                              Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.Can Play Additive Animation
struct Uplayer_combat_base_animbp_C_Can_Play_Additive_Animation_Params
{
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.Debug Visualize Float
struct Uplayer_combat_base_animbp_C_Debug_Visualize_Float_Params
{
	float                                              Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.Debris
struct Uplayer_combat_base_animbp_C_Debris_Params
{
	struct FName                                       Socket;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.UpdateWeaponAttachment
struct Uplayer_combat_base_animbp_C_UpdateWeaponAttachment_Params
{
	class ABP_PlayerCharacter_C*                       PlayerCharacter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.Evaluate Weapon Type
struct Uplayer_combat_base_animbp_C_Evaluate_Weapon_Type_Params
{
	class ABP_PlayerCharacter_C*                       Player_Character;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_1AD12DBF40D682550FE89C8F81E4F9F8
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_1AD12DBF40D682550FE89C8F81E4F9F8_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2618998243BCFE130E523693E88BAEBD
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2618998243BCFE130E523693E88BAEBD_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_4375AC8F457AADDE1CA1F0856F8D39F2
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_4375AC8F457AADDE1CA1F0856F8D39F2_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_3C8E3789418905581E26FF99325A5274
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_3C8E3789418905581E26FF99325A5274_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_A08248ED4B2DFB986D07A5AF3825AED5
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_A08248ED4B2DFB986D07A5AF3825AED5_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2886323C45EE831004D7D08AD6CDCA0B
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2886323C45EE831004D7D08AD6CDCA0B_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoWayBlend_86962D6E49960E1CBC4239AAFBA3DC72
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoWayBlend_86962D6E49960E1CBC4239AAFBA3DC72_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_123AE2864505A02EC8C0D695B85EAE8C
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_123AE2864505A02EC8C0D695B85EAE8C_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C7ADD9AA4835399EC759319DA7FEE62B
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C7ADD9AA4835399EC759319DA7FEE62B_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_07FBB6134C47C3961AE54D9A60BC4E18
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_07FBB6134C47C3961AE54D9A60BC4E18_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_471F2D4C41924473177DBDBB173D9E49
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_471F2D4C41924473177DBDBB173D9E49_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_DBE9A72740D5360FCE6A72AEA3B3EC8C
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_DBE9A72740D5360FCE6A72AEA3B3EC8C_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_CBF7DDAE442C7E44888E5F815C8E2636
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_CBF7DDAE442C7E44888E5F815C8E2636_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_95E3A7024EC28201C1506CBCE5F2DE08
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_95E3A7024EC28201C1506CBCE5F2DE08_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_39C80B7148F5AB78B45B859D440E42D1
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_39C80B7148F5AB78B45B859D440E42D1_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_664C38D44092E74D328789814E6CA4D1
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_664C38D44092E74D328789814E6CA4D1_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_AEE9D0E646BD1E30C807798D80F438C0
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_AEE9D0E646BD1E30C807798D80F438C0_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_F8CF771543F2642B978FC1A452B6E8B2
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_F8CF771543F2642B978FC1A452B6E8B2_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_5C37116044FA30B204698A99780BC2E9
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_5C37116044FA30B204698A99780BC2E9_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_4BA30DE2420C5F21F93BD89F6A83B432
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_4BA30DE2420C5F21F93BD89F6A83B432_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ApplyAdditive_A6B675184D11E6FE475E859ADB675F99
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ApplyAdditive_A6B675184D11E6FE475E859ADB675F99_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_112722904DCEC88E3FCC048E64B9E81D
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_112722904DCEC88E3FCC048E64B9E81D_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_09DA824B4ACDE080EF1EE18C3FE6A9F7
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_09DA824B4ACDE080EF1EE18C3FE6A9F7_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_C7E52DC54B15D5444EA028B4EB68C05D
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_C7E52DC54B15D5444EA028B4EB68C05D_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_B63054E24C8A4E4AB5A09F9D8CA34334
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_B63054E24C8A4E4AB5A09F9D8CA34334_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_3CCB2DB843A1264373864CAC5270D5E4
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_3CCB2DB843A1264373864CAC5270D5E4_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_FC7A7BBB48F17BB4CFF6188405870A60
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_FC7A7BBB48F17BB4CFF6188405870A60_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_4889AD6243B93588034B0282D51B6C3C
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_4889AD6243B93588034B0282D51B6C3C_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_35B8CE8249301BD7C8516C813C7B5349
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_35B8CE8249301BD7C8516C813C7B5349_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_9DF4C4A740BAE235B2B59682932A77D5
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_9DF4C4A740BAE235B2B59682932A77D5_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_E00AAF6F49C082C130AFD1BF2BCD1606
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_E00AAF6F49C082C130AFD1BF2BCD1606_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_75E6C6DE47559F8C6641478A4B46A29A
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_75E6C6DE47559F8C6641478A4B46A29A_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_38DF907744657E762387EAA38F303522
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_38DF907744657E762387EAA38F303522_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_114512154636E958FD612EAB4210EB95
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_114512154636E958FD612EAB4210EB95_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BF58CBB94962D3EF30AC14A619616122
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BF58CBB94962D3EF30AC14A619616122_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_E537F804433E3633878E5DAC96EE5048
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_E537F804433E3633878E5DAC96EE5048_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_D1E6E229416B4F20C868DEA00D62A4DF
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_D1E6E229416B4F20C868DEA00D62A4DF_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoBoneIK_D79315494F361FBFF05FB2A80FB0F4B3
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoBoneIK_D79315494F361FBFF05FB2A80FB0F4B3_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoBoneIK_2D0553954A1915190CB328A3EDF05C01
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TwoBoneIK_2D0553954A1915190CB328A3EDF05C01_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_Replay_63A89FAB4BD456EC01AF948CDC5A00E1
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_Replay_63A89FAB4BD456EC01AF948CDC5A00E1_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_669940F94F1EAEFFF66B19A429B7644A
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_669940F94F1EAEFFF66B19A429B7644A_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LayeredBoneBlend_259DDCC441AA12D9B0E92B9F9FF9E574
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LayeredBoneBlend_259DDCC441AA12D9B0E92B9F9FF9E574_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_4D54480F46755DAB9ECE559F6DA73FDF
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_4D54480F46755DAB9ECE559F6DA73FDF_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C867C2F44077259AC27F9FB0FD9A1692
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C867C2F44077259AC27F9FB0FD9A1692_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_7371D15B4029CD8DB075B8A2F5BCD694
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_7371D15B4029CD8DB075B8A2F5BCD694_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_21ACA13249C1E864A357D48C43E8DA3C
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_21ACA13249C1E864A357D48C43E8DA3C_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_57A3DEEE42F996FEF967678786852B71
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_57A3DEEE42F996FEF967678786852B71_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_0CC1434E47F7E97A7003CD9DAA1A3AB9
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_0CC1434E47F7E97A7003CD9DAA1A3AB9_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_1B9F957145D13D1C8E9ACBBDFE9EAC81
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_1B9F957145D13D1C8E9ACBBDFE9EAC81_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BADE1AD84D5C69AFB867EB94A6BB5CFA
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BADE1AD84D5C69AFB867EB94A6BB5CFA_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_3CE754824958A91D47B079B8EB102C43
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_3CE754824958A91D47B079B8EB102C43_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_1063A3B1405D615BEC6C90969CCDDD3A
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_1063A3B1405D615BEC6C90969CCDDD3A_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_A9B494114E5C4DDA3C155A9B5844C1D8
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_A9B494114E5C4DDA3C155A9B5844C1D8_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C964819E47310AC3A6FC5EB0E5C44863
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C964819E47310AC3A6FC5EB0E5C44863_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2E4C07474CEAE158FC97CF9F8D56A299
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2E4C07474CEAE158FC97CF9F8D56A299_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_227EBB9A4E34FCD69DEACD965DAC5F7C
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_227EBB9A4E34FCD69DEACD965DAC5F7C_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_116B2DB64053B67C898D65B1F847E3E5
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_116B2DB64053B67C898D65B1F847E3E5_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_D55AA8034107D6D49AD659B8C6EB330D
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_D55AA8034107D6D49AD659B8C6EB330D_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_07D2BE3A4F2795241054299D14FD0485
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_07D2BE3A4F2795241054299D14FD0485_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_BBCD4B7F495DF2DBA86A698D58757914
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_BBCD4B7F495DF2DBA86A698D58757914_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_IKinemaFootPlacement_2FDE204B40C07F41C8382A951BB571DF
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_IKinemaFootPlacement_2FDE204B40C07F41C8382A951BB571DF_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_4463EB30461048620C4512BE60A7E45D
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_4463EB30461048620C4512BE60A7E45D_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_4DDA8FA34248E297DF48F59BAD7996B0
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_4DDA8FA34248E297DF48F59BAD7996B0_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_6C7B3E8B4D5CFECC0CB0089536DDD371
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_6C7B3E8B4D5CFECC0CB0089536DDD371_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_A5AF24BF456D73C6309116B1C13FD517
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_A5AF24BF456D73C6309116B1C13FD517_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_71BD406E4A5B7739D786BC97A4376500
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_LookAt_71BD406E4A5B7739D786BC97A4376500_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_85871F1A4969DD8B4A0BB8BF3FCD6ED2
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_85871F1A4969DD8B4A0BB8BF3FCD6ED2_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByEnum_CBB1DCC0486F4C622429A08CD2E069AD
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByEnum_CBB1DCC0486F4C622429A08CD2E069AD_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_5B7D83DA4CB9DCCA6008FBA8AEDFFFB7
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_5B7D83DA4CB9DCCA6008FBA8AEDFFFB7_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BDC197E646A18C5445AEEC8F0F2ABD80
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_BDC197E646A18C5445AEEC8F0F2ABD80_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_F9F6592B4BD0E7E23406EC9594F7D97A
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_F9F6592B4BD0E7E23406EC9594F7D97A_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_0DF794A84F1DB5C118A58D82218B163A
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_0DF794A84F1DB5C118A58D82218B163A_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_B96886374C079B3081A6C7B5CBB6F4A0
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_B96886374C079B3081A6C7B5CBB6F4A0_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_9CB4C2D242C3DC289F6639891E60231C
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_9CB4C2D242C3DC289F6639891E60231C_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotateRootBone_120F96E04F2784A4B7DDB4960FD47BA7
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotateRootBone_120F96E04F2784A4B7DDB4960FD47BA7_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_72FD267C400ADE41C9119395F8A1F9D5
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_72FD267C400ADE41C9119395F8A1F9D5_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetIsClient
struct Uplayer_combat_base_animbp_C_SetIsClient_Params
{
	bool                                               IsClient;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_580F3708481D2A9F816CAC93B65E8A71
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_580F3708481D2A9F816CAC93B65E8A71_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetSecondaryMotion
struct Uplayer_combat_base_animbp_C_SetSecondaryMotion_Params
{
	float                                              SkirtHeavyAlpha;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SkirtLightAlpha;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TabardAdjustAlpha;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetCBladePullAimTarget
struct Uplayer_combat_base_animbp_C_SetCBladePullAimTarget_Params
{
	class UPrimitiveComponent*                         AimTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_08BD7AB04970B8E044834A868CAD0BBB
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_08BD7AB04970B8E044834A868CAD0BBB_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_7C3A80774F29E01CFEF9ECBCAD2AA866
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_7C3A80774F29E01CFEF9ECBCAD2AA866_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_DB97812249C44A82930902A5BD1126F5
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_DB97812249C44A82930902A5BD1126F5_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_F5FD56AE4A8316B95BE6AF9084E1DFA2
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_F5FD56AE4A8316B95BE6AF9084E1DFA2_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_1ED7BF014145406C95B3CD832B70D077
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_1ED7BF014145406C95B3CD832B70D077_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_52CDB28B41512CA38DC405ABCDB757B9
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_52CDB28B41512CA38DC405ABCDB757B9_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_24DFAEB040F7E58A591E659EBB3F6914
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_24DFAEB040F7E58A591E659EBB3F6914_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_EA5739B3467F344A31F350B6D8DAE15A
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_EA5739B3467F344A31F350B6D8DAE15A_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.UpdateCBladePullAttach
struct Uplayer_combat_base_animbp_C_UpdateCBladePullAttach_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetCBladePullAttachTarget
struct Uplayer_combat_base_animbp_C_SetCBladePullAttachTarget_Params
{
	class UPrimitiveComponent*                         AttachTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetCBladeEnablePullAim
struct Uplayer_combat_base_animbp_C_SetCBladeEnablePullAim_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetCBladePullAimRotation
struct Uplayer_combat_base_animbp_C_SetCBladePullAimRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.UpdateIdleToLoco
struct Uplayer_combat_base_animbp_C_UpdateIdleToLoco_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.AnimEnd
struct Uplayer_combat_base_animbp_C_AnimEnd_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.StartAnim
struct Uplayer_combat_base_animbp_C_StartAnim_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_CF00ACB840B644974E787CB0BD8F046B
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_CF00ACB840B644974E787CB0BD8F046B_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_2EDE8E394E490F8CC3E89DB5006D7CD6
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_2EDE8E394E490F8CC3E89DB5006D7CD6_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.UpdateLocoToIdle
struct Uplayer_combat_base_animbp_C_UpdateLocoToIdle_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.StartLocoToIdleAnim
struct Uplayer_combat_base_animbp_C_StartLocoToIdleAnim_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EndLocoToIdleAnim
struct Uplayer_combat_base_animbp_C_EndLocoToIdleAnim_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_66FAEE6A40E4B57469842A9392EB458A
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_66FAEE6A40E4B57469842A9392EB458A_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.SetWeaponOnBack
struct Uplayer_combat_base_animbp_C_SetWeaponOnBack_Params
{
	bool                                               OnBack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EnableAimOffset
struct Uplayer_combat_base_animbp_C_EnableAimOffset_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.UpdateAimOffsetTarget
struct Uplayer_combat_base_animbp_C_UpdateAimOffsetTarget_Params
{
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_80C34F344A992E85C78C05B4474D27D4
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_80C34F344A992E85C78C05B4474D27D4_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.BlueprintUpdateAnimation
struct Uplayer_combat_base_animbp_C_BlueprintUpdateAnimation_Params
{
	float*                                             DeltaTimeX;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C4D2D28046A09AC7B774C3AA99D170FA
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_C4D2D28046A09AC7B774C3AA99D170FA_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.AnimNotify_DecisionStop
struct Uplayer_combat_base_animbp_C_AnimNotify_DecisionStop_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.AnimNotify_ProcessAttackBuffer
struct Uplayer_combat_base_animbp_C_AnimNotify_ProcessAttackBuffer_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.Pause Montage
struct Uplayer_combat_base_animbp_C_Pause_Montage_Params
{
	float                                              Length_of_Pause;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.AnimNotify_Debris_Small_IH
struct Uplayer_combat_base_animbp_C_AnimNotify_Debris_Small_IH_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_57BE843A46A41EFE1E1B7FB8104FE701
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_57BE843A46A41EFE1E1B7FB8104FE701_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_BB715C3741DE1B07083A9E82B25071C2
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendSpacePlayer_BB715C3741DE1B07083A9E82B25071C2_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_84C4882C41250BBB09CDA782C3782CD2
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_84C4882C41250BBB09CDA782C3782CD2_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_F54AF1B4482D0C86EDEA0D89D4339154
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_BlendListByBool_F54AF1B4482D0C86EDEA0D89D4339154_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_2836060F4A74026D6F34BAADD42A41BA
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_2836060F4A74026D6F34BAADD42A41BA_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_16AD03434D519DA2646DEEB9EDD43D76
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_16AD03434D519DA2646DEEB9EDD43D76_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_234CE179416EBDBC1DEE5AA887912371
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_RotationOffsetBlendSpace_234CE179416EBDBC1DEE5AA887912371_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_3D417793439E0D949AD4CEB1CD015F29
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_3D417793439E0D949AD4CEB1CD015F29_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.AnimNotify_start_jump_j
struct Uplayer_combat_base_animbp_C_AnimNotify_start_jump_j_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.AnimNotify_jump_land_end
struct Uplayer_combat_base_animbp_C_AnimNotify_jump_land_end_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_9399F7B84DCE9C029354FBB705C537C4
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_9399F7B84DCE9C029354FBB705C537C4_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_543B44F64FE46CE4A44063AB87848D5A
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_543B44F64FE46CE4A44063AB87848D5A_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_222CC07F4B09E12D1CE3BBB3FD27FD71
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_222CC07F4B09E12D1CE3BBB3FD27FD71_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_77673E7D46524B6A240709ABE2A60403
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_SequenceEvaluator_77673E7D46524B6A240709ABE2A60403_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.OnResetStateGraph
struct Uplayer_combat_base_animbp_C_OnResetStateGraph_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2886323C45EE831004D7D08AD6CDCA0B_1
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2886323C45EE831004D7D08AD6CDCA0B_1_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_A1C993354DCCAB4DAEE17D97D18C4012
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_ModifyBone_A1C993354DCCAB4DAEE17D97D18C4012_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_283C8FC947246F0FF8F898A759DE2A6C
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_283C8FC947246F0FF8F898A759DE2A6C_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2618998243BCFE130E523693E88BAEBD_1
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_2618998243BCFE130E523693E88BAEBD_1_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_B4936566481C91491BF694B3052DF261
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_B4936566481C91491BF694B3052DF261_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_DA1ADC83457FCC85497E10838BD4969C
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_DA1ADC83457FCC85497E10838BD4969C_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_47BD2DBC4CDC223687440EADE8E622B6
struct Uplayer_combat_base_animbp_C_EvaluateGraphExposedInputs_ExecuteUbergraph_player_combat_base_animbp_AnimGraphNode_TransitionResult_47BD2DBC4CDC223687440EADE8E622B6_Params
{
};

// Function player_combat_base_animbp.player_combat_base_animbp_C.ExecuteUbergraph_player_combat_base_animbp
struct Uplayer_combat_base_animbp_C_ExecuteUbergraph_player_combat_base_animbp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
