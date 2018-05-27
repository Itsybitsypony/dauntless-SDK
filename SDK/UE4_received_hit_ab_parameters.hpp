#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_received_hit_ab_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function received_hit_ab.received_hit_ab_C.FlipYawForRootMotion
struct Ureceived_hit_ab_C_FlipYawForRootMotion_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    FlippedRotation;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.GetHitDirection
struct Ureceived_hit_ab_C_GetHitDirection_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FVector                                     HitDirection;                                             // (Parm, OutParm, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.GetModifiedSpaceWarpScale
struct Ureceived_hit_ab_C_GetModifiedSpaceWarpScale_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.GetOptimalityScale
struct Ureceived_hit_ab_C_GetOptimalityScale_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              OptimalityScale;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.GetDirectionalAnimation
struct Ureceived_hit_ab_C_GetDirectionalAnimation_Params
{
	struct Fstagger_montage_data_str                   StaggerStruct;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UAnimMontage*                                Montage;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.GetJumpForceData
struct Ureceived_hit_ab_C_GetJumpForceData_Params
{
	struct FGameplayTagContainer                       TagContainer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              Distance;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Height;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.GetAnimSet
struct Ureceived_hit_ab_C_GetAnimSet_Params
{
	class ABP_PlayerCharacter_C*                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fstagger_animset_str                        StaggerAnimset;                                           // (Parm, OutParm)
};

// Function received_hit_ab.received_hit_ab_C.GetFacingDirection
struct Ureceived_hit_ab_C_GetFacingDirection_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               FaceAttacker;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.SetDirectionFromInputAcceleration?
struct Ureceived_hit_ab_C_SetDirectionFromInputAcceleration__Params
{
	bool                                               Direction_from_Input_Acceleration;                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.ApplyTurnWarp
struct Ureceived_hit_ab_C_ApplyTurnWarp_Params
{
	struct FGameplayEffectContextHandle                Effect_Context;                                           // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function received_hit_ab.received_hit_ab_C.GetHitRotation
struct Ureceived_hit_ab_C_GetHitRotation_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FRotator                                    HitRotation;                                              // (Parm, OutParm, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.TelemetryPlayerDowned
struct Ureceived_hit_ab_C_TelemetryPlayerDowned_Params
{
	class ABP_PlayerCharacter_C*                       Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.HandleDeath
struct Ureceived_hit_ab_C_HandleDeath_Params
{
	struct FGameplayTagContainer                       Tag_Container;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
	class ABP_PlayerCharacter_C*                       BP_PlayerCharacter;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Instigator;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.OnCancelled_12D922E24C5DB599201BD2A8857E2975
struct Ureceived_hit_ab_C_OnCancelled_12D922E24C5DB599201BD2A8857E2975_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnInterrupted_12D922E24C5DB599201BD2A8857E2975
struct Ureceived_hit_ab_C_OnInterrupted_12D922E24C5DB599201BD2A8857E2975_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnBlendOut_12D922E24C5DB599201BD2A8857E2975
struct Ureceived_hit_ab_C_OnBlendOut_12D922E24C5DB599201BD2A8857E2975_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCompleted_12D922E24C5DB599201BD2A8857E2975
struct Ureceived_hit_ab_C_OnCompleted_12D922E24C5DB599201BD2A8857E2975_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCancelled_57424C6941C506B6B611A19406EFFE91
struct Ureceived_hit_ab_C_OnCancelled_57424C6941C506B6B611A19406EFFE91_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnInterrupted_57424C6941C506B6B611A19406EFFE91
struct Ureceived_hit_ab_C_OnInterrupted_57424C6941C506B6B611A19406EFFE91_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnBlendOut_57424C6941C506B6B611A19406EFFE91
struct Ureceived_hit_ab_C_OnBlendOut_57424C6941C506B6B611A19406EFFE91_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCompleted_57424C6941C506B6B611A19406EFFE91
struct Ureceived_hit_ab_C_OnCompleted_57424C6941C506B6B611A19406EFFE91_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCancelled_ACD8760E43E78C95D15D14A1F7011A13
struct Ureceived_hit_ab_C_OnCancelled_ACD8760E43E78C95D15D14A1F7011A13_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnInterrupted_ACD8760E43E78C95D15D14A1F7011A13
struct Ureceived_hit_ab_C_OnInterrupted_ACD8760E43E78C95D15D14A1F7011A13_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnBlendOut_ACD8760E43E78C95D15D14A1F7011A13
struct Ureceived_hit_ab_C_OnBlendOut_ACD8760E43E78C95D15D14A1F7011A13_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCompleted_ACD8760E43E78C95D15D14A1F7011A13
struct Ureceived_hit_ab_C_OnCompleted_ACD8760E43E78C95D15D14A1F7011A13_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnFinish_AD5F50BF46D768C0817B86A10B6997C9
struct Ureceived_hit_ab_C_OnFinish_AD5F50BF46D768C0817B86A10B6997C9_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCancelled_5F7CE90948F82B771F678FBD624230E5
struct Ureceived_hit_ab_C_OnCancelled_5F7CE90948F82B771F678FBD624230E5_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnInterrupted_5F7CE90948F82B771F678FBD624230E5
struct Ureceived_hit_ab_C_OnInterrupted_5F7CE90948F82B771F678FBD624230E5_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnBlendOut_5F7CE90948F82B771F678FBD624230E5
struct Ureceived_hit_ab_C_OnBlendOut_5F7CE90948F82B771F678FBD624230E5_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCompleted_5F7CE90948F82B771F678FBD624230E5
struct Ureceived_hit_ab_C_OnCompleted_5F7CE90948F82B771F678FBD624230E5_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCancelled_0F2506B14E69B2FB2E7E4AA91854A3C1
struct Ureceived_hit_ab_C_OnCancelled_0F2506B14E69B2FB2E7E4AA91854A3C1_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnInterrupted_0F2506B14E69B2FB2E7E4AA91854A3C1
struct Ureceived_hit_ab_C_OnInterrupted_0F2506B14E69B2FB2E7E4AA91854A3C1_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnBlendOut_0F2506B14E69B2FB2E7E4AA91854A3C1
struct Ureceived_hit_ab_C_OnBlendOut_0F2506B14E69B2FB2E7E4AA91854A3C1_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCompleted_0F2506B14E69B2FB2E7E4AA91854A3C1
struct Ureceived_hit_ab_C_OnCompleted_0F2506B14E69B2FB2E7E4AA91854A3C1_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCancelled_B2D861ED403B854C973AEE9D44329AC0
struct Ureceived_hit_ab_C_OnCancelled_B2D861ED403B854C973AEE9D44329AC0_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnInterrupted_B2D861ED403B854C973AEE9D44329AC0
struct Ureceived_hit_ab_C_OnInterrupted_B2D861ED403B854C973AEE9D44329AC0_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnBlendOut_B2D861ED403B854C973AEE9D44329AC0
struct Ureceived_hit_ab_C_OnBlendOut_B2D861ED403B854C973AEE9D44329AC0_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCompleted_B2D861ED403B854C973AEE9D44329AC0
struct Ureceived_hit_ab_C_OnCompleted_B2D861ED403B854C973AEE9D44329AC0_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCancelled_E7B9F52841F57CB77BB22C83EA22344B
struct Ureceived_hit_ab_C_OnCancelled_E7B9F52841F57CB77BB22C83EA22344B_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnInterrupted_E7B9F52841F57CB77BB22C83EA22344B
struct Ureceived_hit_ab_C_OnInterrupted_E7B9F52841F57CB77BB22C83EA22344B_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnBlendOut_E7B9F52841F57CB77BB22C83EA22344B
struct Ureceived_hit_ab_C_OnBlendOut_E7B9F52841F57CB77BB22C83EA22344B_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnCompleted_E7B9F52841F57CB77BB22C83EA22344B
struct Ureceived_hit_ab_C_OnCompleted_E7B9F52841F57CB77BB22C83EA22344B_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnChange_1D47339647CBBA83521CB28A0634E11F
struct Ureceived_hit_ab_C_OnChange_1D47339647CBBA83521CB28A0634E11F_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.OnChange_21C583704649DB7E31C853A07150F629
struct Ureceived_hit_ab_C_OnChange_21C583704649DB7E31C853A07150F629_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.OnFinish_B62FAF974BBA6569828EFAB0A0C8F0BA
struct Ureceived_hit_ab_C_OnFinish_B62FAF974BBA6569828EFAB0A0C8F0BA_Params
{
};

// Function received_hit_ab.received_hit_ab_C.OnChange_9D7338F8437FF3ABDA0235BA8A4DBEA0
struct Ureceived_hit_ab_C_OnChange_9D7338F8437FF3ABDA0235BA8A4DBEA0_Params
{
	TEnumAsByte<EMovementMode>                         NewMovementMode;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function received_hit_ab.received_hit_ab_C.EventReceived_A2F2479E4E0B4EA6483AC9B3E4C8A33C
struct Ureceived_hit_ab_C_EventReceived_A2F2479E4E0B4EA6483AC9B3E4C8A33C_Params
{
	struct FGameplayEventData                          Payload;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function received_hit_ab.received_hit_ab_C.OnFinish_3AECE750475E4A3DF74836BFB5825EBA
struct Ureceived_hit_ab_C_OnFinish_3AECE750475E4A3DF74836BFB5825EBA_Params
{
};

// Function received_hit_ab.received_hit_ab_C.K2_ActivateAbilityFromEvent
struct Ureceived_hit_ab_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function received_hit_ab.received_hit_ab_C.K2_OnEndAbility
struct Ureceived_hit_ab_C_K2_OnEndAbility_Params
{
};

// Function received_hit_ab.received_hit_ab_C.ExecuteUbergraph_received_hit_ab
struct Ureceived_hit_ab_C_ExecuteUbergraph_received_hit_ab_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
