#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_base_tooltip_manager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_base_tooltip_manager.w_base_tooltip_manager_C
// 0x0020 (0x02F0 - 0x02D0)
class Uw_base_tooltip_manager_C : public UUserWidget
{
public:
	class FString                                      CurrentTooltipInstanceID;                                 // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPanelWidget*                                ParentWidgetRef;                                          // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     CurrentTooltipRef;                                        // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_base_tooltip_manager.w_base_tooltip_manager_C");
		return ptr;
	}


	void GetItemWithInstanceID(const class FString& ItemInstanceId, class UArchonInventoryItem** Item);
	bool HasItemWithInstanceID(const class FString& ItemInstanceId);
	void GetCurrentTooltipInstanceID(class FString* CurrentInstanceID);
	void Internal_UpdateExistingTooltip(class UWidget* ExistingTooltip, const class FString& UpdatedTooltipInstanceID, class UWidget** UpdatedWidget);
	void Internal_CreateNewTooltip(const class FString& NewTooltipInstanceID, class UWidget** CreatedWidget);
	void SetTooltipInstanceID(const class FString& NewTooltipInstanceID);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
