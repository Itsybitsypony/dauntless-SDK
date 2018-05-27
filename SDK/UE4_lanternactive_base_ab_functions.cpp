// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternactive_base_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lanternactive_base_ab.lanternactive_base_ab_C.CanUseInMontage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimMontage*            ActiveMontage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulanternactive_base_ab_C::CanUseInMontage(class UAnimMontage* ActiveMontage, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternactive_base_ab.lanternactive_base_ab_C.CanUseInMontage");

	Ulanternactive_base_ab_C_CanUseInMontage_Params params;
	params.ActiveMontage = ActiveMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function lanternactive_base_ab.lanternactive_base_ab_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ulanternactive_base_ab_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternactive_base_ab.lanternactive_base_ab_C.K2_CanActivateAbility");

	Ulanternactive_base_ab_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function lanternactive_base_ab.lanternactive_base_ab_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData      EventData                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ulanternactive_base_ab_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternactive_base_ab.lanternactive_base_ab_C.K2_ActivateAbilityFromEvent");

	Ulanternactive_base_ab_C_K2_ActivateAbilityFromEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventData != nullptr)
		*EventData = params.EventData;
}


// Function lanternactive_base_ab.lanternactive_base_ab_C.OnFinish_C21894154EC4604DD4EC4081A5A5C8BB
// (BlueprintCallable, BlueprintEvent)

void Ulanternactive_base_ab_C::OnFinish_C21894154EC4604DD4EC4081A5A5C8BB()
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternactive_base_ab.lanternactive_base_ab_C.OnFinish_C21894154EC4604DD4EC4081A5A5C8BB");

	Ulanternactive_base_ab_C_OnFinish_C21894154EC4604DD4EC4081A5A5C8BB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternactive_base_ab.lanternactive_base_ab_C.StartDischarge
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DischargeDuration              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternactive_base_ab_C::StartDischarge(float DischargeDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternactive_base_ab.lanternactive_base_ab_C.StartDischarge");

	Ulanternactive_base_ab_C_StartDischarge_Params params;
	params.DischargeDuration = DischargeDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternactive_base_ab.lanternactive_base_ab_C.ExecuteUbergraph_lanternactive_base_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternactive_base_ab_C::ExecuteUbergraph_lanternactive_base_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternactive_base_ab.lanternactive_base_ab_C.ExecuteUbergraph_lanternactive_base_ab");

	Ulanternactive_base_ab_C_ExecuteUbergraph_lanternactive_base_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
