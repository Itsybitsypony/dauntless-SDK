#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hunt_quest_monitor_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C
// 0x0071 (0x0241 - 0x01D0)
class Uhunt_quest_monitor_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TArray<class UQuestEventData*>                     LQuestEventQueue;                                         // 0x01D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UQuest*                                      LCurrentQuest;                                            // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uquest_event_dialogue2_bp_C*                 LActiveDialogueEvent;                                     // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Ulantern_radio_prototype_bpw_C*              LHuntDialogueWidget;                                      // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DisplayTextDuration;                                      // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDebug;                                              // 0x0204(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0205(0x0003) MISSED OFFSET
	float                                              EvaulationPeriod;                                         // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x020C(0x0004) MISSED OFFSET
	struct FTimerHandle                                TextDisplayTimerHandle;                                   // 0x0210(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class Uquest_event_audio_bp_C*                     LActiveAudioEvent;                                        // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class Uquest_event_widget_bp_C*                    LActiveWidgetEvent;                                       // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEventsEnabled;                                           // 0x0228(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0229(0x0007) MISSED OFFSET
	class Uw_message_slate_bpw_C*                      LHuntMessageSlate;                                        // 0x0230(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                LUpdateTimer;                                             // 0x0238(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               bPaused;                                                  // 0x0240(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass hunt_quest_monitor_bpc.hunt_quest_monitor_bpc_C");
		return ptr;
	}


	void MuteQuestMonitorComponent(bool* OutEnabled);
	void GetSpeaker(class UArchonSpeaker** Speaker);
	void DisplayDebugInfo();
	void DeactivateHuntDialogueWidget();
	void ActivateHuntDialogueWidget();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void UpdateQuests();
	void PauseQuestMonitorComponent();
	void UnpauseQuestMonitorComponent();
	void StartTimer();
	void ExecuteUbergraph_hunt_quest_monitor_bpc(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
