#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mesh_swap_interaction_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass mesh_swap_interaction_bp.mesh_swap_interaction_bp_C
// 0x007C (0x0404 - 0x0388)
class Amesh_swap_interaction_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UMarkerComponent*                            Marker;                                                   // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_interactioncode_component_C*           base_interactioncode_component;                           // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Ubase_interaction_component_C*               base_interaction_component;                               // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UCapsuleComponent*                           InteractionRange;                                         // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidgetComponent*                            InteractionCallout;                                       // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_intensity_0C1B082E4972AE86C5BA6E9F04B0E443;      // 0x03C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline__Direction_0C1B082E4972AE86C5BA6E9F04B0E443;     // 0x03CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline;                                                 // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 UsedStateMeshClass;                                       // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LocalPlayerOnly_;                                         // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MeshSwappedToUsedState;                                   // 0x03E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	class UMaterialInstance*                           UsedStateMaterial;                                        // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MeshSwappedLocally;                                       // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x03F1(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              disolve;                                                  // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass mesh_swap_interaction_bp.mesh_swap_interaction_bp_C");
		return ptr;
	}


	class UMarkerComponent* GetMarkerComponent();
	void SetInteractionAvailability(bool Active, bool* Out);
	void CanUserStartInteraction_(class UArchonInteractionUserComponent* User, bool* CanUse);
	void SwapMesh();
	void OnRep_MeshSwappedToUsedState();
	void OnSuccessfulInteraction___Server(class APawn* Successful_Interactor);
	void OnSuccessfulInteraction___Client(class APawn* Successful_Interactor);
	void UserConstructionScript();
	void Timeline__FinishedFunc();
	void Timeline__UpdateFunc();
	void ReceiveBeginPlay();
	void OnUserStartedInteraction(class UArchonInteractionUserComponent* User);
	void OnUserCanceledInteraction(class UArchonInteractionUserComponent* User);
	void OnUserCompletedInteraction(class UArchonInteractionUserComponent* User);
	void OnMeshSwap();
	void ClientOnUserRemainingUsesZero(class UArchonInteractionUserComponent* User);
	void ExecuteUbergraph_mesh_swap_interaction_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
