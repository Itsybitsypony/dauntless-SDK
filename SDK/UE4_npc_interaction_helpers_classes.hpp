#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_interaction_helpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass npc_interaction_helpers.npc_interaction_helpers_C
// 0x0000 (0x0028 - 0x0028)
class Unpc_interaction_helpers_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npc_interaction_helpers.npc_interaction_helpers_C");
		return ptr;
	}


	void STATIC_TryGetMessageSlateEvent(class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_message_slate_C** ChosenEvent);
	void STATIC_TryHandleWidgetEvent(class APlayerController* PlayerController, class Avendor_interactive_bp_C* Vendor, class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, bool* Handled);
	void STATIC_TryGetIslandRevealEvent(class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_reveal_island_C** ChosenEvent);
	void STATIC_TryGetZoneRevealEvent(class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_reveal_zone_C** ChosenEvent);
	void STATIC_PlayQuestRedeemAudio(class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext);
	void STATIC_PlayQuestAcceptAudio(class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext);
	void STATIC_NPCHasQuestWithCraftingRequirement(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext, bool* HasCraftingRequirement);
	void STATIC_ObjectiveHasCraftingRequirement(class UObjective* Objective, class UObject* __WorldContext, bool* HasCraftingRequirement);
	void STATIC_StartAcceptQuestFlow(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UQuest* Quest, class UObject* __WorldContext);
	void STATIC_StartRedeemQuestFlow(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UQuest* Quest, class UObject* __WorldContext);
	void STATIC_NPCHasMultipleActions(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext, bool* HasMultipleActions, class UQuest** SingleQuestOption);
	void STATIC_NPCHasQuestActions(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext, bool* HasQuestActions);
	void STATIC_TryHandleAudioEventForNPC(class UArchonSpeaker* NPCIdentity, class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, bool* PlayedEvent);
	void STATIC_TryGetDialogEvent(class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_dialogue2_bp_C** ChosenEvent);
	void STATIC_PlayAudioEventForNPC(class UArchonSpeaker* NPCIdentity, class UAkAudioEventBase* Event, bool Interrupt, class UObject* __WorldContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
