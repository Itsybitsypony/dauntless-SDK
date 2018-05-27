// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_interaction_helpers_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetMessageSlateEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestEventData*> QuestEvents                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uquest_event_message_slate_C* ChosenEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_TryGetMessageSlateEvent(class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_message_slate_C** ChosenEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetMessageSlateEvent");

	Unpc_interaction_helpers_C_TryGetMessageSlateEvent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEvents != nullptr)
		*QuestEvents = params.QuestEvents;
	if (ChosenEvent != nullptr)
		*ChosenEvent = params.ChosenEvent;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.TryHandleWidgetEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestEventData*> QuestEvents                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Avendor_interactive_bp_C* Vendor                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Handled                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_TryHandleWidgetEvent(class APlayerController* PlayerController, class Avendor_interactive_bp_C* Vendor, class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, bool* Handled)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.TryHandleWidgetEvent");

	Unpc_interaction_helpers_C_TryHandleWidgetEvent_Params params;
	params.PlayerController = PlayerController;
	params.Vendor = Vendor;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEvents != nullptr)
		*QuestEvents = params.QuestEvents;
	if (Handled != nullptr)
		*Handled = params.Handled;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetIslandRevealEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestEventData*> QuestEvents                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uquest_event_reveal_island_C* ChosenEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_TryGetIslandRevealEvent(class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_reveal_island_C** ChosenEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetIslandRevealEvent");

	Unpc_interaction_helpers_C_TryGetIslandRevealEvent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEvents != nullptr)
		*QuestEvents = params.QuestEvents;
	if (ChosenEvent != nullptr)
		*ChosenEvent = params.ChosenEvent;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetZoneRevealEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestEventData*> QuestEvents                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uquest_event_reveal_zone_C* ChosenEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_TryGetZoneRevealEvent(class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_reveal_zone_C** ChosenEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetZoneRevealEvent");

	Unpc_interaction_helpers_C_TryGetZoneRevealEvent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEvents != nullptr)
		*QuestEvents = params.QuestEvents;
	if (ChosenEvent != nullptr)
		*ChosenEvent = params.ChosenEvent;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.PlayQuestRedeemAudio
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Avendor_interactive_bp_C* NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_PlayQuestRedeemAudio(class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.PlayQuestRedeemAudio");

	Unpc_interaction_helpers_C_PlayQuestRedeemAudio_Params params;
	params.NPC = NPC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.PlayQuestAcceptAudio
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Avendor_interactive_bp_C* NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_PlayQuestAcceptAudio(class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.PlayQuestAcceptAudio");

	Unpc_interaction_helpers_C_PlayQuestAcceptAudio_Params params;
	params.NPC = NPC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasQuestWithCraftingRequirement
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Avendor_interactive_bp_C* NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasCraftingRequirement         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_NPCHasQuestWithCraftingRequirement(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext, bool* HasCraftingRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasQuestWithCraftingRequirement");

	Unpc_interaction_helpers_C_NPCHasQuestWithCraftingRequirement_Params params;
	params.PlayerController = PlayerController;
	params.NPC = NPC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasCraftingRequirement != nullptr)
		*HasCraftingRequirement = params.HasCraftingRequirement;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.ObjectiveHasCraftingRequirement
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObjective*              Objective                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasCraftingRequirement         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_ObjectiveHasCraftingRequirement(class UObjective* Objective, class UObject* __WorldContext, bool* HasCraftingRequirement)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.ObjectiveHasCraftingRequirement");

	Unpc_interaction_helpers_C_ObjectiveHasCraftingRequirement_Params params;
	params.Objective = Objective;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasCraftingRequirement != nullptr)
		*HasCraftingRequirement = params.HasCraftingRequirement;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.StartAcceptQuestFlow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Avendor_interactive_bp_C* NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_StartAcceptQuestFlow(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UQuest* Quest, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.StartAcceptQuestFlow");

	Unpc_interaction_helpers_C_StartAcceptQuestFlow_Params params;
	params.PlayerController = PlayerController;
	params.NPC = NPC;
	params.Quest = Quest;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.StartRedeemQuestFlow
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Avendor_interactive_bp_C* NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest*                  Quest                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_StartRedeemQuestFlow(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UQuest* Quest, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.StartRedeemQuestFlow");

	Unpc_interaction_helpers_C_StartRedeemQuestFlow_Params params;
	params.PlayerController = PlayerController;
	params.NPC = NPC;
	params.Quest = Quest;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasMultipleActions
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Avendor_interactive_bp_C* NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasMultipleActions             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UQuest*                  SingleQuestOption              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_NPCHasMultipleActions(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext, bool* HasMultipleActions, class UQuest** SingleQuestOption)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasMultipleActions");

	Unpc_interaction_helpers_C_NPCHasMultipleActions_Params params;
	params.PlayerController = PlayerController;
	params.NPC = NPC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasMultipleActions != nullptr)
		*HasMultipleActions = params.HasMultipleActions;
	if (SingleQuestOption != nullptr)
		*SingleQuestOption = params.SingleQuestOption;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasQuestActions
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*       PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Avendor_interactive_bp_C* NPC                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           HasQuestActions                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_NPCHasQuestActions(class APlayerController* PlayerController, class Avendor_interactive_bp_C* NPC, class UObject* __WorldContext, bool* HasQuestActions)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.NPCHasQuestActions");

	Unpc_interaction_helpers_C_NPCHasQuestActions_Params params;
	params.PlayerController = PlayerController;
	params.NPC = NPC;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasQuestActions != nullptr)
		*HasQuestActions = params.HasQuestActions;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.TryHandleAudioEventForNPC
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonSpeaker*          NPCIdentity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class UQuestEventData*> QuestEvents                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           PlayedEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_TryHandleAudioEventForNPC(class UArchonSpeaker* NPCIdentity, class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, bool* PlayedEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.TryHandleAudioEventForNPC");

	Unpc_interaction_helpers_C_TryHandleAudioEventForNPC_Params params;
	params.NPCIdentity = NPCIdentity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEvents != nullptr)
		*QuestEvents = params.QuestEvents;
	if (PlayedEvent != nullptr)
		*PlayedEvent = params.PlayedEvent;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetDialogEvent
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UQuestEventData*> QuestEvents                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uquest_event_dialogue2_bp_C* ChosenEvent                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_TryGetDialogEvent(class UObject* __WorldContext, TArray<class UQuestEventData*>* QuestEvents, class Uquest_event_dialogue2_bp_C** ChosenEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.TryGetDialogEvent");

	Unpc_interaction_helpers_C_TryGetDialogEvent_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (QuestEvents != nullptr)
		*QuestEvents = params.QuestEvents;
	if (ChosenEvent != nullptr)
		*ChosenEvent = params.ChosenEvent;
}


// Function npc_interaction_helpers.npc_interaction_helpers_C.PlayAudioEventForNPC
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonSpeaker*          NPCIdentity                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAkAudioEventBase*       Event                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupt                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Unpc_interaction_helpers_C::STATIC_PlayAudioEventForNPC(class UArchonSpeaker* NPCIdentity, class UAkAudioEventBase* Event, bool Interrupt, class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_interaction_helpers.npc_interaction_helpers_C.PlayAudioEventForNPC");

	Unpc_interaction_helpers_C_PlayAudioEventForNPC_Params params;
	params.NPCIdentity = NPCIdentity;
	params.Event = Event;
	params.Interrupt = Interrupt;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
