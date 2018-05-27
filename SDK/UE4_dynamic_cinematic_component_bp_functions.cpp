// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dynamic_cinematic_component_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.DebugPrint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  String                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::DebugPrint(const class FString& String, float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.DebugPrint");

	Udynamic_cinematic_component_bp_C_DebugPrint_Params params;
	params.String = String;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.DeactivateCinematicOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::DeactivateCinematicOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.DeactivateCinematicOverlay");

	Udynamic_cinematic_component_bp_C_DeactivateCinematicOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ActivateCinematicOverlay
// (Public, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::ActivateCinematicOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ActivateCinematicOverlay");

	Udynamic_cinematic_component_bp_C_ActivateCinematicOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.GetClientPlaybackState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> State                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::GetClientPlaybackState(TEnumAsByte<ECinematicPlayerState>* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.GetClientPlaybackState");

	Udynamic_cinematic_component_bp_C_GetClientPlaybackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.CalculateClientViewability
// (Public, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::CalculateClientViewability()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.CalculateClientViewability");

	Udynamic_cinematic_component_bp_C_CalculateClientViewability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_PreloadParameters
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::OnRep_PreloadParameters()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_PreloadParameters");

	Udynamic_cinematic_component_bp_C_OnRep_PreloadParameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.HasComponentFinishedLoading
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Udynamic_cinematic_component_bp_C::HasComponentFinishedLoading()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.HasComponentFinishedLoading");

	Udynamic_cinematic_component_bp_C_HasComponentFinishedLoading_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AdjustCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::AdjustCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AdjustCamera");

	Udynamic_cinematic_component_bp_C_AdjustCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FindActorOfInterest
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class AActor*>          Actors                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class AActor*                  BestActor                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            BestIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::FindActorOfInterest(class AActor* Camera, TArray<class AActor*>* Actors, class AActor** BestActor, int* BestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FindActorOfInterest");

	Udynamic_cinematic_component_bp_C_FindActorOfInterest_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Actors != nullptr)
		*Actors = params.Actors;
	if (BestActor != nullptr)
		*BestActor = params.BestActor;
	if (BestIndex != nullptr)
		*BestIndex = params.BestIndex;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_ReplacementActors
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::OnRep_ReplacementActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_ReplacementActors");

	Udynamic_cinematic_component_bp_C_OnRep_ReplacementActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FollowGround
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 GroundFollowOffset             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Smoothing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OutGroundFollowOffset          (Parm, OutParm, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::FollowGround(class AActor* Actor, const struct FVector& GroundFollowOffset, float DeltaSeconds, float Smoothing, struct FVector* OutGroundFollowOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FollowGround");

	Udynamic_cinematic_component_bp_C_FollowGround_Params params;
	params.Actor = Actor;
	params.GroundFollowOffset = GroundFollowOffset;
	params.DeltaSeconds = DeltaSeconds;
	params.Smoothing = Smoothing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutGroundFollowOffset != nullptr)
		*OutGroundFollowOffset = params.OutGroundFollowOffset;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ShouldFadeFromBlack
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          AngleThreshold                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceThreshold              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldFade                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::ShouldFadeFromBlack(class AActor* Camera, class AActor* TargetActor, float AngleThreshold, float DistanceThreshold, bool* ShouldFade)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ShouldFadeFromBlack");

	Udynamic_cinematic_component_bp_C_ShouldFadeFromBlack_Params params;
	params.Camera = Camera;
	params.TargetActor = TargetActor;
	params.AngleThreshold = AngleThreshold;
	params.DistanceThreshold = DistanceThreshold;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldFade != nullptr)
		*ShouldFade = params.ShouldFade;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_Clients
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::OnRep_Clients()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_Clients");

	Udynamic_cinematic_component_bp_C_OnRep_Clients_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_ServerPlaybackState
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::OnRep_ServerPlaybackState()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnRep_ServerPlaybackState");

	Udynamic_cinematic_component_bp_C_OnRep_ServerPlaybackState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetActorAndMeshHidden
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Hidden                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::SetActorAndMeshHidden(class AActor* Actor, bool Hidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetActorAndMeshHidden");

	Udynamic_cinematic_component_bp_C_SetActorAndMeshHidden_Params params;
	params.Actor = Actor;
	params.Hidden = Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ReplaceActorAnimSequence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*    LevelSequencePlayer            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  SequenceActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase*       NewAnimSequence                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::ReplaceActorAnimSequence(class ULevelSequencePlayer* LevelSequencePlayer, class AActor* SequenceActor, class UAnimSequenceBase* NewAnimSequence)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ReplaceActorAnimSequence");

	Udynamic_cinematic_component_bp_C_ReplaceActorAnimSequence_Params params;
	params.LevelSequencePlayer = LevelSequencePlayer;
	params.SequenceActor = SequenceActor;
	params.NewAnimSequence = NewAnimSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_2B8F0C1D48ADD10A9F747DAC0FE50811
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::OnLoaded_2B8F0C1D48ADD10A9F747DAC0FE50811(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_2B8F0C1D48ADD10A9F747DAC0FE50811");

	Udynamic_cinematic_component_bp_C_OnLoaded_2B8F0C1D48ADD10A9F747DAC0FE50811_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_6016B1104CD3A5F0EAABEF976B3BF735
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::OnLoaded_6016B1104CD3A5F0EAABEF976B3BF735(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_6016B1104CD3A5F0EAABEF976B3BF735");

	Udynamic_cinematic_component_bp_C_OnLoaded_6016B1104CD3A5F0EAABEF976B3BF735_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_4F47E7904D6F6E6C2AA1C5864FF6BE0C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::OnLoaded_4F47E7904D6F6E6C2AA1C5864FF6BE0C(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_4F47E7904D6F6E6C2AA1C5864FF6BE0C");

	Udynamic_cinematic_component_bp_C_OnLoaded_4F47E7904D6F6E6C2AA1C5864FF6BE0C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_DF9F826043B6CD0EBED950801301E3A5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::OnLoaded_DF9F826043B6CD0EBED950801301E3A5(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_DF9F826043B6CD0EBED950801301E3A5");

	Udynamic_cinematic_component_bp_C_OnLoaded_DF9F826043B6CD0EBED950801301E3A5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_EB517BEB4B2279E0CE318281E6E6C81A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::OnLoaded_EB517BEB4B2279E0CE318281E6E6C81A(class UClass* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnLoaded_EB517BEB4B2279E0CE318281E6E6C81A");

	Udynamic_cinematic_component_bp_C_OnLoaded_EB517BEB4B2279E0CE318281E6E6C81A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetCinematicMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::SetCinematicMaterials()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetCinematicMaterials");

	Udynamic_cinematic_component_bp_C_SetCinematicMaterials_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PreloadOnServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fdynamic_cinematic_component_preload_parameters Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Udynamic_cinematic_component_bp_C::PreloadOnServer(const struct Fdynamic_cinematic_component_preload_parameters& Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PreloadOnServer");

	Udynamic_cinematic_component_bp_C_PreloadOnServer_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.Play
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          ObserverActors                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          ReplacementActors              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Udynamic_cinematic_component_bp_C::Play(TArray<class AActor*> ObserverActors, TArray<class AActor*> ReplacementActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.Play");

	Udynamic_cinematic_component_bp_C_Play_Params params;
	params.ObserverActors = ObserverActors;
	params.ReplacementActors = ReplacementActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PlayOnClient
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::PlayOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PlayOnClient");

	Udynamic_cinematic_component_bp_C_PlayOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.Reset
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.Reset");

	Udynamic_cinematic_component_bp_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnSequenceEnd
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::OnSequenceEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnSequenceEnd");

	Udynamic_cinematic_component_bp_C_OnSequenceEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FailsafeTimer
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::FailsafeTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.FailsafeTimer");

	Udynamic_cinematic_component_bp_C_FailsafeTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetClientCinematicState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::SetClientCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SetClientCinematicState");

	Udynamic_cinematic_component_bp_C_SetClientCinematicState_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.EstimatedClientComplete
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::EstimatedClientComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.EstimatedClientComplete");

	Udynamic_cinematic_component_bp_C_EstimatedClientComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteMulticast
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::AllClientsCompleteMulticast()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteMulticast");

	Udynamic_cinematic_component_bp_C_AllClientsCompleteMulticast_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ReceiveTick");

	Udynamic_cinematic_component_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PostSequenceUpdate
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::PostSequenceUpdate()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PostSequenceUpdate");

	Udynamic_cinematic_component_bp_C_PostSequenceUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PreloadOnClient
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::PreloadOnClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.PreloadOnClient");

	Udynamic_cinematic_component_bp_C_PreloadOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteOwnerOnly
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::AllClientsCompleteOwnerOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteOwnerOnly");

	Udynamic_cinematic_component_bp_C_AllClientsCompleteOwnerOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteServerOnly
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::AllClientsCompleteServerOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsCompleteServerOnly");

	Udynamic_cinematic_component_bp_C_AllClientsCompleteServerOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SkipCinematic
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::SkipCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.SkipCinematic");

	Udynamic_cinematic_component_bp_C_SkipCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsComplete
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::AllClientsComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.AllClientsComplete");

	Udynamic_cinematic_component_bp_C_AllClientsComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.BlendCameraOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BlendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  NewViewTarget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::BlendCameraOut(float BlendTime, class AActor* NewViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.BlendCameraOut");

	Udynamic_cinematic_component_bp_C_BlendCameraOut_Params params;
	params.BlendTime = BlendTime;
	params.NewViewTarget = NewViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.BindNewReplacementActors
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          NewProxyActors                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          NewReplacementActors           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Udynamic_cinematic_component_bp_C::BindNewReplacementActors(TArray<class UClass*> NewProxyActors, TArray<class AActor*> NewReplacementActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.BindNewReplacementActors");

	Udynamic_cinematic_component_bp_C_BindNewReplacementActors_Params params;
	params.NewProxyActors = NewProxyActors;
	params.NewReplacementActors = NewReplacementActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnCameraCut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraComponent*        CameraComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::OnCameraCut(class UCameraComponent* CameraComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.OnCameraCut");

	Udynamic_cinematic_component_bp_C_OnCameraCut_Params params;
	params.CameraComponent = CameraComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ToggleShowSequenceTime
// (BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::ToggleShowSequenceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ToggleShowSequenceTime");

	Udynamic_cinematic_component_bp_C_ToggleShowSequenceTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ExecuteUbergraph_dynamic_cinematic_component_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udynamic_cinematic_component_bp_C::ExecuteUbergraph_dynamic_cinematic_component_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ExecuteUbergraph_dynamic_cinematic_component_bp");

	Udynamic_cinematic_component_bp_C_ExecuteUbergraph_dynamic_cinematic_component_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ServerStop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::ServerStop__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ServerStop__DelegateSignature");

	Udynamic_cinematic_component_bp_C_ServerStop__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ClientStop__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::ClientStop__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ClientStop__DelegateSignature");

	Udynamic_cinematic_component_bp_C_ClientStop__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ServerStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::ServerStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ServerStart__DelegateSignature");

	Udynamic_cinematic_component_bp_C_ServerStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ClientStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Udynamic_cinematic_component_bp_C::ClientStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function dynamic_cinematic_component_bp.dynamic_cinematic_component_bp_C.ClientStart__DelegateSignature");

	Udynamic_cinematic_component_bp_C_ClientStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
