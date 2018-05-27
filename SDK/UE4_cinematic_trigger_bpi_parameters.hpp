#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cinematic_trigger_bpi_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.SwapCineMatsOut
struct Ucinematic_trigger_bpi_C_SwapCineMatsOut_Params
{
	class AArchonCharacter*                            Player_Char;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.ToggleShowSequenceTime
struct Ucinematic_trigger_bpi_C_ToggleShowSequenceTime_Params
{
};

// Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.BlendCameraOut
struct Ucinematic_trigger_bpi_C_BlendCameraOut_Params
{
	float                                              BlendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.SkipCinematic
struct Ucinematic_trigger_bpi_C_SkipCinematic_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
