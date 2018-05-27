// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_test_reztarget_stillvalid_btdeco_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function test_reztarget_stillvalid_btdeco.test_reztarget_stillvalid_btdeco_C.PerformConditionCheckAI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Utest_reztarget_stillvalid_btdeco_C::PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function test_reztarget_stillvalid_btdeco.test_reztarget_stillvalid_btdeco_C.PerformConditionCheckAI");

	Utest_reztarget_stillvalid_btdeco_C_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function test_reztarget_stillvalid_btdeco.test_reztarget_stillvalid_btdeco_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utest_reztarget_stillvalid_btdeco_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function test_reztarget_stillvalid_btdeco.test_reztarget_stillvalid_btdeco_C.ReceiveTickAI");

	Utest_reztarget_stillvalid_btdeco_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function test_reztarget_stillvalid_btdeco.test_reztarget_stillvalid_btdeco_C.ExecuteUbergraph_test_reztarget_stillvalid_btdeco
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Utest_reztarget_stillvalid_btdeco_C::ExecuteUbergraph_test_reztarget_stillvalid_btdeco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function test_reztarget_stillvalid_btdeco.test_reztarget_stillvalid_btdeco_C.ExecuteUbergraph_test_reztarget_stillvalid_btdeco");

	Utest_reztarget_stillvalid_btdeco_C_ExecuteUbergraph_test_reztarget_stillvalid_btdeco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
