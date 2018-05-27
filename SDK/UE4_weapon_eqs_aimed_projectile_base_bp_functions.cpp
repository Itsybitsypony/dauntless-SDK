// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_eqs_aimed_projectile_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function weapon_eqs_aimed_projectile_base_bp.weapon_eqs_aimed_projectile_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aweapon_eqs_aimed_projectile_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function weapon_eqs_aimed_projectile_base_bp.weapon_eqs_aimed_projectile_base_bp_C.UserConstructionScript");

	Aweapon_eqs_aimed_projectile_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
