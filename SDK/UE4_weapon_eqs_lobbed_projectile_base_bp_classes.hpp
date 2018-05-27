#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_weapon_eqs_lobbed_projectile_base_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass weapon_eqs_lobbed_projectile_base_bp.weapon_eqs_lobbed_projectile_base_bp_C
// 0x0000 (0x0668 - 0x0668)
class Aweapon_eqs_lobbed_projectile_base_bp_C : public Alobbed_projectile_base_bp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass weapon_eqs_lobbed_projectile_base_bp.weapon_eqs_lobbed_projectile_base_bp_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
