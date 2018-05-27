#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_hunt_modifier_tag_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct hunt_modifier_info.hunt_modifier_info
// 0x0068
struct Fhunt_modifier_info
{
	float                                              HuntComplexityModifier_8_59C36E2C4793502ACFC8C0A980348C54;// 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HuntDifficultyModifier_10_28EFD7754EE77A82E835B1AF16E273E1;// 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UHunt_Modifier>                    ModifierAssetID_23_51A3A31D4E3AD2BBEC380DB81FF4BAD4;      // 0x0008(0x0020) (Edit, BlueprintVisible)
	TArray<TEnumAsByte<Ehunt_modifier_tag>>            ModifierTags_20_FD4D6B4A401D6EF0DD14489547CAAADF;         // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FText                                       ModifierName_31_3DF6DD6D4BFE55E4F9139FB8505614B8;         // 0x0038(0x0018) (Edit, BlueprintVisible)
	struct FText                                       ModifierDescription_32_368D41F0406EB49596C9DC9790857368;  // 0x0050(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
