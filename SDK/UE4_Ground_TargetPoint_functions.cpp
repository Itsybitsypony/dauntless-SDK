// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ground_TargetPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ground_TargetPoint.Ground_TargetPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGround_TargetPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ground_TargetPoint.Ground_TargetPoint_C.UserConstructionScript");

	AGround_TargetPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
