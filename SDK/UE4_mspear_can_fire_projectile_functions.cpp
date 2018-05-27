// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mspear_can_fire_projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function mspear_can_fire_projectile.mspear_can_fire_projectile_C.CanTransition
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonCharacter**       Character                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonWeapon**          Weapon                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Umspear_can_fire_projectile_C::CanTransition(class AArchonCharacter** Character, class AArchonWeapon** Weapon, struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function mspear_can_fire_projectile.mspear_can_fire_projectile_C.CanTransition");

	Umspear_can_fire_projectile_C_CanTransition_Params params;
	params.Character = Character;
	params.Weapon = Weapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
