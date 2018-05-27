#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_cell_stacking_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct cell_effect_details.cell_effect_details
// 0x002C
struct Fcell_effect_details
{
	struct FName                                       CellEffectRowName_4_F7B32308448329B99BBD27A393AFF7A3;     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       ParsedDescriptionString_21_79382B3F4285C2568E6DDF9416F78AA9;// 0x0008(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<Ecell_stacking_type>                   StackingType_11_E793CF184E1971C76015B4A84DD7C3EE;         // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	float                                              Magnitude_15_F3613D224B62C430DBFB139618694F1E;            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Ranks_18_B969DA4C41E35CAA333B62B5A31FF298;                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
