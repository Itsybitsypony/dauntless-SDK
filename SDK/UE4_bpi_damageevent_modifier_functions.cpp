// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_damageevent_modifier_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpi_damageevent_modifier.bpi_damageevent_modifier_C.GetModifyDamageEventPriority
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Priority                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpi_damageevent_modifier_C::GetModifyDamageEventPriority(int* Priority)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_damageevent_modifier.bpi_damageevent_modifier_C.GetModifyDamageEventPriority");

	Ubpi_damageevent_modifier_C_GetModifyDamageEventPriority_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Priority != nullptr)
		*Priority = params.Priority;
}


// Function bpi_damageevent_modifier.bpi_damageevent_modifier_C.CustomModifyDamageEventData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageEventData        DamageEventData                (BlueprintVisible, BlueprintReadOnly, Parm)
// class AActor*                  DamagedActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   DamageTags                     (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ModifiedDamageEventData        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FDamageEventData        OverriddenDamageEventData      (Parm, OutParm)
// bool                           ShouldOverrideDamageTags       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FGameplayTagContainer   OverriddenDamageTags           (Parm, OutParm)

void Ubpi_damageevent_modifier_C::CustomModifyDamageEventData(const struct FDamageEventData& DamageEventData, class AActor* DamagedActor, const struct FGameplayTagContainer& DamageTags, bool* ModifiedDamageEventData, struct FDamageEventData* OverriddenDamageEventData, bool* ShouldOverrideDamageTags, struct FGameplayTagContainer* OverriddenDamageTags)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_damageevent_modifier.bpi_damageevent_modifier_C.CustomModifyDamageEventData");

	Ubpi_damageevent_modifier_C_CustomModifyDamageEventData_Params params;
	params.DamageEventData = DamageEventData;
	params.DamagedActor = DamagedActor;
	params.DamageTags = DamageTags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ModifiedDamageEventData != nullptr)
		*ModifiedDamageEventData = params.ModifiedDamageEventData;
	if (OverriddenDamageEventData != nullptr)
		*OverriddenDamageEventData = params.OverriddenDamageEventData;
	if (ShouldOverrideDamageTags != nullptr)
		*ShouldOverrideDamageTags = params.ShouldOverrideDamageTags;
	if (OverriddenDamageTags != nullptr)
		*OverriddenDamageTags = params.OverriddenDamageTags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
