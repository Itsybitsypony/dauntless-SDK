#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EndOfHunt_SuccessScreen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_Marker_2_Visibility_1
struct UEndOfHunt_SuccessScreen_bpw_C_Get_Marker_2_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TextBlock_11_Text_1
struct UEndOfHunt_SuccessScreen_bpw_C_Get_TextBlock_11_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TextBlock_9_Text_1
struct UEndOfHunt_SuccessScreen_bpw_C_Get_TextBlock_9_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DebugTimer
struct UEndOfHunt_SuccessScreen_bpw_C_DebugTimer_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetRankImage
struct UEndOfHunt_SuccessScreen_bpw_C_SetRankImage_Params
{
	TEnumAsByte<Erankings_enum>                        Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        RankingText;                                              // (Parm, OutParm)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_PlayerID_ForTeamDisplay
struct UEndOfHunt_SuccessScreen_bpw_C_UI_Bind_MoTH_PlayerID_ForTeamDisplay_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.IsValidPlayer
struct UEndOfHunt_SuccessScreen_bpw_C_IsValidPlayer_Params
{
	class AArchonPlayerState*                          ArchonPlayerState;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsValidPlayer;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.GetRankText
struct UEndOfHunt_SuccessScreen_bpw_C_GetRankText_Params
{
	TEnumAsByte<Erankings_enum>                        Ranking;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        RankingText;                                              // (Parm, OutParm)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_BehemothSlain_txt_Text_1
struct UEndOfHunt_SuccessScreen_bpw_C_Get_BehemothSlain_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetUIRewardsStageAroundBehemoth
struct UEndOfHunt_SuccessScreen_bpw_C_SetUIRewardsStageAroundBehemoth_Params
{
	class AArchonBehemoth*                             Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetPlayerIDandSlotID
struct UEndOfHunt_SuccessScreen_bpw_C_SetPlayerIDandSlotID_Params
{
	int                                                Selection;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APlayerState*                                Player_State;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.AetherCaptureVFX
struct UEndOfHunt_SuccessScreen_bpw_C_AetherCaptureVFX_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshComponent;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ChildActorComponent;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TeamSumDamageTaken
struct UEndOfHunt_SuccessScreen_bpw_C_Get_TeamSumDamageTaken_Params
{
	class Aplayer_state_bp_C*                          self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_TeamSumBleedoutCount
struct UEndOfHunt_SuccessScreen_bpw_C_Get_TeamSumBleedoutCount_Params
{
	class Aplayer_state_bp_C*                          self2;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DecreaseTimeLeft
struct UEndOfHunt_SuccessScreen_bpw_C_DecreaseTimeLeft_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Get_AirshipInbound_txt_Text_1
struct UEndOfHunt_SuccessScreen_bpw_C_Get_AirshipInbound_txt_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_PlayerName
struct UEndOfHunt_SuccessScreen_bpw_C_UI_Bind_MoTH_PlayerName_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.UI_Bind_MoTH_Title
struct UEndOfHunt_SuccessScreen_bpw_C_UI_Bind_MoTH_Title_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnLoaded_B4F5B5BC4BE2EDA4E219FCA53623ECBD
struct UEndOfHunt_SuccessScreen_bpw_C_OnLoaded_B4F5B5BC4BE2EDA4E219FCA53623ECBD_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnLoaded_F2876D5142C0267547DF98BF3EAF7E2A
struct UEndOfHunt_SuccessScreen_bpw_C_OnLoaded_F2876D5142C0267547DF98BF3EAF7E2A_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Construct
struct UEndOfHunt_SuccessScreen_bpw_C_Construct_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Stage1_End
struct UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_Stage1_End_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_BADGES
struct UEndOfHunt_SuccessScreen_bpw_C_Stage3_BADGES_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.SetupDissolve
struct UEndOfHunt_SuccessScreen_bpw_C_SetupDissolve_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_BadgeDone
struct UEndOfHunt_SuccessScreen_bpw_C_Stage3_BadgeDone_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_SetInput_UI
struct UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_SetInput_UI_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.RateMatchButtons
struct UEndOfHunt_SuccessScreen_bpw_C_RateMatchButtons_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DissolveBehemoth
struct UEndOfHunt_SuccessScreen_bpw_C_DissolveBehemoth_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System 2a
struct UEndOfHunt_SuccessScreen_bpw_C_Deactivate_System_2a_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System 1a
struct UEndOfHunt_SuccessScreen_bpw_C_Deactivate_System_1a_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System4a
struct UEndOfHunt_SuccessScreen_bpw_C_Deactivate_System4a_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Deactivate System3a
struct UEndOfHunt_SuccessScreen_bpw_C_Deactivate_System3a_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.DestroyBP
struct UEndOfHunt_SuccessScreen_bpw_C_DestroyBP_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Destruct
struct UEndOfHunt_SuccessScreen_bpw_C_Destruct_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.BndEvt__HuntRateButtons_K2Node_ComponentBoundEvent_158_RateMatch__DelegateSignature
struct UEndOfHunt_SuccessScreen_bpw_C_BndEvt__HuntRateButtons_K2Node_ComponentBoundEvent_158_RateMatch__DelegateSignature_Params
{
	int                                                MatchRating;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.MovePlayersintoTeamShot
struct UEndOfHunt_SuccessScreen_bpw_C_MovePlayersintoTeamShot_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_HideStage1UI
struct UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_HideStage1UI_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Core Energy Transfter
struct UEndOfHunt_SuccessScreen_bpw_C_Core_Energy_Transfter_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.Stage3_End
struct UEndOfHunt_SuccessScreen_bpw_C_Stage3_End_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Gatherables
struct UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_Gatherables_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Breaks
struct UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_Breaks_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_MoveGathered
struct UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_MoveGathered_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TimelineEvent_Exit
struct UEndOfHunt_SuccessScreen_bpw_C_TimelineEvent_Exit_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.debug_stage3_end
struct UEndOfHunt_SuccessScreen_bpw_C_debug_stage3_end_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.PlayRanksAnim
struct UEndOfHunt_SuccessScreen_bpw_C_PlayRanksAnim_Params
{
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.OnAnimationFinished
struct UEndOfHunt_SuccessScreen_bpw_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.ExecuteUbergraph_EndOfHunt_SuccessScreen_bpw
struct UEndOfHunt_SuccessScreen_bpw_C_ExecuteUbergraph_EndOfHunt_SuccessScreen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function EndOfHunt_SuccessScreen_bpw.EndOfHunt_SuccessScreen_bpw_C.TriggerBehemoth01_Dissolve__DelegateSignature
struct UEndOfHunt_SuccessScreen_bpw_C_TriggerBehemoth01_Dissolve__DelegateSignature_Params
{
	class AArchonBehemoth*                             Behemoth01;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
