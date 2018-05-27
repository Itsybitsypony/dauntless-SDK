#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass is_Single_Behemoth_Health_Higher_Than_7500_bpuc1.is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C
// 0x0014 (0x004C - 0x0038)
class Uis_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C : public UUnlockCondition_Blueprint
{
public:
	TArray<class ABp_Behemoth_C*>                      Single_Behemoth_RefArray;                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              Behemoth_Health_Float;                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass is_Single_Behemoth_Health_Higher_Than_7500_bpuc1.is_Single_Behemoth_Health_Higher_Than_7500_bpuc1_C");
		return ptr;
	}


	struct FText OnGetDescription();
	bool OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
