#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_morph_target_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function morph_target_interface.morph_target_interface_C.GetMorphTargetDriver
struct Umorph_target_interface_C_GetMorphTargetDriver_Params
{
	class USkeletalMeshComponent*                      MorphTargetOwner;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      AnimInstanceOwner;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
