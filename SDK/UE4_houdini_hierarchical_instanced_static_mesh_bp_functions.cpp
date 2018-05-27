// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_houdini_hierarchical_instanced_static_mesh_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function houdini_hierarchical_instanced_static_mesh_bp.houdini_hierarchical_instanced_static_mesh_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Ahoudini_hierarchical_instanced_static_mesh_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function houdini_hierarchical_instanced_static_mesh_bp.houdini_hierarchical_instanced_static_mesh_bp_C.UserConstructionScript");

	Ahoudini_hierarchical_instanced_static_mesh_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
