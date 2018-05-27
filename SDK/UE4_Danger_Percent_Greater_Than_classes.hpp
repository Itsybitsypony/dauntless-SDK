#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Danger_Percent_Greater_Than_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Danger_Percent_Greater_Than.Danger_Percent_Greater_Than_C
// 0x0004 (0x003C - 0x0038)
class UDanger_Percent_Greater_Than_C : public UUnlockCondition_Blueprint
{
public:
	float                                              Danger_;                                                  // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Danger_Percent_Greater_Than.Danger_Percent_Greater_Than_C");
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
