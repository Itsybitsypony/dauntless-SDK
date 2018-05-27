// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IslandPlayerIntroCinematic_Trigger_BP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OutputDebugInformation
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent, Const)

void AIslandPlayerIntroCinematic_Trigger_BP_C::OutputDebugInformation()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OutputDebugInformation");

	AIslandPlayerIntroCinematic_Trigger_BP_C_OutputDebugInformation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.HasFinishedLoading
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AIslandPlayerIntroCinematic_Trigger_BP_C::HasFinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.HasFinishedLoading");

	AIslandPlayerIntroCinematic_Trigger_BP_C_HasFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnRep_IntroAnimSequenceRefs
// (BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::OnRep_IntroAnimSequenceRefs()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnRep_IntroAnimSequenceRefs");

	AIslandPlayerIntroCinematic_Trigger_BP_C_OnRep_IntroAnimSequenceRefs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.GetEquippedIntroAnimSequenceAsset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Object                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UAnimSequenceBase> AnimSequenceAsset              (Parm, OutParm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::GetEquippedIntroAnimSequenceAsset(class AActor* Object, TAssetPtr<class UAnimSequenceBase>* AnimSequenceAsset, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.GetEquippedIntroAnimSequenceAsset");

	AIslandPlayerIntroCinematic_Trigger_BP_C_GetEquippedIntroAnimSequenceAsset_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AnimSequenceAsset != nullptr)
		*AnimSequenceAsset = params.AnimSequenceAsset;
	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.GetDefaultActorAnimSequence
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequenceBase*       ActorAnimSequence              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::GetDefaultActorAnimSequence(class UAnimSequenceBase** ActorAnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.GetDefaultActorAnimSequence");

	AIslandPlayerIntroCinematic_Trigger_BP_C_GetDefaultActorAnimSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorAnimSequence != nullptr)
		*ActorAnimSequence = params.ActorAnimSequence;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetActorAnimSequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::SetActorAnimSequence(class ULevelSequencePlayer* LevelSequencePlayer, class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetActorAnimSequence");

	AIslandPlayerIntroCinematic_Trigger_BP_C_SetActorAnimSequence_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetActorAndMeshHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::SetActorAndMeshHidden(class AActor* Actor, bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetActorAndMeshHidden");

	AIslandPlayerIntroCinematic_Trigger_BP_C_SetActorAndMeshHidden_Params params;
	params.Actor = Actor;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnRep_SlayerActors
// (BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::OnRep_SlayerActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnRep_SlayerActors");

	AIslandPlayerIntroCinematic_Trigger_BP_C_OnRep_SlayerActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.UserConstructionScript");

	AIslandPlayerIntroCinematic_Trigger_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnLoaded_8347F64641BB2533ABF4DD96DEEC358E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::OnLoaded_8347F64641BB2533ABF4DD96DEEC358E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnLoaded_8347F64641BB2533ABF4DD96DEEC358E");

	AIslandPlayerIntroCinematic_Trigger_BP_C_OnLoaded_8347F64641BB2533ABF4DD96DEEC358E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.BlendCameraOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::BlendCameraOut(float BlendTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.BlendCameraOut");

	AIslandPlayerIntroCinematic_Trigger_BP_C_BlendCameraOut_Params params;
	params.BlendTime = BlendTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ToggleShowSequenceTime
// (Public, BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::ToggleShowSequenceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ToggleShowSequenceTime");

	AIslandPlayerIntroCinematic_Trigger_BP_C_ToggleShowSequenceTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SwapCineMatsOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonCharacter*        Player_Char                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::SwapCineMatsOut(class AArchonCharacter* Player_Char)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SwapCineMatsOut");

	AIslandPlayerIntroCinematic_Trigger_BP_C_SwapCineMatsOut_Params params;
	params.Player_Char = Player_Char;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetClientCinematicState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::SetClientCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetClientCinematicState");

	AIslandPlayerIntroCinematic_Trigger_BP_C_SetClientCinematicState_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetCinematicMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::SetCinematicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SetCinematicMaterials");

	AIslandPlayerIntroCinematic_Trigger_BP_C_SetCinematicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ReceiveBeginPlay");

	AIslandPlayerIntroCinematic_Trigger_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.Reload
// (BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::Reload()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.Reload");

	AIslandPlayerIntroCinematic_Trigger_BP_C_Reload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.PlayAKEvents
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::PlayAKEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.PlayAKEvents");

	AIslandPlayerIntroCinematic_Trigger_BP_C_PlayAKEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.Play
// (BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.Play");

	AIslandPlayerIntroCinematic_Trigger_BP_C_Play_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ReceiveGameplayStart");

	AIslandPlayerIntroCinematic_Trigger_BP_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.RetrieveIntroAnimSequencesFromLoadout
// (BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::RetrieveIntroAnimSequencesFromLoadout()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.RetrieveIntroAnimSequencesFromLoadout");

	AIslandPlayerIntroCinematic_Trigger_BP_C_RetrieveIntroAnimSequencesFromLoadout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.LoadIntroAnimSequences
// (BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::LoadIntroAnimSequences()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.LoadIntroAnimSequences");

	AIslandPlayerIntroCinematic_Trigger_BP_C_LoadIntroAnimSequences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SkipCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::SkipCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.SkipCinematic");

	AIslandPlayerIntroCinematic_Trigger_BP_C_SkipCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnClientPlaybackStopped
// (BlueprintCallable, BlueprintEvent)

void AIslandPlayerIntroCinematic_Trigger_BP_C::OnClientPlaybackStopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.OnClientPlaybackStopped");

	AIslandPlayerIntroCinematic_Trigger_BP_C_OnClientPlaybackStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ExecuteUbergraph_IslandPlayerIntroCinematic_Trigger_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AIslandPlayerIntroCinematic_Trigger_BP_C::ExecuteUbergraph_IslandPlayerIntroCinematic_Trigger_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function IslandPlayerIntroCinematic_Trigger_BP.IslandPlayerIntroCinematic_Trigger_BP_C.ExecuteUbergraph_IslandPlayerIntroCinematic_Trigger_BP");

	AIslandPlayerIntroCinematic_Trigger_BP_C_ExecuteUbergraph_IslandPlayerIntroCinematic_Trigger_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
