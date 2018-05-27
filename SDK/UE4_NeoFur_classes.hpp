#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_NeoFur_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class NeoFur.NeoFurAsset
// 0x00C8 (0x00F0 - 0x0028)
class UNeoFurAsset : public UObject
{
public:
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class FString                                      FbxSourceFilePath;                                        // 0x0038(0x0010) (ZeroConstructor)
	class FString                                      FbxSourceFilePathRelative;                                // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	int                                                MaterialId;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Version;                                                  // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FTransform                                  SplineTransform;                                          // 0x0060(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FFilePath                                   SplineDataFbxFilePath;                                    // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	class FString                                      MorphTargetName;                                          // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData00[0x40];                                      // 0x00B0(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NeoFur.NeoFurAsset");
		return ptr;
	}

};


// Class NeoFur.NeoFurComponent
// 0x0110 (0x0920 - 0x0810)
class UNeoFurComponent : public UPrimitiveComponent
{
public:
	class UNeoFurAsset*                                FurAsset;                                                 // 0x0810(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ShellCount;                                               // 0x0818(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ShellDistance;                                            // 0x081C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              LODStartDistance;                                         // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LODEndDistance;                                           // 0x0824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LODMinimumShellCount;                                     // 0x0828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaximumDistanceFromCamera;                                // 0x082C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VisibleLengthScale;                                       // 0x0830(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShellOffsetTextureCoordinateIndex;                        // 0x0834(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FNeoFurPhysicsParameters                    FurPhysicsParameters;                                     // 0x0838(0x0030) (Edit)
	float                                              ActiveShellCountScale;                                    // 0x0868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bForceCPUSimulation;                                      // 0x086C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipSimulation;                                          // 0x086D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipRendering;                                           // 0x086E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawSplines;                                             // 0x086F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	class UBodySetup*                                  BodySetup;                                                // 0x0870(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	int                                                ActiveShellCount;                                         // 0x0878(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA4];                                      // 0x087C(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NeoFur.NeoFurComponent");
		return ptr;
	}


	void SetVisibleLengthScale(float NewVisibleLengthScale);
	void SetShellDistance(float NewDistance);
	void SetFurPhysicsParameters(const struct FNeoFurPhysicsParameters& Parameters);
	int STATIC_GetTotalActiveShellCount(class UObject* WorldContextObject);
	struct FNeoFurPhysicsParameters GetFurPhysicsParameters();
};


// Class NeoFur.NeoFurGameMode
// 0x0000 (0x0460 - 0x0460)
class ANeoFurGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NeoFur.NeoFurGameMode");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
