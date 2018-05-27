// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_waterfall_med_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function waterfall_med_00_bp.waterfall_med_00_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Awaterfall_med_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function waterfall_med_00_bp.waterfall_med_00_bp_C.UserConstructionScript");

	Awaterfall_med_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
