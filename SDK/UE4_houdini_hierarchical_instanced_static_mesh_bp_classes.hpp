#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_houdini_hierarchical_instanced_static_mesh_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass houdini_hierarchical_instanced_static_mesh_bp.houdini_hierarchical_instanced_static_mesh_bp_C
// 0x0039 (0x03C1 - 0x0388)
class Ahoudini_hierarchical_instanced_static_mesh_bp_C : public AActor
{
public:
	class UHierarchicalInstancedStaticMeshComponent*   HierarchicalInstancedStaticMesh;                          // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          InstanceTransforms;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UStaticMesh*                                 StaticMesh;                                               // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CullDistanceMin;                                          // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CullDistanceMax;                                          // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       CollisionProfileName;                                     // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CastShadow;                                               // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass houdini_hierarchical_instanced_static_mesh_bp.houdini_hierarchical_instanced_static_mesh_bp_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
