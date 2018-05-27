#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_multi_flame_projectile_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eb_multi_flame_projectile_bp.eb_multi_flame_projectile_bp_C
// 0x0000 (0x0660 - 0x0660)
class Aeb_multi_flame_projectile_bp_C : public Aweapon_eqs_aimed_projectile_base_bp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eb_multi_flame_projectile_bp.eb_multi_flame_projectile_bp_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
