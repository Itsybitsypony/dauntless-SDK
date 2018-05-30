// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_set_blackboard_object_from_message_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function set_blackboard_object_from_message_bttask.set_blackboard_object_from_message_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uset_blackboard_object_from_message_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function set_blackboard_object_from_message_bttask.set_blackboard_object_from_message_bttask_C.ReceiveExecuteAI");

	Uset_blackboard_object_from_message_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function set_blackboard_object_from_message_bttask.set_blackboard_object_from_message_bttask_C.ExecuteUbergraph_set_blackboard_object_from_message_bttask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uset_blackboard_object_from_message_bttask_C::ExecuteUbergraph_set_blackboard_object_from_message_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function set_blackboard_object_from_message_bttask.set_blackboard_object_from_message_bttask_C.ExecuteUbergraph_set_blackboard_object_from_message_bttask");

	Uset_blackboard_object_from_message_bttask_C_ExecuteUbergraph_set_blackboard_object_from_message_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
