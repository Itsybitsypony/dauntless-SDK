// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_add_stagger_armor_bttask_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function add_stagger_armor_bttask.add_stagger_armor_bttask_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uadd_stagger_armor_bttask_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function add_stagger_armor_bttask.add_stagger_armor_bttask_C.ReceiveExecuteAI");

	Uadd_stagger_armor_bttask_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function add_stagger_armor_bttask.add_stagger_armor_bttask_C.ExecuteUbergraph_add_stagger_armor_bttask
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uadd_stagger_armor_bttask_C::ExecuteUbergraph_add_stagger_armor_bttask(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function add_stagger_armor_bttask.add_stagger_armor_bttask_C.ExecuteUbergraph_add_stagger_armor_bttask");

	Uadd_stagger_armor_bttask_C_ExecuteUbergraph_add_stagger_armor_bttask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
