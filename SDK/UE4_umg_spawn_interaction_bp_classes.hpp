#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_umg_spawn_interaction_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass umg_spawn_interaction_bp.umg_spawn_interaction_bp_C
// 0x0026 (0x042A - 0x0404)
class Aumg_spawn_interaction_bp_C : public Amesh_swap_interaction_bp_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0404(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (Transient, DuplicateTransient)
	class UClass*                                      UMGWidgetToSpawn;                                         // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnWidgetSpawned;                                          // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               LocallyAvailable;                                         // 0x0428(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               IsDebugUMGInteraction;                                    // 0x0429(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass umg_spawn_interaction_bp.umg_spawn_interaction_bp_C");
		return ptr;
	}


	class UMarkerComponent* GetMarkerComponent();
	void OnRep_LocallyAvailable();
	void ChangeLocalAvailabilityOfActor(bool Available_);
	void CanUserStartInteraction_(class UArchonInteractionUserComponent** User, bool* CanUse);
	void CreateWidgetAndAddToViewport(class AController* PlayerController);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnUserCompletedInteraction(class UArchonInteractionUserComponent** User);
	void ExecutePayload(class APawn* SuccessfulInteractor);
	void ExecuteUbergraph_umg_spawn_interaction_bp(int EntryPoint);
	void OnWidgetSpawned__DelegateSignature(class UUserWidget* Spawned_Widget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
