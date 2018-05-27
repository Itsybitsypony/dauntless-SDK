// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_event_audio_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function quest_event_audio_bp.quest_event_audio_bp_C.GetEvent
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UAkAudioEventBase*       Event                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uquest_event_audio_bp_C::GetEvent(class UAkAudioEventBase** Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_event_audio_bp.quest_event_audio_bp_C.GetEvent");

	Uquest_event_audio_bp_C_GetEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Event != nullptr)
		*Event = params.Event;
}


// Function quest_event_audio_bp.quest_event_audio_bp_C.HasText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           TextPresent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uquest_event_audio_bp_C::HasText(bool* TextPresent)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_event_audio_bp.quest_event_audio_bp_C.HasText");

	Uquest_event_audio_bp_C_HasText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TextPresent != nullptr)
		*TextPresent = params.TextPresent;
}


// Function quest_event_audio_bp.quest_event_audio_bp_C.GetText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UArchonSpeaker*          Speaker                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EArchonGender                  PlayerGender                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Text                           (Parm, OutParm)

void Uquest_event_audio_bp_C::GetText(class UArchonSpeaker* Speaker, EArchonGender PlayerGender, struct FText* Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_event_audio_bp.quest_event_audio_bp_C.GetText");

	Uquest_event_audio_bp_C_GetText_Params params;
	params.Speaker = Speaker;
	params.PlayerGender = PlayerGender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;
}


// Function quest_event_audio_bp.quest_event_audio_bp_C.OnProcessLocalizationDetailed
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FArchonLocalizationData> StringsToLoc                   (Parm, OutParm, ZeroConstructor)

void Uquest_event_audio_bp_C::OnProcessLocalizationDetailed(TArray<struct FArchonLocalizationData>* StringsToLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function quest_event_audio_bp.quest_event_audio_bp_C.OnProcessLocalizationDetailed");

	Uquest_event_audio_bp_C_OnProcessLocalizationDetailed_Params params;

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
