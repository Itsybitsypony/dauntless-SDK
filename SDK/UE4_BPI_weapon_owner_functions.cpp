// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_weapon_owner_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPI_weapon_owner.BPI_weapon_owner_C.GetOwnedWeapon
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonWeapon*           Weapon                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBPI_weapon_owner_C::GetOwnedWeapon(class AArchonWeapon** Weapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_weapon_owner.BPI_weapon_owner_C.GetOwnedWeapon");

	UBPI_weapon_owner_C_GetOwnedWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Weapon != nullptr)
		*Weapon = params.Weapon;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
