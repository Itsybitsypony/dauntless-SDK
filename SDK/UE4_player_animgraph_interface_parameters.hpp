#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_animgraph_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_animgraph_interface.player_animgraph_interface_C.SetIsClient
struct Uplayer_animgraph_interface_C_SetIsClient_Params
{
	bool                                               IsClient;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_animgraph_interface.player_animgraph_interface_C.SetSecondaryMotion
struct Uplayer_animgraph_interface_C_SetSecondaryMotion_Params
{
	float                                              SkirtHeavyAlpha;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              SkirtLightAlpha;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              TabardAdjustAlpha;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_animgraph_interface.player_animgraph_interface_C.UpdateAimOffsetTarget
struct Uplayer_animgraph_interface_C_UpdateAimOffsetTarget_Params
{
	struct FVector                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_animgraph_interface.player_animgraph_interface_C.EnableAimOffset
struct Uplayer_animgraph_interface_C_EnableAimOffset_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAimRotation
struct Uplayer_animgraph_interface_C_SetCBladePullAimRotation_Params
{
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAimTarget
struct Uplayer_animgraph_interface_C_SetCBladePullAimTarget_Params
{
	class UPrimitiveComponent*                         AimTarget;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_animgraph_interface.player_animgraph_interface_C.SetCBladeEnablePullAim
struct Uplayer_animgraph_interface_C_SetCBladeEnablePullAim_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAttachTarget
struct Uplayer_animgraph_interface_C_SetCBladePullAttachTarget_Params
{
	class UPrimitiveComponent*                         AttachTarget;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ImpactPoint;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function player_animgraph_interface.player_animgraph_interface_C.SetWeaponOnBack
struct Uplayer_animgraph_interface_C_SetWeaponOnBack_Params
{
	bool                                               OnBack;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
