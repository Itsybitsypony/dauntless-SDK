// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_bpgm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lobby_bpgm.lobby_bpgm_C.HandleSlotPrevious
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FromSlotIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidChangeSlot                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NewSlotIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::HandleSlotPrevious(int FromSlotIndex, bool* DidChangeSlot, int* NewSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.HandleSlotPrevious");

	Alobby_bpgm_C_HandleSlotPrevious_Params params;
	params.FromSlotIndex = FromSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidChangeSlot != nullptr)
		*DidChangeSlot = params.DidChangeSlot;
	if (NewSlotIndex != nullptr)
		*NewSlotIndex = params.NewSlotIndex;
}


// Function lobby_bpgm.lobby_bpgm_C.HandleSlotNext
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FromSlotIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidChangeSlot                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            NewSlotIndex                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::HandleSlotNext(int FromSlotIndex, bool* DidChangeSlot, int* NewSlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.HandleSlotNext");

	Alobby_bpgm_C_HandleSlotNext_Params params;
	params.FromSlotIndex = FromSlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidChangeSlot != nullptr)
		*DidChangeSlot = params.DidChangeSlot;
	if (NewSlotIndex != nullptr)
		*NewSlotIndex = params.NewSlotIndex;
}


// Function lobby_bpgm.lobby_bpgm_C.HandleSlotClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ClickedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           DidHandle                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::HandleSlotClicked(class AActor* ClickedActor, bool* DidHandle, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.HandleSlotClicked");

	Alobby_bpgm_C_HandleSlotClicked_Params params;
	params.ClickedActor = ClickedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DidHandle != nullptr)
		*DidHandle = params.DidHandle;
	if (SlotIndex != nullptr)
		*SlotIndex = params.SlotIndex;
}


// Function lobby_bpgm.lobby_bpgm_C.GetSlotClicked
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ClickedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           SlotClicked                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SlotActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SlotIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::GetSlotClicked(class AActor* ClickedActor, bool* SlotClicked, class AActor** SlotActor, int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.GetSlotClicked");

	Alobby_bpgm_C_GetSlotClicked_Params params;
	params.ClickedActor = ClickedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SlotClicked != nullptr)
		*SlotClicked = params.SlotClicked;
	if (SlotActor != nullptr)
		*SlotActor = params.SlotActor;
	if (SlotIndex != nullptr)
		*SlotIndex = params.SlotIndex;
}


// Function lobby_bpgm.lobby_bpgm_C.UpdatePlayerHighlights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::UpdatePlayerHighlights(int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.UpdatePlayerHighlights");

	Alobby_bpgm_C_UpdatePlayerHighlights_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.SetLobbyPlayerReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReadyState                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::SetLobbyPlayerReady(bool ReadyState)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.SetLobbyPlayerReady");

	Alobby_bpgm_C_SetLobbyPlayerReady_Params params;
	params.ReadyState = ReadyState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.ChoosePlayerStart
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController**            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* Alobby_bpgm_C::ChoosePlayerStart(class AController** Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.ChoosePlayerStart");

	Alobby_bpgm_C_ChoosePlayerStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function lobby_bpgm.lobby_bpgm_C.GetOpenOptions
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FName>           HuntIds                        (Parm, OutParm, ZeroConstructor)

void Alobby_bpgm_C::GetOpenOptions(TArray<struct FName>* HuntIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.GetOpenOptions");

	Alobby_bpgm_C_GetOpenOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntIds != nullptr)
		*HuntIds = params.HuntIds;
}


// Function lobby_bpgm.lobby_bpgm_C.SpawnAtmosphere
// (Public, BlueprintCallable, BlueprintEvent)

void Alobby_bpgm_C::SpawnAtmosphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.SpawnAtmosphere");

	Alobby_bpgm_C_SpawnAtmosphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.SetupAtmosphereVariables
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonGameMode*         GameMode                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::SetupAtmosphereVariables(class AArchonGameMode* GameMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.SetupAtmosphereVariables");

	Alobby_bpgm_C_SetupAtmosphereVariables_Params params;
	params.GameMode = GameMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.SpawnAtmosphereFromClass
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InClass                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::SpawnAtmosphereFromClass(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.SpawnAtmosphereFromClass");

	Alobby_bpgm_C_SpawnAtmosphereFromClass_Params params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alobby_bpgm_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.UserConstructionScript");

	Alobby_bpgm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.OnLoaded_3AF3459C4E3598210ECDFAA7F258670A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::OnLoaded_3AF3459C4E3598210ECDFAA7F258670A(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.OnLoaded_3AF3459C4E3598210ECDFAA7F258670A");

	Alobby_bpgm_C_OnLoaded_3AF3459C4E3598210ECDFAA7F258670A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.CycleAtmosphere
// (BlueprintCallable, BlueprintEvent)

void Alobby_bpgm_C::CycleAtmosphere()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.CycleAtmosphere");

	Alobby_bpgm_C_CycleAtmosphere_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.StreamNewAtmosphere
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewAtmosphereIndex             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::StreamNewAtmosphere(int NewAtmosphereIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.StreamNewAtmosphere");

	Alobby_bpgm_C_StreamNewAtmosphere_Params params;
	params.NewAtmosphereIndex = NewAtmosphereIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Alobby_bpgm_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.ReceiveBeginPlay");

	Alobby_bpgm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.ReceiveTick");

	Alobby_bpgm_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobby_bpgm.lobby_bpgm_C.ExecuteUbergraph_lobby_bpgm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alobby_bpgm_C::ExecuteUbergraph_lobby_bpgm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobby_bpgm.lobby_bpgm_C.ExecuteUbergraph_lobby_bpgm");

	Alobby_bpgm_C_ExecuteUbergraph_lobby_bpgm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
