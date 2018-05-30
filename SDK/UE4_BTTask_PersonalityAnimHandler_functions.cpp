// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_PersonalityAnimHandler_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.OuputLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBTTask_PersonalityAnimHandler_C::OuputLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.OuputLocation");

	UBTTask_PersonalityAnimHandler_C_OuputLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PersonalityAnimHandler_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveExecuteAI");

	UBTTask_PersonalityAnimHandler_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveAbortAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PersonalityAnimHandler_C::ReceiveAbortAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveAbortAI");

	UBTTask_PersonalityAnimHandler_C_ReceiveAbortAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PersonalityAnimHandler_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ReceiveTickAI");

	UBTTask_PersonalityAnimHandler_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ExecuteUbergraph_BTTask_PersonalityAnimHandler
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_PersonalityAnimHandler_C::ExecuteUbergraph_BTTask_PersonalityAnimHandler(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_PersonalityAnimHandler.BTTask_PersonalityAnimHandler_C.ExecuteUbergraph_BTTask_PersonalityAnimHandler");

	UBTTask_PersonalityAnimHandler_C_ExecuteUbergraph_BTTask_PersonalityAnimHandler_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
