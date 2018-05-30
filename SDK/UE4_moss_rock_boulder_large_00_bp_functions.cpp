// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_moss_rock_boulder_large_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function moss_rock_boulder_large_00_bp.moss_rock_boulder_large_00_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Amoss_rock_boulder_large_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function moss_rock_boulder_large_00_bp.moss_rock_boulder_large_00_bp_C.UserConstructionScript");

	Amoss_rock_boulder_large_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
