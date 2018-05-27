// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_archon_timed_particle_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function archon_timed_particle_bp.archon_timed_particle_bp_C.ShouldSpawnParticle
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent** MeshComp                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uarchon_timed_particle_bp_C::ShouldSpawnParticle(class USkeletalMeshComponent** MeshComp)
{
	static auto fn = UObject::FindObject<UFunction>("Function archon_timed_particle_bp.archon_timed_particle_bp_C.ShouldSpawnParticle");

	Uarchon_timed_particle_bp_C_ShouldSpawnParticle_Params params;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
