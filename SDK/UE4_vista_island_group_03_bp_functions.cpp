// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_vista_island_group_03_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function vista_island_group_03_bp.vista_island_group_03_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Avista_island_group_03_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function vista_island_group_03_bp.vista_island_group_03_bp_C.UserConstructionScript");

	Avista_island_group_03_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
