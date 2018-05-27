#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPHI_Debug_Hud_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPHI_Debug_Hud.BPHI_Debug_Hud_C
// 0x0000 (0x0028 - 0x0028)
class UBPHI_Debug_Hud_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPHI_Debug_Hud.BPHI_Debug_Hud_C");
		return ptr;
	}


	void Set_Static_Hud_Item_Visibility(bool Visible_);
	void Toggle_HUD_Visibility();
	void Set_Display_Debug_Image(bool Visible);
	void Set_HUD_Visibility(bool Visibility);
	void Set_HUD_Debug_Text(const class FString& Debug_String);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
