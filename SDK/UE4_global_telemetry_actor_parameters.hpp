#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_telemetry_actor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function global_telemetry_actor.global_telemetry_actor_C.HelperCaptureCellInfoFromInventoryToJson
struct Aglobal_telemetry_actor_C_HelperCaptureCellInfoFromInventoryToJson_Params
{
	class UArchonInventoryItem_CellContainer*          CellContainer;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      LogicalCellName;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FJsonBPObjectField>                  OutputJsonArray;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Cinematic End
struct Aglobal_telemetry_actor_C_POST_Client_Player_Cinematic_End_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Cinematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Cinematic Start
struct Aglobal_telemetry_actor_C_POST_Client_Player_Cinematic_Start_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Cinematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Options Interaction
struct Aglobal_telemetry_actor_C_POST_Client_Player_Options_Interaction_Params
{
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Creator Interaction
struct Aglobal_telemetry_actor_C_POST_Client_Player_Character_Creator_Interaction_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Create New Finished
struct Aglobal_telemetry_actor_C_POST_Client_Player_Character_Create_New_Finished_Params
{
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      CharacterId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Transmog Item
struct Aglobal_telemetry_actor_C_POST_Client_Player_Transmog_Item_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TokenId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                NumTokensConsumed;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Transmog Interaction
struct Aglobal_telemetry_actor_C_POST_Client_Player_Transmog_Interaction_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Game Session Start
struct Aglobal_telemetry_actor_C_POST_Client_Game_Session_Start_Params
{
	class FString                                      AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ErrorResponse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Create New
struct Aglobal_telemetry_actor_C_POST_Client_Player_Character_Create_New_Params
{
	class FString                                      player_id;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      character_id;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Granted Crafting Ingredient
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Granted_Crafting_Ingredient_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Item_ID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Item_Amount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Recipe_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Successful Craft
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Successful_Craft_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Recipe_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Crafted_Item_Id;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Failed To Craft
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Failed_To_Craft_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Recipe_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      FailReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Wants To Craft
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Wants_To_Craft_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Recipe_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Failed To Find Hunt
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Failed_To_Find_Hunt_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest_Id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Went On Hunt
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Went_On_Hunt_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HuntIds;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               FindHuntsResult;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetedBehemoth;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Redeemed Quest
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Redeemed_Quest_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RedeemedQuestId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Completed Quest Objective
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Completed_Quest_Objective_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InteractTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ObjectiveType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Accepted Quest
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Accepted_Quest_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AcceptedQuestID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Started Quest Progression
struct Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Started_Quest_Progression_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Tutorial End
struct Aglobal_telemetry_actor_C_POST_Client_Player_Tutorial_End_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dialogue_End_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Match Ended
struct Aglobal_telemetry_actor_C_POST_Server_Match_Ended_Params
{
	class AArchonPlayerController*                     Archon_Player_Controller;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Match_Duration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Behemoth_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Won_Match;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Additional_Behemoth_1;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Event Cool Moment
struct Aglobal_telemetry_actor_C_POST_Client_Event_Cool_Moment_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Loadout Ready
struct Aglobal_telemetry_actor_C_POST_Server_Player_Loadout_Ready_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Matchmaking Event
struct Aglobal_telemetry_actor_C_POST_Client_Player_Controller_Matchmaking_Event_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonLobbyClient*                          Lobby_Client;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Matchmaking_Attempt_Start;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Matchmaking_Attempt_Counter;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue Choice
struct Aglobal_telemetry_actor_C_POST_Client_Player_Dialogue_Choice_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Choice_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dialogue_Choice_Time;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue End
struct Aglobal_telemetry_actor_C_POST_Client_Player_Dialogue_End_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dialogue_End_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force_End;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue Line Event
struct Aglobal_telemetry_actor_C_POST_Client_Player_Dialogue_Line_Event_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Line_Start_Time;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Line_End_Time;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skipped;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Thingsmith Event
struct Aglobal_telemetry_actor_C_POST_Client_Player_Thingsmith_Event_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Selected_Recipe;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Quest Button Event
struct Aglobal_telemetry_actor_C_POST_Client_Player_Quest_Button_Event_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest_Id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Quest Board Event
struct Aglobal_telemetry_actor_C_POST_Client_Player_Quest_Board_Event_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuest*>                              Available_Quests;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UQuest*>                              Redeemable_Quests;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Exit Game
struct Aglobal_telemetry_actor_C_POST_Client_Player_Exit_Game_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Set Dye Colour
struct Aglobal_telemetry_actor_C_POST_Client_Player_Set_Dye_Colour_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 Armour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 Dye;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Bug Report
struct Aglobal_telemetry_actor_C_POST_Client_Player_Bug_Report_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Bug_Title;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Bug_Details;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Severity_String;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Severity_Int;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Input Type
struct Aglobal_telemetry_actor_C_POST_Client_Player_Controller_Input_Type_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Interaction Event
struct Aglobal_telemetry_actor_C_POST_Server_Player_Interaction_Event_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Interactable_Name;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     Interactable_Location;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class FString                                      Event_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Edge Recovery
struct Aglobal_telemetry_actor_C_POST_Server_Player_Edge_Recovery_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Edge_Recovery_Notes;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Unstuck
struct Aglobal_telemetry_actor_C_POST_Server_Player_Unstuck_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Match Rated
struct Aglobal_telemetry_actor_C_POST_Client_Player_Controller_Match_Rated_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating_Counter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.Get Player Info
struct Aglobal_telemetry_actor_C_Get_Player_Info_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FJsonBPObjectField                          player_id;                                                // (Parm, OutParm)
	struct FJsonBPObjectField                          character_id;                                             // (Parm, OutParm)
	struct FJsonBPObjectField                          Position;                                                 // (Parm, OutParm)
	struct FJsonBPObjectField                          Facing;                                                   // (Parm, OutParm)
	struct FJsonBPObjectField                          Velocity;                                                 // (Parm, OutParm)
	struct FJsonBPObjectField                          Camera;                                                   // (Parm, OutParm)
	struct FJsonBPObjectField                          player_stats;                                             // (Parm, OutParm)
};

// Function global_telemetry_actor.global_telemetry_actor_C.UserConstructionScript
struct Aglobal_telemetry_actor_C_UserConstructionScript_Params
{
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerMatchRated
struct Aglobal_telemetry_actor_C_ClientPlayerControllerMatchRated_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating_Counter;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rating;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerUnstuck
struct Aglobal_telemetry_actor_C_ServerPlayerUnstuck_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerEdgeRecovery
struct Aglobal_telemetry_actor_C_ServerPlayerEdgeRecovery_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Edge_Recovery_Notes;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerInteractionEvent
struct Aglobal_telemetry_actor_C_ServerPlayerInteractionEvent_Params
{
	TScriptInterface<class Uplayer_interface_C>        Player_Interface;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Interactable_Name;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FVector                                     Interactable_Location;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class FString                                      Event_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerInputType
struct Aglobal_telemetry_actor_C_ClientPlayerControllerInputType_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Input;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerBugReport
struct Aglobal_telemetry_actor_C_ClientPlayerBugReport_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Bug_Title;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Bug_Details;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Severity_Rating_String;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Severity_Rating_Integer;                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerExitGame
struct Aglobal_telemetry_actor_C_ClientPlayerExitGame_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerQuestBoardEvent
struct Aglobal_telemetry_actor_C_ClientPlayerQuestBoardEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuest*>                              Available_Quests;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class UQuest*>                              Redeemable_Quests;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerQuestButtonEvent
struct Aglobal_telemetry_actor_C_ClientPlayerQuestButtonEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Quest_Id;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerThingsmithEvent
struct Aglobal_telemetry_actor_C_ClientPlayerThingsmithEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonSpeaker*                              NPC_Identity;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Widget_Start_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Selected_Recipe;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueLineEvent
struct Aglobal_telemetry_actor_C_ClientPlayerDialogueLineEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Line_Start_Time;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Line_End_Time;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Skipped;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueEnd
struct Aglobal_telemetry_actor_C_ClientPlayerDialogueEnd_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dialogue_End_Time;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Force_End;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueChoice
struct Aglobal_telemetry_actor_C_ClientPlayerDialogueChoice_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Choice_Index;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Dialogue_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Dialogue_Start_Time;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Dialogue_Choice_Time;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerMatchmakingEvent
struct Aglobal_telemetry_actor_C_ClientPlayerControllerMatchmakingEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AArchonLobbyClient*                          Lobby_Client;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Matchmaking_Attempt_Start;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Event_Name;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Current_Time;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Matchmaking_Attempt_Counter;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerSetDyeEvent
struct Aglobal_telemetry_actor_C_ClientPlayerSetDyeEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 Armour;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDyeVariant                                 Dye_Config;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientEventCoolMoment
struct Aglobal_telemetry_actor_C_ClientEventCoolMoment_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerLoadoutReady
struct Aglobal_telemetry_actor_C_ServerPlayerLoadoutReady_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ServerMatchEnded
struct Aglobal_telemetry_actor_C_ServerMatchEnded_Params
{
	class AArchonPlayerController*                     Archon_Player_Controller;                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Match_Duration;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Behemoth_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Map_Name;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Won_Match;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Additional_Behemoth_1;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.Bind Tutorial Events
struct Aglobal_telemetry_actor_C_Bind_Tutorial_Events_Params
{
	class Uglobal_event_dispatcher_C*                  Dispatcher;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTutorialEnd
struct Aglobal_telemetry_actor_C_ClientPlayerTutorialEnd_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Tutorial_Name;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerStartedQuestProgressionEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerStartedQuestProgressionEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerAcceptedQuestEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerAcceptedQuestEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       AcceptedQuestID;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerRedeemedQuestEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerRedeemedQuestEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       RedeemedQuestId;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerCompletedQuestObjectiveEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerCompletedQuestObjectiveEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      InteractTarget;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                ObjectiveType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerFailedToFindHuntEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerFailedToFindHuntEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerWantsToCraftEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerWantsToCraftEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerSuccessfulCraftEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerSuccessfulCraftEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      CraftedItemID;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerGrantedCraftingIngredientEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerGrantedCraftingIngredientEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ItemAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerFailedToCraftEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerFailedToCraftEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      FailReason;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerWentOnHuntEvent
struct Aglobal_telemetry_actor_C_ClientAutoplayerWentOnHuntEvent_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface;                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               HuntIds;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               FindHuntsResult;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetedBehemoth;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.Bind Character Creator Events
struct Aglobal_telemetry_actor_C_Bind_Character_Creator_Events_Params
{
	class Uglobal_event_dispatcher_C*                  Dispatcher;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreateNew
struct Aglobal_telemetry_actor_C_ClientPlayerCharacterCreateNew_Params
{
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      CharacterId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.Bind Transmog Events
struct Aglobal_telemetry_actor_C_Bind_Transmog_Events_Params
{
	class Uglobal_event_dispatcher_C*                  Dispatcher;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTransmogInteraction
struct Aglobal_telemetry_actor_C_ClientPlayerTransmogInteraction_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTransmogItem
struct Aglobal_telemetry_actor_C_ClientPlayerTransmogItem_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface;                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem*                        Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TokenId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Num_Tokens_Consumed;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ReceiveBeginPlay
struct Aglobal_telemetry_actor_C_ReceiveBeginPlay_Params
{
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreateNewFinished
struct Aglobal_telemetry_actor_C_ClientPlayerCharacterCreateNewFinished_Params
{
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      CharacterId;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreatorInteraction
struct Aglobal_telemetry_actor_C_ClientPlayerCharacterCreatorInteraction_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Action;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.Bind Client FTUE and Login Events
struct Aglobal_telemetry_actor_C_Bind_Client_FTUE_and_Login_Events_Params
{
	class Uglobal_event_dispatcher_C*                  Dispatcher;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientLoginScreenOptionsInteraction
struct Aglobal_telemetry_actor_C_ClientLoginScreenOptionsInteraction_Params
{
	class FString                                      PlayerId;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Start_Time;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              End_Time;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCinematicStarted
struct Aglobal_telemetry_actor_C_ClientPlayerCinematicStarted_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Cinematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              StartTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCinematicEnded
struct Aglobal_telemetry_actor_C_ClientPlayerCinematicEnded_Params
{
	TScriptInterface<class Uplayer_controller_interface_C> PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Cinematic;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              EndTime;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function global_telemetry_actor.global_telemetry_actor_C.OnClientLoginComplete
struct Aglobal_telemetry_actor_C_OnClientLoginComplete_Params
{
	class FString                                      AccountId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               bLoginSuccess;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function global_telemetry_actor.global_telemetry_actor_C.ExecuteUbergraph_global_telemetry_actor
struct Aglobal_telemetry_actor_C_ExecuteUbergraph_global_telemetry_actor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
