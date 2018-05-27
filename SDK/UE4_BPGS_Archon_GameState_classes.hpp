#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPGS_Archon_GameState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPGS_Archon_GameState.BPGS_Archon_GameState_C
// 0x0060 (0x0450 - 0x03F0)
class ABPGS_Archon_GameState_C : public AArchonGameState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_states_enum>                 BehemothState;                                            // 0x0400(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0401(0x0007) MISSED OFFSET
	struct FName                                       CurrentMatchState;                                        // 0x0408(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	class ABP_MusicSystem_C*                           MusicSystemActor;                                         // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              MissionDangerCounter;                                     // 0x0418(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MissionDangerMax;                                         // 0x041C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DebugEQSGameplay;                                         // 0x0420(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	float                                              DangerCountdownTime;                                      // 0x0424(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                DangerCountdownTimer;                                     // 0x0428(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               MaxDangerActive;                                          // 0x0430(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Ecombat_text_type>                     CombatTextType;                                           // 0x0431(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0432(0x0006) MISSED OFFSET
	TArray<class AArchonBehemoth*>                     SpawnedBehemoths;                                         // 0x0438(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int                                                ExpectedPlayerCount;                                      // 0x0448(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RawExpectedPlayerCount;                                   // 0x044C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPGS_Archon_GameState.BPGS_Archon_GameState_C");
		return ptr;
	}


	void GetExpectedPlayerCount(int* ExpectedPlayerCount, int* DebugRawExpectedPlayerCountVariable);
	void GetSpawnedBehemoths(TArray<class AArchonBehemoth*>* SpawnedBehemoths);
	void GetCombatTextType(TEnumAsByte<Ecombat_text_type>* CombatTextType);
	void IsPowerAndResistanceEnabled(bool* PowerAndResistanceEnabled);
	void GetMissionTimeRemaining(float* TimeRemaining);
	void IsDebugEQSGameplayEnabled(bool* DebugEQSGameplayEnabled);
	void IsCombatTextEnabled(bool* CombatTextEnabled);
	void OnRep_MaxDangerActive();
	void OnRep_CurrentMatchState();
	void OnRep_BehemothState();
	void UserConstructionScript();
	void AuthSetDebugEQSGameplayEnabled(bool Enabled);
	void DudEventForTimer();
	void AuthUpdateRemainingTime(float RemainingTime);
	void MulticastUpdateDangerTimer(float Time);
	void AuthInformMaxDangerActiveState(bool MaxDangerActive);
	void PlayersArrivedOnIsland();
	void TrackBehemothSpawn(class AArchonBehemoth* NewBehemoth);
	void SetCombatTextType(TEnumAsByte<Ecombat_text_type> CombatTextType);
	void AuthUpdateNumPlayers();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPGS_Archon_GameState(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
