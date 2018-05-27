#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_gamestate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bpi_gamestate.bpi_gamestate_C
// 0x0000 (0x0028 - 0x0028)
class Ubpi_gamestate_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bpi_gamestate.bpi_gamestate_C");
		return ptr;
	}


	void GetExpectedPlayerCount(int* ExpectedPlayerCount, int* DebugRawExpectedPlayerCountVariable);
	void SetCombatTextType(TEnumAsByte<Ecombat_text_type> CombatTextType);
	void GetSpawnedBehemoths(TArray<class AArchonBehemoth*>* SpawnedBehemoths);
	void TrackBehemothSpawn(class AArchonBehemoth* NewBehemoth);
	void GetCombatTextType(TEnumAsByte<Ecombat_text_type>* CombatTextType);
	void PlayersArrivedOnIsland();
	void AuthInformMaxDangerActiveState(bool MaxDangerActive);
	void IsPowerAndResistanceEnabled(bool* PowerAndResistanceEnabled);
	void GetMissionTimeRemaining(float* TimeRemaining);
	void AuthUpdateRemainingTime(float RemainingTime);
	void IsDebugEQSGameplayEnabled(bool* DebugEQSGameplayEnabled);
	void AuthSetDebugEQSGameplayEnabled(bool Enabled);
	void IsCombatTextEnabled(bool* CombatTextEnabled);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
