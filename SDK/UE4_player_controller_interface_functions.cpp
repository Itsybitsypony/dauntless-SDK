// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_controller_interface.player_controller_interface_C.CanShowWelcomeMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uplayer_controller_interface_C::CanShowWelcomeMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.CanShowWelcomeMessage");

	Uplayer_controller_interface_C_CanShowWelcomeMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function player_controller_interface.player_controller_interface_C.SuppressLootNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSuppress                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::SuppressLootNotifications(bool ShouldSuppress)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.SuppressLootNotifications");

	Uplayer_controller_interface_C_SuppressLootNotifications_Params params;
	params.ShouldSuppress = ShouldSuppress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.IsMissionTimerVisible
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsMissionTimerVisible          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::IsMissionTimerVisible(bool* IsMissionTimerVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.IsMissionTimerVisible");

	Uplayer_controller_interface_C_IsMissionTimerVisible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsMissionTimerVisible != nullptr)
		*IsMissionTimerVisible = params.IsMissionTimerVisible;
}


// Function player_controller_interface.player_controller_interface_C.SetMOTHTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Trigger                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::SetMOTHTrigger(class AActor* Trigger)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.SetMOTHTrigger");

	Uplayer_controller_interface_C_SetMOTHTrigger_Params params;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.SkipCinematic
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_controller_interface_C::SkipCinematic()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.SkipCinematic");

	Uplayer_controller_interface_C_SkipCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.HasSeenReturnToRamsgateCinematic
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasSeenCinematic               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::HasSeenReturnToRamsgateCinematic(bool* HasSeenCinematic)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.HasSeenReturnToRamsgateCinematic");

	Uplayer_controller_interface_C_HasSeenReturnToRamsgateCinematic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasSeenCinematic != nullptr)
		*HasSeenCinematic = params.HasSeenCinematic;
}


// Function player_controller_interface.player_controller_interface_C.SupressBreakpartLootNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShouldSupress                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::SupressBreakpartLootNotifications(bool ShouldSupress)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.SupressBreakpartLootNotifications");

	Uplayer_controller_interface_C_SupressBreakpartLootNotifications_Params params;
	params.ShouldSupress = ShouldSupress;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.AuthHandleConditionalLoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Source                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Eloot_condition_type> ConditionType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::AuthHandleConditionalLoot(const class FString& ItemID, const class FString& Source, int Amount, TEnumAsByte<Eloot_condition_type> ConditionType)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.AuthHandleConditionalLoot");

	Uplayer_controller_interface_C_AuthHandleConditionalLoot_Params params;
	params.ItemID = ItemID;
	params.Source = Source;
	params.Amount = Amount;
	params.ConditionType = ConditionType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.Server_RequestUpdateLanternStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  InstanceId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uplayer_controller_interface_C::Server_RequestUpdateLanternStats(const class FString& InstanceId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.Server_RequestUpdateLanternStats");

	Uplayer_controller_interface_C_Server_RequestUpdateLanternStats_Params params;
	params.InstanceId = InstanceId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.Hunt_CurrentMissionInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Island                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  HuntId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uplayer_controller_interface_C::Hunt_CurrentMissionInfo(const class FString& Island, const class FString& HuntId)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.Hunt_CurrentMissionInfo");

	Uplayer_controller_interface_C_Hunt_CurrentMissionInfo_Params params;
	params.Island = Island;
	params.HuntId = HuntId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.BehemothSlain_NoEndHunt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth_02                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::BehemothSlain_NoEndHunt(class AArchonBehemoth* Behemoth_02)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.BehemothSlain_NoEndHunt");

	Uplayer_controller_interface_C_BehemothSlain_NoEndHunt_Params params;
	params.Behemoth_02 = Behemoth_02;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.HideAllSlayersDown
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_controller_interface_C::HideAllSlayersDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.HideAllSlayersDown");

	Uplayer_controller_interface_C_HideAllSlayersDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.HideMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_controller_interface_C::HideMissionTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.HideMissionTimer");

	Uplayer_controller_interface_C_HideMissionTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.ShowMissionTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::ShowMissionTimer(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.ShowMissionTimer");

	Uplayer_controller_interface_C_ShowMissionTimer_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.AuthForceControlRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                NewRotation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uplayer_controller_interface_C::AuthForceControlRotation(const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.AuthForceControlRotation");

	Uplayer_controller_interface_C_AuthForceControlRotation_Params params;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.SetCinematicInterface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UCinematicPlayerInterface_C> CinematicPlayerInterface       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::SetCinematicInterface(const TScriptInterface<class UCinematicPlayerInterface_C>& CinematicPlayerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.SetCinematicInterface");

	Uplayer_controller_interface_C_SetCinematicInterface_Params params;
	params.CinematicPlayerInterface = CinematicPlayerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.SetCinematicState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ECinematicPlayerState> CinematicState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::SetCinematicState(TEnumAsByte<ECinematicPlayerState> CinematicState)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.SetCinematicState");

	Uplayer_controller_interface_C_SetCinematicState_Params params;
	params.CinematicState = CinematicState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.PlayPlayerIDTones
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_controller_interface_C::PlayPlayerIDTones()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.PlayPlayerIDTones");

	Uplayer_controller_interface_C_PlayPlayerIDTones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.DisplayMaxDanger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TurnOn_                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::DisplayMaxDanger(bool TurnOn_)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.DisplayMaxDanger");

	Uplayer_controller_interface_C_DisplayMaxDanger_Params params;
	params.TurnOn_ = TurnOn_;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.DisplayAllSlayersDown
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_controller_interface_C::DisplayAllSlayersDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.DisplayAllSlayersDown");

	Uplayer_controller_interface_C_DisplayAllSlayersDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.EndMission
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            EoM_Timer                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          danger                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          BehemothPower                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EndOfMatch_GameType> EndofMatchMode                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         Behemoth_01                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonBehemoth*         Behemoth_02                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fbadge_wrapper_thx_unreal BadgeInfoWrapper               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct Fplayer_highlight_info  MoTHData                       (BlueprintVisible, BlueprintReadOnly, Parm)
// float                          TeamScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct Fplayer_score_wrapper   PlayerScores                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uplayer_controller_interface_C::EndMission(bool Success, float Duration, int EoM_Timer, float danger, float BehemothPower, TEnumAsByte<EndOfMatch_GameType> EndofMatchMode, class AArchonBehemoth* Behemoth_01, class AArchonBehemoth* Behemoth_02, const struct Fbadge_wrapper_thx_unreal& BadgeInfoWrapper, const struct Fplayer_highlight_info& MoTHData, float TeamScore, const struct Fplayer_score_wrapper& PlayerScores)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.EndMission");

	Uplayer_controller_interface_C_EndMission_Params params;
	params.Success = Success;
	params.Duration = Duration;
	params.EoM_Timer = EoM_Timer;
	params.danger = danger;
	params.BehemothPower = BehemothPower;
	params.EndofMatchMode = EndofMatchMode;
	params.Behemoth_01 = Behemoth_01;
	params.Behemoth_02 = Behemoth_02;
	params.BadgeInfoWrapper = BadgeInfoWrapper;
	params.MoTHData = MoTHData;
	params.TeamScore = TeamScore;
	params.PlayerScores = PlayerScores;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.ResetWeaponUI
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_controller_interface_C::ResetWeaponUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.ResetWeaponUI");

	Uplayer_controller_interface_C_ResetWeaponUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.OnFinishNewCharacterFlow
// (Public, BlueprintCallable, BlueprintEvent)

void Uplayer_controller_interface_C::OnFinishNewCharacterFlow()
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.OnFinishNewCharacterFlow");

	Uplayer_controller_interface_C_OnFinishNewCharacterFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_controller_interface.player_controller_interface_C.GetPlayerInterface
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::GetPlayerInterface(TScriptInterface<class Uplayer_interface_C>* Player_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.GetPlayerInterface");

	Uplayer_controller_interface_C_GetPlayerInterface_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Player_Interface != nullptr)
		*Player_Interface = params.Player_Interface;
}


// Function player_controller_interface.player_controller_interface_C.GetUsedMouse
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsedMouse                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::GetUsedMouse(bool* UsedMouse)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.GetUsedMouse");

	Uplayer_controller_interface_C_GetUsedMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsedMouse != nullptr)
		*UsedMouse = params.UsedMouse;
}


// Function player_controller_interface.player_controller_interface_C.GetUsedGamePad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsedGamePad                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uplayer_controller_interface_C::GetUsedGamePad(bool* UsedGamePad)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_controller_interface.player_controller_interface_C.GetUsedGamePad");

	Uplayer_controller_interface_C_GetUsedGamePad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UsedGamePad != nullptr)
		*UsedGamePad = params.UsedGamePad;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
