// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_set_behemoth_loco_mode_btdeco_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.PerformConditionCheckAI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uset_behemoth_loco_mode_btdeco_C::PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.PerformConditionCheckAI");

	Uset_behemoth_loco_mode_btdeco_C_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uset_behemoth_loco_mode_btdeco_C::ReceiveObserverActivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ReceiveObserverActivatedAI");

	Uset_behemoth_loco_mode_btdeco_C_ReceiveObserverActivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uset_behemoth_loco_mode_btdeco_C::ReceiveObserverDeactivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ReceiveObserverDeactivatedAI");

	Uset_behemoth_loco_mode_btdeco_C_ReceiveObserverDeactivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ExecuteUbergraph_set_behemoth_loco_mode_btdeco
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uset_behemoth_loco_mode_btdeco_C::ExecuteUbergraph_set_behemoth_loco_mode_btdeco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function set_behemoth_loco_mode_btdeco.set_behemoth_loco_mode_btdeco_C.ExecuteUbergraph_set_behemoth_loco_mode_btdeco");

	Uset_behemoth_loco_mode_btdeco_C_ExecuteUbergraph_set_behemoth_loco_mode_btdeco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
