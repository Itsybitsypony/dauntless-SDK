// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cinematic_trigger_bpi_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.SwapCineMatsOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Player_Char                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucinematic_trigger_bpi_C::SwapCineMatsOut(class AArchonCharacter* Player_Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.SwapCineMatsOut");

	Ucinematic_trigger_bpi_C_SwapCineMatsOut_Params params;
	params.Player_Char = Player_Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.ToggleShowSequenceTime
// (Public, BlueprintCallable, BlueprintEvent)

void Ucinematic_trigger_bpi_C::ToggleShowSequenceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.ToggleShowSequenceTime");

	Ucinematic_trigger_bpi_C_ToggleShowSequenceTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.BlendCameraOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucinematic_trigger_bpi_C::BlendCameraOut(float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.BlendCameraOut");

	Ucinematic_trigger_bpi_C_BlendCameraOut_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.SkipCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void Ucinematic_trigger_bpi_C::SkipCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function cinematic_trigger_bpi.cinematic_trigger_bpi_C.SkipCinematic");

	Ucinematic_trigger_bpi_C_SkipCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
