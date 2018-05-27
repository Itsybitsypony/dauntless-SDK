// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_03_particles_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function atmospheres_03_particles_bp.atmospheres_03_particles_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_03_particles_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_03_particles_bp.atmospheres_03_particles_bp_C.UserConstructionScript");

	Aatmospheres_03_particles_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
