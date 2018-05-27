// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_multi_flame_projectile_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eb_multi_flame_projectile_bp.eb_multi_flame_projectile_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aeb_multi_flame_projectile_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_multi_flame_projectile_bp.eb_multi_flame_projectile_bp_C.UserConstructionScript");

	Aeb_multi_flame_projectile_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
