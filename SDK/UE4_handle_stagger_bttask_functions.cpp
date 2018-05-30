// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_handle_stagger_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function handle_stagger_bttask.handle_stagger_bttask_C.PickBestStagger
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct Fstagger_option> StaggerOptions                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            BestIndex                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uhandle_stagger_bttask_C::PickBestStagger(TArray<struct Fstagger_option>* StaggerOptions, int* BestIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function handle_stagger_bttask.handle_stagger_bttask_C.PickBestStagger");

	Uhandle_stagger_bttask_C_PickBestStagger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StaggerOptions != nullptr)
		*StaggerOptions = params.StaggerOptions;
	if (BestIndex != nullptr)
		*BestIndex = params.BestIndex;
}


// Function handle_stagger_bttask.handle_stagger_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhandle_stagger_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function handle_stagger_bttask.handle_stagger_bttask_C.ReceiveExecuteAI");

	Uhandle_stagger_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function handle_stagger_bttask.handle_stagger_bttask_C.OnMontageBlendingOut_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhandle_stagger_bttask_C::OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function handle_stagger_bttask.handle_stagger_bttask_C.OnMontageBlendingOut_Event_1");

	Uhandle_stagger_bttask_C_OnMontageBlendingOut_Event_1_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function handle_stagger_bttask.handle_stagger_bttask_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhandle_stagger_bttask_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function handle_stagger_bttask.handle_stagger_bttask_C.ReceiveAbortAI");

	Uhandle_stagger_bttask_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function handle_stagger_bttask.handle_stagger_bttask_C.Cleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClearStaggerCount              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhandle_stagger_bttask_C::Cleanup(bool ClearStaggerCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function handle_stagger_bttask.handle_stagger_bttask_C.Cleanup");

	Uhandle_stagger_bttask_C_Cleanup_Params params;
	params.ClearStaggerCount = ClearStaggerCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function handle_stagger_bttask.handle_stagger_bttask_C.PlayMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhandle_stagger_bttask_C::PlayMontage(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function handle_stagger_bttask.handle_stagger_bttask_C.PlayMontage");

	Uhandle_stagger_bttask_C_PlayMontage_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function handle_stagger_bttask.handle_stagger_bttask_C.ExecuteUbergraph_handle_stagger_bttask
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uhandle_stagger_bttask_C::ExecuteUbergraph_handle_stagger_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function handle_stagger_bttask.handle_stagger_bttask_C.ExecuteUbergraph_handle_stagger_bttask");

	Uhandle_stagger_bttask_C_ExecuteUbergraph_handle_stagger_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
