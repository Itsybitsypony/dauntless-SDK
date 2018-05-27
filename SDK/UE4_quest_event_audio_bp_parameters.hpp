#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_event_audio_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function quest_event_audio_bp.quest_event_audio_bp_C.GetEvent
struct Uquest_event_audio_bp_C_GetEvent_Params
{
	class UAkAudioEventBase*                           Event;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function quest_event_audio_bp.quest_event_audio_bp_C.HasText
struct Uquest_event_audio_bp_C_HasText_Params
{
	bool                                               TextPresent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function quest_event_audio_bp.quest_event_audio_bp_C.GetText
struct Uquest_event_audio_bp_C_GetText_Params
{
	class UArchonSpeaker*                              Speaker;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EArchonGender                                      PlayerGender;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Text;                                                     // (Parm, OutParm)
};

// Function quest_event_audio_bp.quest_event_audio_bp_C.OnProcessLocalizationDetailed
struct Uquest_event_audio_bp_C_OnProcessLocalizationDetailed_Params
{
	TArray<struct FArchonLocalizationData>             StringsToLoc;                                             // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
