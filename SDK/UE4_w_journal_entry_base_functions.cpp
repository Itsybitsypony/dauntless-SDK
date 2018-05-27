// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_journal_entry_base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_journal_entry_base.w_journal_entry_base_C.SetIsSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Selected                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_base_C::SetIsSelected(bool Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_base.w_journal_entry_base_C.SetIsSelected");

	Uw_journal_entry_base_C_SetIsSelected_Params params;
	params.Selected = Selected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_base.w_journal_entry_base_C.ExecuteUbergraph_w_journal_entry_base
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_base_C::ExecuteUbergraph_w_journal_entry_base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_base.w_journal_entry_base_C.ExecuteUbergraph_w_journal_entry_base");

	Uw_journal_entry_base_C_ExecuteUbergraph_w_journal_entry_base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_journal_entry_base.w_journal_entry_base_C.OnJournalEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_journal_entry_base_C* JournalEntry                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_journal_entry_base_C::OnJournalEntrySelected__DelegateSignature(class Uw_journal_entry_base_C* JournalEntry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_journal_entry_base.w_journal_entry_base_C.OnJournalEntrySelected__DelegateSignature");

	Uw_journal_entry_base_C_OnJournalEntrySelected__DelegateSignature_Params params;
	params.JournalEntry = JournalEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
