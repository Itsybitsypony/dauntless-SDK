#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CinematicPlayerInterface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CinematicPlayerInterface.CinematicPlayerInterface_C.SetCinematicMaterials
struct UCinematicPlayerInterface_C_SetCinematicMaterials_Params
{
};

// Function CinematicPlayerInterface.CinematicPlayerInterface_C.SetClientCinematicState
struct UCinematicPlayerInterface_C_SetClientCinematicState_Params
{
	TEnumAsByte<ECinematicPlayerState>                 CinematicState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
