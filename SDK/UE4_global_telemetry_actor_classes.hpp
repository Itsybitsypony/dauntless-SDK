#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_telemetry_actor_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass global_telemetry_actor.global_telemetry_actor_C
// 0x0010 (0x0398 - 0x0388)
class Aglobal_telemetry_actor_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass global_telemetry_actor.global_telemetry_actor_C");
		return ptr;
	}


	void HelperCaptureCellInfoFromInventoryToJson(class UArchonInventoryItem_CellContainer* CellContainer, const class FString& LogicalCellName, TArray<struct FJsonBPObjectField>* OutputJsonArray);
	void POST_Client_Player_Cinematic_End(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Cinematic, const class FString& Reason, float End_Time);
	void POST_Client_Player_Cinematic_Start(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Cinematic, float Start_Time);
	void POST_Client_Player_Options_Interaction(const class FString& PlayerId, float StartTime, float EndTime);
	void POST_Client_Player_Character_Creator_Interaction(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, float StartTime, float EndTime, const class FString& Action);
	void POST_Client_Player_Character_Create_New_Finished(const class FString& PlayerId, const class FString& CharacterId, float StartTime, float EndTime, const class FString& Action);
	void POST_Client_Player_Transmog_Item(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem* Item, const class FString& TransmogId, const class FString& TokenId, int NumTokensConsumed);
	void POST_Client_Player_Transmog_Interaction(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, float Start_Time, float End_Time);
	void POST_Client_Game_Session_Start(const class FString& AccountId, bool Success, const class FString& ErrorResponse);
	void POST_Client_Player_Character_Create_New(const class FString& player_id, const class FString& character_id);
	void POST_Client_Autoplayer_Granted_Crafting_Ingredient(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Item_ID, int Item_Amount, const class FString& Recipe_ID);
	void POST_Client_Autoplayer_Successful_Craft(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Recipe_ID, const class FString& Crafted_Item_Id);
	void POST_Client_Autoplayer_Failed_To_Craft(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Recipe_ID, const class FString& FailReason);
	void POST_Client_Autoplayer_Wants_To_Craft(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Recipe_ID);
	void POST_Client_Autoplayer_Failed_To_Find_Hunt(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Quest_Id);
	void POST_Client_Autoplayer_Went_On_Hunt(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, bool FindHuntsResult, const struct FName& TargetedBehemoth, TArray<struct FName>* HuntIds);
	void POST_Client_Autoplayer_Redeemed_Quest(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& RedeemedQuestId);
	void POST_Client_Autoplayer_Completed_Quest_Objective(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& QuestID, const struct FName& ItemID, int ItemAmount, const class FString& InteractTarget, int ObjectiveType);
	void POST_Client_Autoplayer_Accepted_Quest(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& AcceptedQuestID);
	void POST_Client_Autoplayer_Started_Quest_Progression(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface);
	void POST_Client_Player_Tutorial_End(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_End_Time);
	void POST_Server_Match_Ended(class AArchonPlayerController* Archon_Player_Controller, float Match_Duration, const class FString& Behemoth_Name, const class FString& Map_Name, bool Won_Match, const class FString& Additional_Behemoth_1);
	void POST_Client_Event_Cool_Moment(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Title, const class FString& Details);
	void POST_Server_Player_Loadout_Ready(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface);
	void POST_Client_Player_Controller_Matchmaking_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class AArchonLobbyClient* Lobby_Client, float Matchmaking_Attempt_Start, const class FString& Event_Name, float Current_Time, int Matchmaking_Attempt_Counter);
	void POST_Client_Player_Dialogue_Choice(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Choice_Index, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_Choice_Time);
	void POST_Client_Player_Dialogue_End(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_End_Time, bool Force_End);
	void POST_Client_Player_Dialogue_Line_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Line_Start_Time, float Line_End_Time, bool Skipped);
	void POST_Client_Player_Thingsmith_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, const class FString& Event_Name, float Widget_Start_Time, float Current_Time, const class FString& Selected_Recipe);
	void POST_Client_Player_Quest_Button_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Quest_Id, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, class UArchonSpeaker* NPC_Identity);
	void POST_Client_Player_Quest_Board_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, TArray<class UQuest*>* Available_Quests, TArray<class UQuest*>* Redeemable_Quests);
	void POST_Client_Player_Exit_Game(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface);
	void POST_Client_Player_Set_Dye_Colour(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem_Armour* Armour, const struct FDyeVariant& Dye);
	void POST_Client_Player_Bug_Report(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Bug_Title, const class FString& Bug_Details, const class FString& Severity_String, int Severity_Int);
	void POST_Client_Player_Controller_Input_Type(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Input);
	void POST_Server_Player_Interaction_Event(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Interactable_Name, const struct FVector& Interactable_Location, const class FString& Event_Type);
	void POST_Server_Player_Edge_Recovery(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name, const class FString& Edge_Recovery_Notes);
	void POST_Server_Player_Unstuck(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name);
	void POST_Client_Player_Controller_Match_Rated(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Rating_Counter, int Rating);
	void Get_Player_Info(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, struct FJsonBPObjectField* player_id, struct FJsonBPObjectField* character_id, struct FJsonBPObjectField* Position, struct FJsonBPObjectField* Facing, struct FJsonBPObjectField* Velocity, struct FJsonBPObjectField* Camera, struct FJsonBPObjectField* player_stats);
	void UserConstructionScript();
	void ClientPlayerControllerMatchRated(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Rating_Counter, int Rating);
	void ServerPlayerUnstuck(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name);
	void ServerPlayerEdgeRecovery(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name, const class FString& Edge_Recovery_Notes);
	void ServerPlayerInteractionEvent(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Interactable_Name, const struct FVector& Interactable_Location, const class FString& Event_Type);
	void ClientPlayerControllerInputType(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Input);
	void ClientPlayerBugReport(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Bug_Title, const class FString& Bug_Details, const class FString& Severity_Rating_String, int Severity_Rating_Integer);
	void ClientPlayerExitGame(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface);
	void ClientPlayerQuestBoardEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, float Widget_Start_Time, TArray<class UQuest*> Available_Quests, TArray<class UQuest*> Redeemable_Quests, float Current_Time, const class FString& Event_Name);
	void ClientPlayerQuestButtonEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Quest_Id, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, class UArchonSpeaker* NPC_Identity);
	void ClientPlayerThingsmithEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, const class FString& Event_Name, float Widget_Start_Time, float Current_Time, const class FString& Selected_Recipe);
	void ClientPlayerDialogueLineEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Line_Start_Time, float Line_End_Time, bool Skipped);
	void ClientPlayerDialogueEnd(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_End_Time, bool Force_End);
	void ClientPlayerDialogueChoice(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Choice_Index, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_Choice_Time);
	void ClientPlayerControllerMatchmakingEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class AArchonLobbyClient* Lobby_Client, float Matchmaking_Attempt_Start, const class FString& Event_Name, float Current_Time, int Matchmaking_Attempt_Counter);
	void ClientPlayerSetDyeEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem_Armour* Armour, const struct FDyeVariant& Dye_Config);
	void ClientEventCoolMoment(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Title, const class FString& Details);
	void ServerPlayerLoadoutReady(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface);
	void ServerMatchEnded(class AArchonPlayerController* Archon_Player_Controller, float Match_Duration, const class FString& Behemoth_Name, const class FString& Map_Name, bool Won_Match, const class FString& Additional_Behemoth_1);
	void Bind_Tutorial_Events(class Uglobal_event_dispatcher_C* Dispatcher);
	void ClientPlayerTutorialEnd(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Tutorial_Name, float Start_Time, float End_Time);
	void ClientAutoplayerStartedQuestProgressionEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface);
	void ClientAutoplayerAcceptedQuestEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& AcceptedQuestID);
	void ClientAutoplayerRedeemedQuestEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& RedeemedQuestId);
	void ClientAutoplayerCompletedQuestObjectiveEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& QuestID, const struct FName& ItemID, int ItemAmount, const class FString& InteractTarget, int ObjectiveType);
	void ClientAutoplayerFailedToFindHuntEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& QuestID);
	void ClientAutoplayerWantsToCraftEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID);
	void ClientAutoplayerSuccessfulCraftEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID, const class FString& CraftedItemID);
	void ClientAutoplayerGrantedCraftingIngredientEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& ItemID, int ItemAmount, const class FString& RecipeID);
	void ClientAutoplayerFailedToCraftEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID, const class FString& FailReason);
	void ClientAutoplayerWentOnHuntEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, TArray<struct FName> HuntIds, bool FindHuntsResult, const struct FName& TargetedBehemoth);
	void Bind_Character_Creator_Events(class Uglobal_event_dispatcher_C* Dispatcher);
	void ClientPlayerCharacterCreateNew(const class FString& PlayerId, const class FString& CharacterId);
	void Bind_Transmog_Events(class Uglobal_event_dispatcher_C* Dispatcher);
	void ClientPlayerTransmogInteraction(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, float Start_Time, float End_Time);
	void ClientPlayerTransmogItem(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem* Item, const class FString& TransmogId, const class FString& TokenId, int Num_Tokens_Consumed);
	void ReceiveBeginPlay();
	void ClientPlayerCharacterCreateNewFinished(const class FString& PlayerId, const class FString& CharacterId, float Start_Time, float End_Time, const class FString& Reason);
	void ClientPlayerCharacterCreatorInteraction(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, float Start_Time, float End_Time, const class FString& Action);
	void Bind_Client_FTUE_and_Login_Events(class Uglobal_event_dispatcher_C* Dispatcher);
	void ClientLoginScreenOptionsInteraction(const class FString& PlayerId, float Start_Time, float End_Time);
	void ClientPlayerCinematicStarted(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, const class FString& Cinematic, float StartTime);
	void ClientPlayerCinematicEnded(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, const class FString& Cinematic, const class FString& Reason, float EndTime);
	void OnClientLoginComplete(const class FString& AccountId, bool bLoginSuccess, const class FString& Error);
	void ExecuteUbergraph_global_telemetry_actor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
