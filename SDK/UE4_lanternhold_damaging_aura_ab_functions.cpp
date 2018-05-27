// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_damaging_aura_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.CanUseInMontage
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UAnimMontage**           ActiveMontage                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_damaging_aura_ab_C::CanUseInMontage(class UAnimMontage** ActiveMontage, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.CanUseInMontage");

	Ulanternhold_damaging_aura_ab_C_CanUseInMontage_Params params;
	params.ActiveMontage = ActiveMontage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ulanternhold_damaging_aura_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.K2_ActivateAbility");

	Ulanternhold_damaging_aura_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.ExecuteUbergraph_lanternhold_damaging_aura_ab
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulanternhold_damaging_aura_ab_C::ExecuteUbergraph_lanternhold_damaging_aura_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C.ExecuteUbergraph_lanternhold_damaging_aura_ab");

	Ulanternhold_damaging_aura_ab_C_ExecuteUbergraph_lanternhold_damaging_aura_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
