#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_social_menu_tab_body_bpw_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C
// 0x0010 (0x02E0 - 0x02D0)
class Uw_social_menu_tab_body_bpw_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D0(0x0008) (Transient, DuplicateTransient)
	class Usocial_menu_root_bpw_C*                     RootMenu;                                                 // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass w_social_menu_tab_body_bpw.w_social_menu_tab_body_bpw_C");
		return ptr;
	}


	void GetDefaultFocus(class UWidget** DesiredFocusWidget);
	void OnTabSelected(bool IsUsingGamepad);
	void OnTabDeselected();
	void InputSwap(bool IsUsingGamepad);
	void ExecuteUbergraph_w_social_menu_tab_body_bpw(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
