#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_simple_tintingWindow_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Temp_AddPhxDyetoGridIfPhx
struct Ubpw_simple_tintingWindow_C_Temp_AddPhxDyetoGridIfPhx_Params
{
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetDefaultFocusedWidget
struct Ubpw_simple_tintingWindow_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.RemoveDefaultTints
struct Ubpw_simple_tintingWindow_C_RemoveDefaultTints_Params
{
	TArray<struct FName>                               RowNamesIn;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FName>                               RowNamesFiltered;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Get_Primary_Default_DyeBU_Visibility_1
struct Ubpw_simple_tintingWindow_C_Get_Primary_Default_DyeBU_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Get_Primary_Default_DyeBU_ColorAndOpacity_1
struct Ubpw_simple_tintingWindow_C_Get_Primary_Default_DyeBU_ColorAndOpacity_1_Params
{
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.SetTintValues&Close
struct Ubpw_simple_tintingWindow_C_SetTintValues_Close_Params
{
	bool                                               Save;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.UpdateDyeSwatches
struct Ubpw_simple_tintingWindow_C_UpdateDyeSwatches_Params
{
	bool                                               ShowAllTints;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetDyeInfo
struct Ubpw_simple_tintingWindow_C_GetDyeInfo_Params
{
	struct FName                                       DyeN_Row;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemInstanceId;                                           // (Parm, OutParm, ZeroConstructor)
	int                                                RemainingUses;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               Found;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.OnKeyDown
struct Ubpw_simple_tintingWindow_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Init
struct Ubpw_simple_tintingWindow_C_Init_Params
{
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.GetEquipped_DyeSlot
struct Ubpw_simple_tintingWindow_C_GetEquipped_DyeSlot_Params
{
	int                                                Slot;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      DyeSlot_ItemID;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Manage Selection Changes
struct Ubpw_simple_tintingWindow_C_Manage_Selection_Changes_Params
{
	bool                                               Primary_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.BndEvt__WButton_Commit_K2Node_ComponentBoundEvent_30_Button Clicked__DelegateSignature
struct Ubpw_simple_tintingWindow_C_BndEvt__WButton_Commit_K2Node_ComponentBoundEvent_30_Button_Clicked__DelegateSignature_Params
{
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Construct
struct Ubpw_simple_tintingWindow_C_Construct_Params
{
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Change Primary Color
struct Ubpw_simple_tintingWindow_C_Change_Primary_Color_Params
{
	class Ubpw_colorpicksquare_C*                      Reference;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.ResetPrimary
struct Ubpw_simple_tintingWindow_C_ResetPrimary_Params
{
	class Ubpw_colorpicksquare_C*                      NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.SetGridFocus
struct Ubpw_simple_tintingWindow_C_SetGridFocus_Params
{
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.Color Selection Made
struct Ubpw_simple_tintingWindow_C_Color_Selection_Made_Params
{
	class Ubpw_colorpicksquare_C*                      Color_Picker_Reference;                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.ExecuteUbergraph_bpw_simple_tintingWindow
struct Ubpw_simple_tintingWindow_C_ExecuteUbergraph_bpw_simple_tintingWindow_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.DyePreview__DelegateSignature
struct Ubpw_simple_tintingWindow_C_DyePreview__DelegateSignature_Params
{
	struct FName                                       DyeRowID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.AcceptButton_Pressed__DelegateSignature
struct Ubpw_simple_tintingWindow_C_AcceptButton_Pressed__DelegateSignature_Params
{
	class FString                                      DyeAccepted;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function bpw_simple_tintingWindow.bpw_simple_tintingWindow_C.CloseButton_RemoveTintWindow__DelegateSignature
struct Ubpw_simple_tintingWindow_C_CloseButton_RemoveTintWindow__DelegateSignature_Params
{
	class FString                                      OriginalDyeReset;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
