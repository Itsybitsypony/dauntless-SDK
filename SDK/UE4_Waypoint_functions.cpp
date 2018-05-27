// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Waypoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Waypoint.Waypoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AWaypoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Waypoint.Waypoint_C.UserConstructionScript");

	AWaypoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
