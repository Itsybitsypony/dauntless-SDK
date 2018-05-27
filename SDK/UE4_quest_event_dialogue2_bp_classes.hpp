#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_event_dialogue2_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass quest_event_dialogue2_bp.quest_event_dialogue2_bp_C
// 0x0010 (0x0040 - 0x0030)
class Uquest_event_dialogue2_bp_C : public UQuestEventData
{
public:
	TArray<struct FArchonDialogLine>                   Lines;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass quest_event_dialogue2_bp.quest_event_dialogue2_bp_C");
		return ptr;
	}


	void OnProcessLocalizationDetailed(TArray<struct FArchonLocalizationData>* StringsToLoc);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
