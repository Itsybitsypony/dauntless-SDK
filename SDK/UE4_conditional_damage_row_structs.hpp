#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_GameplayTags_classes.hpp"
#include "UE4_GameplayAbilities_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct conditional_damage_row.conditional_damage_row
// 0x0058
struct Fconditional_damage_row
{
	struct FName                                       DamageRowName_2_A80DF8404762CB17E24836AAD8D30177;         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FGameplayTagContainer                       RequireTagsToAddThisRow_6_FD6AE46346B50D7F1687F0B9EA41E21F;// 0x0008(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       ExcludeThisRowIfAnyArePresent_8_C82990A34B4F89AD80CD6FBE48C920F1;// 0x0028(0x0020) (Edit, BlueprintVisible)
	TArray<struct FGameplayAttribute>                  ScaleDamageWithTheseAttributes_13_5A35D82147DB095EE75D328BDAD929A7;// 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
