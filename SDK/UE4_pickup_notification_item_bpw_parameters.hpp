#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_pickup_notification_item_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetItemCount
struct Upickup_notification_item_bpw_C_GetItemCount_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetShadowColor
struct Upickup_notification_item_bpw_C_GetShadowColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTransitionColor
struct Upickup_notification_item_bpw_C_GetTransitionColor_Params
{
	struct FLinearColor                                BASE_COLOR;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                TransitionColor;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetBackgroundColor
struct Upickup_notification_item_bpw_C_GetBackgroundColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.UpdateTextOpacity
struct Upickup_notification_item_bpw_C_UpdateTextOpacity_Params
{
	class UTextBlock*                                  Text_Field;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTextNumberColor
struct Upickup_notification_item_bpw_C_GetTextNumberColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetBorderColor
struct Upickup_notification_item_bpw_C_GetBorderColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.GetTextColor
struct Upickup_notification_item_bpw_C_GetTextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.Construct
struct Upickup_notification_item_bpw_C_Construct_Params
{
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.Tick
struct Upickup_notification_item_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function pickup_notification_item_bpw.pickup_notification_item_bpw_C.ExecuteUbergraph_pickup_notification_item_bpw
struct Upickup_notification_item_bpw_C_ExecuteUbergraph_pickup_notification_item_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
