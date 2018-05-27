#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPHI_Debug_Hud_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set Static Hud Item Visibility
struct UBPHI_Debug_Hud_C_Set_Static_Hud_Item_Visibility_Params
{
	bool                                               Visible_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Toggle HUD Visibility
struct UBPHI_Debug_Hud_C_Toggle_HUD_Visibility_Params
{
};

// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set Display Debug Image
struct UBPHI_Debug_Hud_C_Set_Display_Debug_Image_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set HUD Visibility
struct UBPHI_Debug_Hud_C_Set_HUD_Visibility_Params
{
	bool                                               Visibility;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPHI_Debug_Hud.BPHI_Debug_Hud_C.Set HUD Debug Text
struct UBPHI_Debug_Hud_C_Set_HUD_Debug_Text_Params
{
	class FString                                      Debug_String;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
