#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_behemoth_part_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct part_break_description.part_break_description
// 0x0020
struct Fpart_break_description
{
	TEnumAsByte<Ebehemoth_part_type>                   PartResistType_35_E04834E740378A570087C29CF75BB068;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       LootString_49_4C7A00FD47DEB09FE9DB74B8A2382E09;           // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeLimit_14_100C6C4C4B1D94E8BBC56DA5CC2927CA;            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StageDeltaOnBreak_25_FB909B7B4AD5C48EB76F8FB679618859;    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StageDeltaOnTimeExpired_21_DE760D79485E1E85B7E6CCA64C936D0A;// 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeBrokenThroughRegularDamage_54_3BD0F9B846A97E98778F0BA9243AF7E1;// 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TriggerSeverOnBreak_20_CB3CFA474CE2EE5E23E492B74555CCFA;  // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DisableCollisionInThisState_51_A48C53AB408233A11E47798E48F6B069;// 0x001E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeExposed_56_ADC2E25F4FC04456DF6D44B39D85E67E;         // 0x001F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
