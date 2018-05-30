// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_flytolocationsetup_bpt_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.MakeSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>         SplinePoints                   (Parm, OutParm, ZeroConstructor)
// float                          Speed                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uflytolocationsetup_bpt_C::MakeSpline(TArray<struct FVector>* SplinePoints, float* Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.MakeSpline");

	Uflytolocationsetup_bpt_C_MakeSpline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplinePoints != nullptr)
		*SplinePoints = params.SplinePoints;
	if (Speed != nullptr)
		*Speed = params.Speed;
}


// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uflytolocationsetup_bpt_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveTickAI");

	Uflytolocationsetup_bpt_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uflytolocationsetup_bpt_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveExecuteAI");

	Uflytolocationsetup_bpt_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uflytolocationsetup_bpt_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ReceiveAbort");

	Uflytolocationsetup_bpt_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ExecuteUbergraph_flytolocationsetup_bpt
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uflytolocationsetup_bpt_C::ExecuteUbergraph_flytolocationsetup_bpt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function flytolocationsetup_bpt.flytolocationsetup_bpt_C.ExecuteUbergraph_flytolocationsetup_bpt");

	Uflytolocationsetup_bpt_C_ExecuteUbergraph_flytolocationsetup_bpt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
