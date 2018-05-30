#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_Wounded_Flash_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.OnAnimationFinished
struct UBPW_Wounded_Flash_C_OnAnimationFinished_Params
{
	class UWidgetAnimation**                           Animation;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.BleedAnim
struct UBPW_Wounded_Flash_C_BleedAnim_Params
{
};

// Function BPW_Wounded_Flash.BPW_Wounded_Flash_C.ExecuteUbergraph_BPW_Wounded_Flash
struct UBPW_Wounded_Flash_C_ExecuteUbergraph_BPW_Wounded_Flash_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
