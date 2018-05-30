// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_try_set_behemoth_state_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function try_set_behemoth_state_bttask.try_set_behemoth_state_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utry_set_behemoth_state_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function try_set_behemoth_state_bttask.try_set_behemoth_state_bttask_C.ReceiveExecuteAI");

	Utry_set_behemoth_state_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function try_set_behemoth_state_bttask.try_set_behemoth_state_bttask_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utry_set_behemoth_state_bttask_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function try_set_behemoth_state_bttask.try_set_behemoth_state_bttask_C.ReceiveAbortAI");

	Utry_set_behemoth_state_bttask_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function try_set_behemoth_state_bttask.try_set_behemoth_state_bttask_C.ExecuteUbergraph_try_set_behemoth_state_bttask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utry_set_behemoth_state_bttask_C::ExecuteUbergraph_try_set_behemoth_state_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function try_set_behemoth_state_bttask.try_set_behemoth_state_bttask_C.ExecuteUbergraph_try_set_behemoth_state_bttask");

	Utry_set_behemoth_state_bttask_C_ExecuteUbergraph_try_set_behemoth_state_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
