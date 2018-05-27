// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_event_dialogue2_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function quest_event_dialogue2_bp.quest_event_dialogue2_bp_C.OnProcessLocalizationDetailed
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FArchonLocalizationData> StringsToLoc                   (Parm, OutParm, ZeroConstructor)

void Uquest_event_dialogue2_bp_C::OnProcessLocalizationDetailed(TArray<struct FArchonLocalizationData>* StringsToLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_event_dialogue2_bp.quest_event_dialogue2_bp_C.OnProcessLocalizationDetailed");

	Uquest_event_dialogue2_bp_C_OnProcessLocalizationDetailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StringsToLoc != nullptr)
		*StringsToLoc = params.StringsToLoc;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
