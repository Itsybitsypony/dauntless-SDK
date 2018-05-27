#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_autoplayer_comp_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass autoplayer_comp_bp.autoplayer_comp_bp_C
// 0x0256 (0x0426 - 0x01D0)
class Uautoplayer_comp_bp_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	class AArchonPlayerController*                     ControlledController;                                     // 0x01D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AArchonCharacter*                            ControlledArchonCharacter;                                // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MoveToTarget;                                             // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwingMode;                                                // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01F1(0x0007) MISSED OFFSET
	struct FTimerHandle                                SwingTimer;                                               // 0x01F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                      BehemothTarget;                                           // 0x0200(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      PlayerFollowTarget;                                       // 0x0208(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      BleedoutTarget;                                           // 0x0210(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     MovementProgressChecker;                                  // 0x0218(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0224(0x0004) MISSED OFFSET
	struct FTimerHandle                                TeleportIfStuckTimer;                                     // 0x0228(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ActionTimer;                                              // 0x0230(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	EArchonAttackActionKey                             Button;                                                   // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0239(0x0003) MISSED OFFSET
	float                                              MaxWaitTimeForGroup;                                      // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWaitTimeForGroup;                                  // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Active;                                                   // 0x0244(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0245(0x0003) MISSED OFFSET
	struct FTimerHandle                                wait_timer;                                               // 0x0248(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WalkMode;                                                 // 0x0250(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0251(0x0003) MISSED OFFSET
	int                                                CurrentWalkIndex;                                         // 0x0254(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SpawnBehemothsForProgression;                             // 0x0258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0259(0x0007) MISSED OFFSET
	TArray<TAssetPtr<class UClass>>                    BehemothList;                                             // 0x0260(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayTagContainer>               BehemothTags;                                             // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UQuest*>                              QuestsToProcess;                                          // 0x0280(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UHunt_MapList*                               MapList;                                                  // 0x0290(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               CurrentHuntIds;                                           // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RandomHuntIndex;                                          // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x02AC(0x0004) MISSED OFFSET
	class FString                                      SelectedHuntMap;                                          // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TAssetPtr<class UClass>                            SelectedHuntAtmosphere;                                   // 0x02C0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TAssetPtr<class UClass>                            SelectedHuntBehemoth;                                     // 0x02E0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       QuestDescription;                                         // 0x0300(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ProcessingQuests;                                         // 0x0318(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x7];                                       // 0x0319(0x0007) MISSED OFFSET
	class FString                                      tempTagQueryString;                                       // 0x0320(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      tempTagContainString;                                     // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               AutorunMode;                                              // 0x0340(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CircleRun;                                                // 0x0341(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x6];                                       // 0x0342(0x0006) MISSED OFFSET
	TArray<class UArchonInventoryItem*>                TargetedRecipesInInventory;                               // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               AllItemNames;                                             // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UArchonInventoryItem_Upgradeable*>    UpgradableInvItems;                                       // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                              CraftableNewItemIDs;                                      // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                QuestLooping;                                             // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HighestAvailRegionNum;                                    // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       HighestAvailRegion;                                       // 0x0390(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                EmoteSlot;                                                // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x039C(0x0004) MISSED OFFSET
	TArray<class FString>                              BehemothNames;                                            // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                BehemothToCraft;                                          // 0x03B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x03B4(0x0004) MISSED OFFSET
	class FString                                      BehemothNameToCraft;                                      // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               StillFarAway;                                             // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x03C9(0x0007) MISSED OFFSET
	class FString                                      PartyMembers;                                             // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               BehemothKilled;                                           // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               StayInCity;                                               // 0x03E1(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x6];                                       // 0x03E2(0x0006) MISSED OFFSET
	class FString                                      ExecuteCommand;                                           // 0x03E8(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance)
	EWeaponType                                        RequiredWeapon;                                           // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	int                                                SlackFrequency;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	class Uprogression_bpc_C*                          ProgressionComponent;                                     // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                QuestObjGearPower;                                        // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FHTTPEventStats                             HTTPEventLogStats;                                        // 0x040C(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	EElementType                                       RequiredWeaponElement;                                    // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoundHuntKillObjective;                                   // 0x0425(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass autoplayer_comp_bp.autoplayer_comp_bp_C");
		return ptr;
	}


	void GetAutorunMode(bool* AutorunMode);
	void CheckErrorsWarningsLogFileSize(const class FString& Location);
	void GetSpecificBehemothForPlayerHunt(const class FString& PlayerHuntID, bool* Found, TArray<struct FHunt_BehemothInfo>* SpecificBehemoths);
	void OnRep_StayInCity();
	void AssignRandomWeapon();
	void AssignRandomEmote();
	void GiveAllEmotes();
	void SlackMessage(const class FString& SlackMessage, bool Alert);
	void TryCraftUpgrade(class UArchonInventoryItem_Upgradeable* UpgradeableInvItem);
	void TryCraftNewItem(const class FString& ItemID);
	void GetAllItems(TArray<class FString>* UpgradableItems);
	void TryCraftRecipe(class UArchonInventoryItem* Recipe);
	void GetCraftableItems(TArray<class FString>* UpgradableItems);
	void OpenCores();
	void fCompleteQuestObjs(class UObjectiveData* ObjectiveData, const struct FName& QuestID, class UObjective* Objective);
	void fRedeemQuests();
	void fAcceptQuests();
	void fCompleteQuests();
	void ChooseHuntBehemoth(int SelectedIndex);
	void ChooseHuntAtmosphere(int SelectedIndex);
	void ChooseHuntMap(int SelectedIndex);
	void GetQuestDependencies(class UQuest* Quest, TArray<class FString>* IDs);
	void BuildPartialQuestList(const class FString& QuestToReach, TArray<class FString>* Chain);
	void OrderWalkDestinations(TArray<class AActor*>* Unorded, TArray<class AActor*>* Ordered);
	void TeleportToTargetIfStuck();
	void GrantQuestItems(const struct FName& InName, int Amount);
	void CheckIfCanHit(bool* CanHit);
	void DoRez();
	void CheckForBleedingOutPlayer(bool* BleedoutFound);
	void OnFailure_BB3A79AE431628F65A6CBDB54DAEEB40(const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void OnSuccess_BB3A79AE431628F65A6CBDB54DAEEB40(const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void OnFailure_85E794554A230291B5CEB3873BCCFB77(TArray<class APlayerState*> MembersArray, const class FString& Error);
	void OnSuccess_85E794554A230291B5CEB3873BCCFB77(TArray<class APlayerState*> MembersArray, const class FString& Error);
	void OnFailure_0959F7EF4AFE61FF812470A9E438A1F6(const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void OnSuccess_0959F7EF4AFE61FF812470A9E438A1F6(const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void OnFailure_1CC8016943096F98F105A6BCD1A9CC86(const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void OnSuccess_1CC8016943096F98F105A6BCD1A9CC86(const struct FArchonLobbyId& LobbyId, const class FString& Error);
	void EvaluateTargets();
	void GetBehemothTarget();
	void SetBehemothAsTarget(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void SetReadyWhenInParty();
	void GetPlayerTarget();
	void SetPlayerTarget(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);
	void RunToTarget(class AActor* Actor);
	void SwingModeOn();
	void DoAction();
	void Swing();
	void SwingModeOff();
	void ClientSwing();
	void DebugToClient(const class FString& Message);
	void StartAutoplayer();
	void ClientQuestHandling();
	void ClientSetupMission();
	void ServerWaitAgain();
	void ReceiveBeginPlay();
	void ClientInputcontrol();
	void BuildGroup();
	void StartAutoplayerComp();
	void TryToAcceptQuest();
	void TryToCompleteQuests();
	void TryToRedeemQuests();
	void ReceiveTick(float* DeltaSeconds);
	void TestQuestProgression(const class FString& IDToStopAt);
	void StopAutoProgression();
	void SetClientRot(const struct FRotator& rot);
	void ClientGoToIsland();
	void DoEmote();
	void CheckUnsheathed();
	void SetDoneProcessingQuests();
	void ClientMessageSlackOnRankSet(const struct FName& Track, int Rank);
	void OnRankSetEvent(const struct FName& Track, int Rank);
	void CallTriggerEmote(int EmoteSlot);
	void ReportPartyMember(const class FString& UserId, int SlotIndex, const struct FArchonLobbyPaperDollData& LoadoutData);
	void ReportOnLobbyCandidateFailed(const class FString& Params);
	void TakeScreenshot();
	void PushConfigVars(bool StayInCity, const class FString& ExecuteCommand, int SlackFrequency, int BehemothToCraft);
	void ClientPushConfigVars();
	void ClientCommand();
	void ConsoleQuit();
	void ExecuteUbergraph_autoplayer_comp_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
