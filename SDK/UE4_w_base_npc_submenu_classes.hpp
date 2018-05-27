#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_npc_submenu_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_base_npc_submenu.w_base_npc_submenu_C
// 0x00B0 (0x03A0 - 0x02F0)
class Uw_base_npc_submenu_C : public UArchonUserWidget
{
public:
	struct FText                                       MenuDisplayName;                                          // 0x02F0(0x0018) (Edit, BlueprintVisible)
	struct FText                                       MenuDescription;                                          // 0x0308(0x0018) (Edit, BlueprintVisible)
	struct Fnpc_submenu_params                         NPCMenuParams;                                            // 0x0320(0x0038) (Edit, BlueprintVisible)
	TArray<class FString>                              RequiredTags;                                             // 0x0358(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              ExcludedTags;                                             // 0x0368(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FScriptMulticastDelegate                    OnCloseRequested;                                         // 0x0378(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct Fnpc_ui_customdata_struct                   MenuCustomData;                                           // 0x0388(0x0010) (Edit, BlueprintVisible)
	class Avendor_interactive_bp_C*                    Vendor;                                                   // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_base_npc_submenu.w_base_npc_submenu_C");
		return ptr;
	}


	void InitializeFromNPCMenu(class AArchonPlayerController* PlayerController);
	struct FEventReply OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent);
	void OnCloseRequested__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
