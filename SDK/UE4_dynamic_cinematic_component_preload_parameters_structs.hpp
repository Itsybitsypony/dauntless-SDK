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

// UserDefinedStruct dynamic_cinematic_component_preload_parameters.dynamic_cinematic_component_preload_parameters
// 0x0080
struct Fdynamic_cinematic_component_preload_parameters
{
	TArray<TAssetPtr<class ULevelSequence>>            Sequences_9_CF6FC6244D0A648B0C2C769CD3035A5E;             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class UClass>>                    ProxyActorsClassIDs_10_9196DE6C4CB3CBE505E099A98FE632C2;  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<TAssetPtr<class UClass>>                    ActorsToSpawnClassIDs_13_922FB5E043530C13A31D61986F810036;// 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TAssetPtr<class UClass>                            ProxyProtagonist_15_1406FFA94B075C9A902D419CB9FC4743;     // 0x0030(0x0020) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TAssetPtr<class UClass>                            ProxyCameraClassID_17_3E153A9F4BDC6BD54AE0E7A3277DBEEC;   // 0x0050(0x0020) (Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FTransform>                          StageTransforms_24_085DA71247EE279860AC77B7664B79DD;      // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
