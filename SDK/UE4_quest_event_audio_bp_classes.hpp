#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_event_audio_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass quest_event_audio_bp.quest_event_audio_bp_C
// 0x0028 (0x0058 - 0x0030)
class Uquest_event_audio_bp_C : public UQuestEventData
{
public:
	class UAkAudioEventBase*                           AudioEvent;                                               // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      Subtitle;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      TranslationNotes;                                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass quest_event_audio_bp.quest_event_audio_bp_C");
		return ptr;
	}


	void GetEvent(class UAkAudioEventBase** Event);
	void HasText(bool* TextPresent);
	void GetText(class UArchonSpeaker* Speaker, EArchonGender PlayerGender, struct FText* Text);
	void OnProcessLocalizationDetailed(TArray<struct FArchonLocalizationData>* StringsToLoc);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
