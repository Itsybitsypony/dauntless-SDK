// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_MusicSystem_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_MusicSystem.BPI_MusicSystem_C.NotifyIntroCinematicCompleted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_MusicSystem_C::NotifyIntroCinematicCompleted(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MusicSystem.BPI_MusicSystem_C.NotifyIntroCinematicCompleted");

	UBPI_MusicSystem_C_NotifyIntroCinematicCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPI_MusicSystem.BPI_MusicSystem_C.NotifyIntroCinematicStarted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_MusicSystem_C::NotifyIntroCinematicStarted(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MusicSystem.BPI_MusicSystem_C.NotifyIntroCinematicStarted");

	UBPI_MusicSystem_C_NotifyIntroCinematicStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function BPI_MusicSystem.BPI_MusicSystem_C.ToggleDebugMusicSystem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_MusicSystem_C::ToggleDebugMusicSystem(bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_MusicSystem.BPI_MusicSystem_C.ToggleDebugMusicSystem");

	UBPI_MusicSystem_C_ToggleDebugMusicSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
