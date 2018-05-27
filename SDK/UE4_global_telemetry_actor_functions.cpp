// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_telemetry_actor_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function global_telemetry_actor.global_telemetry_actor_C.HelperCaptureCellInfoFromInventoryToJson
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem_CellContainer* CellContainer                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  LogicalCellName                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<struct FJsonBPObjectField> OutputJsonArray                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Aglobal_telemetry_actor_C::HelperCaptureCellInfoFromInventoryToJson(class UArchonInventoryItem_CellContainer* CellContainer, const class FString& LogicalCellName, TArray<struct FJsonBPObjectField>* OutputJsonArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.HelperCaptureCellInfoFromInventoryToJson");

	Aglobal_telemetry_actor_C_HelperCaptureCellInfoFromInventoryToJson_Params params;
	params.CellContainer = CellContainer;
	params.LogicalCellName = LogicalCellName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutputJsonArray != nullptr)
		*OutputJsonArray = params.OutputJsonArray;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Cinematic End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Cinematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Cinematic_End(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Cinematic, const class FString& Reason, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Cinematic End");

	Aglobal_telemetry_actor_C_POST_Client_Player_Cinematic_End_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Cinematic = Cinematic;
	params.Reason = Reason;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Cinematic Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Cinematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Cinematic_Start(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Cinematic, float Start_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Cinematic Start");

	Aglobal_telemetry_actor_C_POST_Client_Player_Cinematic_Start_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Cinematic = Cinematic;
	params.Start_Time = Start_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Options Interaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Options_Interaction(const class FString& PlayerId, float StartTime, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Options Interaction");

	Aglobal_telemetry_actor_C_POST_Client_Player_Options_Interaction_Params params;
	params.PlayerId = PlayerId;
	params.StartTime = StartTime;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Creator Interaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Player_Character_Creator_Interaction(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, float StartTime, float EndTime, const class FString& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Creator Interaction");

	Aglobal_telemetry_actor_C_POST_Client_Player_Character_Creator_Interaction_Params params;
	params.PlayerController = PlayerController;
	params.StartTime = StartTime;
	params.EndTime = EndTime;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Create New Finished
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  CharacterId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Player_Character_Create_New_Finished(const class FString& PlayerId, const class FString& CharacterId, float StartTime, float EndTime, const class FString& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Create New Finished");

	Aglobal_telemetry_actor_C_POST_Client_Player_Character_Create_New_Finished_Params params;
	params.PlayerId = PlayerId;
	params.CharacterId = CharacterId;
	params.StartTime = StartTime;
	params.EndTime = EndTime;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Transmog Item
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TokenId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            NumTokensConsumed              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Transmog_Item(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem* Item, const class FString& TransmogId, const class FString& TokenId, int NumTokensConsumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Transmog Item");

	Aglobal_telemetry_actor_C_POST_Client_Player_Transmog_Item_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Item = Item;
	params.TransmogId = TransmogId;
	params.TokenId = TokenId;
	params.NumTokensConsumed = NumTokensConsumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Transmog Interaction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Transmog_Interaction(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Transmog Interaction");

	Aglobal_telemetry_actor_C_POST_Client_Player_Transmog_Interaction_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Game Session Start
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ErrorResponse                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Game_Session_Start(const class FString& AccountId, bool Success, const class FString& ErrorResponse)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Game Session Start");

	Aglobal_telemetry_actor_C_POST_Client_Game_Session_Start_Params params;
	params.AccountId = AccountId;
	params.Success = Success;
	params.ErrorResponse = ErrorResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Create New
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  player_id                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  character_id                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Player_Character_Create_New(const class FString& player_id, const class FString& character_id)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Character Create New");

	Aglobal_telemetry_actor_C_POST_Client_Player_Character_Create_New_Params params;
	params.player_id = player_id;
	params.character_id = character_id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Granted Crafting Ingredient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Item_ID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Item_Amount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Recipe_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Granted_Crafting_Ingredient(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Item_ID, int Item_Amount, const class FString& Recipe_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Granted Crafting Ingredient");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Granted_Crafting_Ingredient_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Item_ID = Item_ID;
	params.Item_Amount = Item_Amount;
	params.Recipe_ID = Recipe_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Successful Craft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Recipe_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Crafted_Item_Id                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Successful_Craft(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Recipe_ID, const class FString& Crafted_Item_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Successful Craft");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Successful_Craft_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Recipe_ID = Recipe_ID;
	params.Crafted_Item_Id = Crafted_Item_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Failed To Craft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Recipe_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  FailReason                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Failed_To_Craft(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Recipe_ID, const class FString& FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Failed To Craft");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Failed_To_Craft_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Recipe_ID = Recipe_ID;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Wants To Craft
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Recipe_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Wants_To_Craft(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Recipe_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Wants To Craft");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Wants_To_Craft_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Recipe_ID = Recipe_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Failed To Find Hunt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Quest_Id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Failed_To_Find_Hunt(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Quest_Id)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Failed To Find Hunt");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Failed_To_Find_Hunt_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Quest_Id = Quest_Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Went On Hunt
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           HuntIds                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           FindHuntsResult                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetedBehemoth               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Went_On_Hunt(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, bool FindHuntsResult, const struct FName& TargetedBehemoth, TArray<struct FName>* HuntIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Went On Hunt");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Went_On_Hunt_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.FindHuntsResult = FindHuntsResult;
	params.TargetedBehemoth = TargetedBehemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntIds != nullptr)
		*HuntIds = params.HuntIds;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Redeemed Quest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RedeemedQuestId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Redeemed_Quest(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& RedeemedQuestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Redeemed Quest");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Redeemed_Quest_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RedeemedQuestId = RedeemedQuestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Completed Quest Objective
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InteractTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ObjectiveType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Completed_Quest_Objective(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& QuestID, const struct FName& ItemID, int ItemAmount, const class FString& InteractTarget, int ObjectiveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Completed Quest Objective");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Completed_Quest_Objective_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.QuestID = QuestID;
	params.ItemID = ItemID;
	params.ItemAmount = ItemAmount;
	params.InteractTarget = InteractTarget;
	params.ObjectiveType = ObjectiveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Accepted Quest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AcceptedQuestID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Accepted_Quest(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& AcceptedQuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Accepted Quest");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Accepted_Quest_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.AcceptedQuestID = AcceptedQuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Started Quest Progression
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Autoplayer_Started_Quest_Progression(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Autoplayer Started Quest Progression");

	Aglobal_telemetry_actor_C_POST_Client_Autoplayer_Started_Quest_Progression_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Tutorial End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dialogue_End_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Tutorial_End(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Tutorial End");

	Aglobal_telemetry_actor_C_POST_Client_Player_Tutorial_End_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Dialogue_End_Time = Dialogue_End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Match Ended
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* Archon_Player_Controller       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Match_Duration                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Behemoth_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Won_Match                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Additional_Behemoth_1          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Server_Match_Ended(class AArchonPlayerController* Archon_Player_Controller, float Match_Duration, const class FString& Behemoth_Name, const class FString& Map_Name, bool Won_Match, const class FString& Additional_Behemoth_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Server Match Ended");

	Aglobal_telemetry_actor_C_POST_Server_Match_Ended_Params params;
	params.Archon_Player_Controller = Archon_Player_Controller;
	params.Match_Duration = Match_Duration;
	params.Behemoth_Name = Behemoth_Name;
	params.Map_Name = Map_Name;
	params.Won_Match = Won_Match;
	params.Additional_Behemoth_1 = Additional_Behemoth_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Event Cool Moment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Details                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Event_Cool_Moment(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Title, const class FString& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Event Cool Moment");

	Aglobal_telemetry_actor_C_POST_Client_Event_Cool_Moment_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Title = Title;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Loadout Ready
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Server_Player_Loadout_Ready(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Loadout Ready");

	Aglobal_telemetry_actor_C_POST_Server_Player_Loadout_Ready_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Matchmaking Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonLobbyClient*      Lobby_Client                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Matchmaking_Attempt_Start      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Matchmaking_Attempt_Counter    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Controller_Matchmaking_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class AArchonLobbyClient* Lobby_Client, float Matchmaking_Attempt_Start, const class FString& Event_Name, float Current_Time, int Matchmaking_Attempt_Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Matchmaking Event");

	Aglobal_telemetry_actor_C_POST_Client_Player_Controller_Matchmaking_Event_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Lobby_Client = Lobby_Client;
	params.Matchmaking_Attempt_Start = Matchmaking_Attempt_Start;
	params.Event_Name = Event_Name;
	params.Current_Time = Current_Time;
	params.Matchmaking_Attempt_Counter = Matchmaking_Attempt_Counter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue Choice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Choice_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dialogue_Choice_Time           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Dialogue_Choice(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Choice_Index, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_Choice_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue Choice");

	Aglobal_telemetry_actor_C_POST_Client_Player_Dialogue_Choice_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Choice_Index = Choice_Index;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Dialogue_Choice_Time = Dialogue_Choice_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue End
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dialogue_End_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force_End                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Dialogue_End(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_End_Time, bool Force_End)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue End");

	Aglobal_telemetry_actor_C_POST_Client_Player_Dialogue_End_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Dialogue_End_Time = Dialogue_End_Time;
	params.Force_End = Force_End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue Line Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Line_Start_Time                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Line_End_Time                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skipped                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Dialogue_Line_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Line_Start_Time, float Line_End_Time, bool Skipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Dialogue Line Event");

	Aglobal_telemetry_actor_C_POST_Client_Player_Dialogue_Line_Event_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Line_Start_Time = Line_Start_Time;
	params.Line_End_Time = Line_End_Time;
	params.Skipped = Skipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Thingsmith Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Selected_Recipe                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Player_Thingsmith_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, const class FString& Event_Name, float Widget_Start_Time, float Current_Time, const class FString& Selected_Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Thingsmith Event");

	Aglobal_telemetry_actor_C_POST_Client_Player_Thingsmith_Event_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.NPC_Identity = NPC_Identity;
	params.Event_Name = Event_Name;
	params.Widget_Start_Time = Widget_Start_Time;
	params.Current_Time = Current_Time;
	params.Selected_Recipe = Selected_Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Quest Button Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Quest_Id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Quest_Button_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Quest_Id, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, class UArchonSpeaker* NPC_Identity)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Quest Button Event");

	Aglobal_telemetry_actor_C_POST_Client_Player_Quest_Button_Event_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Quest_Id = Quest_Id;
	params.Widget_Start_Time = Widget_Start_Time;
	params.Current_Time = Current_Time;
	params.Event_Name = Event_Name;
	params.NPC_Identity = NPC_Identity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Quest Board Event
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UQuest*>          Available_Quests               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UQuest*>          Redeemable_Quests              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Player_Quest_Board_Event(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, TArray<class UQuest*>* Available_Quests, TArray<class UQuest*>* Redeemable_Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Quest Board Event");

	Aglobal_telemetry_actor_C_POST_Client_Player_Quest_Board_Event_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.NPC_Identity = NPC_Identity;
	params.Widget_Start_Time = Widget_Start_Time;
	params.Current_Time = Current_Time;
	params.Event_Name = Event_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Available_Quests != nullptr)
		*Available_Quests = params.Available_Quests;
	if (Redeemable_Quests != nullptr)
		*Redeemable_Quests = params.Redeemable_Quests;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Exit Game
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Exit_Game(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Exit Game");

	Aglobal_telemetry_actor_C_POST_Client_Player_Exit_Game_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Set Dye Colour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem_Armour* Armour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDyeVariant             Dye                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Aglobal_telemetry_actor_C::POST_Client_Player_Set_Dye_Colour(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem_Armour* Armour, const struct FDyeVariant& Dye)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Set Dye Colour");

	Aglobal_telemetry_actor_C_POST_Client_Player_Set_Dye_Colour_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Armour = Armour;
	params.Dye = Dye;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Bug Report
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Bug_Title                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Bug_Details                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Severity_String                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Severity_Int                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Bug_Report(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Bug_Title, const class FString& Bug_Details, const class FString& Severity_String, int Severity_Int)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Bug Report");

	Aglobal_telemetry_actor_C_POST_Client_Player_Bug_Report_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Bug_Title = Bug_Title;
	params.Bug_Details = Bug_Details;
	params.Severity_String = Severity_String;
	params.Severity_Int = Severity_Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Input Type
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Client_Player_Controller_Input_Type(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Input Type");

	Aglobal_telemetry_actor_C_POST_Client_Player_Controller_Input_Type_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Interaction Event
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Interactable_Name              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Interactable_Location          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class FString                  Event_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Server_Player_Interaction_Event(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Interactable_Name, const struct FVector& Interactable_Location, const class FString& Event_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Interaction Event");

	Aglobal_telemetry_actor_C_POST_Server_Player_Interaction_Event_Params params;
	params.Player_Interface = Player_Interface;
	params.Interactable_Name = Interactable_Name;
	params.Interactable_Location = Interactable_Location;
	params.Event_Type = Event_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Edge Recovery
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Edge_Recovery_Notes            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Server_Player_Edge_Recovery(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name, const class FString& Edge_Recovery_Notes)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Edge Recovery");

	Aglobal_telemetry_actor_C_POST_Server_Player_Edge_Recovery_Params params;
	params.Player_Interface = Player_Interface;
	params.Map_Name = Map_Name;
	params.Edge_Recovery_Notes = Edge_Recovery_Notes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Unstuck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::POST_Server_Player_Unstuck(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Server Player Unstuck");

	Aglobal_telemetry_actor_C_POST_Server_Player_Unstuck_Params params;
	params.Player_Interface = Player_Interface;
	params.Map_Name = Map_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Match Rated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating_Counter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::POST_Client_Player_Controller_Match_Rated(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Rating_Counter, int Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.POST Client Player Controller Match Rated");

	Aglobal_telemetry_actor_C_POST_Client_Player_Controller_Match_Rated_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Rating_Counter = Rating_Counter;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.Get Player Info
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FJsonBPObjectField      player_id                      (Parm, OutParm)
// struct FJsonBPObjectField      character_id                   (Parm, OutParm)
// struct FJsonBPObjectField      Position                       (Parm, OutParm)
// struct FJsonBPObjectField      Facing                         (Parm, OutParm)
// struct FJsonBPObjectField      Velocity                       (Parm, OutParm)
// struct FJsonBPObjectField      Camera                         (Parm, OutParm)
// struct FJsonBPObjectField      player_stats                   (Parm, OutParm)

void Aglobal_telemetry_actor_C::Get_Player_Info(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, struct FJsonBPObjectField* player_id, struct FJsonBPObjectField* character_id, struct FJsonBPObjectField* Position, struct FJsonBPObjectField* Facing, struct FJsonBPObjectField* Velocity, struct FJsonBPObjectField* Camera, struct FJsonBPObjectField* player_stats)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.Get Player Info");

	Aglobal_telemetry_actor_C_Get_Player_Info_Params params;
	params.Player_Interface = Player_Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (player_id != nullptr)
		*player_id = params.player_id;
	if (character_id != nullptr)
		*character_id = params.character_id;
	if (Position != nullptr)
		*Position = params.Position;
	if (Facing != nullptr)
		*Facing = params.Facing;
	if (Velocity != nullptr)
		*Velocity = params.Velocity;
	if (Camera != nullptr)
		*Camera = params.Camera;
	if (player_stats != nullptr)
		*player_stats = params.player_stats;
}


// Function global_telemetry_actor.global_telemetry_actor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aglobal_telemetry_actor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.UserConstructionScript");

	Aglobal_telemetry_actor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerMatchRated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating_Counter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerControllerMatchRated(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Rating_Counter, int Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerMatchRated");

	Aglobal_telemetry_actor_C_ClientPlayerControllerMatchRated_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Rating_Counter = Rating_Counter;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerUnstuck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ServerPlayerUnstuck(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerUnstuck");

	Aglobal_telemetry_actor_C_ServerPlayerUnstuck_Params params;
	params.Player_Interface = Player_Interface;
	params.Map_Name = Map_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerEdgeRecovery
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Edge_Recovery_Notes            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ServerPlayerEdgeRecovery(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name, const class FString& Edge_Recovery_Notes)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerEdgeRecovery");

	Aglobal_telemetry_actor_C_ServerPlayerEdgeRecovery_Params params;
	params.Player_Interface = Player_Interface;
	params.Map_Name = Map_Name;
	params.Edge_Recovery_Notes = Edge_Recovery_Notes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerInteractionEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Interactable_Name              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Interactable_Location          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class FString                  Event_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ServerPlayerInteractionEvent(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Interactable_Name, const struct FVector& Interactable_Location, const class FString& Event_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerInteractionEvent");

	Aglobal_telemetry_actor_C_ServerPlayerInteractionEvent_Params params;
	params.Player_Interface = Player_Interface;
	params.Interactable_Name = Interactable_Name;
	params.Interactable_Location = Interactable_Location;
	params.Event_Type = Event_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerInputType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientPlayerControllerInputType(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerInputType");

	Aglobal_telemetry_actor_C_ClientPlayerControllerInputType_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerBugReport
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Bug_Title                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Bug_Details                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Severity_Rating_String         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Severity_Rating_Integer        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerBugReport(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Bug_Title, const class FString& Bug_Details, const class FString& Severity_Rating_String, int Severity_Rating_Integer)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerBugReport");

	Aglobal_telemetry_actor_C_ClientPlayerBugReport_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Bug_Title = Bug_Title;
	params.Bug_Details = Bug_Details;
	params.Severity_Rating_String = Severity_Rating_String;
	params.Severity_Rating_Integer = Severity_Rating_Integer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerExitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerExitGame(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerExitGame");

	Aglobal_telemetry_actor_C_ClientPlayerExitGame_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerQuestBoardEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UQuest*>          Available_Quests               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UQuest*>          Redeemable_Quests              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientPlayerQuestBoardEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, float Widget_Start_Time, TArray<class UQuest*> Available_Quests, TArray<class UQuest*> Redeemable_Quests, float Current_Time, const class FString& Event_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerQuestBoardEvent");

	Aglobal_telemetry_actor_C_ClientPlayerQuestBoardEvent_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.NPC_Identity = NPC_Identity;
	params.Widget_Start_Time = Widget_Start_Time;
	params.Available_Quests = Available_Quests;
	params.Redeemable_Quests = Redeemable_Quests;
	params.Current_Time = Current_Time;
	params.Event_Name = Event_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerQuestButtonEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Quest_Id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerQuestButtonEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Quest_Id, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, class UArchonSpeaker* NPC_Identity)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerQuestButtonEvent");

	Aglobal_telemetry_actor_C_ClientPlayerQuestButtonEvent_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Quest_Id = Quest_Id;
	params.Widget_Start_Time = Widget_Start_Time;
	params.Current_Time = Current_Time;
	params.Event_Name = Event_Name;
	params.NPC_Identity = NPC_Identity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerThingsmithEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Selected_Recipe                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientPlayerThingsmithEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, const class FString& Event_Name, float Widget_Start_Time, float Current_Time, const class FString& Selected_Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerThingsmithEvent");

	Aglobal_telemetry_actor_C_ClientPlayerThingsmithEvent_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.NPC_Identity = NPC_Identity;
	params.Event_Name = Event_Name;
	params.Widget_Start_Time = Widget_Start_Time;
	params.Current_Time = Current_Time;
	params.Selected_Recipe = Selected_Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueLineEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Line_Start_Time                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Line_End_Time                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skipped                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerDialogueLineEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Line_Start_Time, float Line_End_Time, bool Skipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueLineEvent");

	Aglobal_telemetry_actor_C_ClientPlayerDialogueLineEvent_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Line_Start_Time = Line_Start_Time;
	params.Line_End_Time = Line_End_Time;
	params.Skipped = Skipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dialogue_End_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force_End                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerDialogueEnd(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_End_Time, bool Force_End)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueEnd");

	Aglobal_telemetry_actor_C_ClientPlayerDialogueEnd_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Dialogue_End_Time = Dialogue_End_Time;
	params.Force_End = Force_End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueChoice
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Choice_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dialogue_Choice_Time           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerDialogueChoice(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Choice_Index, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_Choice_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerDialogueChoice");

	Aglobal_telemetry_actor_C_ClientPlayerDialogueChoice_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Choice_Index = Choice_Index;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Dialogue_Choice_Time = Dialogue_Choice_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerMatchmakingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonLobbyClient*      Lobby_Client                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Matchmaking_Attempt_Start      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Matchmaking_Attempt_Counter    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerControllerMatchmakingEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class AArchonLobbyClient* Lobby_Client, float Matchmaking_Attempt_Start, const class FString& Event_Name, float Current_Time, int Matchmaking_Attempt_Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerControllerMatchmakingEvent");

	Aglobal_telemetry_actor_C_ClientPlayerControllerMatchmakingEvent_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Lobby_Client = Lobby_Client;
	params.Matchmaking_Attempt_Start = Matchmaking_Attempt_Start;
	params.Event_Name = Event_Name;
	params.Current_Time = Current_Time;
	params.Matchmaking_Attempt_Counter = Matchmaking_Attempt_Counter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerSetDyeEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem_Armour* Armour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDyeVariant             Dye_Config                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Aglobal_telemetry_actor_C::ClientPlayerSetDyeEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem_Armour* Armour, const struct FDyeVariant& Dye_Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerSetDyeEvent");

	Aglobal_telemetry_actor_C_ClientPlayerSetDyeEvent_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Armour = Armour;
	params.Dye_Config = Dye_Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientEventCoolMoment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Details                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientEventCoolMoment(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Title, const class FString& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientEventCoolMoment");

	Aglobal_telemetry_actor_C_ClientEventCoolMoment_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Title = Title;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerLoadoutReady
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ServerPlayerLoadoutReady(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ServerPlayerLoadoutReady");

	Aglobal_telemetry_actor_C_ServerPlayerLoadoutReady_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ServerMatchEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* Archon_Player_Controller       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Match_Duration                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Behemoth_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Won_Match                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Additional_Behemoth_1          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ServerMatchEnded(class AArchonPlayerController* Archon_Player_Controller, float Match_Duration, const class FString& Behemoth_Name, const class FString& Map_Name, bool Won_Match, const class FString& Additional_Behemoth_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ServerMatchEnded");

	Aglobal_telemetry_actor_C_ServerMatchEnded_Params params;
	params.Archon_Player_Controller = Archon_Player_Controller;
	params.Match_Duration = Match_Duration;
	params.Behemoth_Name = Behemoth_Name;
	params.Map_Name = Map_Name;
	params.Won_Match = Won_Match;
	params.Additional_Behemoth_1 = Additional_Behemoth_1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.Bind Tutorial Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uglobal_event_dispatcher_C* Dispatcher                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::Bind_Tutorial_Events(class Uglobal_event_dispatcher_C* Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.Bind Tutorial Events");

	Aglobal_telemetry_actor_C_Bind_Tutorial_Events_Params params;
	params.Dispatcher = Dispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTutorialEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Tutorial_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerTutorialEnd(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Tutorial_Name, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTutorialEnd");

	Aglobal_telemetry_actor_C_ClientPlayerTutorialEnd_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Tutorial_Name = Tutorial_Name;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerStartedQuestProgressionEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientAutoplayerStartedQuestProgressionEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerStartedQuestProgressionEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerStartedQuestProgressionEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerAcceptedQuestEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AcceptedQuestID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientAutoplayerAcceptedQuestEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& AcceptedQuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerAcceptedQuestEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerAcceptedQuestEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.AcceptedQuestID = AcceptedQuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerRedeemedQuestEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RedeemedQuestId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientAutoplayerRedeemedQuestEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& RedeemedQuestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerRedeemedQuestEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerRedeemedQuestEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RedeemedQuestId = RedeemedQuestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerCompletedQuestObjectiveEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InteractTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ObjectiveType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientAutoplayerCompletedQuestObjectiveEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& QuestID, const struct FName& ItemID, int ItemAmount, const class FString& InteractTarget, int ObjectiveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerCompletedQuestObjectiveEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerCompletedQuestObjectiveEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.QuestID = QuestID;
	params.ItemID = ItemID;
	params.ItemAmount = ItemAmount;
	params.InteractTarget = InteractTarget;
	params.ObjectiveType = ObjectiveType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerFailedToFindHuntEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientAutoplayerFailedToFindHuntEvent(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerFailedToFindHuntEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerFailedToFindHuntEvent_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerWantsToCraftEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientAutoplayerWantsToCraftEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerWantsToCraftEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerWantsToCraftEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerSuccessfulCraftEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  CraftedItemID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientAutoplayerSuccessfulCraftEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID, const class FString& CraftedItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerSuccessfulCraftEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerSuccessfulCraftEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RecipeID = RecipeID;
	params.CraftedItemID = CraftedItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerGrantedCraftingIngredientEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientAutoplayerGrantedCraftingIngredientEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& ItemID, int ItemAmount, const class FString& RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerGrantedCraftingIngredientEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerGrantedCraftingIngredientEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.ItemID = ItemID;
	params.ItemAmount = ItemAmount;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerFailedToCraftEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  FailReason                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientAutoplayerFailedToCraftEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID, const class FString& FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerFailedToCraftEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerFailedToCraftEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RecipeID = RecipeID;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerWentOnHuntEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           HuntIds                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           FindHuntsResult                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetedBehemoth               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientAutoplayerWentOnHuntEvent(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, TArray<struct FName> HuntIds, bool FindHuntsResult, const struct FName& TargetedBehemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientAutoplayerWentOnHuntEvent");

	Aglobal_telemetry_actor_C_ClientAutoplayerWentOnHuntEvent_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.HuntIds = HuntIds;
	params.FindHuntsResult = FindHuntsResult;
	params.TargetedBehemoth = TargetedBehemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.Bind Character Creator Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uglobal_event_dispatcher_C* Dispatcher                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::Bind_Character_Creator_Events(class Uglobal_event_dispatcher_C* Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.Bind Character Creator Events");

	Aglobal_telemetry_actor_C_Bind_Character_Creator_Events_Params params;
	params.Dispatcher = Dispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreateNew
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  CharacterId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientPlayerCharacterCreateNew(const class FString& PlayerId, const class FString& CharacterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreateNew");

	Aglobal_telemetry_actor_C_ClientPlayerCharacterCreateNew_Params params;
	params.PlayerId = PlayerId;
	params.CharacterId = CharacterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.Bind Transmog Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uglobal_event_dispatcher_C* Dispatcher                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::Bind_Transmog_Events(class Uglobal_event_dispatcher_C* Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.Bind Transmog Events");

	Aglobal_telemetry_actor_C_Bind_Transmog_Events_Params params;
	params.Dispatcher = Dispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTransmogInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerTransmogInteraction(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTransmogInteraction");

	Aglobal_telemetry_actor_C_ClientPlayerTransmogInteraction_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTransmogItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TokenId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num_Tokens_Consumed            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerTransmogItem(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem* Item, const class FString& TransmogId, const class FString& TokenId, int Num_Tokens_Consumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerTransmogItem");

	Aglobal_telemetry_actor_C_ClientPlayerTransmogItem_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Item = Item;
	params.TransmogId = TransmogId;
	params.TokenId = TokenId;
	params.Num_Tokens_Consumed = Num_Tokens_Consumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aglobal_telemetry_actor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ReceiveBeginPlay");

	Aglobal_telemetry_actor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreateNewFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  CharacterId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientPlayerCharacterCreateNewFinished(const class FString& PlayerId, const class FString& CharacterId, float Start_Time, float End_Time, const class FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreateNewFinished");

	Aglobal_telemetry_actor_C_ClientPlayerCharacterCreateNewFinished_Params params;
	params.PlayerId = PlayerId;
	params.CharacterId = CharacterId;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreatorInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::ClientPlayerCharacterCreatorInteraction(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, float Start_Time, float End_Time, const class FString& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCharacterCreatorInteraction");

	Aglobal_telemetry_actor_C_ClientPlayerCharacterCreatorInteraction_Params params;
	params.PlayerController = PlayerController;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.Bind Client FTUE and Login Events
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uglobal_event_dispatcher_C* Dispatcher                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::Bind_Client_FTUE_and_Login_Events(class Uglobal_event_dispatcher_C* Dispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.Bind Client FTUE and Login Events");

	Aglobal_telemetry_actor_C_Bind_Client_FTUE_and_Login_Events_Params params;
	params.Dispatcher = Dispatcher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientLoginScreenOptionsInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientLoginScreenOptionsInteraction(const class FString& PlayerId, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientLoginScreenOptionsInteraction");

	Aglobal_telemetry_actor_C_ClientLoginScreenOptionsInteraction_Params params;
	params.PlayerId = PlayerId;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCinematicStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Cinematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerCinematicStarted(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, const class FString& Cinematic, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCinematicStarted");

	Aglobal_telemetry_actor_C_ClientPlayerCinematicStarted_Params params;
	params.PlayerController = PlayerController;
	params.Cinematic = Cinematic;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCinematicEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Cinematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ClientPlayerCinematicEnded(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, const class FString& Cinematic, const class FString& Reason, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ClientPlayerCinematicEnded");

	Aglobal_telemetry_actor_C_ClientPlayerCinematicEnded_Params params;
	params.PlayerController = PlayerController;
	params.Cinematic = Cinematic;
	params.Reason = Reason;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.OnClientLoginComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bLoginSuccess                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Aglobal_telemetry_actor_C::OnClientLoginComplete(const class FString& AccountId, bool bLoginSuccess, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.OnClientLoginComplete");

	Aglobal_telemetry_actor_C_OnClientLoginComplete_Params params;
	params.AccountId = AccountId;
	params.bLoginSuccess = bLoginSuccess;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_telemetry_actor.global_telemetry_actor_C.ExecuteUbergraph_global_telemetry_actor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aglobal_telemetry_actor_C::ExecuteUbergraph_global_telemetry_actor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_telemetry_actor.global_telemetry_actor_C.ExecuteUbergraph_global_telemetry_actor");

	Aglobal_telemetry_actor_C_ExecuteUbergraph_global_telemetry_actor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
