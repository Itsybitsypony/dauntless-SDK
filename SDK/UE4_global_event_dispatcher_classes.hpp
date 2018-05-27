#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_event_dispatcher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass global_event_dispatcher.global_event_dispatcher_C
// 0x02F0 (0x0318 - 0x0028)
class Uglobal_event_dispatcher_C : public UObject
{
public:
	struct FScriptMulticastDelegate                    GameModeStart;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerMontageStarted;                               // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerMontageBlendingOut;                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerSpawnedInCity;                                // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerSpawnedInIsland;                              // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerLoadoutReady;                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerControllerGameModeLogout;                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerControllerGameModeLogin;                      // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerControllerInputType;                          // 0x00A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerControllerMatchRated;                         // 0x00B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerUnstuck;                                      // 0x00C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerEdgeRecovery;                                 // 0x00D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerQuestBoardEvent;                              // 0x00E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerPlayerInteractionEvent;                             // 0x00F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerQuestButtonEvent;                             // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerDialogueLineEvent;                            // 0x0118(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerDialogueEnd;                                  // 0x0128(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerDialogueChoice;                               // 0x0138(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerBugReport;                                    // 0x0148(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerSetDyeColour;                                 // 0x0158(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerExitGame;                                     // 0x0168(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerThingsmithEvent;                              // 0x0178(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerControllerMatchmakingEvent;                   // 0x0188(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerControllerInputSwap;                          // 0x0198(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerCoolMoment;                                   // 0x01A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerMatchEnded;                                         // 0x01B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerTutorialEnd;                                  // 0x01C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerWentOnHunt;                               // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerRedeemedQuest;                            // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerCompletedQuestObjective;                  // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerAcceptedQuest;                            // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerStartedQuestProgression;                  // 0x0218(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerFailedToFindHunt;                         // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerWantsToCraft;                             // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerFailedToCraft;                            // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerSuccessfulCraft;                          // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientAutoplayerGrantedCraftingIngredient;                // 0x0268(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerCharacterCreateNew;                           // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientLoginComplete;                                      // 0x0288(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerTransmogItem;                                 // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerTransmogInteraction;                          // 0x02A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerDyeInteraction;                               // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerCharacterCreateNewFinished;                   // 0x02C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientLoginScreenOptionsInteraction;                      // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerCharacterCreatorInteraction;                  // 0x02E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerCinematicStarted;                             // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ClientPlayerCinematicEnded;                               // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass global_event_dispatcher.global_event_dispatcher_C");
		return ptr;
	}


	void BroadcastClientPlayerTutorialEnd(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Tutorial_Name, float Start_Time, float End_Time);
	void ClientPlayerCinematicEnded__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, const class FString& Cinematic, const class FString& Reason, float EndTime);
	void ClientPlayerCinematicStarted__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, const class FString& Cinematic, float StartTime);
	void ClientPlayerCharacterCreatorInteraction__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, float Start_Time, float End_Time, const class FString& Action);
	void ClientLoginScreenOptionsInteraction__DelegateSignature(const class FString& PlayerId, float Start_Time, float End_Time);
	void ClientPlayerCharacterCreateNewFinished__DelegateSignature(const class FString& PlayerId, const class FString& CharacterId, float Start_Time, float End_Time, const class FString& Reason);
	void ClientPlayerDyeInteraction__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, float Start_Time, float End_Time);
	void ClientPlayerTransmogInteraction__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, float Start_Time, float End_Time);
	void ClientPlayerTransmogItem__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem* Item, const class FString& TransmogId, const class FString& TokenId, int Num_Tokens_Consumed);
	void ClientLoginComplete__DelegateSignature(const class FString& AccountId, bool bLoginSuccess, const class FString& Error);
	void ClientPlayerCharacterCreateNew__DelegateSignature(const class FString& PlayerId, const class FString& CharacterId);
	void ClientAutoplayerGrantedCraftingIngredient__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& ItemID, int ItemAmount, const class FString& RecipeID);
	void ClientAutoplayerSuccessfulCraft__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID, const class FString& CraftedItemID);
	void ClientAutoplayerFailedToCraft__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID, const class FString& FailReason);
	void ClientAutoplayerWantsToCraft__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID);
	void ClientAutoplayerFailedToFindHunt__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& QuestID);
	void ClientAutoplayerStartedQuestProgression__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface);
	void ClientAutoplayerAcceptedQuest__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& AcceptedQuestID);
	void ClientAutoplayerCompletedQuestObjective__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& QuestID, const struct FName& ItemID, int ItemAmount, const class FString& InteractTarget, int ObjectiveType);
	void ClientAutoplayerRedeemedQuest__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& RedeemedQuestId);
	void ClientAutoplayerWentOnHunt__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, bool FindHuntsResult, const struct FName& TargetedBehemoth, TArray<struct FName>* HuntIds);
	void ClientPlayerTutorialEnd__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Tutorial_Name, float Start_Time, float End_Time);
	void ServerMatchEnded__DelegateSignature(class AArchonPlayerController* Archon_Player_Controller, float Match_Duration, const class FString& Behemoth_Name, const class FString& Map_Name, bool Won_Match, const class FString& Additional_Behemoth_1);
	void ClientPlayerCoolMoment__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Title, const class FString& Details);
	void ClientPlayerControllerInputSwap__DelegateSignature(bool Using_Gamepad);
	void ClientPlayerControllerMatchmakingEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class AArchonLobbyClient* Lobby_Client, float Matchmaking_Attempt_Start, const class FString& Event_Name, float Current_Time, int Matchmaking_Attempt_Counter);
	void ClientPlayerThingsmithEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, const class FString& Event_Name, float Widget_Start_Time, float Current_Time, const class FString& Selected_Recipe);
	void ClientPlayerExitGame__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface);
	void ClientPlayerSetDyeColour__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem_Armour* Armour, const struct FDyeVariant& Dye_Config);
	void ClientPlayerBugReport__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Bug_Title, const class FString& Bug_Details, const class FString& Severity_Rating_String, int Severity_Rating_Integer);
	void ClientPlayerDialogueChoice__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Choice_Index, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_Choice_Time);
	void ClientPlayerDialogueEnd__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_End_Time, bool Force_End);
	void ClientPlayerDialogueLineEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Line_Start_Time, float Line_End_Time, bool Skipped);
	void ClientPlayerQuestButtonEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Quest_Id, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, class UArchonSpeaker* NPC_Identity);
	void ServerPlayerInteractionEvent__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Interactable_Name, const struct FVector& Interactable_Location, const class FString& Event_Type);
	void ClientPlayerQuestBoardEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, TArray<class UQuest*>* Available_Quests, TArray<class UQuest*>* Redeemable_Quests);
	void ServerPlayerEdgeRecovery__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name, const class FString& Edge_Recovery_Notes);
	void ServerPlayerUnstuck__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name);
	void ClientPlayerControllerMatchRated__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Rating_Counter, int Rating);
	void ClientPlayerControllerInputType__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Input);
	void ServerPlayerControllerGameModeLogin__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, bool InCity);
	void ServerPlayerControllerGameModeLogout__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, bool InCity);
	void ServerPlayerLoadoutReady__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface);
	void ServerPlayerSpawnedInIsland__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& PlayerInterface);
	void ServerPlayerSpawnedInCity__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface);
	void ServerPlayerMontageBlendingOut__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, bool Interrupted, class UAnimMontage* Montage, int Montage_Counter);
	void ServerPlayerMontageStarted__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, class UAnimMontage* Montage, int Montage_Counter);
	void GameModeStart__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
