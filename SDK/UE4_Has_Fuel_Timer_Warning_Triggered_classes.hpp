#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Has_Fuel_Timer_Warning_Triggered_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C
// 0x0000 (0x0038 - 0x0038)
class UHas_Fuel_Timer_Warning_Triggered_C : public UUnlockCondition_Blueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C");
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
