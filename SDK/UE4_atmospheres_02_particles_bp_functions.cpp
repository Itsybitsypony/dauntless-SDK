// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_atmospheres_02_particles_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function atmospheres_02_particles_bp.atmospheres_02_particles_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Aatmospheres_02_particles_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function atmospheres_02_particles_bp.atmospheres_02_particles_bp_C.UserConstructionScript");

	Aatmospheres_02_particles_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
