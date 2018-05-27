#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_MenuButtonParent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_MenuButtonParent.BPI_MenuButtonParent_C.ReturnFocusedButton
struct UBPI_MenuButtonParent_C_ReturnFocusedButton_Params
{
	class Uw_MenuButton_C*                             FocusedButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
