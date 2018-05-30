// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_activate_patrol_point_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function activate_patrol_point_bttask.activate_patrol_point_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uactivate_patrol_point_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function activate_patrol_point_bttask.activate_patrol_point_bttask_C.ReceiveExecuteAI");

	Uactivate_patrol_point_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function activate_patrol_point_bttask.activate_patrol_point_bttask_C.ExecuteUbergraph_activate_patrol_point_bttask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uactivate_patrol_point_bttask_C::ExecuteUbergraph_activate_patrol_point_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function activate_patrol_point_bttask.activate_patrol_point_bttask_C.ExecuteUbergraph_activate_patrol_point_bttask");

	Uactivate_patrol_point_bttask_C_ExecuteUbergraph_activate_patrol_point_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
