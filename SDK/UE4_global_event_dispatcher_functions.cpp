// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_event_dispatcher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function global_event_dispatcher.global_event_dispatcher_C.BroadcastClientPlayerTutorialEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Tutorial_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::BroadcastClientPlayerTutorialEnd(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Tutorial_Name, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.BroadcastClientPlayerTutorialEnd");

	Uglobal_event_dispatcher_C_BroadcastClientPlayerTutorialEnd_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Tutorial_Name = Tutorial_Name;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCinematicEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Cinematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          EndTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerCinematicEnded__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, const class FString& Cinematic, const class FString& Reason, float EndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCinematicEnded__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerCinematicEnded__DelegateSignature_Params params;
	params.PlayerController = PlayerController;
	params.Cinematic = Cinematic;
	params.Reason = Reason;
	params.EndTime = EndTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCinematicStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Cinematic                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          StartTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerCinematicStarted__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, const class FString& Cinematic, float StartTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCinematicStarted__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerCinematicStarted__DelegateSignature_Params params;
	params.PlayerController = PlayerController;
	params.Cinematic = Cinematic;
	params.StartTime = StartTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreatorInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientPlayerCharacterCreatorInteraction__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerController, float Start_Time, float End_Time, const class FString& Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreatorInteraction__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerCharacterCreatorInteraction__DelegateSignature_Params params;
	params.PlayerController = PlayerController;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientLoginScreenOptionsInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientLoginScreenOptionsInteraction__DelegateSignature(const class FString& PlayerId, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientLoginScreenOptionsInteraction__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientLoginScreenOptionsInteraction__DelegateSignature_Params params;
	params.PlayerId = PlayerId;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreateNewFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  CharacterId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientPlayerCharacterCreateNewFinished__DelegateSignature(const class FString& PlayerId, const class FString& CharacterId, float Start_Time, float End_Time, const class FString& Reason)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreateNewFinished__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerCharacterCreateNewFinished__DelegateSignature_Params params;
	params.PlayerId = PlayerId;
	params.CharacterId = CharacterId;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDyeInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerDyeInteraction__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDyeInteraction__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerDyeInteraction__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTransmogInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerTransmogInteraction__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTransmogInteraction__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerTransmogInteraction__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTransmogItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem*    Item                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  TransmogId                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  TokenId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Num_Tokens_Consumed            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerTransmogItem__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem* Item, const class FString& TransmogId, const class FString& TokenId, int Num_Tokens_Consumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTransmogItem__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerTransmogItem__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Item = Item;
	params.TransmogId = TransmogId;
	params.TokenId = TokenId;
	params.Num_Tokens_Consumed = Num_Tokens_Consumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientLoginComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  AccountId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           bLoginSuccess                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientLoginComplete__DelegateSignature(const class FString& AccountId, bool bLoginSuccess, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientLoginComplete__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientLoginComplete__DelegateSignature_Params params;
	params.AccountId = AccountId;
	params.bLoginSuccess = bLoginSuccess;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreateNew__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  CharacterId                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientPlayerCharacterCreateNew__DelegateSignature(const class FString& PlayerId, const class FString& CharacterId)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCharacterCreateNew__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerCharacterCreateNew__DelegateSignature_Params params;
	params.PlayerId = PlayerId;
	params.CharacterId = CharacterId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerGrantedCraftingIngredient__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientAutoplayerGrantedCraftingIngredient__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& ItemID, int ItemAmount, const class FString& RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerGrantedCraftingIngredient__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerGrantedCraftingIngredient__DelegateSignature_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.ItemID = ItemID;
	params.ItemAmount = ItemAmount;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerSuccessfulCraft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  CraftedItemID                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientAutoplayerSuccessfulCraft__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID, const class FString& CraftedItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerSuccessfulCraft__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerSuccessfulCraft__DelegateSignature_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RecipeID = RecipeID;
	params.CraftedItemID = CraftedItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerFailedToCraft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  FailReason                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientAutoplayerFailedToCraft__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID, const class FString& FailReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerFailedToCraft__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerFailedToCraft__DelegateSignature_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RecipeID = RecipeID;
	params.FailReason = FailReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerWantsToCraft__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  RecipeID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientAutoplayerWantsToCraft__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const class FString& RecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerWantsToCraft__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerWantsToCraft__DelegateSignature_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RecipeID = RecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerFailedToFindHunt__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientAutoplayerFailedToFindHunt__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& QuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerFailedToFindHunt__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerFailedToFindHunt__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.QuestID = QuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerStartedQuestProgression__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientAutoplayerStartedQuestProgression__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerStartedQuestProgression__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerStartedQuestProgression__DelegateSignature_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerAcceptedQuest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   AcceptedQuestID                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientAutoplayerAcceptedQuest__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& AcceptedQuestID)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerAcceptedQuest__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerAcceptedQuest__DelegateSignature_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.AcceptedQuestID = AcceptedQuestID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerCompletedQuestObjective__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ItemAmount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  InteractTarget                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            ObjectiveType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientAutoplayerCompletedQuestObjective__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& QuestID, const struct FName& ItemID, int ItemAmount, const class FString& InteractTarget, int ObjectiveType)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerCompletedQuestObjective__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerCompletedQuestObjective__DelegateSignature_Params params;
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


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerRedeemedQuest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   RedeemedQuestId                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientAutoplayerRedeemedQuest__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, const struct FName& RedeemedQuestId)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerRedeemedQuest__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerRedeemedQuest__DelegateSignature_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.RedeemedQuestId = RedeemedQuestId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerWentOnHunt__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> PlayerControllerInterface      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FName>           HuntIds                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           FindHuntsResult                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetedBehemoth               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientAutoplayerWentOnHunt__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& PlayerControllerInterface, bool FindHuntsResult, const struct FName& TargetedBehemoth, TArray<struct FName>* HuntIds)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientAutoplayerWentOnHunt__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientAutoplayerWentOnHunt__DelegateSignature_Params params;
	params.PlayerControllerInterface = PlayerControllerInterface;
	params.FindHuntsResult = FindHuntsResult;
	params.TargetedBehemoth = TargetedBehemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HuntIds != nullptr)
		*HuntIds = params.HuntIds;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTutorialEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Tutorial_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Start_Time                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          End_Time                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerTutorialEnd__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Tutorial_Name, float Start_Time, float End_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerTutorialEnd__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerTutorialEnd__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Tutorial_Name = Tutorial_Name;
	params.Start_Time = Start_Time;
	params.End_Time = End_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerMatchEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AArchonPlayerController* Archon_Player_Controller       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Match_Duration                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Behemoth_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Won_Match                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Additional_Behemoth_1          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ServerMatchEnded__DelegateSignature(class AArchonPlayerController* Archon_Player_Controller, float Match_Duration, const class FString& Behemoth_Name, const class FString& Map_Name, bool Won_Match, const class FString& Additional_Behemoth_1)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerMatchEnded__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerMatchEnded__DelegateSignature_Params params;
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


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCoolMoment__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Details                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientPlayerCoolMoment__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Title, const class FString& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerCoolMoment__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerCoolMoment__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Title = Title;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerInputSwap__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerControllerInputSwap__DelegateSignature(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerInputSwap__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerControllerInputSwap__DelegateSignature_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerMatchmakingEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AArchonLobbyClient*      Lobby_Client                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Matchmaking_Attempt_Start      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Matchmaking_Attempt_Counter    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerControllerMatchmakingEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class AArchonLobbyClient* Lobby_Client, float Matchmaking_Attempt_Start, const class FString& Event_Name, float Current_Time, int Matchmaking_Attempt_Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerMatchmakingEvent__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerControllerMatchmakingEvent__DelegateSignature_Params params;
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


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerThingsmithEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Selected_Recipe                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientPlayerThingsmithEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, const class FString& Event_Name, float Widget_Start_Time, float Current_Time, const class FString& Selected_Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerThingsmithEvent__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerThingsmithEvent__DelegateSignature_Params params;
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


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerExitGame__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerExitGame__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerExitGame__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerExitGame__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerSetDyeColour__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonInventoryItem_Armour* Armour                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDyeVariant             Dye_Config                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Uglobal_event_dispatcher_C::ClientPlayerSetDyeColour__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonInventoryItem_Armour* Armour, const struct FDyeVariant& Dye_Config)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerSetDyeColour__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerSetDyeColour__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Armour = Armour;
	params.Dye_Config = Dye_Config;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerBugReport__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Bug_Title                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Bug_Details                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Severity_Rating_String         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Severity_Rating_Integer        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerBugReport__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Bug_Title, const class FString& Bug_Details, const class FString& Severity_Rating_String, int Severity_Rating_Integer)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerBugReport__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerBugReport__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Bug_Title = Bug_Title;
	params.Bug_Details = Bug_Details;
	params.Severity_Rating_String = Severity_Rating_String;
	params.Severity_Rating_Integer = Severity_Rating_Integer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueChoice__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Choice_Index                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dialogue_Choice_Time           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerDialogueChoice__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Choice_Index, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_Choice_Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueChoice__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerDialogueChoice__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Choice_Index = Choice_Index;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Dialogue_Choice_Time = Dialogue_Choice_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Dialogue_End_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Force_End                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerDialogueEnd__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Dialogue_End_Time, bool Force_End)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueEnd__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerDialogueEnd__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Dialogue_Name = Dialogue_Name;
	params.Dialogue_Start_Time = Dialogue_Start_Time;
	params.Dialogue_End_Time = Dialogue_End_Time;
	params.Force_End = Force_End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueLineEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Dialogue_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// float                          Dialogue_Start_Time            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Line_Start_Time                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Line_End_Time                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Skipped                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerDialogueLineEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Dialogue_Name, float Dialogue_Start_Time, float Line_Start_Time, float Line_End_Time, bool Skipped)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerDialogueLineEvent__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerDialogueLineEvent__DelegateSignature_Params params;
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


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerQuestButtonEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Quest_Id                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerQuestButtonEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const struct FName& Quest_Id, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, class UArchonSpeaker* NPC_Identity)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerQuestButtonEvent__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerQuestButtonEvent__DelegateSignature_Params params;
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


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerInteractionEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Interactable_Name              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FVector                 Interactable_Location          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class FString                  Event_Type                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ServerPlayerInteractionEvent__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Interactable_Name, const struct FVector& Interactable_Location, const class FString& Event_Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerInteractionEvent__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerInteractionEvent__DelegateSignature_Params params;
	params.Player_Interface = Player_Interface;
	params.Interactable_Name = Interactable_Name;
	params.Interactable_Location = Interactable_Location;
	params.Event_Type = Event_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerQuestBoardEvent__DelegateSignature
// (Public, Delegate, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UArchonSpeaker*          NPC_Identity                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Widget_Start_Time              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UQuest*>          Available_Quests               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class UQuest*>          Redeemable_Quests              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Current_Time                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Event_Name                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientPlayerQuestBoardEvent__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, class UArchonSpeaker* NPC_Identity, float Widget_Start_Time, float Current_Time, const class FString& Event_Name, TArray<class UQuest*>* Available_Quests, TArray<class UQuest*>* Redeemable_Quests)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerQuestBoardEvent__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerQuestBoardEvent__DelegateSignature_Params params;
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


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerEdgeRecovery__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  Edge_Recovery_Notes            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ServerPlayerEdgeRecovery__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name, const class FString& Edge_Recovery_Notes)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerEdgeRecovery__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerEdgeRecovery__DelegateSignature_Params params;
	params.Player_Interface = Player_Interface;
	params.Map_Name = Map_Name;
	params.Edge_Recovery_Notes = Edge_Recovery_Notes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerUnstuck__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Map_Name                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ServerPlayerUnstuck__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, const class FString& Map_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerUnstuck__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerUnstuck__DelegateSignature_Params params;
	params.Player_Interface = Player_Interface;
	params.Map_Name = Map_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerMatchRated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating_Counter                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rating                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ClientPlayerControllerMatchRated__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, int Rating_Counter, int Rating)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerMatchRated__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerControllerMatchRated__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Rating_Counter = Rating_Counter;
	params.Rating = Rating;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerInputType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  Input                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uglobal_event_dispatcher_C::ClientPlayerControllerInputType__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, const class FString& Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ClientPlayerControllerInputType__DelegateSignature");

	Uglobal_event_dispatcher_C_ClientPlayerControllerInputType__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerControllerGameModeLogin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InCity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ServerPlayerControllerGameModeLogin__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, bool InCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerControllerGameModeLogin__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerControllerGameModeLogin__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.InCity = InCity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerControllerGameModeLogout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           InCity                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ServerPlayerControllerGameModeLogout__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface, bool InCity)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerControllerGameModeLogout__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerControllerGameModeLogout__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;
	params.InCity = InCity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerLoadoutReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_controller_interface_C> Player_Controller_Interface    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ServerPlayerLoadoutReady__DelegateSignature(const TScriptInterface<class Uplayer_controller_interface_C>& Player_Controller_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerLoadoutReady__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerLoadoutReady__DelegateSignature_Params params;
	params.Player_Controller_Interface = Player_Controller_Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerSpawnedInIsland__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> PlayerInterface                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ServerPlayerSpawnedInIsland__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& PlayerInterface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerSpawnedInIsland__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerSpawnedInIsland__DelegateSignature_Params params;
	params.PlayerInterface = PlayerInterface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerSpawnedInCity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ServerPlayerSpawnedInCity__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerSpawnedInCity__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerSpawnedInCity__DelegateSignature_Params params;
	params.Player_Interface = Player_Interface;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerMontageBlendingOut__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Montage_Counter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ServerPlayerMontageBlendingOut__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, bool Interrupted, class UAnimMontage* Montage, int Montage_Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerMontageBlendingOut__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerMontageBlendingOut__DelegateSignature_Params params;
	params.Player_Interface = Player_Interface;
	params.Interrupted = Interrupted;
	params.Montage = Montage;
	params.Montage_Counter = Montage_Counter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerMontageStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class Uplayer_interface_C> Player_Interface               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Montage_Counter                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_event_dispatcher_C::ServerPlayerMontageStarted__DelegateSignature(const TScriptInterface<class Uplayer_interface_C>& Player_Interface, class UAnimMontage* Montage, int Montage_Counter)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.ServerPlayerMontageStarted__DelegateSignature");

	Uglobal_event_dispatcher_C_ServerPlayerMontageStarted__DelegateSignature_Params params;
	params.Player_Interface = Player_Interface;
	params.Montage = Montage;
	params.Montage_Counter = Montage_Counter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_event_dispatcher.global_event_dispatcher_C.GameModeStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uglobal_event_dispatcher_C::GameModeStart__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function global_event_dispatcher.global_event_dispatcher_C.GameModeStart__DelegateSignature");

	Uglobal_event_dispatcher_C_GameModeStart__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
