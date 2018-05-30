// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cedar_moss_02_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cedar_moss_02_bp.cedar_moss_02_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acedar_moss_02_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cedar_moss_02_bp.cedar_moss_02_bp_C.UserConstructionScript");

	Acedar_moss_02_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
