// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_BehemothAction_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_BehemothAction.BTTask_BehemothAction_C.OuputLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBTTask_BehemothAction_C::OuputLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BehemothAction.BTTask_BehemothAction_C.OuputLocation");

	UBTTask_BehemothAction_C_OuputLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_BehemothAction_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveExecuteAI");

	UBTTask_BehemothAction_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_BehemothAction_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveAbortAI");

	UBTTask_BehemothAction_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_BehemothAction.BTTask_BehemothAction_C.OnMontageBlendingOut_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_BehemothAction_C::OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BehemothAction.BTTask_BehemothAction_C.OnMontageBlendingOut_Event_1");

	UBTTask_BehemothAction_C_OnMontageBlendingOut_Event_1_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_BehemothAction.BTTask_BehemothAction_C.Finish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_BehemothAction_C::Finish(bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BehemothAction.BTTask_BehemothAction_C.Finish");

	UBTTask_BehemothAction_C_Finish_Params params;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_BehemothAction_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BehemothAction.BTTask_BehemothAction_C.ReceiveTickAI");

	UBTTask_BehemothAction_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_BehemothAction.BTTask_BehemothAction_C.Event_EarlyOut
// (BlueprintCallable, BlueprintEvent)

void UBTTask_BehemothAction_C::Event_EarlyOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BehemothAction.BTTask_BehemothAction_C.Event_EarlyOut");

	UBTTask_BehemothAction_C_Event_EarlyOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_BehemothAction.BTTask_BehemothAction_C.ExecuteUbergraph_BTTask_BehemothAction
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_BehemothAction_C::ExecuteUbergraph_BTTask_BehemothAction(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_BehemothAction.BTTask_BehemothAction_C.ExecuteUbergraph_BTTask_BehemothAction");

	UBTTask_BehemothAction_C_ExecuteUbergraph_BTTask_BehemothAction_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
