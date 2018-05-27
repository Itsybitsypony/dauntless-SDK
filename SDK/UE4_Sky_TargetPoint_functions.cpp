// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Sky_TargetPoint_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sky_TargetPoint.Sky_TargetPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASky_TargetPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sky_TargetPoint.Sky_TargetPoint_C.UserConstructionScript");

	ASky_TargetPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
