#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_autoplayer_comp_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetAutorunMode
struct Uautoplayer_comp_bp_C_GetAutorunMode_Params
{
	bool                                               AutorunMode;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckErrorsWarningsLogFileSize
struct Uautoplayer_comp_bp_C_CheckErrorsWarningsLogFileSize_Params
{
	class FString                                      Location;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetSpecificBehemothForPlayerHunt
struct Uautoplayer_comp_bp_C_GetSpecificBehemothForPlayerHunt_Params
{
	class FString                                      PlayerHuntID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FHunt_BehemothInfo>                  SpecificBehemoths;                                        // (Parm, OutParm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnRep_StayInCity
struct Uautoplayer_comp_bp_C_OnRep_StayInCity_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.AssignRandomWeapon
struct Uautoplayer_comp_bp_C_AssignRandomWeapon_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.AssignRandomEmote
struct Uautoplayer_comp_bp_C_AssignRandomEmote_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GiveAllEmotes
struct Uautoplayer_comp_bp_C_GiveAllEmotes_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SlackMessage
struct Uautoplayer_comp_bp_C_SlackMessage_Params
{
	class FString                                      SlackMessage;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Alert;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftUpgrade
struct Uautoplayer_comp_bp_C_TryCraftUpgrade_Params
{
	class UArchonInventoryItem_Upgradeable*            UpgradeableInvItem;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftNewItem
struct Uautoplayer_comp_bp_C_TryCraftNewItem_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetAllItems
struct Uautoplayer_comp_bp_C_GetAllItems_Params
{
	TArray<class FString>                              UpgradableItems;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftRecipe
struct Uautoplayer_comp_bp_C_TryCraftRecipe_Params
{
	class UArchonInventoryItem*                        Recipe;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetCraftableItems
struct Uautoplayer_comp_bp_C_GetCraftableItems_Params
{
	TArray<class FString>                              UpgradableItems;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OpenCores
struct Uautoplayer_comp_bp_C_OpenCores_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.fCompleteQuestObjs
struct Uautoplayer_comp_bp_C_fCompleteQuestObjs_Params
{
	class UObjectiveData*                              ObjectiveData;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObjective*                                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.fRedeemQuests
struct Uautoplayer_comp_bp_C_fRedeemQuests_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.fAcceptQuests
struct Uautoplayer_comp_bp_C_fAcceptQuests_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.fCompleteQuests
struct Uautoplayer_comp_bp_C_fCompleteQuests_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntBehemoth
struct Uautoplayer_comp_bp_C_ChooseHuntBehemoth_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntAtmosphere
struct Uautoplayer_comp_bp_C_ChooseHuntAtmosphere_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntMap
struct Uautoplayer_comp_bp_C_ChooseHuntMap_Params
{
	int                                                SelectedIndex;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetQuestDependencies
struct Uautoplayer_comp_bp_C_GetQuestDependencies_Params
{
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              IDs;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.BuildPartialQuestList
struct Uautoplayer_comp_bp_C_BuildPartialQuestList_Params
{
	class FString                                      QuestToReach;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<class FString>                              Chain;                                                    // (Parm, OutParm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OrderWalkDestinations
struct Uautoplayer_comp_bp_C_OrderWalkDestinations_Params
{
	TArray<class AActor*>                              Unorded;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Ordered;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TeleportToTargetIfStuck
struct Uautoplayer_comp_bp_C_TeleportToTargetIfStuck_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GrantQuestItems
struct Uautoplayer_comp_bp_C_GrantQuestItems_Params
{
	struct FName                                       InName;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckIfCanHit
struct Uautoplayer_comp_bp_C_CheckIfCanHit_Params
{
	bool                                               CanHit;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoRez
struct Uautoplayer_comp_bp_C_DoRez_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckForBleedingOutPlayer
struct Uautoplayer_comp_bp_C_CheckForBleedingOutPlayer_Params
{
	bool                                               BleedoutFound;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_BB3A79AE431628F65A6CBDB54DAEEB40
struct Uautoplayer_comp_bp_C_OnFailure_BB3A79AE431628F65A6CBDB54DAEEB40_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_BB3A79AE431628F65A6CBDB54DAEEB40
struct Uautoplayer_comp_bp_C_OnSuccess_BB3A79AE431628F65A6CBDB54DAEEB40_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_85E794554A230291B5CEB3873BCCFB77
struct Uautoplayer_comp_bp_C_OnFailure_85E794554A230291B5CEB3873BCCFB77_Params
{
	TArray<class APlayerState*>                        MembersArray;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_85E794554A230291B5CEB3873BCCFB77
struct Uautoplayer_comp_bp_C_OnSuccess_85E794554A230291B5CEB3873BCCFB77_Params
{
	TArray<class APlayerState*>                        MembersArray;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_0959F7EF4AFE61FF812470A9E438A1F6
struct Uautoplayer_comp_bp_C_OnFailure_0959F7EF4AFE61FF812470A9E438A1F6_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_0959F7EF4AFE61FF812470A9E438A1F6
struct Uautoplayer_comp_bp_C_OnSuccess_0959F7EF4AFE61FF812470A9E438A1F6_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_1CC8016943096F98F105A6BCD1A9CC86
struct Uautoplayer_comp_bp_C_OnFailure_1CC8016943096F98F105A6BCD1A9CC86_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_1CC8016943096F98F105A6BCD1A9CC86
struct Uautoplayer_comp_bp_C_OnSuccess_1CC8016943096F98F105A6BCD1A9CC86_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.EvaluateTargets
struct Uautoplayer_comp_bp_C_EvaluateTargets_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetBehemothTarget
struct Uautoplayer_comp_bp_C_GetBehemothTarget_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetBehemothAsTarget
struct Uautoplayer_comp_bp_C_SetBehemothAsTarget_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetReadyWhenInParty
struct Uautoplayer_comp_bp_C_SetReadyWhenInParty_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetPlayerTarget
struct Uautoplayer_comp_bp_C_GetPlayerTarget_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetPlayerTarget
struct Uautoplayer_comp_bp_C_SetPlayerTarget_Params
{
	class UEnvQueryInstanceBlueprintWrapper*           QueryInstance;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EEnvQueryStatus>                       QueryStatus;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.RunToTarget
struct Uautoplayer_comp_bp_C_RunToTarget_Params
{
	class AActor*                                      Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SwingModeOn
struct Uautoplayer_comp_bp_C_SwingModeOn_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoAction
struct Uautoplayer_comp_bp_C_DoAction_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.Swing
struct Uautoplayer_comp_bp_C_Swing_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SwingModeOff
struct Uautoplayer_comp_bp_C_SwingModeOff_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientSwing
struct Uautoplayer_comp_bp_C_ClientSwing_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.DebugToClient
struct Uautoplayer_comp_bp_C_DebugToClient_Params
{
	class FString                                      Message;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.StartAutoplayer
struct Uautoplayer_comp_bp_C_StartAutoplayer_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientQuestHandling
struct Uautoplayer_comp_bp_C_ClientQuestHandling_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientSetupMission
struct Uautoplayer_comp_bp_C_ClientSetupMission_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ServerWaitAgain
struct Uautoplayer_comp_bp_C_ServerWaitAgain_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReceiveBeginPlay
struct Uautoplayer_comp_bp_C_ReceiveBeginPlay_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientInputcontrol
struct Uautoplayer_comp_bp_C_ClientInputcontrol_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.BuildGroup
struct Uautoplayer_comp_bp_C_BuildGroup_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.StartAutoplayerComp
struct Uautoplayer_comp_bp_C_StartAutoplayerComp_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToAcceptQuest
struct Uautoplayer_comp_bp_C_TryToAcceptQuest_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToCompleteQuests
struct Uautoplayer_comp_bp_C_TryToCompleteQuests_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToRedeemQuests
struct Uautoplayer_comp_bp_C_TryToRedeemQuests_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReceiveTick
struct Uautoplayer_comp_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TestQuestProgression
struct Uautoplayer_comp_bp_C_TestQuestProgression_Params
{
	class FString                                      IDToStopAt;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.StopAutoProgression
struct Uautoplayer_comp_bp_C_StopAutoProgression_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetClientRot
struct Uautoplayer_comp_bp_C_SetClientRot_Params
{
	struct FRotator                                    rot;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientGoToIsland
struct Uautoplayer_comp_bp_C_ClientGoToIsland_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoEmote
struct Uautoplayer_comp_bp_C_DoEmote_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckUnsheathed
struct Uautoplayer_comp_bp_C_CheckUnsheathed_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetDoneProcessingQuests
struct Uautoplayer_comp_bp_C_SetDoneProcessingQuests_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientMessageSlackOnRankSet
struct Uautoplayer_comp_bp_C_ClientMessageSlackOnRankSet_Params
{
	struct FName                                       Track;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnRankSetEvent
struct Uautoplayer_comp_bp_C_OnRankSetEvent_Params
{
	struct FName                                       Track;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	int                                                Rank;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CallTriggerEmote
struct Uautoplayer_comp_bp_C_CallTriggerEmote_Params
{
	int                                                EmoteSlot;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReportPartyMember
struct Uautoplayer_comp_bp_C_ReportPartyMember_Params
{
	class FString                                      UserId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SlotIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FArchonLobbyPaperDollData                   LoadoutData;                                              // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReportOnLobbyCandidateFailed
struct Uautoplayer_comp_bp_C_ReportOnLobbyCandidateFailed_Params
{
	class FString                                      Params;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TakeScreenshot
struct Uautoplayer_comp_bp_C_TakeScreenshot_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.PushConfigVars
struct Uautoplayer_comp_bp_C_PushConfigVars_Params
{
	bool                                               StayInCity;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ExecuteCommand;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                SlackFrequency;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                BehemothToCraft;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientPushConfigVars
struct Uautoplayer_comp_bp_C_ClientPushConfigVars_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientCommand
struct Uautoplayer_comp_bp_C_ClientCommand_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ConsoleQuit
struct Uautoplayer_comp_bp_C_ConsoleQuit_Params
{
};

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ExecuteUbergraph_autoplayer_comp_bp
struct Uautoplayer_comp_bp_C_ExecuteUbergraph_autoplayer_comp_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
