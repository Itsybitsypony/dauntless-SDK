#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonFoliageRecipe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ArchonFoliageRecipe.ArchonFoliageRecipe
// 0x0118 (0x0140 - 0x0028)
class UArchonFoliageRecipe : public UObject
{
public:
	class UStaticMesh*                                 FoliageStaticMesh;                                        // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UFoliageType*                                FoliageType;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UBlueprint*                                  FoliageBlueprint;                                         // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      FoliageObjectDescription;                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
	bool                                               bUseInstancing;                                           // 0x0050(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseFoliageSystem;                                        // 0x0051(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	float                                              FoliageCollisionRadius;                                   // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoliageShadeRadius;                                       // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FoliageDensity;                                           // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AlignToNormal;                                            // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Seed;                                                     // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleRangeMin;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScaleRangeMax;                                            // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TiltRange;                                                // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GrowthFactor;                                             // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ReseedGenerations;                                        // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               AffectsAccumulationSystem;                                // 0x007C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoresBlockingVolumes;                                   // 0x007D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateFoliageCollision;                                  // 0x007E(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	bool                                               bGrowsInSun;                                              // 0x007F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGrowsInShade;                                            // 0x0080(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGrowsNearWater;                                          // 0x0081(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGrowsInWater;                                            // 0x0082(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSnapToWaterSurface;                                      // 0x0083(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGrowsNearCliffs;                                         // 0x0084(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseNeoFur;                                               // 0x0085(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0086(0x0002) MISSED OFFSET
	class UMaterialInterface*                          NeoFurMaterial;                                           // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateNeoFurBaseStaticMesh;                              // 0x0090(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0091(0x0007) MISSED OFFSET
	class UStaticMesh*                                 NeoFurBaseStaticMesh;                                     // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMaterialInterface*                          NeoFurBaseStaticMeshMaterial;                             // 0x00A0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedBaseStaticMeshBaseSize;                          // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedBaseStaticMeshExtrudeDistance;                   // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedBaseStaticMeshExtrudeInset;                      // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedBaseStaticMeshDisplacement;                      // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedBaseStaticMeshTolerance;                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedBaseStaticMeshPointFuse;                         // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bGeneratedBaseStaticMeshCreateSkirt;                      // 0x00C0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	float                                              GeneratedBaseStaticMeshSkirtHeight;                       // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              GeneratedBaseStaticMeshSkirtFactor;                       // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GeneratedBaseStaticMeshSkirtDivisions;                    // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GeneratedBaseStaticMeshUVGridRows;                        // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GeneratedBaseStaticMeshUVGridColumns;                     // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCreateNeoFurAsset;                                       // 0x00D8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
	class UNeoFurAsset*                                NeoFurAsset;                                              // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NeoFurShellCount;                                         // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurShellDistance;                                      // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurLODStartDistance;                                   // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurLODEndDistance;                                     // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                NeoFurLODMinimumShellCount;                               // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurMaximumDistanceFromCamera;                          // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurVisibleLengthScale;                                 // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsVelocityInfluence;                           // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsSpringLengthStiffness;                       // 0x0108(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsSpringAngleStiffness;                        // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsSpringDampeningMultiplier;                   // 0x0110(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsGravityInfluence;                            // 0x0114(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsAirResistanceMultiplier;                     // 0x0118(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsMaxStretchDistanceMultiplier;                // 0x011C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsMaxRotationFromNormal;                       // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsRadialForceInfluence;                        // 0x0124(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsWindInfluence;                               // 0x0128(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsBendiness;                                   // 0x012C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsNormalDirectionBlend;                        // 0x0130(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NeoFurPhysicsActiveShellCountScale;                       // 0x0134(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x8];                                       // 0x0138(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonFoliageRecipe.ArchonFoliageRecipe");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
