// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_meter_gaining_rules_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function meter_gaining_rules.meter_gaining_rules_C.CanWeaponBuildMeterOffTarget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                  Target                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanLifeStealFromThisTarget     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanBuildLanternChargeFromThisTarget (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           CanBuildWeaponMeterFromThisTarget (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Umeter_gaining_rules_C::STATIC_CanWeaponBuildMeterOffTarget(class AActor* Target, class UObject* __WorldContext, bool* CanLifeStealFromThisTarget, bool* CanBuildLanternChargeFromThisTarget, bool* CanBuildWeaponMeterFromThisTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function meter_gaining_rules.meter_gaining_rules_C.CanWeaponBuildMeterOffTarget");

	Umeter_gaining_rules_C_CanWeaponBuildMeterOffTarget_Params params;
	params.Target = Target;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanLifeStealFromThisTarget != nullptr)
		*CanLifeStealFromThisTarget = params.CanLifeStealFromThisTarget;
	if (CanBuildLanternChargeFromThisTarget != nullptr)
		*CanBuildLanternChargeFromThisTarget = params.CanBuildLanternChargeFromThisTarget;
	if (CanBuildWeaponMeterFromThisTarget != nullptr)
		*CanBuildWeaponMeterFromThisTarget = params.CanBuildWeaponMeterFromThisTarget;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
