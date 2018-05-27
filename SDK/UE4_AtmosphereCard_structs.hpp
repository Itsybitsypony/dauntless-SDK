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

// UserDefinedStruct AtmosphereCard.AtmosphereCard
// 0x0048
struct FAtmosphereCard
{
	float                                              rotation_2_8052D2974EC077BDC1CDAA86B6100559;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              distance_37_51427D7745536BA324781AA05348F8BA;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              height_39_30071EE14958798B969341AC95B7BBE2;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     scale_33_347235E7472E95BC9DA2598CD7277B5D;                // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              scale_multiplier_36_3F0E244A4C60D336D46E3493C7BC1F9C;     // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TAssetPtr<class UStaticMesh>                       mesh_27_9416FB6B441CEF3DC1CDACA733B793B2;                 // 0x0020(0x0020) (Edit, BlueprintVisible)
	class UMaterialInstance*                           material_31_F734CC734A5BD87AE6E8C8925C221E58;             // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
