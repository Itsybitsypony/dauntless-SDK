#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hunt_quest_monitor_bpi_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C
// 0x0000 (0x0028 - 0x0028)
class Uhunt_quest_monitor_bpi_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass hunt_quest_monitor_bpi.hunt_quest_monitor_bpi_C");
		return ptr;
	}


	void UnpauseQuestMonitorComponent();
	void PauseQuestMonitorComponent();
	void MuteQuestMonitorComponent(bool* OutEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
