// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobbed_projectile_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lobbed_projectile_base_bp.lobbed_projectile_base_bp_C.AuthInitializeLobbedProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Alobbed_projectile_base_bp_C::AuthInitializeLobbedProjectile(const struct FVector& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function lobbed_projectile_base_bp.lobbed_projectile_base_bp_C.AuthInitializeLobbedProjectile");

	Alobbed_projectile_base_bp_C_AuthInitializeLobbedProjectile_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lobbed_projectile_base_bp.lobbed_projectile_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alobbed_projectile_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lobbed_projectile_base_bp.lobbed_projectile_base_bp_C.UserConstructionScript");

	Alobbed_projectile_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
