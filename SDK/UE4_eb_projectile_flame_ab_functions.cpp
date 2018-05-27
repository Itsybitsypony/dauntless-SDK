// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_projectile_flame_ab_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.Spawn Projectile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Projectile_Rotation            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueb_projectile_flame_ab_C::Spawn_Projectile(float Projectile_Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.Spawn Projectile");

	Ueb_projectile_flame_ab_C_Spawn_Projectile_Params params;
	params.Projectile_Rotation = Projectile_Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void Ueb_projectile_flame_ab_C::K2_ActivateAbility()
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.K2_ActivateAbility");

	Ueb_projectile_flame_ab_C_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.ExecuteUbergraph_eb_projectile_flame_ab
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ueb_projectile_flame_ab_C::ExecuteUbergraph_eb_projectile_flame_ab(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function eb_projectile_flame_ab.eb_projectile_flame_ab_C.ExecuteUbergraph_eb_projectile_flame_ab");

	Ueb_projectile_flame_ab_C_ExecuteUbergraph_eb_projectile_flame_ab_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
