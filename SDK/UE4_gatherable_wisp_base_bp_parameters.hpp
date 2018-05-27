#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_wisp_base_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.UserConstructionScript
struct Agatherable_wisp_base_bp_C_UserConstructionScript_Params
{
};

// Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.OnPickupPayload
struct Agatherable_wisp_base_bp_C_OnPickupPayload_Params
{
	class AArchonCharacter**                           PlayerPickingUp;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function gatherable_wisp_base_bp.gatherable_wisp_base_bp_C.ExecuteUbergraph_gatherable_wisp_base_bp
struct Agatherable_wisp_base_bp_C_ExecuteUbergraph_gatherable_wisp_base_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
