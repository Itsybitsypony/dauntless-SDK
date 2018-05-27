#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Core_3plug_00_bp1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.UserConstructionScript
struct ACore_3plug_00_bp1_C_UserConstructionScript_Params
{
};

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.Timeline_0__FinishedFunc
struct ACore_3plug_00_bp1_C_Timeline_0__FinishedFunc_Params
{
};

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.Timeline_0__UpdateFunc
struct ACore_3plug_00_bp1_C_Timeline_0__UpdateFunc_Params
{
};

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ReceiveTick
struct ACore_3plug_00_bp1_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.UpdateDynamicDecal
struct ACore_3plug_00_bp1_C_UpdateDynamicDecal_Params
{
	TAssetPtr<class UTexture2D>                        Texture2D;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ReceiveBeginPlay
struct ACore_3plug_00_bp1_C_ReceiveBeginPlay_Params
{
};

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.SetCoreTint
struct ACore_3plug_00_bp1_C_SetCoreTint_Params
{
	struct FLinearColor                                Value;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ExecuteUbergraph_Core_3plug_00_bp1
struct ACore_3plug_00_bp1_C_ExecuteUbergraph_Core_3plug_00_bp1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
