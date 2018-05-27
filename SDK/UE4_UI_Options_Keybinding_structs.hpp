#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_UI_KeybindingGroups_classes.hpp"
#include "UE4_UI_Keybinding_InputTypes_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct UI_Options_Keybinding.UI_Options_Keybinding
// 0x003C
struct FUI_Options_Keybinding
{
	struct FName                                       ActionMappingName_51_2673279A47726EF8AB08B2B7E1B1C6B9;    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       PlayerFacingName_48_7B1B5A864FF3181832CC6B92983B6046;     // 0x0008(0x0018) (Edit, BlueprintVisible)
	struct FText                                       Tooltip_49_0FED2C4D4964229322829A99AEE730F0;              // 0x0020(0x0018) (Edit, BlueprintVisible)
	TEnumAsByte<EUI_KeybindingGroups>                  GroupCategory_36_FCE856484275BA14FD69A58DA37232CF;        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EUI_Keybinding_InputTypes>             KeyPressType_39_F9A891604CB7AA76E41571B2D36AD152;         // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAxisMapping_45_660B89CE425856E03E077F8B7F3677AF;        // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAxisPositive_47_42FE8C0743ABA8261CC9BCA60E51CDBD;       // 0x003B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
