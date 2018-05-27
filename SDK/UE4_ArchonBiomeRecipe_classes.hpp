#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonBiomeRecipe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ArchonBiomeRecipe.ArchonBiomeRecipe
// 0x0058 (0x0080 - 0x0028)
class UArchonBiomeRecipe : public UObject
{
public:
	class FString                                      BiomeDescription;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UArchonSubBiomeRecipe*                       DefaultSubBiomeRecipe;                                    // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FArchonBiomeRecipeSlot>              SubBiomeRecipes;                                          // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UMaterialInterface*                          BiomeLandscapeMaterial;                                   // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          BiomeLandscapeHoleMaterial;                               // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class ULandscapeLayerInfoObject*                   BiomeAccumulationLayerInfoObject;                         // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FArchonBiomeRecipeLayerSlot>         BiomeRecipeLayerSlots;                                    // 0x0068(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0078(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonBiomeRecipe.ArchonBiomeRecipe");
		return ptr;
	}

};


// Class ArchonBiomeRecipe.ArchonSubBiomeRecipe
// 0x0088 (0x00B0 - 0x0028)
class UArchonSubBiomeRecipe : public UObject
{
public:
	class FString                                      SubBiomeDescription;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FArchonSubBiomeRegionRecipeSlot>     SubBiomeRegionRecipeSlots;                                // 0x0038(0x0010) (Edit, ZeroConstructor)
	float                                              SubBiomeRecipePillowtopAmplitude;                         // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SubBiomeRecipePillowtopRoughness;                         // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SubBiomeRecipePillowtopOctaves;                           // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SubBiomeRecipePillowtopFrequency;                         // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SubBiomeRecipePillowtopDomainDistortion;                  // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SubBiomeRecipePillowtopDomainDistortionFrequency;         // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EArchonNoiseType>                      SubBiomeRecipePillowtopNoiseType;                         // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	class UMaterialInterface*                          StillWaterMaterial;                                       // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bHasStillWater;                                           // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bStillWaterCollision;                                     // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0072(0x0006) MISSED OFFSET
	class UArchonSubBiomeRegionRecipe*                 StillWaterRegionRecipe;                                   // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterFrequency;                                      // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterOffsetX;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterOffsetY;                                        // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterRoughness;                                      // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterRange;                                          // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterDepth;                                          // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterMaterialExponent;                               // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterPlaneLevel;                                     // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StillWaterPoolLevel;                                      // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x00A4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonBiomeRecipe.ArchonSubBiomeRecipe");
		return ptr;
	}

};


// Class ArchonBiomeRecipe.ArchonSubBiomeRegionRecipe
// 0x0038 (0x0060 - 0x0028)
class UArchonSubBiomeRegionRecipe : public UObject
{
public:
	class FString                                      SubBiomeRegionDescription;                                // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UArchonFoliageRecipe*>                FoliageRecipes;                                           // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UArchonMaterialRecipe*>               MaterialRecipes;                                          // 0x0048(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonBiomeRecipe.ArchonSubBiomeRegionRecipe");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
