// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_gamemode_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpi_gamemode.bpi_gamemode_C.GetMusicSystem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_MusicSystem_C> MusicSystem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamemode_C::GetMusicSystem(TScriptInterface<class UBPI_MusicSystem_C>* MusicSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamemode.bpi_gamemode_C.GetMusicSystem");

	Ubpi_gamemode_C_GetMusicSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MusicSystem != nullptr)
		*MusicSystem = params.MusicSystem;
}


// Function bpi_gamemode.bpi_gamemode_C.GetCurrentSpawnedBehemoths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> CurrentSpawnedBehemoths        (Parm, OutParm, ZeroConstructor)

void Ubpi_gamemode_C::GetCurrentSpawnedBehemoths(TArray<class AArchonBehemoth*>* CurrentSpawnedBehemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamemode.bpi_gamemode_C.GetCurrentSpawnedBehemoths");

	Ubpi_gamemode_C_GetCurrentSpawnedBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSpawnedBehemoths != nullptr)
		*CurrentSpawnedBehemoths = params.CurrentSpawnedBehemoths;
}


// Function bpi_gamemode.bpi_gamemode_C.IsIntroCinematicEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamemode_C::IsIntroCinematicEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamemode.bpi_gamemode_C.IsIntroCinematicEnabled");

	Ubpi_gamemode_C_IsIntroCinematicEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function bpi_gamemode.bpi_gamemode_C.MoveCharactersToArrival
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpi_gamemode_C::MoveCharactersToArrival()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamemode.bpi_gamemode_C.MoveCharactersToArrival");

	Ubpi_gamemode_C_MoveCharactersToArrival_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamemode.bpi_gamemode_C.TriggerEndOfHuntSequence
// (Public, BlueprintCallable, BlueprintEvent)

void Ubpi_gamemode_C::TriggerEndOfHuntSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamemode.bpi_gamemode_C.TriggerEndOfHuntSequence");

	Ubpi_gamemode_C_TriggerEndOfHuntSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamemode.bpi_gamemode_C.TriggerIntroCinematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamemode_C::TriggerIntroCinematic(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamemode.bpi_gamemode_C.TriggerIntroCinematic");

	Ubpi_gamemode_C_TriggerIntroCinematic_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_gamemode.bpi_gamemode_C.DidSetupIntroCinematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubpi_gamemode_C::DidSetupIntroCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamemode.bpi_gamemode_C.DidSetupIntroCinematic");

	Ubpi_gamemode_C_DidSetupIntroCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpi_gamemode.bpi_gamemode_C.GetGameModeType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Egame_mode_type>   GameModeType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_gamemode_C::GetGameModeType(TEnumAsByte<Egame_mode_type>* GameModeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_gamemode.bpi_gamemode_C.GetGameModeType");

	Ubpi_gamemode_C_GetGameModeType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameModeType != nullptr)
		*GameModeType = params.GameModeType;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
