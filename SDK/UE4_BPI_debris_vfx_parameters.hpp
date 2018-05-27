#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_debris_vfx_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_debris_vfx.BPI_debris_vfx_C.DestroyDebrisState
struct UBPI_debris_vfx_C_DestroyDebrisState_Params
{
	class UObject*                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              LifeTime;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_debris_vfx.BPI_debris_vfx_C.AddDebrisState
struct UBPI_debris_vfx_C_AddDebrisState_Params
{
	class UAnimNotifyState*                            CallerEvent;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fvfx_state_id_struct                        StateId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function BPI_debris_vfx.BPI_debris_vfx_C.UpdateDebrisState
struct UBPI_debris_vfx_C_UpdateDebrisState_Params
{
	struct FVector                                     Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
