#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_Store_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_Store.bpw_Store_C.Get_img_noGamepad_Visibility_1
struct Ubpw_Store_C_Get_img_noGamepad_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_Store.bpw_Store_C.GetDefaultFocusedWidget
struct Ubpw_Store_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_Store.bpw_Store_C.OnKeyDown
struct Ubpw_Store_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_Store.bpw_Store_C.OnKeyUp
struct Ubpw_Store_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_Store.bpw_Store_C.Close Store
struct Ubpw_Store_C_Close_Store_Params
{
};

// Function bpw_Store.bpw_Store_C.BndEvt__UnavailablePopup_K2Node_ComponentBoundEvent_6_Ready To Close__DelegateSignature
struct Ubpw_Store_C_BndEvt__UnavailablePopup_K2Node_ComponentBoundEvent_6_Ready_To_Close__DelegateSignature_Params
{
	TEnumAsByte<Eui_character_screen_mode>             Previous_Screen;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_Store.bpw_Store_C.Store Unavailable
struct Ubpw_Store_C_Store_Unavailable_Params
{
};

// Function bpw_Store.bpw_Store_C.Tick
struct Ubpw_Store_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_Store.bpw_Store_C.DelayedCloseStore
struct Ubpw_Store_C_DelayedCloseStore_Params
{
};

// Function bpw_Store.bpw_Store_C.EntitlementsRefreshed
struct Ubpw_Store_C_EntitlementsRefreshed_Params
{
};

// Function bpw_Store.bpw_Store_C.BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_20_On Back__DelegateSignature
struct Ubpw_Store_C_BndEvt__w_FullscreenContainer_K2Node_ComponentBoundEvent_20_On_Back__DelegateSignature_Params
{
};

// Function bpw_Store.bpw_Store_C.InputSwap
struct Ubpw_Store_C_InputSwap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_Store.bpw_Store_C.Construct
struct Ubpw_Store_C_Construct_Params
{
};

// Function bpw_Store.bpw_Store_C.ExecuteUbergraph_bpw_Store
struct Ubpw_Store_C_ExecuteUbergraph_bpw_Store_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_Store.bpw_Store_C.RemoveStore__DelegateSignature
struct Ubpw_Store_C_RemoveStore__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
