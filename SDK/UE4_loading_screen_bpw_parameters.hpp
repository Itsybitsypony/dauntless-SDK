#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loading_screen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function loading_screen_bpw.loading_screen_bpw_C.OnKeyDown
struct Uloading_screen_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function loading_screen_bpw.loading_screen_bpw_C.GetDefaultFocusedWidget
struct Uloading_screen_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function loading_screen_bpw.loading_screen_bpw_C.ScreenFadeOut
struct Uloading_screen_bpw_C_ScreenFadeOut_Params
{
	TEnumAsByte<ELoadScreenStyle>*                     LoadScreenStyle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loading_screen_bpw.loading_screen_bpw_C.ScreenFadeIn
struct Uloading_screen_bpw_C_ScreenFadeIn_Params
{
	TEnumAsByte<ELoadScreenStyle>*                     LoadScreenStyle;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loading_screen_bpw.loading_screen_bpw_C.OnFadeOutComplete
struct Uloading_screen_bpw_C_OnFadeOutComplete_Params
{
};

// Function loading_screen_bpw.loading_screen_bpw_C.ExecuteUbergraph_loading_screen_bpw
struct Uloading_screen_bpw_C_ExecuteUbergraph_loading_screen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
