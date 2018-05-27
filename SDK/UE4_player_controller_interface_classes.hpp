#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_controller_interface.player_controller_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uplayer_controller_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_controller_interface.player_controller_interface_C");
		return ptr;
	}


	bool CanShowWelcomeMessage();
	void SuppressLootNotifications(bool ShouldSuppress);
	void IsMissionTimerVisible(bool* IsMissionTimerVisible);
	void SetMOTHTrigger(class AActor* Trigger);
	void SkipCinematic();
	void HasSeenReturnToRamsgateCinematic(bool* HasSeenCinematic);
	void SupressBreakpartLootNotifications(bool ShouldSupress);
	void AuthHandleConditionalLoot(const class FString& ItemID, const class FString& Source, int Amount, TEnumAsByte<Eloot_condition_type> ConditionType);
	void Server_RequestUpdateLanternStats(const class FString& InstanceId);
	void Hunt_CurrentMissionInfo(const class FString& Island, const class FString& HuntId);
	void BehemothSlain_NoEndHunt(class AArchonBehemoth* Behemoth_02);
	void HideAllSlayersDown();
	void HideMissionTimer();
	void ShowMissionTimer(float Duration);
	void AuthForceControlRotation(const struct FRotator& NewRotation);
	void SetCinematicInterface(const TScriptInterface<class UCinematicPlayerInterface_C>& CinematicPlayerInterface);
	void SetCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState);
	void PlayPlayerIDTones();
	void DisplayMaxDanger(bool TurnOn_);
	void DisplayAllSlayersDown();
	void EndMission(bool Success, float Duration, int EoM_Timer, float Danger, float BehemothPower, TEnumAsByte<EndOfMatch_GameType> EndofMatchMode, class AArchonBehemoth* Behemoth_01, class AArchonBehemoth* Behemoth_02, const struct Fbadge_wrapper_thx_unreal& BadgeInfoWrapper, const struct Fplayer_highlight_info& MoTHData, float TeamScore, const struct Fplayer_score_wrapper& PlayerScores);
	void ResetWeaponUI();
	void OnFinishNewCharacterFlow();
	void GetPlayerInterface(TScriptInterface<class Uplayer_interface_C>* Player_Interface);
	void GetUsedMouse(bool* UsedMouse);
	void GetUsedGamePad(bool* UsedGamePad);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
