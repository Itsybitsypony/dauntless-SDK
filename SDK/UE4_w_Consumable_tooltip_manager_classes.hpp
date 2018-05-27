#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Consumable_tooltip_manager_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_Consumable_tooltip_manager.w_Consumable_tooltip_manager_C
// 0x0000 (0x02F0 - 0x02F0)
class Uw_Consumable_tooltip_manager_C : public Uw_base_tooltip_manager_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_Consumable_tooltip_manager.w_Consumable_tooltip_manager_C");
		return ptr;
	}


	void Internal_UpdateExistingTooltip(class UWidget** ExistingTooltip, class FString* UpdatedTooltipInstanceID, class UWidget** UpdatedWidget);
	void Internal_CreateNewTooltip(class FString* NewTooltipInstanceID, class UWidget** CreatedWidget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
