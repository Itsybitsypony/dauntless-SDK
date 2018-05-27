// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_camera_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_camera.BPI_camera_C.DisableCameraInput
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_camera_C::DisableCameraInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_camera.BPI_camera_C.DisableCameraInput");

	UBPI_camera_C_DisableCameraInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_camera.BPI_camera_C.EnableCameraInput
// (Public, BlueprintCallable, BlueprintEvent)

void UBPI_camera_C::EnableCameraInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_camera.BPI_camera_C.EnableCameraInput");

	UBPI_camera_C_EnableCameraInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPI_camera.BPI_camera_C.ToggleSprintCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           On                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPI_camera_C::ToggleSprintCamera(bool On)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_camera.BPI_camera_C.ToggleSprintCamera");

	UBPI_camera_C_ToggleSprintCamera_Params params;
	params.On = On;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
