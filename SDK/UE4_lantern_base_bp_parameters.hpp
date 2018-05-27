#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function lantern_base_bp.lantern_base_bp_C.GetCurrentSecondaryChargeInterface
struct Alantern_base_bp_C_GetCurrentSecondaryChargeInterface_Params
{
	float                                              CurrentSecondaryCharge;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetSingleChargeCostInterface
struct Alantern_base_bp_C_GetSingleChargeCostInterface_Params
{
	float                                              SingleChargeCost;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetMaximumChargeInterface
struct Alantern_base_bp_C_GetMaximumChargeInterface_Params
{
	float                                              MaximumCharge;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetPrimaryChargePercentInterface
struct Alantern_base_bp_C_GetPrimaryChargePercentInterface_Params
{
	float                                              ChargePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetLanternMesh
struct Alantern_base_bp_C_GetLanternMesh_Params
{
	class USkeletalMeshComponent*                      Mesh;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDischargeEndedSound
struct Alantern_base_bp_C_GetDischargeEndedSound_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopEndSound
struct Alantern_base_bp_C_GetDischargeLoopEndSound_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDischargeEndedEffect
struct Alantern_base_bp_C_GetDischargeEndedEffect_Params
{
	class UParticleSystem*                             Effect;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopStartSound
struct Alantern_base_bp_C_GetDischargeLoopStartSound_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDischargeVO
struct Alantern_base_bp_C_GetDischargeVO_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDischargeStartedSound
struct Alantern_base_bp_C_GetDischargeStartedSound_Params
{
	class UAkAudioEventBase*                           Sound;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDischargeLoopStartEffect
struct Alantern_base_bp_C_GetDischargeLoopStartEffect_Params
{
	class UParticleSystem*                             Effect;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDischargeStartedEffect
struct Alantern_base_bp_C_GetDischargeStartedEffect_Params
{
	class UParticleSystem*                             Effect;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDefaultPrimaryDye
struct Alantern_base_bp_C_GetDefaultPrimaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetDefaultSecondaryDye
struct Alantern_base_bp_C_GetDefaultSecondaryDye_Params
{
	struct FName                                       DyeRowName;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetPresentationInfo
struct Alantern_base_bp_C_GetPresentationInfo_Params
{
	EArchonBodyType                                    BodyType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class USkeletalMesh>                     SkeletalMesh;                                             // (Parm, OutParm)
	struct FVector                                     DisplayOffset;                                            // (Parm, OutParm, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.OutputDebugInformation
struct Alantern_base_bp_C_OutputDebugInformation_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.HasFinishedLoading
struct Alantern_base_bp_C_HasFinishedLoading_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetSecondaryChargeCount
struct Alantern_base_bp_C_GetSecondaryChargeCount_Params
{
	int                                                ChargePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetSecondaryChargePercent
struct Alantern_base_bp_C_GetSecondaryChargePercent_Params
{
	float                                              ChargePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.ResetChargeRate
struct Alantern_base_bp_C_ResetChargeRate_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.InstantDischargeSecondary
struct Alantern_base_bp_C_InstantDischargeSecondary_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.InstantDischargePrimary
struct Alantern_base_bp_C_InstantDischargePrimary_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.LookupSetItemTableRow
struct Alantern_base_bp_C_LookupSetItemTableRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FArmourSetItemResistanceTableData           OutResistanceTableRow;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.LookupLanternResistanceTableRow
struct Alantern_base_bp_C_LookupLanternResistanceTableRow_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	struct FLanternResistanceTableData                 OutResistanceTableRow;                                    // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetLanternSkelMeshPtr
struct Alantern_base_bp_C_GetLanternSkelMeshPtr_Params
{
	TAssetPtr<class USkeletalMesh>                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function lantern_base_bp.lantern_base_bp_C.SetTierAttributes
struct Alantern_base_bp_C_SetTierAttributes_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.GetIsDischarging
struct Alantern_base_bp_C_GetIsDischarging_Params
{
	bool                                               IsDischarging;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.OnDamageGiven
struct Alantern_base_bp_C_OnDamageGiven_Params
{
	class AActor*                                      DamageTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.StartDischarge
struct Alantern_base_bp_C_StartDischarge_Params
{
	float                                              DischargeDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.GetPrimaryChargePercent
struct Alantern_base_bp_C_GetPrimaryChargePercent_Params
{
	float                                              ChargePercent;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.AddCharge
struct Alantern_base_bp_C_AddCharge_Params
{
	float                                              Charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.UserConstructionScript
struct Alantern_base_bp_C_UserConstructionScript_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.lerp_timeline__FinishedFunc
struct Alantern_base_bp_C_lerp_timeline__FinishedFunc_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.lerp_timeline__UpdateFunc
struct Alantern_base_bp_C_lerp_timeline__UpdateFunc_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.OnLoaded_748850AA43EDFF2A6D33BD85E51AB6E5
struct Alantern_base_bp_C_OnLoaded_748850AA43EDFF2A6D33BD85E51AB6E5_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.RegisterToModifyAddCharge
struct Alantern_base_bp_C_RegisterToModifyAddCharge_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.ReceiveBeginPlay
struct Alantern_base_bp_C_ReceiveBeginPlay_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.Flicker Light
struct Alantern_base_bp_C_Flicker_Light_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.BP_OnLanternEquipped
struct Alantern_base_bp_C_BP_OnLanternEquipped_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.BP_OnLanternUnEquipped
struct Alantern_base_bp_C_BP_OnLanternUnEquipped_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.Event OnFullyCharged
struct Alantern_base_bp_C_Event_OnFullyCharged_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.Event OnDischargeEnded
struct Alantern_base_bp_C_Event_OnDischargeEnded_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.ReceiveTick
struct Alantern_base_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.Event OnChargeAdded
struct Alantern_base_bp_C_Event_OnChargeAdded_Params
{
	float                                              ChargeAdded;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.ReceiveGameplayStart
struct Alantern_base_bp_C_ReceiveGameplayStart_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.Check For Transmog
struct Alantern_base_bp_C_Check_For_Transmog_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.ReEquip
struct Alantern_base_bp_C_ReEquip_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.StopDischarge
struct Alantern_base_bp_C_StopDischarge_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.OnOwnerHiddenInGame
struct Alantern_base_bp_C_OnOwnerHiddenInGame_Params
{
	bool                                               bNewHidden;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.AddChargeInterface
struct Alantern_base_bp_C_AddChargeInterface_Params
{
	float                                              Charge;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.StartDischargeInterface
struct Alantern_base_bp_C_StartDischargeInterface_Params
{
	float                                              DischargeDuration;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.InstantDischargeSecondaryInterface
struct Alantern_base_bp_C_InstantDischargeSecondaryInterface_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.InstantDischargePrimaryInterface
struct Alantern_base_bp_C_InstantDischargePrimaryInterface_Params
{
};

// Function lantern_base_bp.lantern_base_bp_C.ExecuteUbergraph_lantern_base_bp
struct Alantern_base_bp_C_ExecuteUbergraph_lantern_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function lantern_base_bp.lantern_base_bp_C.OnAddLanternChargeModifyHook__DelegateSignature
struct Alantern_base_bp_C_OnAddLanternChargeModifyHook__DelegateSignature_Params
{
	bool                                               NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
