#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_GameplayTags_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct subtree_injection_info.subtree_injection_info
// 0x0010
struct Fsubtree_injection_info
{
	struct FGameplayTag                                Tag_2_1EAEC4044C1E08E14F6011830A8FAD37;                   // 0x0000(0x0008) (Edit, BlueprintVisible)
	class UBehaviorTree*                               BehaviorTreeAsset_5_FF632CD44198B8803CB2849BB843AF88;     // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
