#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interaction_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_interaction_component.base_interaction_component_C
// 0x00A0 (0x0270 - 0x01D0)
class Ubase_interaction_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<class APawn*>                               DisAllowedInteractors;                                    // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class APawn*>                               AllowedInteractors;                                       // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UWidgetComponent*                            InteractionCallout;                                       // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UPrimitiveComponent*                         ComponentToHighlight;                                     // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InteractionDuration;                                      // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	TArray<struct Fpawn_timer_struct>                  Pawn_To_Timer_array;                                      // 0x0210(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UAnimMontage>                      PlayerInteractionMontage;                                 // 0x0220(0x0020) (Edit, BlueprintVisible)
	bool                                               IsPerPlayerinteraction;                                   // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InteractionActive;                                        // 0x0241(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               AllowMultipleUsesBySamePlayer;                            // 0x0242(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ClearAllTimersOnSuccess;                                  // 0x0243(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0244(0x0004) MISSED OFFSET
	class UPrimitiveComponent*                         RangeComponent;                                           // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowChainedSuccess_;                                     // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Allow_Mesh_Highlight_;                                    // 0x0251(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0252(0x0006) MISSED OFFSET
	TArray<class UPrimitiveComponent*>                 ComponentArrayToHighlight;                                // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UAnimMontage*                                L_LoadedMontage;                                          // 0x0268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_interaction_component.base_interaction_component_C");
		return ptr;
	}


	void SetSiblingComponents(class UWidgetComponent* Callout, class UPrimitiveComponent* Range, class UPrimitiveComponent* Highlightable);
	void Component_CanUse_(class APawn* UsingPawn, bool* Usable_);
	void OnLoaded_09AE4DDF49C7EC6C60963AB7703F2FF9(class UObject* Loaded);
	void ReceiveTick(float* DeltaSeconds);
	void ClientStartFill(class APawn* UsingPawn);
	void ClientCancelFill(class APawn* UsingPawn, bool ChainedSuccess);
	void InteractionSuccess(class APawn* SucceedingPawn);
	void Comp_highlight_interaction(class APawn* UsingPawn);
	void Comp_unhighlight_interaction(class APawn* UsingPawn);
	void Comp_StartUse(class APawn* UsingPawn);
	void Comp_StopUse(class APawn* UsingPawn, bool Success);
	void OnInteractionBeingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnInteractionEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void BindOverlapEvents(class UPrimitiveComponent* PrimitiveComponent);
	void ForceClearAllTimers();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_base_interaction_component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
