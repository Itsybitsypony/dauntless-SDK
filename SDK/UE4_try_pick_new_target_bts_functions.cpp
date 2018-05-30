// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_try_pick_new_target_bts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function try_pick_new_target_bts.try_pick_new_target_bts_C.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utry_pick_new_target_bts_C::ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function try_pick_new_target_bts.try_pick_new_target_bts_C.ReceiveSearchStartAI");

	Utry_pick_new_target_bts_C_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function try_pick_new_target_bts.try_pick_new_target_bts_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utry_pick_new_target_bts_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function try_pick_new_target_bts.try_pick_new_target_bts_C.ReceiveTickAI");

	Utry_pick_new_target_bts_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function try_pick_new_target_bts.try_pick_new_target_bts_C.ChristmasCheer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utry_pick_new_target_bts_C::ChristmasCheer(class APawn* ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function try_pick_new_target_bts.try_pick_new_target_bts_C.ChristmasCheer");

	Utry_pick_new_target_bts_C_ChristmasCheer_Params params;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function try_pick_new_target_bts.try_pick_new_target_bts_C.ExecuteUbergraph_try_pick_new_target_bts
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utry_pick_new_target_bts_C::ExecuteUbergraph_try_pick_new_target_bts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function try_pick_new_target_bts.try_pick_new_target_bts_C.ExecuteUbergraph_try_pick_new_target_bts");

	Utry_pick_new_target_bts_C_ExecuteUbergraph_try_pick_new_target_bts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
