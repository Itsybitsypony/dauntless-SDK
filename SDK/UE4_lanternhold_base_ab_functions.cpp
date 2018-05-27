// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_base_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lanternhold_base_ab.lanternhold_base_ab_C.K2_CanActivateAbility
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo* ActorInfo                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGameplayTagContainer   RelevantTags                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ulanternhold_base_ab_C::K2_CanActivateAbility(struct FGameplayAbilityActorInfo* ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_base_ab.lanternhold_base_ab_C.K2_CanActivateAbility");

	Ulanternhold_base_ab_C_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;

	return params.ReturnValue;
}


// Function lanternhold_base_ab.lanternhold_base_ab_C.CallForDischarge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonLantern**         LanternObject                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_base_ab_C::CallForDischarge(class AArchonLantern** LanternObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_base_ab.lanternhold_base_ab_C.CallForDischarge");

	Ulanternhold_base_ab_C_CallForDischarge_Params params;
	params.LanternObject = LanternObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_base_ab.lanternhold_base_ab_C.ExecuteUbergraph_lanternhold_base_ab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_base_ab_C::ExecuteUbergraph_lanternhold_base_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_base_ab.lanternhold_base_ab_C.ExecuteUbergraph_lanternhold_base_ab");

	Ulanternhold_base_ab_C_ExecuteUbergraph_lanternhold_base_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
