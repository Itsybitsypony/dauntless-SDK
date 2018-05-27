#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_interaction_helpers_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetMessageSlateEvent
struct Unpc_interaction_helpers_C_TryGetMessageSlateEvent_Params
{
	TArray<class UQuestEventData*>                     QuestEvents;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uquest_event_message_slate_C*                ChosenEvent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.TryHandleWidgetEvent
struct Unpc_interaction_helpers_C_TryHandleWidgetEvent_Params
{
	TArray<class UQuestEventData*>                     QuestEvents;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Avendor_interactive_bp_C*                    Vendor;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Handled;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetIslandRevealEvent
struct Unpc_interaction_helpers_C_TryGetIslandRevealEvent_Params
{
	TArray<class UQuestEventData*>                     QuestEvents;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uquest_event_reveal_island_C*                ChosenEvent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetZoneRevealEvent
struct Unpc_interaction_helpers_C_TryGetZoneRevealEvent_Params
{
	TArray<class UQuestEventData*>                     QuestEvents;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uquest_event_reveal_zone_C*                  ChosenEvent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.PlayQuestRedeemAudio
struct Unpc_interaction_helpers_C_PlayQuestRedeemAudio_Params
{
	class Avendor_interactive_bp_C*                    NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.PlayQuestAcceptAudio
struct Unpc_interaction_helpers_C_PlayQuestAcceptAudio_Params
{
	class Avendor_interactive_bp_C*                    NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasQuestWithCraftingRequirement
struct Unpc_interaction_helpers_C_NPCHasQuestWithCraftingRequirement_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Avendor_interactive_bp_C*                    NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasCraftingRequirement;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.ObjectiveHasCraftingRequirement
struct Unpc_interaction_helpers_C_ObjectiveHasCraftingRequirement_Params
{
	class UObjective*                                  Objective;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasCraftingRequirement;                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.StartAcceptQuestFlow
struct Unpc_interaction_helpers_C_StartAcceptQuestFlow_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Avendor_interactive_bp_C*                    NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.StartRedeemQuestFlow
struct Unpc_interaction_helpers_C_StartRedeemQuestFlow_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Avendor_interactive_bp_C*                    NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      Quest;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasMultipleActions
struct Unpc_interaction_helpers_C_NPCHasMultipleActions_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Avendor_interactive_bp_C*                    NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasMultipleActions;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UQuest*                                      SingleQuestOption;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasQuestActions
struct Unpc_interaction_helpers_C_NPCHasQuestActions_Params
{
	class APlayerController*                           PlayerController;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Avendor_interactive_bp_C*                    NPC;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasQuestActions;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.TryHandleAudioEventForNPC
struct Unpc_interaction_helpers_C_TryHandleAudioEventForNPC_Params
{
	class UArchonSpeaker*                              NPCIdentity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<class UQuestEventData*>                     QuestEvents;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               PlayedEvent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetDialogEvent
struct Unpc_interaction_helpers_C_TryGetDialogEvent_Params
{
	TArray<class UQuestEventData*>                     QuestEvents;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uquest_event_dialogue2_bp_C*                 ChosenEvent;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function npc_interaction_helpers.npc_interaction_helpers_C.PlayAudioEventForNPC
struct Unpc_interaction_helpers_C_PlayAudioEventForNPC_Params
{
	class UArchonSpeaker*                              NPCIdentity;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAkAudioEventBase*                           Event;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interrupt;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
