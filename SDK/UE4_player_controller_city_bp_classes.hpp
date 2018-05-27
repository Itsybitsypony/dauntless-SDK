#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_controller_city_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_controller_city_bp.player_controller_city_bp_C
// 0x001B (0x0C53 - 0x0C38)
class Aplayer_controller_city_bp_C : public Aplayer_controller_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C38(0x0008) (Transient, DuplicateTransient)
	struct FName                                       AirShipLobbyLevel;                                        // 0x0C40(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Areturn_to_ramsgate_cinematic_trigger_C*     ReturnToRamsgateTrigger;                                  // 0x0C48(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bReturnToRamsgateEnabledInEditor;                         // 0x0C50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanShowWelcomeMessage;                                   // 0x0C51(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bStartedCinematic;                                        // 0x0C52(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_controller_city_bp.player_controller_city_bp_C");
		return ptr;
	}


	bool Is_Cinematic_Playing();
	void MarkReturnToRamsgateComplete();
	void HasSeenReturnToRamsgateCinematic(bool* HasSeenCinematic);
	bool CanShowWelcomeMessage();
	void ShouldPlayReturnToRamsgateCinematic(bool* ShouldPlayCinematic);
	void UserConstructionScript();
	void InpActEvt_Toggle_Player_Ready_K2Node_InputActionEvent_10(const struct FKey& Key);
	void InpActEvt_Dodge_K2Node_InputActionEvent_9(const struct FKey& Key);
	void InpActEvt_Primary_Attack_K2Node_InputActionEvent_8(const struct FKey& Key);
	void InpActEvt_Secondary_Attack_K2Node_InputActionEvent_7(const struct FKey& Key);
	void InpActEvt_Party_Options_K2Node_InputActionEvent_6(const struct FKey& Key);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ReceiveGameplayStart();
	void OnPartyMatchmakingStartedNotification();
	void OnClientQuestSystemReady();
	void OnServerPlaybackStopped();
	void EvaluateCanShowWelcomeMessage();
	void ClientOnQuestSystemReady();
	void ExecuteUbergraph_player_controller_city_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
