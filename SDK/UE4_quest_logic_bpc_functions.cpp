// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_logic_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function quest_logic_bpc.quest_logic_bpc_C.OnRep_bIsTutorialIsland
// (BlueprintCallable, BlueprintEvent)

void Uquest_logic_bpc_C::OnRep_bIsTutorialIsland()
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.OnRep_bIsTutorialIsland");

	Uquest_logic_bpc_C_OnRep_bIsTutorialIsland_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.GetInputLastRecordedTime
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Equest_button_input_types_enum> Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          LastRecordedTime               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uquest_logic_bpc_C::GetInputLastRecordedTime(TEnumAsByte<Equest_button_input_types_enum> Input, float* LastRecordedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.GetInputLastRecordedTime");

	Uquest_logic_bpc_C_GetInputLastRecordedTime_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LastRecordedTime != nullptr)
		*LastRecordedTime = params.LastRecordedTime;
}


// Function quest_logic_bpc.quest_logic_bpc_C.SetInputLastRecordedTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Equest_button_input_types_enum> Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uquest_logic_bpc_C::SetInputLastRecordedTime(TEnumAsByte<Equest_button_input_types_enum> Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.SetInputLastRecordedTime");

	Uquest_logic_bpc_C_SetInputLastRecordedTime_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.ClearConditionTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ConditionGUID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uquest_logic_bpc_C::ClearConditionTimer(const class FString& ConditionGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.ClearConditionTimer");

	Uquest_logic_bpc_C_ClearConditionTimer_Params params;
	params.ConditionGUID = ConditionGUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.GetConditionTimerValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ConditionID                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          TimerValue                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uquest_logic_bpc_C::GetConditionTimerValue(const class FString& ConditionID, float* TimerValue, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.GetConditionTimerValue");

	Uquest_logic_bpc_C_GetConditionTimerValue_Params params;
	params.ConditionID = ConditionID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimerValue != nullptr)
		*TimerValue = params.TimerValue;
	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function quest_logic_bpc.quest_logic_bpc_C.StartConditionTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ConditionGUID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uquest_logic_bpc_C::StartConditionTimer(const class FString& ConditionGUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.StartConditionTimer");

	Uquest_logic_bpc_C_StartConditionTimer_Params params;
	params.ConditionGUID = ConditionGUID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uquest_logic_bpc_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.ReceiveBeginPlay");

	Uquest_logic_bpc_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.BehemothFlee
// (BlueprintCallable, BlueprintEvent)

void Uquest_logic_bpc_C::BehemothFlee()
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.BehemothFlee");

	Uquest_logic_bpc_C_BehemothFlee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.OnOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OverlappedActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uquest_logic_bpc_C::OnOverlap(class AActor* OverlappedActor, class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.OnOverlap");

	Uquest_logic_bpc_C_OnOverlap_Params params;
	params.OverlappedActor = OverlappedActor;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.CheckButtonInput
// (BlueprintCallable, BlueprintEvent)

void Uquest_logic_bpc_C::CheckButtonInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.CheckButtonInput");

	Uquest_logic_bpc_C_CheckButtonInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.ActorGameplayStart
// (BlueprintCallable, BlueprintEvent)

void Uquest_logic_bpc_C::ActorGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.ActorGameplayStart");

	Uquest_logic_bpc_C_ActorGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.StartInputMonitorTimer
// (BlueprintCallable, BlueprintEvent)

void Uquest_logic_bpc_C::StartInputMonitorTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.StartInputMonitorTimer");

	Uquest_logic_bpc_C_StartInputMonitorTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.OnPlayerTakeDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uquest_logic_bpc_C::OnPlayerTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.OnPlayerTakeDamage");

	Uquest_logic_bpc_C_OnPlayerTakeDamage_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.SetWispPickupTime
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uquest_logic_bpc_C::SetWispPickupTime(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.SetWispPickupTime");

	Uquest_logic_bpc_C_SetWispPickupTime_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function quest_logic_bpc.quest_logic_bpc_C.ExecuteUbergraph_quest_logic_bpc
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uquest_logic_bpc_C::ExecuteUbergraph_quest_logic_bpc(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_logic_bpc.quest_logic_bpc_C.ExecuteUbergraph_quest_logic_bpc");

	Uquest_logic_bpc_C_ExecuteUbergraph_quest_logic_bpc_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
