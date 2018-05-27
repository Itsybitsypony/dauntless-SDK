#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_aggro_bpc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetTargets
struct Ubehemoth_aggro_bpc_C_GetTargets_Params
{
	TEnumAsByte<Etarget_access_requirement>            AccessibilityRequirement;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct Ftarget_data>                        MatchingTargetDatas;                                      // (Parm, OutParm, ZeroConstructor)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetAccessibilityTypeFromBools
struct Ubehemoth_aggro_bpc_C_GetAccessibilityTypeFromBools_Params
{
	bool                                               IsAccessible;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsVisible;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Etarget_access_requirement>            AccesibilityType;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetTargetAccessibilityAndVisibility
struct Ubehemoth_aggro_bpc_C_GetTargetAccessibilityAndVisibility_Params
{
	int                                                TargetIndex;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Accessible;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTimestampAccessible
struct Ubehemoth_aggro_bpc_C_IsTimestampAccessible_Params
{
	float                                              Timestamp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsAccessible;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTimestampVisible
struct Ubehemoth_aggro_bpc_C_IsTimestampVisible_Params
{
	float                                              LastSeenTimestamp;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryPickNewTarget
struct Ubehemoth_aggro_bpc_C_TryPickNewTarget_Params
{
	bool                                               ChangedTarget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                TargetIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.UpdateAfterTargetDataChange
struct Ubehemoth_aggro_bpc_C_UpdateAfterTargetDataChange_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsTargetValid
struct Ubehemoth_aggro_bpc_C_IsTargetValid_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Etarget_access_requirement>            Requirement;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               TargetIsValid;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetOrAddTargetData
struct Ubehemoth_aggro_bpc_C_GetOrAddTargetData_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               RefreshCachedData;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Ftarget_data                                TargetData;                                               // (Parm, OutParm)
	int                                                DataIndex;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetIndexOfTarget
struct Ubehemoth_aggro_bpc_C_GetIndexOfTarget_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.BehemothTookDamage
struct Ubehemoth_aggro_bpc_C_BehemothTookDamage_Params
{
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CalculateAccessiblity
struct Ubehemoth_aggro_bpc_C_CalculateAccessiblity_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Ftarget_data                                TargetData;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<Etarget_accessibility_type>            TargetIsAccessible;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               PathExists;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PathCostIfPathExists;                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IsAbleToBuildFrustration
struct Ubehemoth_aggro_bpc_C_IsAbleToBuildFrustration_Params
{
	bool                                               AbleToBuildFrustration;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ResetFrustration
struct Ubehemoth_aggro_bpc_C_ResetFrustration_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.DecreaseFrustration
struct Ubehemoth_aggro_bpc_C_DecreaseFrustration_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OverridePause;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.GetIndexOfTrackedFrustration
struct Ubehemoth_aggro_bpc_C_GetIndexOfTrackedFrustration_Params
{
	TEnumAsByte<Ebehemoth_frustration_reason>          Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.IncreaseFrustration
struct Ubehemoth_aggro_bpc_C_IncreaseFrustration_Params
{
	float                                              Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_frustration_reason>          Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ValidateComponent
struct Ubehemoth_aggro_bpc_C_ValidateComponent_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ReceiveBeginPlay
struct Ubehemoth_aggro_bpc_C_ReceiveBeginPlay_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CheckDistanceFrustration
struct Ubehemoth_aggro_bpc_C_CheckDistanceFrustration_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryDelayDegen
struct Ubehemoth_aggro_bpc_C_TryDelayDegen_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.Stub
struct Ubehemoth_aggro_bpc_C_Stub_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TryDegenFrustration
struct Ubehemoth_aggro_bpc_C_TryDegenFrustration_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ReceiveTick
struct Ubehemoth_aggro_bpc_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.CalculatePathCosts
struct Ubehemoth_aggro_bpc_C_CalculatePathCosts_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.RefreshAndScoreTargets
struct Ubehemoth_aggro_bpc_C_RefreshAndScoreTargets_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.OnQueryFinishedEvent_Event_1
struct Ubehemoth_aggro_bpc_C_OnQueryFinishedEvent_Event_1_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.RefreshTargetVisibility
struct Ubehemoth_aggro_bpc_C_RefreshTargetVisibility_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.OnTargetDestroyed
struct Ubehemoth_aggro_bpc_C_OnTargetDestroyed_Params
{
	class AActor*                                      Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.ExecuteUbergraph_behemoth_aggro_bpc
struct Ubehemoth_aggro_bpc_C_ExecuteUbergraph_behemoth_aggro_bpc_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TookDamage__DelegateSignature
struct Ubehemoth_aggro_bpc_C_TookDamage__DelegateSignature_Params
{
	float                                              DamageAmount;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.TargetChanged__DelegateSignature
struct Ubehemoth_aggro_bpc_C_TargetChanged__DelegateSignature_Params
{
	int                                                OldTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                NewTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.EndedFrustration__DelegateSignature
struct Ubehemoth_aggro_bpc_C_EndedFrustration__DelegateSignature_Params
{
};

// Function behemoth_aggro_bpc.behemoth_aggro_bpc_C.StartedFrustration__DelegateSignature
struct Ubehemoth_aggro_bpc_C_StartedFrustration__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
