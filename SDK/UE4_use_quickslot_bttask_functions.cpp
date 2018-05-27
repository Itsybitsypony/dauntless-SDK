// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_use_quickslot_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function use_quickslot_bttask.use_quickslot_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uuse_quickslot_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function use_quickslot_bttask.use_quickslot_bttask_C.ReceiveExecuteAI");

	Uuse_quickslot_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function use_quickslot_bttask.use_quickslot_bttask_C.ExecuteUbergraph_use_quickslot_bttask
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uuse_quickslot_bttask_C::ExecuteUbergraph_use_quickslot_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function use_quickslot_bttask.use_quickslot_bttask_C.ExecuteUbergraph_use_quickslot_bttask");

	Uuse_quickslot_bttask_C_ExecuteUbergraph_use_quickslot_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
