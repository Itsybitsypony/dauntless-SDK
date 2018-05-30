// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_wait_for_past_target_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.WillCollideWithTerrain
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  ParentActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldStop                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwait_for_past_target_bttask_C::WillCollideWithTerrain(class AActor* ParentActor, bool* ShouldStop)
{
	static auto fn = UObject::FindObject<UFunction>("Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.WillCollideWithTerrain");

	Uwait_for_past_target_bttask_C_WillCollideWithTerrain_Params params;
	params.ParentActor = ParentActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldStop != nullptr)
		*ShouldStop = params.ShouldStop;
}


// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.IsPastTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TargetPos                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// bool                           PastTarget                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           GoingToCollide                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uwait_for_past_target_bttask_C::IsPastTarget(class APawn* Pawn, const struct FVector& TargetPos, bool* PastTarget, bool* GoingToCollide)
{
	static auto fn = UObject::FindObject<UFunction>("Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.IsPastTarget");

	Uwait_for_past_target_bttask_C_IsPastTarget_Params params;
	params.Pawn = Pawn;
	params.TargetPos = TargetPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PastTarget != nullptr)
		*PastTarget = params.PastTarget;
	if (GoingToCollide != nullptr)
		*GoingToCollide = params.GoingToCollide;
}


// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwait_for_past_target_bttask_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveTickAI");

	Uwait_for_past_target_bttask_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwait_for_past_target_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveExecuteAI");

	Uwait_for_past_target_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.QueuedTurn
// (BlueprintCallable, BlueprintEvent)

void Uwait_for_past_target_bttask_C::QueuedTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.QueuedTurn");

	Uwait_for_past_target_bttask_C_QueuedTurn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.Finish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwait_for_past_target_bttask_C::Finish(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.Finish");

	Uwait_for_past_target_bttask_C_Finish_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwait_for_past_target_bttask_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ReceiveAbortAI");

	Uwait_for_past_target_bttask_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ExecuteUbergraph_wait_for_past_target_bttask
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uwait_for_past_target_bttask_C::ExecuteUbergraph_wait_for_past_target_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function wait_for_past_target_bttask.wait_for_past_target_bttask_C.ExecuteUbergraph_wait_for_past_target_bttask");

	Uwait_for_past_target_bttask_C_ExecuteUbergraph_wait_for_past_target_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
