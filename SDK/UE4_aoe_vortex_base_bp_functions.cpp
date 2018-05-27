// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_vortex_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aaoe_vortex_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.UserConstructionScript");

	Aaoe_vortex_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aaoe_vortex_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ReceiveBeginPlay");

	Aaoe_vortex_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_vortex_base_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ReceiveTick");

	Aaoe_vortex_base_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__PullCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Aaoe_vortex_base_bp_C::BndEvt__PullCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__PullCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Aaoe_vortex_base_bp_C_BndEvt__PullCollision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__PullCollision_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_vortex_base_bp_C::BndEvt__PullCollision_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__PullCollision_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature");

	Aaoe_vortex_base_bp_C_BndEvt__PullCollision_K2Node_ComponentBoundEvent_12_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.SpawnActor_Destroy
// (Public, BlueprintCallable, BlueprintEvent)

void Aaoe_vortex_base_bp_C::SpawnActor_Destroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.SpawnActor_Destroy");

	Aaoe_vortex_base_bp_C_SpawnActor_Destroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Aaoe_vortex_base_bp_C::BndEvt__SphereCollision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.BndEvt__SphereCollision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature");

	Aaoe_vortex_base_bp_C_BndEvt__SphereCollision_K2Node_ComponentBoundEvent_16_ComponentBeginOverlapSignature__DelegateSignature_Params params;
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


// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.InternalDestroy
// (BlueprintCallable, BlueprintEvent)

void Aaoe_vortex_base_bp_C::InternalDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.InternalDestroy");

	Aaoe_vortex_base_bp_C_InternalDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ExecuteUbergraph_aoe_vortex_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aaoe_vortex_base_bp_C::ExecuteUbergraph_aoe_vortex_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function aoe_vortex_base_bp.aoe_vortex_base_bp_C.ExecuteUbergraph_aoe_vortex_base_bp");

	Aaoe_vortex_base_bp_C_ExecuteUbergraph_aoe_vortex_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
