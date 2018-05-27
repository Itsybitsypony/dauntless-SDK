#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_quest_event_widget_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass quest_event_widget_bp.quest_event_widget_bp_C
// 0x000B (0x003B - 0x0030)
class Uquest_event_widget_bp_C : public UQuestEventData
{
public:
	class UClass*                                      Widget;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCity;                                                    // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsland;                                                  // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnOutro;                                             // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass quest_event_widget_bp.quest_event_widget_bp_C");
		return ptr;
	}


	bool Should_Trigger_Event(bool IsInCity);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
