#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_spawn_node_generic_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gatherable_spawn_node_generic.gatherable_spawn_node_generic_C
// 0x0028 (0x03B0 - 0x0388)
class Agatherable_spawn_node_generic_C : public AActor
{
public:
	class USceneComponent*                             Scene;                                                    // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EGatherableRarity                                  GatherableRarity;                                         // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0399(0x0007) MISSED OFFSET
	TArray<EGatherableCategory>                        GatherableCategories;                                     // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gatherable_spawn_node_generic.gatherable_spawn_node_generic_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
