// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanterninstant_base_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lanterninstant_base_ab.lanterninstant_base_ab_C.CallForDischarge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonLantern*          LanternObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanterninstant_base_ab_C::CallForDischarge(class AArchonLantern* LanternObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_base_ab.lanterninstant_base_ab_C.CallForDischarge");

	Ulanterninstant_base_ab_C_CallForDischarge_Params params;
	params.LanternObject = LanternObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanterninstant_base_ab.lanterninstant_base_ab_C.CanUseInMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimMontage*            ActiveMontage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulanterninstant_base_ab_C::CanUseInMontage(class UAnimMontage* ActiveMontage, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_base_ab.lanterninstant_base_ab_C.CanUseInMontage");

	Ulanterninstant_base_ab_C_CanUseInMontage_Params params;
	params.ActiveMontage = ActiveMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ulanterninstant_base_ab_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_CanActivateAbility");

	Ulanterninstant_base_ab_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ulanterninstant_base_ab_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_ActivateAbilityFromEvent");

	Ulanterninstant_base_ab_C_K2_ActivateAbilityFromEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventData != nullptr)
		*EventData = params.EventData;
}


// Function lanterninstant_base_ab.lanterninstant_base_ab_C.OnFinish_A45B31B54C10BA2832BD18960165C25E
// (BlueprintCallable, BlueprintEvent)

void Ulanterninstant_base_ab_C::OnFinish_A45B31B54C10BA2832BD18960165C25E()
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_base_ab.lanterninstant_base_ab_C.OnFinish_A45B31B54C10BA2832BD18960165C25E");

	Ulanterninstant_base_ab_C_OnFinish_A45B31B54C10BA2832BD18960165C25E_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanterninstant_base_ab.lanterninstant_base_ab_C.StartDischarge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DischargeDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanterninstant_base_ab_C::StartDischarge(float DischargeDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_base_ab.lanterninstant_base_ab_C.StartDischarge");

	Ulanterninstant_base_ab_C_StartDischarge_Params params;
	params.DischargeDuration = DischargeDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ulanterninstant_base_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_base_ab.lanterninstant_base_ab_C.K2_ActivateAbility");

	Ulanterninstant_base_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanterninstant_base_ab.lanterninstant_base_ab_C.ExecuteUbergraph_lanterninstant_base_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanterninstant_base_ab_C::ExecuteUbergraph_lanterninstant_base_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanterninstant_base_ab.lanterninstant_base_ab_C.ExecuteUbergraph_lanterninstant_base_ab");

	Ulanterninstant_base_ab_C_ExecuteUbergraph_lanterninstant_base_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
