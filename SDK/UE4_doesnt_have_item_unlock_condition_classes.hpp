#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_doesnt_have_item_unlock_condition_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass doesnt_have_item_unlock_condition.doesnt_have_item_unlock_condition_C
// 0x0010 (0x0048 - 0x0038)
class Udoesnt_have_item_unlock_condition_C : public UUnlockCondition_Blueprint
{
public:
	TArray<struct FName>                               ExcludedItems;                                            // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass doesnt_have_item_unlock_condition.doesnt_have_item_unlock_condition_C");
		return ptr;
	}


	struct FText OnGetDescription();
	bool OnCommit(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
	bool OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
