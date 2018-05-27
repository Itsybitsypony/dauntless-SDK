// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EndOfHunt_SuccessScreen_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_Marker_2_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UEndOfHunt_SuccessScreen_bpw_C::Get_Marker_2_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_Marker_2_Visibility_1");

	UEndOfHunt_SuccessScreen_bpw_C_Get_Marker_2_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TextBlock_11_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_SuccessScreen_bpw_C::Get_TextBlock_11_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TextBlock_11_Text_1");

	UEndOfHunt_SuccessScreen_bpw_C_Get_TextBlock_11_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TextBlock_9_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_SuccessScreen_bpw_C::Get_TextBlock_9_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TextBlock_9_Text_1");

	UEndOfHunt_SuccessScreen_bpw_C_Get_TextBlock_9_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DebugTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::DebugTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DebugTimer");

	UEndOfHunt_SuccessScreen_bpw_C_DebugTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetRankImage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Erankings_enum>    Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    RankingText                    (Parm, OutParm)

void UEndOfHunt_SuccessScreen_bpw_C::SetRankImage(TEnumAsByte<Erankings_enum> Selection, TAssetPtr<class UTexture2D>* RankingText)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetRankImage");

	UEndOfHunt_SuccessScreen_bpw_C_SetRankImage_Params params;
	params.Selection = Selection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RankingText != nullptr)
		*RankingText = params.RankingText;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_PlayerID_ForTeamDisplay
// (Public, BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::UI_Bind_MoTH_PlayerID_ForTeamDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_PlayerID_ForTeamDisplay");

	UEndOfHunt_SuccessScreen_bpw_C_UI_Bind_MoTH_PlayerID_ForTeamDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.IsValidPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AArchonPlayerState*      ArchonPlayerState              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsValidPlayer                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::IsValidPlayer(class AArchonPlayerState* ArchonPlayerState, bool* IsValidPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.IsValidPlayer");

	UEndOfHunt_SuccessScreen_bpw_C_IsValidPlayer_Params params;
	params.ArchonPlayerState = ArchonPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValidPlayer != nullptr)
		*IsValidPlayer = params.IsValidPlayer;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.GetRankText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<Erankings_enum>    Ranking                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UTexture2D>    RankingText                    (Parm, OutParm)

void UEndOfHunt_SuccessScreen_bpw_C::GetRankText(TEnumAsByte<Erankings_enum> Ranking, TAssetPtr<class UTexture2D>* RankingText)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.GetRankText");

	UEndOfHunt_SuccessScreen_bpw_C_GetRankText_Params params;
	params.Ranking = Ranking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RankingText != nullptr)
		*RankingText = params.RankingText;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_BehemothSlain_txt_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_SuccessScreen_bpw_C::Get_BehemothSlain_txt_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_BehemothSlain_txt_Text_1");

	UEndOfHunt_SuccessScreen_bpw_C_Get_BehemothSlain_txt_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetUIRewardsStageAroundBehemoth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::SetUIRewardsStageAroundBehemoth(class AArchonBehemoth* Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetUIRewardsStageAroundBehemoth");

	UEndOfHunt_SuccessScreen_bpw_C_SetUIRewardsStageAroundBehemoth_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetPlayerIDandSlotID
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Selection                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APlayerState*            Player_State                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn*                   Pawn                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::SetPlayerIDandSlotID(int Selection, class APlayerState* Player_State, class APawn* Pawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetPlayerIDandSlotID");

	UEndOfHunt_SuccessScreen_bpw_C_SetPlayerIDandSlotID_Params params;
	params.Selection = Selection;
	params.Player_State = Player_State;
	params.Pawn = Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.AetherCaptureVFX
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UChildActorComponent*    ChildActorComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UParticleSystemComponent* UEndOfHunt_SuccessScreen_bpw_C::AetherCaptureVFX(class USkeletalMeshComponent* SkeletalMeshComponent, class UChildActorComponent* ChildActorComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.AetherCaptureVFX");

	UEndOfHunt_SuccessScreen_bpw_C_AetherCaptureVFX_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.ChildActorComponent = ChildActorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TeamSumDamageTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aplayer_state_bp_C*      self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::Get_TeamSumDamageTaken(class Aplayer_state_bp_C* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TeamSumDamageTaken");

	UEndOfHunt_SuccessScreen_bpw_C_Get_TeamSumDamageTaken_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TeamSumBleedoutCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Aplayer_state_bp_C*      self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::Get_TeamSumBleedoutCount(class Aplayer_state_bp_C* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TeamSumBleedoutCount");

	UEndOfHunt_SuccessScreen_bpw_C_Get_TeamSumBleedoutCount_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DecreaseTimeLeft
// (Public, BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::DecreaseTimeLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DecreaseTimeLeft");

	UEndOfHunt_SuccessScreen_bpw_C_DecreaseTimeLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_AirshipInbound_txt_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_SuccessScreen_bpw_C::Get_AirshipInbound_txt_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_AirshipInbound_txt_Text_1");

	UEndOfHunt_SuccessScreen_bpw_C_Get_AirshipInbound_txt_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_PlayerName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_SuccessScreen_bpw_C::UI_Bind_MoTH_PlayerName()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_PlayerName");

	UEndOfHunt_SuccessScreen_bpw_C_UI_Bind_MoTH_PlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_Title
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UEndOfHunt_SuccessScreen_bpw_C::UI_Bind_MoTH_Title()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_Title");

	UEndOfHunt_SuccessScreen_bpw_C_UI_Bind_MoTH_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnLoaded_B4F5B5BC4BE2EDA4E219FCA53623ECBD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::OnLoaded_B4F5B5BC4BE2EDA4E219FCA53623ECBD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnLoaded_B4F5B5BC4BE2EDA4E219FCA53623ECBD");

	UEndOfHunt_SuccessScreen_bpw_C_OnLoaded_B4F5B5BC4BE2EDA4E219FCA53623ECBD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnLoaded_F2876D5142C0267547DF98BF3EAF7E2A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::OnLoaded_F2876D5142C0267547DF98BF3EAF7E2A(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnLoaded_F2876D5142C0267547DF98BF3EAF7E2A");

	UEndOfHunt_SuccessScreen_bpw_C_OnLoaded_F2876D5142C0267547DF98BF3EAF7E2A_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Construct");

	UEndOfHunt_SuccessScreen_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Stage1_End
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::TimelineEvent_Stage1_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Stage1_End");

	UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_Stage1_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_BADGES
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Stage3_BADGES()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_BADGES");

	UEndOfHunt_SuccessScreen_bpw_C_Stage3_BADGES_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetupDissolve
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::SetupDissolve()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetupDissolve");

	UEndOfHunt_SuccessScreen_bpw_C_SetupDissolve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_BadgeDone
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Stage3_BadgeDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_BadgeDone");

	UEndOfHunt_SuccessScreen_bpw_C_Stage3_BadgeDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_SetInput_UI
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::TimelineEvent_SetInput_UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_SetInput_UI");

	UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_SetInput_UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.RateMatchButtons
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::RateMatchButtons()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.RateMatchButtons");

	UEndOfHunt_SuccessScreen_bpw_C_RateMatchButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DissolveBehemoth
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::DissolveBehemoth()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DissolveBehemoth");

	UEndOfHunt_SuccessScreen_bpw_C_DissolveBehemoth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System 2a
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Deactivate_System_2a()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System 2a");

	UEndOfHunt_SuccessScreen_bpw_C_Deactivate_System_2a_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System 1a
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Deactivate_System_1a()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System 1a");

	UEndOfHunt_SuccessScreen_bpw_C_Deactivate_System_1a_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System4a
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Deactivate_System4a()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System4a");

	UEndOfHunt_SuccessScreen_bpw_C_Deactivate_System4a_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System3a
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Deactivate_System3a()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System3a");

	UEndOfHunt_SuccessScreen_bpw_C_Deactivate_System3a_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DestroyBP
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::DestroyBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DestroyBP");

	UEndOfHunt_SuccessScreen_bpw_C_DestroyBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Destruct");

	UEndOfHunt_SuccessScreen_bpw_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.BndEvt__HuntRateButtons_K2Node_ComponentBoundEvent_158_RateMatch__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            MatchRating                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::BndEvt__HuntRateButtons_K2Node_ComponentBoundEvent_158_RateMatch__DelegateSignature(int MatchRating)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.BndEvt__HuntRateButtons_K2Node_ComponentBoundEvent_158_RateMatch__DelegateSignature");

	UEndOfHunt_SuccessScreen_bpw_C_BndEvt__HuntRateButtons_K2Node_ComponentBoundEvent_158_RateMatch__DelegateSignature_Params params;
	params.MatchRating = MatchRating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.MovePlayersintoTeamShot
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::MovePlayersintoTeamShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.MovePlayersintoTeamShot");

	UEndOfHunt_SuccessScreen_bpw_C_MovePlayersintoTeamShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_HideStage1UI
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::TimelineEvent_HideStage1UI()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_HideStage1UI");

	UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_HideStage1UI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Core Energy Transfter
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Core_Energy_Transfter()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Core Energy Transfter");

	UEndOfHunt_SuccessScreen_bpw_C_Core_Energy_Transfter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_End
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::Stage3_End()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_End");

	UEndOfHunt_SuccessScreen_bpw_C_Stage3_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Gatherables
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::TimelineEvent_Gatherables()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Gatherables");

	UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_Gatherables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Breaks
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::TimelineEvent_Breaks()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Breaks");

	UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_Breaks_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_MoveGathered
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::TimelineEvent_MoveGathered()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_MoveGathered");

	UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_MoveGathered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Exit
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::TimelineEvent_Exit()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Exit");

	UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_Exit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.debug_stage3_end
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::debug_stage3_end()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.debug_stage3_end");

	UEndOfHunt_SuccessScreen_bpw_C_debug_stage3_end_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.PlayRanksAnim
// (BlueprintCallable, BlueprintEvent)

void UEndOfHunt_SuccessScreen_bpw_C::PlayRanksAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.PlayRanksAnim");

	UEndOfHunt_SuccessScreen_bpw_C_PlayRanksAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation**       Animation                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::OnAnimationFinished(class UWidgetAnimation** Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnAnimationFinished");

	UEndOfHunt_SuccessScreen_bpw_C_OnAnimationFinished_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.ExecuteUbergraph_EndOfHunt_SuccessScreen_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::ExecuteUbergraph_EndOfHunt_SuccessScreen_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.ExecuteUbergraph_EndOfHunt_SuccessScreen_bpw");

	UEndOfHunt_SuccessScreen_bpw_C_ExecuteUbergraph_EndOfHunt_SuccessScreen_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TriggerBehemoth01_Dissolve__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonBehemoth*         Behemoth01                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEndOfHunt_SuccessScreen_bpw_C::TriggerBehemoth01_Dissolve__DelegateSignature(class AArchonBehemoth* Behemoth01)
{
	static auto fn = UObject::FindObject<UFunction>("Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TriggerBehemoth01_Dissolve__DelegateSignature");

	UEndOfHunt_SuccessScreen_bpw_C_TriggerBehemoth01_Dissolve__DelegateSignature_Params params;
	params.Behemoth01 = Behemoth01;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
