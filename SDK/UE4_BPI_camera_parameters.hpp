#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_camera_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_camera.BPI_camera_C.DisableCameraInput
struct UBPI_camera_C_DisableCameraInput_Params
{
};

// Function BPI_camera.BPI_camera_C.EnableCameraInput
struct UBPI_camera_C_EnableCameraInput_Params
{
};

// Function BPI_camera.BPI_camera_C.ToggleSprintCamera
struct UBPI_camera_C_ToggleSprintCamera_Params
{
	bool                                               On;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
