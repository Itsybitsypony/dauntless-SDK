#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lobby_bpgm_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lobby_bpgm.lobby_bpgm_C
// 0x0060 (0x05F8 - 0x0598)
class Alobby_bpgm_C : public AArchonGameMode_Lobby
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0598(0x0008) (Transient, DuplicateTransient)
	class Ubase_lobby_component_C*                     base_lobby_component;                                     // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CurrentAtmosphereIndex;                                   // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05B4(0x0004) MISSED OFFSET
	class AAtmosphereSpawner*                          CurrentAtmosphereSpawner;                                 // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AAtmosphereBase*                             SpawnedAtmosphere;                                        // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ACloudConfiguration*                         SpawnedCloudConfiguration;                                // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               MatchMakingStarted;                                       // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05D1(0x0007) MISSED OFFSET
	TArray<class AEmitter*>                            PlayerHighlights;                                         // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)
	TArray<class AActor*>                              LobbySlotActors;                                          // 0x05E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lobby_bpgm.lobby_bpgm_C");
		return ptr;
	}


	void HandleSlotPrevious(int FromSlotIndex, bool* DidChangeSlot, int* NewSlotIndex);
	void HandleSlotNext(int FromSlotIndex, bool* DidChangeSlot, int* NewSlotIndex);
	void HandleSlotClicked(class AActor* ClickedActor, bool* DidHandle, int* SlotIndex);
	void GetSlotClicked(class AActor* ClickedActor, bool* SlotClicked, class AActor** SlotActor, int* SlotIndex);
	void UpdatePlayerHighlights(int Player);
	void SetLobbyPlayerReady(bool ReadyState);
	class AActor* ChoosePlayerStart(class AController** Player);
	void GetOpenOptions(TArray<struct FName>* HuntIds);
	void SpawnAtmosphere();
	void SetupAtmosphereVariables(class AArchonGameMode* GameMode);
	void SpawnAtmosphereFromClass(class UClass* InClass);
	void UserConstructionScript();
	void OnLoaded_3AF3459C4E3598210ECDFAA7F258670A(class UClass* Loaded);
	void CycleAtmosphere();
	void StreamNewAtmosphere(int NewAtmosphereIndex);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_lobby_bpgm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
