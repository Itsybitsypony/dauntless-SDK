// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_influenced_destructable_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ainfluenced_destructable_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.UserConstructionScript");

	Ainfluenced_destructable_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Ainfluenced_destructable_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.ReceiveBeginPlay");

	Ainfluenced_destructable_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.Evaluate
// (BlueprintCallable, BlueprintEvent)

void Ainfluenced_destructable_base_bp_C::Evaluate()
{
	static auto fn = UObject::FindObject<UFunction>("Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.Evaluate");

	Ainfluenced_destructable_base_bp_C_Evaluate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Ainfluenced_destructable_base_bp_C::BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature");

	Ainfluenced_destructable_base_bp_C_BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ainfluenced_destructable_base_bp_C::BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature");

	Ainfluenced_destructable_base_bp_C_BndEvt__InfluenceTester_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.OnInfluencerAdded
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InfluencerComponent            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  InfluencerActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ainfluenced_destructable_base_bp_C::OnInfluencerAdded(class UPrimitiveComponent* InfluencerComponent, class AActor* InfluencerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.OnInfluencerAdded");

	Ainfluenced_destructable_base_bp_C_OnInfluencerAdded_Params params;
	params.InfluencerComponent = InfluencerComponent;
	params.InfluencerActor = InfluencerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.OnInfluencerRemoved
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     InfluencerComponent            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// class AActor*                  InfluencerActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ainfluenced_destructable_base_bp_C::OnInfluencerRemoved(class UPrimitiveComponent* InfluencerComponent, class AActor* InfluencerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.OnInfluencerRemoved");

	Ainfluenced_destructable_base_bp_C_OnInfluencerRemoved_Params params;
	params.InfluencerComponent = InfluencerComponent;
	params.InfluencerActor = InfluencerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.ExecuteUbergraph_influenced_destructable_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ainfluenced_destructable_base_bp_C::ExecuteUbergraph_influenced_destructable_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function influenced_destructable_base_bp.influenced_destructable_base_bp_C.ExecuteUbergraph_influenced_destructable_base_bp");

	Ainfluenced_destructable_base_bp_C_ExecuteUbergraph_influenced_destructable_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
