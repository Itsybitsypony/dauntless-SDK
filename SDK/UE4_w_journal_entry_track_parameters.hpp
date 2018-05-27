#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_journal_entry_track_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_journal_entry_track.w_journal_entry_track_C.RefreshTrackData
struct Uw_journal_entry_track_C_RefreshTrackData_Params
{
};

// Function w_journal_entry_track.w_journal_entry_track_C.OnFocusReceived
struct Uw_journal_entry_track_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_journal_entry_track.w_journal_entry_track_C.OnLoaded_AB0386AB417A23ED020F8B8141BECF7E
struct Uw_journal_entry_track_C_OnLoaded_AB0386AB417A23ED020F8B8141BECF7E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_journal_entry_track.w_journal_entry_track_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature
struct Uw_journal_entry_track_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_321_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_journal_entry_track.w_journal_entry_track_C.SetIsSelected
struct Uw_journal_entry_track_C_SetIsSelected_Params
{
	bool*                                              Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_journal_entry_track.w_journal_entry_track_C.Construct
struct Uw_journal_entry_track_C_Construct_Params
{
};

// Function w_journal_entry_track.w_journal_entry_track_C.LoadIcon
struct Uw_journal_entry_track_C_LoadIcon_Params
{
	TAssetPtr<class UObject>                           SoftIconTexture;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_journal_entry_track.w_journal_entry_track_C.ExecuteUbergraph_w_journal_entry_track
struct Uw_journal_entry_track_C_ExecuteUbergraph_w_journal_entry_track_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_journal_entry_track.w_journal_entry_track_C.OnQButtonClicked__DelegateSignature
struct Uw_journal_entry_track_C_OnQButtonClicked__DelegateSignature_Params
{
	struct FName                                       QuestID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Uw_journal_entry_quest_C*                    Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
