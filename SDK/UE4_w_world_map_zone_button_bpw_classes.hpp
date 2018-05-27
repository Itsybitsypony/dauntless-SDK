#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_world_map_zone_button_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C
// 0x0008 (0x0358 - 0x0350)
class Uw_world_map_zone_button_bpw_C : public UArchonUserButton
{
public:
	class UFocusButton*                                ActualButton;                                             // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_world_map_zone_button_bpw.w_world_map_zone_button_bpw_C");
		return ptr;
	}


	void SetZoneImage(class UTexture2D* SelectedTexture);
	void SetButtonEnabled(bool IsButtonEnabled);
	struct FEventReply OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent);
	void SetIsSelected(bool IsSelected);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
