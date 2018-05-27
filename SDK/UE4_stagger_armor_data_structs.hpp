#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct stagger_armor_data.stagger_armor_data
// 0x001C
struct Fstagger_armor_data
{
	struct FGuid                                       Armor_ID_2_0E406DFA453BDDCB5D73B29D2C6C65F4;              // 0x0000(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RemainingAmount_5_5BDFA8AE451069C24F3885BD88A50F89;       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DegenRate_7_ADC701C54538163272DF4E94BBF5A29D;             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InitialArmorAmount_10_452B9AAF43BA2E5325868DBD7DB4DCC9;   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
