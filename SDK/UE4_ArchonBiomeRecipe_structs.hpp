#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"
#include "UE4_ArchonMaterialRecipe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ArchonBiomeRecipe.EArchonSubBiomeRegionRecipeType
enum class EArchonSubBiomeRegionRecipeType : uint8_t
{
	ArchonSubBiomeRegionRecipe_Arena = 0,
	ArchonSubBiomeRegionRecipe_Outcrop = 1,
	ArchonSubBiomeRegionRecipe_Edge = 2,
	ArchonSubBiomeRegionRecipe_Bridge = 3,
	ArchonSubBiomeRegionRecipe_StillWater = 4,
	ArchonSubBiomeRegionRecipe_FlowingWater = 5,
	ArchonSubBiomeRegionRecipe_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ArchonBiomeRecipe.ArchonBiomeRecipeSlot
// 0x0018
struct FArchonBiomeRecipeSlot
{
	class FString                                      ArchonSubBiomeRecipeSlotName;                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	class UArchonSubBiomeRecipe*                       ArchonSubBiomeRecipe;                                     // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ArchonBiomeRecipe.ArchonBiomeRecipeLayerSlot
// 0x0018
struct FArchonBiomeRecipeLayerSlot
{
	class FString                                      ArchonBiomeRecipeLayerName;                               // 0x0000(0x0010) (Edit, ZeroConstructor)
	class ULandscapeLayerInfoObject*                   LandscapeLayerInfoObject;                                 // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ArchonBiomeRecipe.ArchonSubBiomeRegionRecipeSlot
// 0x0010
struct FArchonSubBiomeRegionRecipeSlot
{
	TEnumAsByte<EArchonSubBiomeRegionRecipeType>       SubBiomeRegionRecipeType;                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              SubBiomeRegionRecipeRatio;                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UArchonSubBiomeRegionRecipe*                 SubBiomeRegionRecipe;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
