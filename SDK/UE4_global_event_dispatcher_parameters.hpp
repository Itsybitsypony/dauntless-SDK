#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_event_dispatcher_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function global_event_dispatcher.global_event_dispatcher_C.BroadcastClientPlayerTutorialEnd
struct Uglobal_event_dispatcher_C_BroadcastClientPlayerTutorialEnd_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Tutorial_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCinematicEnded__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerCinematicEnded__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Cinematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCinematicStarted__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerCinematicStarted__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Cinematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreatorInteraction__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerCharacterCreatorInteraction__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientLoginScreenOptionsInteraction__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientLoginScreenOptionsInteraction__DelegateSignature_Params
{
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreateNewFinished__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerCharacterCreateNewFinished__DelegateSignature_Params
{
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      CharacterId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDyeInteraction__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerDyeInteraction__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTransmogInteraction__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerTransmogInteraction__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTransmogItem__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerTransmogItem__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TokenId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num_Tokens_Consumed;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientLoginComplete__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientLoginComplete__DelegateSignature_Params
{
	class FString                                      AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bLoginSuccess;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreateNew__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerCharacterCreateNew__DelegateSignature_Params
{
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      CharacterId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerGrantedCraftingIngredient__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerGrantedCraftingIngredient__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerSuccessfulCraft__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerSuccessfulCraft__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      CraftedItemID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerFailedToCraft__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerFailedToCraft__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      FailReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerWantsToCraft__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerWantsToCraft__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerFailedToFindHunt__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerFailedToFindHunt__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerStartedQuestProgression__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerStartedQuestProgression__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerAcceptedQuest__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerAcceptedQuest__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AcceptedQuestID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerCompletedQuestObjective__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerCompletedQuestObjective__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InteractTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ObjectiveType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerRedeemedQuest__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerRedeemedQuest__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RedeemedQuestId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerWentOnHunt__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientAutoplayerWentOnHunt__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HuntIds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               FindHuntsResult;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetedBehemoth;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTutorialEnd__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerTutorialEnd__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Tutorial_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerMatchEnded__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerMatchEnded__DelegateSignature_Params
{
	class AArchonPlayerController*                     Archon_Player_Controller;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Match_Duration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Behemoth_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Won_Match;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Additional_Behemoth_1;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCoolMoment__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerCoolMoment__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerInputSwap__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerControllerInputSwap__DelegateSignature_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerMatchmakingEvent__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerControllerMatchmakingEvent__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonLobbyClient*                          Lobby_Client;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Matchmaking_Attempt_Start;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Matchmaking_Attempt_Counter;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerThingsmithEvent__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerThingsmithEvent__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Selected_Recipe;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerExitGame__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerExitGame__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerSetDyeColour__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerSetDyeColour__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 Armour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 Dye_Config;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerBugReport__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerBugReport__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Bug_Title;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Bug_Details;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Severity_Rating_String;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Severity_Rating_Integer;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueChoice__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerDialogueChoice__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Choice_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dialogue_Choice_Time;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueEnd__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerDialogueEnd__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dialogue_End_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force_End;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueLineEvent__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerDialogueLineEvent__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Line_Start_Time;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Line_End_Time;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skipped;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerQuestButtonEvent__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerQuestButtonEvent__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest_Id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerInteractionEvent__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerInteractionEvent__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Interactable_Name;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     Interactable_Location;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class FString                                      Event_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerQuestBoardEvent__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerQuestBoardEvent__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuest*>                              Available_Quests;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UQuest*>                              Redeemable_Quests;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerEdgeRecovery__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerEdgeRecovery__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Edge_Recovery_Notes;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerUnstuck__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerUnstuck__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerMatchRated__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerControllerMatchRated__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating_Counter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerInputType__DelegateSignature
struct Uglobal_event_dispatcher_C_ClientPlayerControllerInputType__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerControllerGameModeLogin__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerControllerGameModeLogin__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InCity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerControllerGameModeLogout__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerControllerGameModeLogout__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InCity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerLoadoutReady__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerLoadoutReady__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerSpawnedInIsland__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerSpawnedInIsland__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_interface_C>        PlayerInterface;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerSpawnedInCity__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerSpawnedInCity__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerMontageBlendingOut__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerMontageBlendingOut__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Montage_Counter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerMontageStarted__DelegateSignature
struct Uglobal_event_dispatcher_C_ServerPlayerMontageStarted__DelegateSignature_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                Montage;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Montage_Counter;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_event_dispatcher.global_event_dispatcher_C.GameModeStart__DelegateSignature
struct Uglobal_event_dispatcher_C_GameModeStart__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
