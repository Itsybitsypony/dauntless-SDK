#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debris_event_bpn_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function debris_event_bpn.debris_event_bpn_C.GetDebrisData
struct Udebris_event_bpn_C_GetDebrisData_Params
{
	TEnumAsByte<EPhysicalSurface>                      SurfaceType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fdebris_vfx_struct                          FoundVFX;                                                 // (Parm, OutParm)
	bool                                               HasFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FName                                       SurfaceName;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function debris_event_bpn.debris_event_bpn_C.Received_Notify
struct Udebris_event_bpn_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
