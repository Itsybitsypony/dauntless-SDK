#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_combat_text_direction_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct floating_combat_text_item.floating_combat_text_item
// 0x0080
struct Ffloating_combat_text_item
{
	class UWidgetComponent*                            WidgetRef_13_8031925F4561388E35E45A8940A108D2;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime_7_84E21A1D49DC629F7E792CB9D16A840F;             // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Amount_16_574E9F0E433BD07CB3AA96809B2840D8;               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageInstigator_19_E21223934E542C5072AE949F2B6CC40A;     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     TextVelocity_22_6C56F06046ECAA95D5C37CAED793B5F3;         // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FText                                       ExplicitText_38_A09798B0473F758CAE7139823E1043D4;         // 0x0028(0x0018) (Edit, BlueprintVisible)
	struct FLinearColor                                BaseColor_28_F6E261BB410E2A898798808EE6F2D63E;            // 0x0040(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<Ecombat_text_direction>                ForceDirection_31_211897DC4B935F36E47FE3B9EC6ECE8C;       // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasImpactLocation_37_316F410C4037A78A0CAC468316DE61F5;    // 0x0051(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	struct FVector                                     ImpactLocation_34_B0BE07A1464469A7AE4EA090EBE2A3C2;       // 0x0054(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Tyicon_42_C43325AA43866FEFAC7B87B5E032B612;               // 0x0060(0x0020) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
