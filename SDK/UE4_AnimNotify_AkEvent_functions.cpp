// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AnimNotify_AkEvent_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.AudioEventCallback
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                 WorldContext                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EAkCallbackType                CallbackType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PlayingID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EstimatedDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_AkEvent_C::AudioEventCallback(class UObject* WorldContext, EAkCallbackType CallbackType, int PlayingID, float EstimatedDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.AudioEventCallback");

	UAnimNotify_AkEvent_C_AudioEventCallback_Params params;
	params.WorldContext = WorldContext;
	params.CallbackType = CallbackType;
	params.PlayingID = PlayingID;
	params.EstimatedDuration = EstimatedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.PlayEvent
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USceneComponent*         TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_AkEvent_C::PlayEvent(class USceneComponent* TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.PlayEvent");

	UAnimNotify_AkEvent_C_PlayEvent_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.ShouldExecuteNotify
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldExecute_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_AkEvent_C::ShouldExecuteNotify(class AActor* Owner, bool* ShouldExecute_)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.ShouldExecuteNotify");

	UAnimNotify_AkEvent_C_ShouldExecuteNotify_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldExecute_ != nullptr)
		*ShouldExecute_ = params.ShouldExecute_;
}


// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_AkEvent_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify");

	UAnimNotify_AkEvent_C_Received_Notify_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
