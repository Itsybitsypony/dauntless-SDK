#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_progression_notification_item_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function progression_notification_item.progression_notification_item_C.Get_DescriptionTextField_Text_1
struct Uprogression_notification_item_C_Get_DescriptionTextField_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function progression_notification_item.progression_notification_item_C.GetShadowColor
struct Uprogression_notification_item_C_GetShadowColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function progression_notification_item.progression_notification_item_C.GetTransitionColor
struct Uprogression_notification_item_C_GetTransitionColor_Params
{
	struct FLinearColor                                Base_Color;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FLinearColor                                TransitionColor;                                          // (Parm, OutParm, IsPlainOldData)
};

// Function progression_notification_item.progression_notification_item_C.GetBackgroundColor
struct Uprogression_notification_item_C_GetBackgroundColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function progression_notification_item.progression_notification_item_C.UpdateTextOpacity
struct Uprogression_notification_item_C_UpdateTextOpacity_Params
{
	class UTextBlock*                                  Text_Field;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_notification_item.progression_notification_item_C.GetBorderColor
struct Uprogression_notification_item_C_GetBorderColor_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function progression_notification_item.progression_notification_item_C.GetTextColor
struct Uprogression_notification_item_C_GetTextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function progression_notification_item.progression_notification_item_C.OnLoaded_CBF9BE26475BA384DD6F91AB38EBFAFA
struct Uprogression_notification_item_C_OnLoaded_CBF9BE26475BA384DD6F91AB38EBFAFA_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_notification_item.progression_notification_item_C.Construct
struct Uprogression_notification_item_C_Construct_Params
{
};

// Function progression_notification_item.progression_notification_item_C.Tick
struct Uprogression_notification_item_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function progression_notification_item.progression_notification_item_C.LoadIcon
struct Uprogression_notification_item_C_LoadIcon_Params
{
	TAssetPtr<class UTexture2D>                        IconSoftReference;                                        // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function progression_notification_item.progression_notification_item_C.ExecuteUbergraph_progression_notification_item
struct Uprogression_notification_item_C_ExecuteUbergraph_progression_notification_item_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
