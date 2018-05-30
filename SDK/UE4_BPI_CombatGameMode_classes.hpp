#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_CombatGameMode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_CombatGameMode.BPI_CombatGameMode_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_CombatGameMode_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_CombatGameMode.BPI_CombatGameMode_C");
		return ptr;
	}


	void GetDangerLevel(float* danger);
	void GetCurrentMissionInfo(struct FArchonLobbyMissionInfo* MissionInfo);
	void PauseMissionTimer();
	void DebugGetRawExpectedPlayerCountVariable(int* RawExpectedPlayerCount);
	void IsDangerMaxed(bool* DangerMaxed);
	void SetMissionTimeRemaining(float MissionTimeRemaining);
	void PlayIntroCinematic();
	void SetDangerSystemOverride(bool TurnOn_);
	void setDanger(float danger);
	void GetSpawnedBehemoths(TArray<class AArchonBehemoth*>* Behemoths);
	void RegisterStartOfCombat();
	void BehemothRequested(const struct FName& Behemoth);
	void RegisterBehemothFlee();
	void RegisterPlayerRevived(class AArchonCharacter* Player);
	void BindBehemothDeathEvent(class AArchonBehemoth* Behemoth, bool TriggerEndOfMission);
	void GetExpectedPlayerCount(int* Count);
	void Assign_Free_Player_Color_Index(int* OutColorIndex);
	void Debug_Get_Player_Color(int InColorIndex, struct FLinearColor* Linear_Color);
	void Mission_Failure();
	void Get_Remaining_Player_Rescues(int* Remaining_Player_Rescue_Count);
	void Register_Player_Reaching_0_HP(class AArchonCharacter* Dying_Player);
	void On_Monster_Death(class AArchonBehemoth* Behemoth, float FightDuration, bool TriggerEndOfGameCeremony);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
