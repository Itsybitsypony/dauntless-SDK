#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_journal_entry_base_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_journal_entry_base.w_journal_entry_base_C.SetIsSelected
struct Uw_journal_entry_base_C_SetIsSelected_Params
{
	bool                                               Selected;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_journal_entry_base.w_journal_entry_base_C.ExecuteUbergraph_w_journal_entry_base
struct Uw_journal_entry_base_C_ExecuteUbergraph_w_journal_entry_base_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_journal_entry_base.w_journal_entry_base_C.OnJournalEntrySelected__DelegateSignature
struct Uw_journal_entry_base_C_OnJournalEntrySelected__DelegateSignature_Params
{
	class Uw_journal_entry_base_C*                     JournalEntry;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
