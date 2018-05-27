#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_MusicSystem_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_MusicSystem.BPI_MusicSystem_C.NotifyIntroCinematicCompleted
struct UBPI_MusicSystem_C_NotifyIntroCinematicCompleted_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_MusicSystem.BPI_MusicSystem_C.NotifyIntroCinematicStarted
struct UBPI_MusicSystem_C_NotifyIntroCinematicStarted_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_MusicSystem.BPI_MusicSystem_C.ToggleDebugMusicSystem
struct UBPI_MusicSystem_C_ToggleDebugMusicSystem_Params
{
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
