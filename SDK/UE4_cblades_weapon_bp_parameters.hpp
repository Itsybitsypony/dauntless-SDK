#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_weapon_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cblades_weapon_bp.cblades_weapon_bp_C.GetMeterTunables
struct Acblades_weapon_bp_C_GetMeterTunables_Params
{
	struct Fcblades_tunables_str                       Tunables;                                                 // (Parm, OutParm)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.CanExecuteComboTransition
struct Acblades_weapon_bp_C_CanExecuteComboTransition_Params
{
	struct FComboInputBuffer                           ComboInputBuffer;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.GetPushAimTarget
struct Acblades_weapon_bp_C_GetPushAimTarget_Params
{
	class UPrimitiveComponent*                         Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.GetPullAimTarget
struct Acblades_weapon_bp_C_GetPullAimTarget_Params
{
	float                                              TraceTestAngle;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceLength;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TraceRadius;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EDrawDebugTrace>                       DebugDrawMode;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         Target;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.UpdateSpline
struct Acblades_weapon_bp_C_UpdateSpline_Params
{
	class USplineComponent*                            Spline;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineComponentArray;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.DEPRECIATED_SpecialAbilityAim
struct Acblades_weapon_bp_C_DEPRECIATED_SpecialAbilityAim_Params
{
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.RotatePlayerToTarget
struct Acblades_weapon_bp_C_RotatePlayerToTarget_Params
{
	class USceneComponent*                             TargetComponent;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.GetBestCameraTarget
struct Acblades_weapon_bp_C_GetBestCameraTarget_Params
{
	TArray<struct FHitResult>                          Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UCameraComponent*                            Camera;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Player;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         TargetComponent;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.UserConstructionScript
struct Acblades_weapon_bp_C_UserConstructionScript_Params
{
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.CBlade_Push
struct Acblades_weapon_bp_C_CBlade_Push_Params
{
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.CBlade_Pull_Aim
struct Acblades_weapon_bp_C_CBlade_Pull_Aim_Params
{
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.Server_PullProjectile
struct Acblades_weapon_bp_C_Server_PullProjectile_Params
{
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.CallWeaponSpecificFunction
struct Acblades_weapon_bp_C_CallWeaponSpecificFunction_Params
{
	struct FName*                                      Function_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.PullLaunchStarted
struct Acblades_weapon_bp_C_PullLaunchStarted_Params
{
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.DebugMulticastDrawSphere
struct Acblades_weapon_bp_C_DebugMulticastDrawSphere_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Duration;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Thickness;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.ReceiveTick
struct Acblades_weapon_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.GameplayCue.Combat.OnDamageGiven
struct Acblades_weapon_bp_C_GameplayCue_Combat_OnDamageGiven_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.K2_OnEquip
struct Acblades_weapon_bp_C_K2_OnEquip_Params
{
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.Cheat Charge Weapon
struct Acblades_weapon_bp_C_Cheat_Charge_Weapon_Params
{
};

// Function cblades_weapon_bp.cblades_weapon_bp_C.ExecuteUbergraph_cblades_weapon_bp
struct Acblades_weapon_bp_C_ExecuteUbergraph_cblades_weapon_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
