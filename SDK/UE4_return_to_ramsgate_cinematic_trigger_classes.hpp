#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_return_to_ramsgate_cinematic_trigger_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C
// 0x0090 (0x0418 - 0x0388)
class Areturn_to_ramsgate_cinematic_trigger_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UBoxComponent*                               ReturnToRamsgateHideActorVolume;                          // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Udynamic_cinematic_component_bp_C*           dynamic_cinematic_component_bp;                           // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Aquest_npc_interactive_bp_C*                 LCityKat;                                                 // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Avendor_interactive_bp_C*                    LCityBosun;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      LPlayerCharacter;                                         // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03C0(0x0050) UNKNOWN PROPERTY: SetProperty return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C.HiddenPlayers
	struct FTimerHandle                                LHideActorTimer;                                          // 0x0410(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass return_to_ramsgate_cinematic_trigger.return_to_ramsgate_cinematic_trigger_C");
		return ptr;
	}


	bool HasFinishedLoading();
	void OutputDebugInformation();
	void PickSpawnLocation(struct FTransform* StartTransform);
	void RelevantToLocalController(bool* Relevant);
	void UserConstructionScript();
	void SwapCineMatsOut(class AArchonCharacter* Player_Char);
	void ReceiveBeginPlay();
	void Play(class AActor* PlayerCharacter);
	void ReceiveGameplayStart();
	void ClientSetCityNPCVisibility(bool Visibility);
	void CacheCityNPCs();
	void ClientStart();
	void ClientStop();
	void SkipCinematic();
	void BlendCameraOut(float BlendTime);
	void OnServerStop();
	void ToggleShowSequenceTime();
	void HideActors();
	void HideActorsOnTick();
	void ExecuteUbergraph_return_to_ramsgate_cinematic_trigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
