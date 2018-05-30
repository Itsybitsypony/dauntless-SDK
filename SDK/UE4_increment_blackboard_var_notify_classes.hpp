#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_increment_blackboard_var_notify_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass increment_blackboard_var_notify.increment_blackboard_var_notify_C
// 0x0054 (0x008C - 0x0038)
class Uincrement_blackboard_var_notify_C : public UAnimNotify
{
public:
	struct FName                                       BlackboardResultKeyName;                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct Fsimplified_blackboard_key_data             InputValue;                                               // 0x0040(0x0040) (Edit, BlueprintVisible)
	int                                                AmountToIncrementBy;                                      // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IncrementRandomly;                                        // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	int                                                MinAmountToIncrementByIfRandom;                           // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass increment_blackboard_var_notify.increment_blackboard_var_notify_C");
		return ptr;
	}


	bool Received_Notify(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
