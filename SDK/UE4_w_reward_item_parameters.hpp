#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_reward_item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_reward_item.w_reward_item_C.Get_Icon_ToolTipWidget_1
struct Uw_reward_item_C_Get_Icon_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_reward_item.w_reward_item_C.OnLoaded_78E8713B4C7EA162488FB8AF34F4EBFE
struct Uw_reward_item_C_OnLoaded_78E8713B4C7EA162488FB8AF34F4EBFE_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_reward_item.w_reward_item_C.LoadIcon
struct Uw_reward_item_C_LoadIcon_Params
{
	TAssetPtr<class UTexture2D>                        IconSoftReference;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_reward_item.w_reward_item_C.Construct
struct Uw_reward_item_C_Construct_Params
{
};

// Function w_reward_item.w_reward_item_C.ExecuteUbergraph_w_reward_item
struct Uw_reward_item_C_ExecuteUbergraph_w_reward_item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
