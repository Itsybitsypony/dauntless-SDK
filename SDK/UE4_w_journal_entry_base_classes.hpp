#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_journal_entry_base_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_journal_entry_base.w_journal_entry_base_C
// 0x0018 (0x02E8 - 0x02D0)
class Uw_journal_entry_base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    OnJournalEntrySelected;                                   // 0x02D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_journal_entry_base.w_journal_entry_base_C");
		return ptr;
	}


	void SetIsSelected(bool Selected);
	void ExecuteUbergraph_w_journal_entry_base(int EntryPoint);
	void OnJournalEntrySelected__DelegateSignature(class Uw_journal_entry_base_C* JournalEntry);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
