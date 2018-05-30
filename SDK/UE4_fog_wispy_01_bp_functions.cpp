// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fog_wispy_01_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function fog_wispy_01_bp.fog_wispy_01_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Afog_wispy_01_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function fog_wispy_01_bp.fog_wispy_01_bp_C.UserConstructionScript");

	Afog_wispy_01_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
