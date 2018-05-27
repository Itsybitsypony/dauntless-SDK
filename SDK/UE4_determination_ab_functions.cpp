// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_determination_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function determination_ab.determination_ab_C.DebugOutputToLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Udetermination_ab_C::DebugOutputToLog(const class FString& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function determination_ab.determination_ab_C.DebugOutputToLog");

	Udetermination_ab_C_DebugOutputToLog_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function determination_ab.determination_ab_C.GetDeterminationIncrease
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Val                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Udetermination_ab_C::GetDeterminationIncrease(class AActor* Actor, float* Val)
{
	static auto fn = UObject::FindObject<UFunction>("Function determination_ab.determination_ab_C.GetDeterminationIncrease");

	Udetermination_ab_C_GetDeterminationIncrease_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Val != nullptr)
		*Val = params.Val;
}


// Function determination_ab.determination_ab_C.Removed_9BADC101483825FE95AEA9B62A1A611E
// (BlueprintCallable, BlueprintEvent)

void Udetermination_ab_C::Removed_9BADC101483825FE95AEA9B62A1A611E()
{
	static auto fn = UObject::FindObject<UFunction>("Function determination_ab.determination_ab_C.Removed_9BADC101483825FE95AEA9B62A1A611E");

	Udetermination_ab_C_Removed_9BADC101483825FE95AEA9B62A1A611E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function determination_ab.determination_ab_C.EventReceived_3B0671084254644A328BCDA4F5E8E200
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      Payload                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Udetermination_ab_C::EventReceived_3B0671084254644A328BCDA4F5E8E200(const struct FGameplayEventData& Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function determination_ab.determination_ab_C.EventReceived_3B0671084254644A328BCDA4F5E8E200");

	Udetermination_ab_C_EventReceived_3B0671084254644A328BCDA4F5E8E200_Params params;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function determination_ab.determination_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Udetermination_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function determination_ab.determination_ab_C.K2_ActivateAbility");

	Udetermination_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function determination_ab.determination_ab_C.ExecuteUbergraph_determination_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Udetermination_ab_C::ExecuteUbergraph_determination_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function determination_ab.determination_ab_C.ExecuteUbergraph_determination_ab");

	Udetermination_ab_C_ExecuteUbergraph_determination_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
