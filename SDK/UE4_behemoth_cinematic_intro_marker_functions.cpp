// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_cinematic_intro_marker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_cinematic_intro_marker.behemoth_cinematic_intro_marker_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Abehemoth_cinematic_intro_marker_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_cinematic_intro_marker.behemoth_cinematic_intro_marker_C.UserConstructionScript");

	Abehemoth_cinematic_intro_marker_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
