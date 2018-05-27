// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_interruptable_looping_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinterruptable_looping_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveExecuteAI");

	Uinterruptable_looping_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interruptable_looping_bttask.interruptable_looping_bttask_C.MontageEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinterruptable_looping_bttask_C::MontageEnded(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function interruptable_looping_bttask.interruptable_looping_bttask_C.MontageEnded");

	Uinterruptable_looping_bttask_C_MontageEnded_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interruptable_looping_bttask.interruptable_looping_bttask_C.EndTask
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Succeeded                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinterruptable_looping_bttask_C::EndTask(bool Succeeded)
{
	static auto fn = UObject::FindObject<UFunction>("Function interruptable_looping_bttask.interruptable_looping_bttask_C.EndTask");

	Uinterruptable_looping_bttask_C_EndTask_Params params;
	params.Succeeded = Succeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ExitMontage
// (BlueprintCallable, BlueprintEvent)

void Uinterruptable_looping_bttask_C::ExitMontage()
{
	static auto fn = UObject::FindObject<UFunction>("Function interruptable_looping_bttask.interruptable_looping_bttask_C.ExitMontage");

	Uinterruptable_looping_bttask_C_ExitMontage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinterruptable_looping_bttask_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveAbortAI");

	Uinterruptable_looping_bttask_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interruptable_looping_bttask.interruptable_looping_bttask_C.StopLooping
// (BlueprintCallable, BlueprintEvent)

void Uinterruptable_looping_bttask_C::StopLooping()
{
	static auto fn = UObject::FindObject<UFunction>("Function interruptable_looping_bttask.interruptable_looping_bttask_C.StopLooping");

	Uinterruptable_looping_bttask_C_StopLooping_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinterruptable_looping_bttask_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function interruptable_looping_bttask.interruptable_looping_bttask_C.ReceiveTickAI");

	Uinterruptable_looping_bttask_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function interruptable_looping_bttask.interruptable_looping_bttask_C.ExecuteUbergraph_interruptable_looping_bttask
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uinterruptable_looping_bttask_C::ExecuteUbergraph_interruptable_looping_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function interruptable_looping_bttask.interruptable_looping_bttask_C.ExecuteUbergraph_interruptable_looping_bttask");

	Uinterruptable_looping_bttask_C_ExecuteUbergraph_interruptable_looping_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
