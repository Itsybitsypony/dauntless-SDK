// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_autoplayer_comp_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetAutorunMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           AutorunMode                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::GetAutorunMode(bool* AutorunMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetAutorunMode");

	Uautoplayer_comp_bp_C_GetAutorunMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AutorunMode != nullptr)
		*AutorunMode = params.AutorunMode;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckErrorsWarningsLogFileSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::CheckErrorsWarningsLogFileSize(const class FString& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckErrorsWarningsLogFileSize");

	Uautoplayer_comp_bp_C_CheckErrorsWarningsLogFileSize_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetSpecificBehemothForPlayerHunt
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerHuntID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FHunt_BehemothInfo> SpecificBehemoths              (Parm, OutParm, ZeroConstructor)

void Uautoplayer_comp_bp_C::GetSpecificBehemothForPlayerHunt(const class FString& PlayerHuntID, bool* Found, TArray<struct FHunt_BehemothInfo>* SpecificBehemoths)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetSpecificBehemothForPlayerHunt");

	Uautoplayer_comp_bp_C_GetSpecificBehemothForPlayerHunt_Params params;
	params.PlayerHuntID = PlayerHuntID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Found != nullptr)
		*Found = params.Found;
	if (SpecificBehemoths != nullptr)
		*SpecificBehemoths = params.SpecificBehemoths;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnRep_StayInCity
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::OnRep_StayInCity()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnRep_StayInCity");

	Uautoplayer_comp_bp_C_OnRep_StayInCity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.AssignRandomWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::AssignRandomWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.AssignRandomWeapon");

	Uautoplayer_comp_bp_C_AssignRandomWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.AssignRandomEmote
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::AssignRandomEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.AssignRandomEmote");

	Uautoplayer_comp_bp_C_AssignRandomEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GiveAllEmotes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::GiveAllEmotes()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GiveAllEmotes");

	Uautoplayer_comp_bp_C_GiveAllEmotes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SlackMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  SlackMessage                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Alert                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::SlackMessage(const class FString& SlackMessage, bool Alert)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.SlackMessage");

	Uautoplayer_comp_bp_C_SlackMessage_Params params;
	params.SlackMessage = SlackMessage;
	params.Alert = Alert;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftUpgrade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem_Upgradeable* UpgradeableInvItem             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::TryCraftUpgrade(class UArchonInventoryItem_Upgradeable* UpgradeableInvItem)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftUpgrade");

	Uautoplayer_comp_bp_C_TryCraftUpgrade_Params params;
	params.UpgradeableInvItem = UpgradeableInvItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftNewItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::TryCraftNewItem(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftNewItem");

	Uautoplayer_comp_bp_C_TryCraftNewItem_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetAllItems
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          UpgradableItems                (Parm, OutParm, ZeroConstructor)

void Uautoplayer_comp_bp_C::GetAllItems(TArray<class FString>* UpgradableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetAllItems");

	Uautoplayer_comp_bp_C_GetAllItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradableItems != nullptr)
		*UpgradableItems = params.UpgradableItems;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftRecipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInventoryItem*    Recipe                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::TryCraftRecipe(class UArchonInventoryItem* Recipe)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryCraftRecipe");

	Uautoplayer_comp_bp_C_TryCraftRecipe_Params params;
	params.Recipe = Recipe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetCraftableItems
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>          UpgradableItems                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Uautoplayer_comp_bp_C::GetCraftableItems(TArray<class FString>* UpgradableItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetCraftableItems");

	Uautoplayer_comp_bp_C_GetCraftableItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpgradableItems != nullptr)
		*UpgradableItems = params.UpgradableItems;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OpenCores
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::OpenCores()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OpenCores");

	Uautoplayer_comp_bp_C_OpenCores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.fCompleteQuestObjs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjectiveData*          ObjectiveData                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   QuestID                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObjective*              Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::fCompleteQuestObjs(class UObjectiveData* ObjectiveData, const struct FName& QuestID, class UObjective* Objective)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.fCompleteQuestObjs");

	Uautoplayer_comp_bp_C_fCompleteQuestObjs_Params params;
	params.ObjectiveData = ObjectiveData;
	params.QuestID = QuestID;
	params.Objective = Objective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.fRedeemQuests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::fRedeemQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.fRedeemQuests");

	Uautoplayer_comp_bp_C_fRedeemQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.fAcceptQuests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::fAcceptQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.fAcceptQuests");

	Uautoplayer_comp_bp_C_fAcceptQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.fCompleteQuests
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::fCompleteQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.fCompleteQuests");

	Uautoplayer_comp_bp_C_fCompleteQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntBehemoth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::ChooseHuntBehemoth(int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntBehemoth");

	Uautoplayer_comp_bp_C_ChooseHuntBehemoth_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntAtmosphere
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::ChooseHuntAtmosphere(int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntAtmosphere");

	Uautoplayer_comp_bp_C_ChooseHuntAtmosphere_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SelectedIndex                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::ChooseHuntMap(int SelectedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ChooseHuntMap");

	Uautoplayer_comp_bp_C_ChooseHuntMap_Params params;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetQuestDependencies
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class FString>          IDs                            (Parm, OutParm, ZeroConstructor)

void Uautoplayer_comp_bp_C::GetQuestDependencies(class UQuest* Quest, TArray<class FString>* IDs)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetQuestDependencies");

	Uautoplayer_comp_bp_C_GetQuestDependencies_Params params;
	params.Quest = Quest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IDs != nullptr)
		*IDs = params.IDs;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.BuildPartialQuestList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  QuestToReach                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// TArray<class FString>          Chain                          (Parm, OutParm, ZeroConstructor)

void Uautoplayer_comp_bp_C::BuildPartialQuestList(const class FString& QuestToReach, TArray<class FString>* Chain)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.BuildPartialQuestList");

	Uautoplayer_comp_bp_C_BuildPartialQuestList_Params params;
	params.QuestToReach = QuestToReach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Chain != nullptr)
		*Chain = params.Chain;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OrderWalkDestinations
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          Unorded                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>          Ordered                        (Parm, OutParm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OrderWalkDestinations(TArray<class AActor*>* Unorded, TArray<class AActor*>* Ordered)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OrderWalkDestinations");

	Uautoplayer_comp_bp_C_OrderWalkDestinations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Unorded != nullptr)
		*Unorded = params.Unorded;
	if (Ordered != nullptr)
		*Ordered = params.Ordered;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TeleportToTargetIfStuck
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::TeleportToTargetIfStuck()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TeleportToTargetIfStuck");

	Uautoplayer_comp_bp_C_TeleportToTargetIfStuck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GrantQuestItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   InName                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::GrantQuestItems(const struct FName& InName, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GrantQuestItems");

	Uautoplayer_comp_bp_C_GrantQuestItems_Params params;
	params.InName = InName;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckIfCanHit
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CanHit                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::CheckIfCanHit(bool* CanHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckIfCanHit");

	Uautoplayer_comp_bp_C_CheckIfCanHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanHit != nullptr)
		*CanHit = params.CanHit;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoRez
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::DoRez()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoRez");

	Uautoplayer_comp_bp_C_DoRez_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckForBleedingOutPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BleedoutFound                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::CheckForBleedingOutPlayer(bool* BleedoutFound)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckForBleedingOutPlayer");

	Uautoplayer_comp_bp_C_CheckForBleedingOutPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BleedoutFound != nullptr)
		*BleedoutFound = params.BleedoutFound;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_BB3A79AE431628F65A6CBDB54DAEEB40
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyId          LobbyId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OnFailure_BB3A79AE431628F65A6CBDB54DAEEB40(const struct FArchonLobbyId& LobbyId, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_BB3A79AE431628F65A6CBDB54DAEEB40");

	Uautoplayer_comp_bp_C_OnFailure_BB3A79AE431628F65A6CBDB54DAEEB40_Params params;
	params.LobbyId = LobbyId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_BB3A79AE431628F65A6CBDB54DAEEB40
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyId          LobbyId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OnSuccess_BB3A79AE431628F65A6CBDB54DAEEB40(const struct FArchonLobbyId& LobbyId, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_BB3A79AE431628F65A6CBDB54DAEEB40");

	Uautoplayer_comp_bp_C_OnSuccess_BB3A79AE431628F65A6CBDB54DAEEB40_Params params;
	params.LobbyId = LobbyId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_85E794554A230291B5CEB3873BCCFB77
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerState*>    MembersArray                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OnFailure_85E794554A230291B5CEB3873BCCFB77(TArray<class APlayerState*> MembersArray, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_85E794554A230291B5CEB3873BCCFB77");

	Uautoplayer_comp_bp_C_OnFailure_85E794554A230291B5CEB3873BCCFB77_Params params;
	params.MembersArray = MembersArray;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_85E794554A230291B5CEB3873BCCFB77
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class APlayerState*>    MembersArray                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OnSuccess_85E794554A230291B5CEB3873BCCFB77(TArray<class APlayerState*> MembersArray, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_85E794554A230291B5CEB3873BCCFB77");

	Uautoplayer_comp_bp_C_OnSuccess_85E794554A230291B5CEB3873BCCFB77_Params params;
	params.MembersArray = MembersArray;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_0959F7EF4AFE61FF812470A9E438A1F6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyId          LobbyId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OnFailure_0959F7EF4AFE61FF812470A9E438A1F6(const struct FArchonLobbyId& LobbyId, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_0959F7EF4AFE61FF812470A9E438A1F6");

	Uautoplayer_comp_bp_C_OnFailure_0959F7EF4AFE61FF812470A9E438A1F6_Params params;
	params.LobbyId = LobbyId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_0959F7EF4AFE61FF812470A9E438A1F6
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyId          LobbyId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OnSuccess_0959F7EF4AFE61FF812470A9E438A1F6(const struct FArchonLobbyId& LobbyId, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_0959F7EF4AFE61FF812470A9E438A1F6");

	Uautoplayer_comp_bp_C_OnSuccess_0959F7EF4AFE61FF812470A9E438A1F6_Params params;
	params.LobbyId = LobbyId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_1CC8016943096F98F105A6BCD1A9CC86
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyId          LobbyId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OnFailure_1CC8016943096F98F105A6BCD1A9CC86(const struct FArchonLobbyId& LobbyId, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnFailure_1CC8016943096F98F105A6BCD1A9CC86");

	Uautoplayer_comp_bp_C_OnFailure_1CC8016943096F98F105A6BCD1A9CC86_Params params;
	params.LobbyId = LobbyId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_1CC8016943096F98F105A6BCD1A9CC86
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FArchonLobbyId          LobbyId                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                  Error                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::OnSuccess_1CC8016943096F98F105A6BCD1A9CC86(const struct FArchonLobbyId& LobbyId, const class FString& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnSuccess_1CC8016943096F98F105A6BCD1A9CC86");

	Uautoplayer_comp_bp_C_OnSuccess_1CC8016943096F98F105A6BCD1A9CC86_Params params;
	params.LobbyId = LobbyId;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.EvaluateTargets
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::EvaluateTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.EvaluateTargets");

	Uautoplayer_comp_bp_C_EvaluateTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetBehemothTarget
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::GetBehemothTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetBehemothTarget");

	Uautoplayer_comp_bp_C_GetBehemothTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetBehemothAsTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::SetBehemothAsTarget(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetBehemothAsTarget");

	Uautoplayer_comp_bp_C_SetBehemothAsTarget_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetReadyWhenInParty
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::SetReadyWhenInParty()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetReadyWhenInParty");

	Uautoplayer_comp_bp_C_SetReadyWhenInParty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetPlayerTarget
// (Net, NetServer, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::GetPlayerTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.GetPlayerTarget");

	Uautoplayer_comp_bp_C_GetPlayerTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetPlayerTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEnvQueryInstanceBlueprintWrapper* QueryInstance                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EEnvQueryStatus>   QueryStatus                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::SetPlayerTarget(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetPlayerTarget");

	Uautoplayer_comp_bp_C_SetPlayerTarget_Params params;
	params.QueryInstance = QueryInstance;
	params.QueryStatus = QueryStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.RunToTarget
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::RunToTarget(class AActor* Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.RunToTarget");

	Uautoplayer_comp_bp_C_RunToTarget_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SwingModeOn
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::SwingModeOn()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.SwingModeOn");

	Uautoplayer_comp_bp_C_SwingModeOn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoAction
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoAction");

	Uautoplayer_comp_bp_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.Swing
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::Swing()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.Swing");

	Uautoplayer_comp_bp_C_Swing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SwingModeOff
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::SwingModeOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.SwingModeOff");

	Uautoplayer_comp_bp_C_SwingModeOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientSwing
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ClientSwing()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientSwing");

	Uautoplayer_comp_bp_C_ClientSwing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.DebugToClient
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::DebugToClient(const class FString& Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.DebugToClient");

	Uautoplayer_comp_bp_C_DebugToClient_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.StartAutoplayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::StartAutoplayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.StartAutoplayer");

	Uautoplayer_comp_bp_C_StartAutoplayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientQuestHandling
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ClientQuestHandling()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientQuestHandling");

	Uautoplayer_comp_bp_C_ClientQuestHandling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientSetupMission
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ClientSetupMission()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientSetupMission");

	Uautoplayer_comp_bp_C_ClientSetupMission_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ServerWaitAgain
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ServerWaitAgain()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ServerWaitAgain");

	Uautoplayer_comp_bp_C_ServerWaitAgain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Uautoplayer_comp_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReceiveBeginPlay");

	Uautoplayer_comp_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientInputcontrol
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ClientInputcontrol()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientInputcontrol");

	Uautoplayer_comp_bp_C_ClientInputcontrol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.BuildGroup
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::BuildGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.BuildGroup");

	Uautoplayer_comp_bp_C_BuildGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.StartAutoplayerComp
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::StartAutoplayerComp()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.StartAutoplayerComp");

	Uautoplayer_comp_bp_C_StartAutoplayerComp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToAcceptQuest
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::TryToAcceptQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToAcceptQuest");

	Uautoplayer_comp_bp_C_TryToAcceptQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToCompleteQuests
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::TryToCompleteQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToCompleteQuests");

	Uautoplayer_comp_bp_C_TryToCompleteQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToRedeemQuests
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::TryToRedeemQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TryToRedeemQuests");

	Uautoplayer_comp_bp_C_TryToRedeemQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReceiveTick");

	Uautoplayer_comp_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TestQuestProgression
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  IDToStopAt                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::TestQuestProgression(const class FString& IDToStopAt)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TestQuestProgression");

	Uautoplayer_comp_bp_C_TestQuestProgression_Params params;
	params.IDToStopAt = IDToStopAt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.StopAutoProgression
// (Public, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::StopAutoProgression()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.StopAutoProgression");

	Uautoplayer_comp_bp_C_StopAutoProgression_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetClientRot
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                rot                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uautoplayer_comp_bp_C::SetClientRot(const struct FRotator& rot)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetClientRot");

	Uautoplayer_comp_bp_C_SetClientRot_Params params;
	params.rot = rot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientGoToIsland
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ClientGoToIsland()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientGoToIsland");

	Uautoplayer_comp_bp_C_ClientGoToIsland_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoEmote
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::DoEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.DoEmote");

	Uautoplayer_comp_bp_C_DoEmote_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckUnsheathed
// (BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::CheckUnsheathed()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.CheckUnsheathed");

	Uautoplayer_comp_bp_C_CheckUnsheathed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetDoneProcessingQuests
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::SetDoneProcessingQuests()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.SetDoneProcessingQuests");

	Uautoplayer_comp_bp_C_SetDoneProcessingQuests_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientMessageSlackOnRankSet
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::ClientMessageSlackOnRankSet(const struct FName& Track, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientMessageSlackOnRankSet");

	Uautoplayer_comp_bp_C_ClientMessageSlackOnRankSet_Params params;
	params.Track = Track;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnRankSetEvent
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Track                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// int                            Rank                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::OnRankSetEvent(const struct FName& Track, int Rank)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.OnRankSetEvent");

	Uautoplayer_comp_bp_C_OnRankSetEvent_Params params;
	params.Track = Track;
	params.Rank = Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.CallTriggerEmote
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            EmoteSlot                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::CallTriggerEmote(int EmoteSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.CallTriggerEmote");

	Uautoplayer_comp_bp_C_CallTriggerEmote_Params params;
	params.EmoteSlot = EmoteSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReportPartyMember
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  UserId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SlotIndex                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FArchonLobbyPaperDollData LoadoutData                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uautoplayer_comp_bp_C::ReportPartyMember(const class FString& UserId, int SlotIndex, const struct FArchonLobbyPaperDollData& LoadoutData)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReportPartyMember");

	Uautoplayer_comp_bp_C_ReportPartyMember_Params params;
	params.UserId = UserId;
	params.SlotIndex = SlotIndex;
	params.LoadoutData = LoadoutData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReportOnLobbyCandidateFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Params                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uautoplayer_comp_bp_C::ReportOnLobbyCandidateFailed(const class FString& Params)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ReportOnLobbyCandidateFailed");

	Uautoplayer_comp_bp_C_ReportOnLobbyCandidateFailed_Params params;
	params.Params = Params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.TakeScreenshot
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::TakeScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.TakeScreenshot");

	Uautoplayer_comp_bp_C_TakeScreenshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.PushConfigVars
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           StayInCity                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  ExecuteCommand                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            SlackFrequency                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            BehemothToCraft                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::PushConfigVars(bool StayInCity, const class FString& ExecuteCommand, int SlackFrequency, int BehemothToCraft)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.PushConfigVars");

	Uautoplayer_comp_bp_C_PushConfigVars_Params params;
	params.StayInCity = StayInCity;
	params.ExecuteCommand = ExecuteCommand;
	params.SlackFrequency = SlackFrequency;
	params.BehemothToCraft = BehemothToCraft;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientPushConfigVars
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ClientPushConfigVars()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientPushConfigVars");

	Uautoplayer_comp_bp_C_ClientPushConfigVars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientCommand
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ClientCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ClientCommand");

	Uautoplayer_comp_bp_C_ClientCommand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ConsoleQuit
// (Net, NetClient, BlueprintCallable, BlueprintEvent)

void Uautoplayer_comp_bp_C::ConsoleQuit()
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ConsoleQuit");

	Uautoplayer_comp_bp_C_ConsoleQuit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function autoplayer_comp_bp.autoplayer_comp_bp_C.ExecuteUbergraph_autoplayer_comp_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uautoplayer_comp_bp_C::ExecuteUbergraph_autoplayer_comp_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function autoplayer_comp_bp.autoplayer_comp_bp_C.ExecuteUbergraph_autoplayer_comp_bp");

	Uautoplayer_comp_bp_C_ExecuteUbergraph_autoplayer_comp_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
