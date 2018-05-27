#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_state_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_state_bp.player_state_bp_C
// 0x00C5 (0x06B5 - 0x05F0)
class Aplayer_state_bp_C : public AArchonPlayerState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)
	class Uplayer_state_telemetry_component_C*         player_state_telemetry_component;                         // 0x05F8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryComponent*                   ArchonInventory;                                          // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0608(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Player_Color;                                             // 0x0610(0x0010) (Edit, BlueprintVisible, Net, DisableEditOnInstance, IsPlainOldData)
	bool                                               Bleedout_State;                                           // 0x0620(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0621(0x0007) MISSED OFFSET
	class APawn*                                       PlayerPawn;                                               // 0x0628(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              Current_Health;                                           // 0x0630(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0634(0x0004) MISSED OFFSET
	TArray<struct FStruct_PlayerInventoryEntry>        Player_Inventory;                                         // 0x0638(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor)
	struct FScriptMulticastDelegate                    Talking_State_Change_Dispatcher;                          // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               Is_Talking;                                               // 0x0658(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyForMission;                                          // 0x0659(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               InCity;                                                   // 0x065A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x065B(0x0001) MISSED OFFSET
	int                                                ReviveTokenCount;                                         // 0x065C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Primary_Color;                                         // 0x0660(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	int                                                CurrentlySelectedSlot;                                    // 0x0664(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    Selected_Quickslot_Changed_Dispatcher;                    // 0x0668(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              BleedoutTimeRemaining;                                    // 0x0678(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BleedoutTimerLenght;                                      // 0x067C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BleedOutState;                                            // 0x0680(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageTaken;                                              // 0x0684(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageGiven;                                              // 0x0688(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WeaponPower;                                              // 0x068C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TimesPlayerWasRevived;                                    // 0x0690(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BleedoutCount;                                            // 0x0694(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StaggerCount;                                             // 0x0698(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsAutoPlayer;                                             // 0x069C(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsServerReadyToStart;                                     // 0x069D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x069E(0x0002) MISSED OFFSET
	int                                                NumRevivesPerformed;                                      // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               TrackingDamageGiven;                                      // 0x06A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x06A5(0x0003) MISSED OFFSET
	int                                                PartBreakCount;                                           // 0x06A8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                InterruptCount;                                           // 0x06AC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EndOfGameRanking;                                         // 0x06B0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               InAirship;                                                // 0x06B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_state_bp.player_state_bp_C");
		return ptr;
	}


	void SetupCombatText();
	void GetRankingData(float* DamageGiven, float* DamageTaken, int* BleedoutCount, int* NumRevivesPerformed, int* StaggerCount);
	bool HasFinishedLoading();
	void GetSelectedSlotFName(struct FName* Name);
	void Use_Currently_Selected_Quickslot_Item(bool* Started_Use);
	void OnRep_Is_Talking();
	void Setup_Player_Inventory();
	void Get_Debug_Color(struct FLinearColor* Color);
	void UserConstructionScript();
	void SelectPreviousQuickslotItem();
	void SelectNextQuickslotItem();
	void SetInAirship(bool InAirship);
	void ReceiveBeginPlay();
	void OnPlayergiveDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser);
	void IncrementStaggerCount(class AActor* Behemoth, bool WasInterrupt);
	void SetInCity_Deprecated(bool InCity);
	void Guild_Updated(class AArchonGuild* Guild);
	void Any(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void SelectQuickslot(int SlotID);
	void IncrementPartBreakCount(class AActor* Behemoth);
	void IncrementInterruptCount(class AActor* Behemoth);
	void ExecuteUbergraph_player_state_bp(int EntryPoint);
	void Selected_Quickslot_Changed_Dispatcher__DelegateSignature(int SlotID);
	void Talking_State_Change_Dispatcher__DelegateSignature(bool Is_Talking);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
