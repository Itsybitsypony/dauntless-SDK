#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_QuestMap_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass QuestMap_interface.QuestMap_interface_C
// 0x0000 (0x0028 - 0x0028)
class UQuestMap_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestMap_interface.QuestMap_interface_C");
		return ptr;
	}


	void GetQuestWorldLocation(struct FVector* Location);
	void HasAvailableQuests(bool* Return_Value);
	void HasRedeemableQuests(bool* Return_Value);
	void DragLocationVector(const struct FVector2D& Location);
	void FastTravel(class AArchonWorldLocation_C* Location);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
