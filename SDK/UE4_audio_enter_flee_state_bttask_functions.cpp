// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_audio_enter_flee_state_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uaudio_enter_flee_state_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ReceiveExecuteAI");

	Uaudio_enter_flee_state_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ReceiveAbort
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uaudio_enter_flee_state_bttask_C::ReceiveAbort(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ReceiveAbort");

	Uaudio_enter_flee_state_bttask_C_ReceiveAbort_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ExecuteUbergraph_audio_enter_flee_state_bttask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uaudio_enter_flee_state_bttask_C::ExecuteUbergraph_audio_enter_flee_state_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function audio_enter_flee_state_bttask.audio_enter_flee_state_bttask_C.ExecuteUbergraph_audio_enter_flee_state_bttask");

	Uaudio_enter_flee_state_bttask_C_ExecuteUbergraph_audio_enter_flee_state_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
