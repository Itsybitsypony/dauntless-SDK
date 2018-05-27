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

// UserDefinedStruct Struct_ActionHitArea.Struct_ActionHitArea
// 0x001C
struct FStruct_ActionHitArea
{
	struct FVector                                     Offset_2_DAEB795B41C8E3AF969CD2BDBD779FFA;                // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Extent_5_45A383A34D28A6AADDA271B96F0A9B81;                // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HitAreaYaw_8_E71853BB4604D2BF21C3EC928FB69F94;            // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
