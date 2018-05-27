#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_player_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cine_player_bp.cine_player_bp_C.HideSkinUnderArmor
struct Acine_player_bp_C_HideSkinUnderArmor_Params
{
	TArray<class UMaterialInstanceDynamic*>            SkinDynamicMats;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UTexture2D*                                  CutMask;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArmorType                                         ArmourType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Aarmour_part_base_bp_C*                      ArmourPart;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               SkinMesh;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function cine_player_bp.cine_player_bp_C.UpdateChains
struct Acine_player_bp_C_UpdateChains_Params
{
	class USplineComponent*                            Spline;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class USplineMeshComponent*>                SplineCOmponenentArray;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function cine_player_bp.cine_player_bp_C.UserConstructionScript
struct Acine_player_bp_C_UserConstructionScript_Params
{
};

// Function cine_player_bp.cine_player_bp_C.phys_blend_timeline__FinishedFunc
struct Acine_player_bp_C_phys_blend_timeline__FinishedFunc_Params
{
};

// Function cine_player_bp.cine_player_bp_C.phys_blend_timeline__UpdateFunc
struct Acine_player_bp_C_phys_blend_timeline__UpdateFunc_Params
{
};

// Function cine_player_bp.cine_player_bp_C.OnCinematicStart
struct Acine_player_bp_C_OnCinematicStart_Params
{
};

// Function cine_player_bp.cine_player_bp_C.OnCinematicEnd
struct Acine_player_bp_C_OnCinematicEnd_Params
{
};

// Function cine_player_bp.cine_player_bp_C.ReInitPhysics_blend
struct Acine_player_bp_C_ReInitPhysics_blend_Params
{
};

// Function cine_player_bp.cine_player_bp_C.DisableDynamics_blend
struct Acine_player_bp_C_DisableDynamics_blend_Params
{
};

// Function cine_player_bp.cine_player_bp_C.ReinitPhysics_tempered_blend
struct Acine_player_bp_C_ReinitPhysics_tempered_blend_Params
{
};

// Function cine_player_bp.cine_player_bp_C.Disable_Bangs
struct Acine_player_bp_C_Disable_Bangs_Params
{
};

// Function cine_player_bp.cine_player_bp_C.ReceiveBeginPlay
struct Acine_player_bp_C_ReceiveBeginPlay_Params
{
};

// Function cine_player_bp.cine_player_bp_C.ReceiveTick
struct Acine_player_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cine_player_bp.cine_player_bp_C.Set Morph Target
struct Acine_player_bp_C_Set_Morph_Target_Params
{
};

// Function cine_player_bp.cine_player_bp_C.ReInitPhysics
struct Acine_player_bp_C_ReInitPhysics_Params
{
};

// Function cine_player_bp.cine_player_bp_C.DisableDynamics
struct Acine_player_bp_C_DisableDynamics_Params
{
};

// Function cine_player_bp.cine_player_bp_C.ExecuteUbergraph_cine_player_bp
struct Acine_player_bp_C_ExecuteUbergraph_cine_player_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
