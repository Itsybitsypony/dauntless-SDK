#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_tabs_scaleable_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.GetTabIcon
struct Uw_tabs_scaleable_bpw_C_GetTabIcon_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UObject>                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnKeyDown
struct Uw_tabs_scaleable_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.VisibilityUsingGamepad
struct Uw_tabs_scaleable_bpw_C_VisibilityUsingGamepad_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Has Active Category
struct Uw_tabs_scaleable_bpw_C_Has_Active_Category_Params
{
	bool                                               Return_Value;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnLoaded_A058EA6248D678A919D5DF9185C63225
struct Uw_tabs_scaleable_bpw_C_OnLoaded_A058EA6248D678A919D5DF9185C63225_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnLoaded_A058EA6248D678A919D5DF91A184542C
struct Uw_tabs_scaleable_bpw_C_OnLoaded_A058EA6248D678A919D5DF91A184542C_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Construct
struct Uw_tabs_scaleable_bpw_C_Construct_Params
{
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Handle New Category
struct Uw_tabs_scaleable_bpw_C_Handle_New_Category_Params
{
	class Uw_tab_imagebutton_bpw_C*                    Category_Button;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Focus Default Category
struct Uw_tabs_scaleable_bpw_C_Focus_Default_Category_Params
{
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Refresh
struct Uw_tabs_scaleable_bpw_C_Refresh_Params
{
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.CategoryClicked
struct Uw_tabs_scaleable_bpw_C_CategoryClicked_Params
{
	int                                                NewModeIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.NextCategory
struct Uw_tabs_scaleable_bpw_C_NextCategory_Params
{
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.PreviousCategory
struct Uw_tabs_scaleable_bpw_C_PreviousCategory_Params
{
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Input Swap
struct Uw_tabs_scaleable_bpw_C_Input_Swap_Params
{
	bool                                               Using_Gamepad;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.PreConstruct
struct Uw_tabs_scaleable_bpw_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.ExecuteUbergraph_w_tabs_scaleable_bpw
struct Uw_tabs_scaleable_bpw_C_ExecuteUbergraph_w_tabs_scaleable_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Invalid__DelegateSignature
struct Uw_tabs_scaleable_bpw_C_Invalid__DelegateSignature_Params
{
};

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.TabSelected__DelegateSignature
struct Uw_tabs_scaleable_bpw_C_TabSelected__DelegateSignature_Params
{
	int                                                NewMode;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
