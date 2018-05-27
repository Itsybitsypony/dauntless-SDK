#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_autoplayer_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass autoplayer_interface.autoplayer_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uautoplayer_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass autoplayer_interface.autoplayer_interface_C");
		return ptr;
	}


	void GetAutorunMode(bool* AutorunMode);
	void StopAutoProgression();
	void TestQuestProgression(const class FString& IDToStopAt);
	void TryToAcceptQuest();
	void TryToRedeemQuests();
	void TryToCompleteQuests();
	void StartAutoplayerComp();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
