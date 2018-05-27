// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_event_widget_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function quest_event_widget_bp.quest_event_widget_bp_C.Should Trigger Event
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           IsInCity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uquest_event_widget_bp_C::Should_Trigger_Event(bool IsInCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_event_widget_bp.quest_event_widget_bp_C.Should Trigger Event");

	Uquest_event_widget_bp_C_Should_Trigger_Event_Params params;
	params.IsInCity = IsInCity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
