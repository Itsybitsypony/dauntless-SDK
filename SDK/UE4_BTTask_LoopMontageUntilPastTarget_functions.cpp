// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_LoopMontageUntilPastTarget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.CollisionCheck
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldStop                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBTTask_LoopMontageUntilPastTarget_C::CollisionCheck(bool* ShouldStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.CollisionCheck");

	UBTTask_LoopMontageUntilPastTarget_C_CollisionCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldStop != nullptr)
		*ShouldStop = params.ShouldStop;
}


// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.OuputLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBTTask_LoopMontageUntilPastTarget_C::OuputLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.OuputLocation");

	UBTTask_LoopMontageUntilPastTarget_C_OuputLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_LoopMontageUntilPastTarget_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveExecuteAI");

	UBTTask_LoopMontageUntilPastTarget_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_LoopMontageUntilPastTarget_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveTickAI");

	UBTTask_LoopMontageUntilPastTarget_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_LoopMontageUntilPastTarget_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ReceiveAbortAI");

	UBTTask_LoopMontageUntilPastTarget_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ExecuteUbergraph_BTTask_LoopMontageUntilPastTarget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_LoopMontageUntilPastTarget_C::ExecuteUbergraph_BTTask_LoopMontageUntilPastTarget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_LoopMontageUntilPastTarget.BTTask_LoopMontageUntilPastTarget_C.ExecuteUbergraph_BTTask_LoopMontageUntilPastTarget");

	UBTTask_LoopMontageUntilPastTarget_C_ExecuteUbergraph_BTTask_LoopMontageUntilPastTarget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
