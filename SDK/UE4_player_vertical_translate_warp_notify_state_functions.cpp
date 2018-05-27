// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_vertical_translate_warp_notify_state_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.Received_NotifyTick
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         FrameDeltaTime                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uplayer_vertical_translate_warp_notify_state_C::Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.Received_NotifyTick");

	Uplayer_vertical_translate_warp_notify_state_C_Received_NotifyTick_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.FrameDeltaTime = FrameDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.Received_NotifyEnd
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uplayer_vertical_translate_warp_notify_state_C::Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.Received_NotifyEnd");

	Uplayer_vertical_translate_warp_notify_state_C_Received_NotifyEnd_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.AdjustPlayRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OriginalEndPoint               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 WarpedEndPosition              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_vertical_translate_warp_notify_state_C::AdjustPlayRate(float Duration, const struct FVector& OriginalEndPoint, const struct FVector& WarpedEndPosition, class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.AdjustPlayRate");

	Uplayer_vertical_translate_warp_notify_state_C_AdjustPlayRate_Params params;
	params.Duration = Duration;
	params.OriginalEndPoint = OriginalEndPoint;
	params.WarpedEndPosition = WarpedEndPosition;
	params.Mesh = Mesh;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.ExtractEndPoint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  Mesh                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 OriginalEndPoint               (Parm, OutParm, IsPlainOldData)
// struct FVector                 WarpedEndPoint                 (Parm, OutParm, IsPlainOldData)

void Uplayer_vertical_translate_warp_notify_state_C::ExtractEndPoint(float Duration, class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage, struct FVector* OriginalEndPoint, struct FVector* WarpedEndPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.ExtractEndPoint");

	Uplayer_vertical_translate_warp_notify_state_C_ExtractEndPoint_Params params;
	params.Duration = Duration;
	params.Mesh = Mesh;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OriginalEndPoint != nullptr)
		*OriginalEndPoint = params.OriginalEndPoint;
	if (WarpedEndPoint != nullptr)
		*WarpedEndPoint = params.WarpedEndPoint;
}


// Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.Received_NotifyBegin
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         TotalDuration                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uplayer_vertical_translate_warp_notify_state_C::Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C.Received_NotifyBegin");

	Uplayer_vertical_translate_warp_notify_state_C_Received_NotifyBegin_Params params;
	params.MeshComp = MeshComp;
	params.Animation = Animation;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
