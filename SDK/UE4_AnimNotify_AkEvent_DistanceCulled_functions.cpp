// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AnimNotify_AkEvent_DistanceCulled_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AnimNotify_AkEvent_DistanceCulled.AnimNotify_AkEvent_DistanceCulled_C.ShouldExecuteNotify
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldExecute                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAnimNotify_AkEvent_DistanceCulled_C::ShouldExecuteNotify(class AActor* Owner, bool* ShouldExecute)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent_DistanceCulled.AnimNotify_AkEvent_DistanceCulled_C.ShouldExecuteNotify");

	UAnimNotify_AkEvent_DistanceCulled_C_ShouldExecuteNotify_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldExecute != nullptr)
		*ShouldExecute = params.ShouldExecute;
}


// Function AnimNotify_AkEvent_DistanceCulled.AnimNotify_AkEvent_DistanceCulled_C.Received_Notify
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimSequenceBase**      Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAnimNotify_AkEvent_DistanceCulled_C::Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent_DistanceCulled.AnimNotify_AkEvent_DistanceCulled_C.Received_Notify");

	UAnimNotify_AkEvent_DistanceCulled_C_Received_Notify_Params params;
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
