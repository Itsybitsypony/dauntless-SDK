#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BasicCraft_Recipe_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnFocusReceived
struct UBasicCraft_Recipe_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Get_Icon_img_ToolTipWidget_1
struct UBasicCraft_Recipe_C_Get_Icon_img_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Get_Kind_Text_1
struct UBasicCraft_Recipe_C_Get_Kind_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetVisibility_1
struct UBasicCraft_Recipe_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetBackground_1
struct UBasicCraft_Recipe_C_GetBackground_1_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetTextColor
struct UBasicCraft_Recipe_C_GetTextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Refresh State
struct UBasicCraft_Recipe_C_Refresh_State_Params
{
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Update Weapon ID
struct UBasicCraft_Recipe_C_Update_Weapon_ID_Params
{
	class FString                                      Recipe_ID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetHighlightColor
struct UBasicCraft_Recipe_C_GetHighlightColor_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseButtonDown
struct UBasicCraft_Recipe_C_OnMouseButtonDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnLoaded_E395C10C4A16B7B6075B7695E9D8157F
struct UBasicCraft_Recipe_C_OnLoaded_E395C10C4A16B7B6075B7695E9D8157F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseEnter
struct UBasicCraft_Recipe_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseLeave
struct UBasicCraft_Recipe_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Construct
struct UBasicCraft_Recipe_C_Construct_Params
{
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Clear Selection
struct UBasicCraft_Recipe_C_Clear_Selection_Params
{
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Load Icon
struct UBasicCraft_Recipe_C_Load_Icon_Params
{
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.ExecuteUbergraph_BasicCraft_Recipe
struct UBasicCraft_Recipe_C_ExecuteUbergraph_BasicCraft_Recipe_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.On Select - Dispatcher__DelegateSignature
struct UBasicCraft_Recipe_C_On_Select___Dispatcher__DelegateSignature_Params
{
	class UBasicCraft_Recipe_C*                        Recipe_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SelectedRecipeID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
