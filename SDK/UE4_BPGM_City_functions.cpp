// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGM_City_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPGM_City.BPGM_City_C.GetCurrentSpawnedBehemoths
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AArchonBehemoth*> CurrentSpawnedBehemoths        (Parm, OutParm, ZeroConstructor)

void ABPGM_City_C::GetCurrentSpawnedBehemoths(TArray<class AArchonBehemoth*>* CurrentSpawnedBehemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.GetCurrentSpawnedBehemoths");

	ABPGM_City_C_GetCurrentSpawnedBehemoths_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CurrentSpawnedBehemoths != nullptr)
		*CurrentSpawnedBehemoths = params.CurrentSpawnedBehemoths;
}


// Function BPGM_City.BPGM_City_C.GetMusicSystem
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UBPI_MusicSystem_C> MusicSystem                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::GetMusicSystem(TScriptInterface<class UBPI_MusicSystem_C>* MusicSystem)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.GetMusicSystem");

	ABPGM_City_C_GetMusicSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MusicSystem != nullptr)
		*MusicSystem = params.MusicSystem;
}


// Function BPGM_City.BPGM_City_C.IsIntroCinematicEnabled
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::IsIntroCinematicEnabled(bool* Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.IsIntroCinematicEnabled");

	ABPGM_City_C_IsIntroCinematicEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Enabled != nullptr)
		*Enabled = params.Enabled;
}


// Function BPGM_City.BPGM_City_C.DidSetupIntroCinematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPGM_City_C::DidSetupIntroCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.DidSetupIntroCinematic");

	ABPGM_City_C_DidSetupIntroCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPGM_City.BPGM_City_C.GetGameModeType
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TEnumAsByte<Egame_mode_type>   GameModeType                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::GetGameModeType(TEnumAsByte<Egame_mode_type>* GameModeType)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.GetGameModeType");

	ABPGM_City_C_GetGameModeType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameModeType != nullptr)
		*GameModeType = params.GameModeType;
}


// Function BPGM_City.BPGM_City_C.SpawnAtmosphereFromClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  In_Class                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::SpawnAtmosphereFromClass(class UClass* In_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.SpawnAtmosphereFromClass");

	ABPGM_City_C_SpawnAtmosphereFromClass_Params params;
	params.In_Class = In_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.SetupAtmosphereVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonGameMode*         GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::SetupAtmosphereVariables(class AArchonGameMode* GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.SetupAtmosphereVariables");

	ABPGM_City_C_SetupAtmosphereVariables_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.SpawnAtmosphere
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_City_C::SpawnAtmosphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.SpawnAtmosphere");

	ABPGM_City_C_SpawnAtmosphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.CheckIfShouldRemoveBot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPGM_City_C::CheckIfShouldRemoveBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.CheckIfShouldRemoveBot");

	ABPGM_City_C_CheckIfShouldRemoveBot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPGM_City.BPGM_City_C.CheckIfShouldSpawnBot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABPGM_City_C::CheckIfShouldSpawnBot()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.CheckIfShouldSpawnBot");

	ABPGM_City_C_CheckIfShouldSpawnBot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BPGM_City.BPGM_City_C.RemoveBots
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_City_C::RemoveBots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.RemoveBots");

	ABPGM_City_C_RemoveBots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.SpawnBots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABPGM_City_C::SpawnBots()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.SpawnBots");

	ABPGM_City_C_SpawnBots_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPGM_City_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.UserConstructionScript");

	ABPGM_City_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.OnLoaded_29A28FD8408E34782C4AE781BBA07BF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::OnLoaded_29A28FD8408E34782C4AE781BBA07BF8(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.OnLoaded_29A28FD8408E34782C4AE781BBA07BF8");

	ABPGM_City_C_OnLoaded_29A28FD8408E34782C4AE781BBA07BF8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.TriggerIntroCinematic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::TriggerIntroCinematic(class APlayerController* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.TriggerIntroCinematic");

	ABPGM_City_C_TriggerIntroCinematic_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.TriggerEndOfHuntSequence
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_City_C::TriggerEndOfHuntSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.TriggerEndOfHuntSequence");

	ABPGM_City_C_TriggerEndOfHuntSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.MoveCharactersToArrival
// (Public, BlueprintCallable, BlueprintEvent)

void ABPGM_City_C::MoveCharactersToArrival()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.MoveCharactersToArrival");

	ABPGM_City_C_MoveCharactersToArrival_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPGM_City_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.ReceiveBeginPlay");

	ABPGM_City_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.K2_PostLogin
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController**      NewPlayer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::K2_PostLogin(class APlayerController** NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.K2_PostLogin");

	ABPGM_City_C_K2_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.K2_OnLogout
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController**            ExitingController              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::K2_OnLogout(class AController** ExitingController)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.K2_OnLogout");

	ABPGM_City_C_K2_OnLogout_Params params;
	params.ExitingController = ExitingController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.K2_OnSetMatchState
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FName*                  NewState                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::K2_OnSetMatchState(struct FName* NewState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.K2_OnSetMatchState");

	ABPGM_City_C_K2_OnSetMatchState_Params params;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.StreamNewAtmosphere
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAtmosphereIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::StreamNewAtmosphere(int NewAtmosphereIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.StreamNewAtmosphere");

	ABPGM_City_C_StreamNewAtmosphere_Params params;
	params.NewAtmosphereIndex = NewAtmosphereIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.CycleAtmosphere
// (BlueprintCallable, BlueprintEvent)

void ABPGM_City_C::CycleAtmosphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.CycleAtmosphere");

	ABPGM_City_C_CycleAtmosphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPGM_City.BPGM_City_C.ExecuteUbergraph_BPGM_City
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPGM_City_C::ExecuteUbergraph_BPGM_City(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPGM_City.BPGM_City_C.ExecuteUbergraph_BPGM_City");

	ABPGM_City_C_ExecuteUbergraph_BPGM_City_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
