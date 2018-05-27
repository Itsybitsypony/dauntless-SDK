#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Core_8plug_00_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Core_8plug_00_bp.Core_8plug_00_bp_C.UserConstructionScript
struct ACore_8plug_00_bp_C_UserConstructionScript_Params
{
};

// Function Core_8plug_00_bp.Core_8plug_00_bp_C.Timeline_0__FinishedFunc
struct ACore_8plug_00_bp_C_Timeline_0__FinishedFunc_Params
{
};

// Function Core_8plug_00_bp.Core_8plug_00_bp_C.Timeline_0__UpdateFunc
struct ACore_8plug_00_bp_C_Timeline_0__UpdateFunc_Params
{
};

// Function Core_8plug_00_bp.Core_8plug_00_bp_C.ReceiveTick
struct ACore_8plug_00_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Core_8plug_00_bp.Core_8plug_00_bp_C.UpdateDynamicDecal
struct ACore_8plug_00_bp_C_UpdateDynamicDecal_Params
{
	TAssetPtr<class UTexture2D>                        Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Core_8plug_00_bp.Core_8plug_00_bp_C.ReceiveBeginPlay
struct ACore_8plug_00_bp_C_ReceiveBeginPlay_Params
{
};

// Function Core_8plug_00_bp.Core_8plug_00_bp_C.SetCoreTint
struct ACore_8plug_00_bp_C_SetCoreTint_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Core_8plug_00_bp.Core_8plug_00_bp_C.ExecuteUbergraph_Core_8plug_00_bp
struct ACore_8plug_00_bp_C_ExecuteUbergraph_Core_8plug_00_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
