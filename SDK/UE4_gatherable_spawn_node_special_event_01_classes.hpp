#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gatherable_spawn_node_special_event_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass gatherable_spawn_node_special_event_01.gatherable_spawn_node_special_event_01_C
// 0x0008 (0x03B8 - 0x03B0)
class Agatherable_spawn_node_special_event_01_C : public Agatherable_spawn_node_generic_C
{
public:
	class UStaticMeshComponent*                        PreviewMesh1;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass gatherable_spawn_node_special_event_01.gatherable_spawn_node_special_event_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
