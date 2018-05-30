// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cooldown_btdeco_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cooldown_btdeco.cooldown_btdeco_C.GetNewCooldown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          NewCooldown                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucooldown_btdeco_C::GetNewCooldown(class UBlackboardComponent* Blackboard, float* NewCooldown)
{
	static auto fn = UObject::FindObject<UFunction>("Function cooldown_btdeco.cooldown_btdeco_C.GetNewCooldown");

	Ucooldown_btdeco_C_GetNewCooldown_Params params;
	params.Blackboard = Blackboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewCooldown != nullptr)
		*NewCooldown = params.NewCooldown;
}


// Function cooldown_btdeco.cooldown_btdeco_C.GetCooldownStartTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBlackboardComponent*    Blackboard                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          CooldownStartTime              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucooldown_btdeco_C::GetCooldownStartTime(class UBlackboardComponent* Blackboard, float* CooldownStartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function cooldown_btdeco.cooldown_btdeco_C.GetCooldownStartTime");

	Ucooldown_btdeco_C_GetCooldownStartTime_Params params;
	params.Blackboard = Blackboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CooldownStartTime != nullptr)
		*CooldownStartTime = params.CooldownStartTime;
}


// Function cooldown_btdeco.cooldown_btdeco_C.PerformConditionCheckAI
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ucooldown_btdeco_C::PerformConditionCheckAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function cooldown_btdeco.cooldown_btdeco_C.PerformConditionCheckAI");

	Ucooldown_btdeco_C_PerformConditionCheckAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function cooldown_btdeco.cooldown_btdeco_C.ReceiveObserverActivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucooldown_btdeco_C::ReceiveObserverActivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function cooldown_btdeco.cooldown_btdeco_C.ReceiveObserverActivatedAI");

	Ucooldown_btdeco_C_ReceiveObserverActivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cooldown_btdeco.cooldown_btdeco_C.ReceiveObserverDeactivatedAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucooldown_btdeco_C::ReceiveObserverDeactivatedAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function cooldown_btdeco.cooldown_btdeco_C.ReceiveObserverDeactivatedAI");

	Ucooldown_btdeco_C_ReceiveObserverDeactivatedAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cooldown_btdeco.cooldown_btdeco_C.ExecuteUbergraph_cooldown_btdeco
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucooldown_btdeco_C::ExecuteUbergraph_cooldown_btdeco(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cooldown_btdeco.cooldown_btdeco_C.ExecuteUbergraph_cooldown_btdeco");

	Ucooldown_btdeco_C_ExecuteUbergraph_cooldown_btdeco_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
