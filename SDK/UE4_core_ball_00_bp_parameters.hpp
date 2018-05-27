#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_core_ball_00_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function core_ball_00_bp.core_ball_00_bp_C.UserConstructionScript
struct Acore_ball_00_bp_C_UserConstructionScript_Params
{
};

// Function core_ball_00_bp.core_ball_00_bp_C.Timeline_0__FinishedFunc
struct Acore_ball_00_bp_C_Timeline_0__FinishedFunc_Params
{
};

// Function core_ball_00_bp.core_ball_00_bp_C.Timeline_0__UpdateFunc
struct Acore_ball_00_bp_C_Timeline_0__UpdateFunc_Params
{
};

// Function core_ball_00_bp.core_ball_00_bp_C.ReceiveBeginPlay
struct Acore_ball_00_bp_C_ReceiveBeginPlay_Params
{
};

// Function core_ball_00_bp.core_ball_00_bp_C.ReceiveTick
struct Acore_ball_00_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function core_ball_00_bp.core_ball_00_bp_C.UpdateDynamicDecal
struct Acore_ball_00_bp_C_UpdateDynamicDecal_Params
{
	TAssetPtr<class UTexture2D>                        Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function core_ball_00_bp.core_ball_00_bp_C.SetCoreTint
struct Acore_ball_00_bp_C_SetCoreTint_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function core_ball_00_bp.core_ball_00_bp_C.ExecuteUbergraph_core_ball_00_bp
struct Acore_ball_00_bp_C_ExecuteUbergraph_core_ball_00_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
