#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonOutcrop_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ArchonOutcrop.ArchonLevelGraphArenaActor
// 0x0020 (0x03A8 - 0x0388)
class AArchonLevelGraphArenaActor : public AActor
{
public:
	class UProceduralMeshComponent*                    ProceduralMeshComponent;                                  // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Radius;                                                   // 0x0390(0x000C) (Edit, IsPlainOldData)
	int                                                Segments;                                                 // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InstanceNumber;                                           // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonOutcrop.ArchonLevelGraphArenaActor");
		return ptr;
	}

};


// Class ArchonOutcrop.ArchonLevelGraphBridgeActor
// 0x0020 (0x03A8 - 0x0388)
class AArchonLevelGraphBridgeActor : public AActor
{
public:
	float                                              LineWidth;                                                // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x038C(0x0004) MISSED OFFSET
	class AArchonLevelGraphZoneActor*                  ActorLeft;                                                // 0x0390(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class AArchonLevelGraphZoneActor*                  ActorRight;                                               // 0x0398(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UProceduralMeshComponent*                    ConnectionComponent;                                      // 0x03A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonOutcrop.ArchonLevelGraphBridgeActor");
		return ptr;
	}

};


// Class ArchonOutcrop.ArchonLevelGraphOutcropActor
// 0x0020 (0x03A8 - 0x0388)
class AArchonLevelGraphOutcropActor : public AActor
{
public:
	class UProceduralMeshComponent*                    ProceduralMeshComponent;                                  // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     Radius;                                                   // 0x0390(0x000C) (Edit, IsPlainOldData)
	int                                                Segments;                                                 // 0x039C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                InstanceNumber;                                           // 0x03A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonOutcrop.ArchonLevelGraphOutcropActor");
		return ptr;
	}

};


// Class ArchonOutcrop.ArchonLevelGraphZoneActor
// 0x0050 (0x03D8 - 0x0388)
class AArchonLevelGraphZoneActor : public AActor
{
public:
	class UProceduralMeshComponent*                    ProceduralMeshComponentInner;                             // 0x0388(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProceduralMeshComponent*                    ProceduralMeshComponentOuter;                             // 0x0390(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTextRenderComponent*                        TextRenderComponent;                                      // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FVector                                     RadiusInner;                                              // 0x03A0(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     RadiusOuter;                                              // 0x03AC(0x000C) (Edit, IsPlainOldData)
	int                                                Segments;                                                 // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03BC(0x0004) MISSED OFFSET
	class UArchonBiomeRecipe*                          ArchonBiomeRecipe;                                        // 0x03C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UArchonSubBiomeRecipe*                       ArchonSubBiomeRecipe;                                     // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                InstanceNumber;                                           // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonOutcrop.ArchonLevelGraphZoneActor");
		return ptr;
	}

};


// Class ArchonOutcrop.ArchonOutcropAdditive
// 0x0008 (0x03C8 - 0x03C0)
class AArchonOutcropAdditive : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonOutcrop.ArchonOutcropAdditive");
		return ptr;
	}

};


// Class ArchonOutcrop.ArchonOutcropSubtractive
// 0x0008 (0x03C8 - 0x03C0)
class AArchonOutcropSubtractive : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonOutcrop.ArchonOutcropSubtractive");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
