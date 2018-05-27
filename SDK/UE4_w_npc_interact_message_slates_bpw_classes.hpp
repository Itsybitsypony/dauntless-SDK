#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_message_slates_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C
// 0x0028 (0x0318 - 0x02F0)
class Uw_npc_interact_message_slates_bpw_C : public UArchonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02F0(0x0008) (Transient, DuplicateTransient)
	TArray<struct FDataTableRowHandle>                 Messages;                                                 // 0x02F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CurrentMessageIndex;                                      // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x030C(0x0004) MISSED OFFSET
	class Avendor_interactive_bp_C*                    Vendor;                                                   // 0x0310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_npc_interact_message_slates_bpw.w_npc_interact_message_slates_bpw_C");
		return ptr;
	}


	class UWidget* GetDefaultFocusedWidget();
	void OnAquireTopOfFocusStack();
	void DisplayNextSlate();
	void Close();
	void ExecuteUbergraph_w_npc_interact_message_slates_bpw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
