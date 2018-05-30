// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bttask_exit_rage_state_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bttask_exit_rage_state.bttask_exit_rage_state_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubttask_exit_rage_state_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function bttask_exit_rage_state.bttask_exit_rage_state_C.ReceiveExecuteAI");

	Ubttask_exit_rage_state_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bttask_exit_rage_state.bttask_exit_rage_state_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubttask_exit_rage_state_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function bttask_exit_rage_state.bttask_exit_rage_state_C.ReceiveAbortAI");

	Ubttask_exit_rage_state_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bttask_exit_rage_state.bttask_exit_rage_state_C.TriggerExitRageAudioEvent
// (BlueprintCallable, BlueprintEvent)

void Ubttask_exit_rage_state_C::TriggerExitRageAudioEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function bttask_exit_rage_state.bttask_exit_rage_state_C.TriggerExitRageAudioEvent");

	Ubttask_exit_rage_state_C_TriggerExitRageAudioEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bttask_exit_rage_state.bttask_exit_rage_state_C.ExecuteUbergraph_bttask_exit_rage_state
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubttask_exit_rage_state_C::ExecuteUbergraph_bttask_exit_rage_state(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bttask_exit_rage_state.bttask_exit_rage_state_C.ExecuteUbergraph_bttask_exit_rage_state");

	Ubttask_exit_rage_state_C_ExecuteUbergraph_bttask_exit_rage_state_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
