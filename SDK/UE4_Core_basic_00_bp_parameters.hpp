#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Core_basic_00_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Core_basic_00_bp.Core_basic_00_bp_C.UserConstructionScript
struct ACore_basic_00_bp_C_UserConstructionScript_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.SettleTime__FinishedFunc
struct ACore_basic_00_bp_C_SettleTime__FinishedFunc_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.SettleTime__UpdateFunc
struct ACore_basic_00_bp_C_SettleTime__UpdateFunc_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.UpdateSpeedWobble_ReduceSlow
struct ACore_basic_00_bp_C_UpdateSpeedWobble_ReduceSlow_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.UpdateSpeedWobble_Mid
struct ACore_basic_00_bp_C_UpdateSpeedWobble_Mid_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.UpdateSpeedWobble_None
struct ACore_basic_00_bp_C_UpdateSpeedWobble_None_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.Reset_NoWobble
struct ACore_basic_00_bp_C_Reset_NoWobble_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.Reset_Mid
struct ACore_basic_00_bp_C_Reset_Mid_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.ReceiveTick
struct ACore_basic_00_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.ReceiveBeginPlay
struct ACore_basic_00_bp_C_ReceiveBeginPlay_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.UpdateWobble_AddSlow
struct ACore_basic_00_bp_C_UpdateWobble_AddSlow_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.Add Text Decal
struct ACore_basic_00_bp_C_Add_Text_Decal_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.RemoveDecals
struct ACore_basic_00_bp_C_RemoveDecals_Params
{
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.UpdateDynamicDecal
struct ACore_basic_00_bp_C_UpdateDynamicDecal_Params
{
	TAssetPtr<class UTexture2D>                        Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.SetCoreTint
struct ACore_basic_00_bp_C_SetCoreTint_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Core_basic_00_bp.Core_basic_00_bp_C.ExecuteUbergraph_Core_basic_00_bp
struct ACore_basic_00_bp_C_ExecuteUbergraph_Core_basic_00_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
