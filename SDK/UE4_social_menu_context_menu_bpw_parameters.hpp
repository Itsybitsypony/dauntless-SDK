#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_social_menu_context_menu_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.OnKeyDown
struct Usocial_menu_context_menu_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.OnFocusReceived
struct Usocial_menu_context_menu_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.AddMenuItem
struct Usocial_menu_context_menu_bpw_C_AddMenuItem_Params
{
	struct FText                                       Label;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	class Usocial_menu_context_item_bpw_C*             MenuItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.Construct
struct Usocial_menu_context_menu_bpw_C_Construct_Params
{
};

// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.Close
struct Usocial_menu_context_menu_bpw_C_Close_Params
{
};

// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.ExecuteUbergraph_social_menu_context_menu_bpw
struct Usocial_menu_context_menu_bpw_C_ExecuteUbergraph_social_menu_context_menu_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function social_menu_context_menu_bpw.social_menu_context_menu_bpw_C.RequestClose__DelegateSignature
struct Usocial_menu_context_menu_bpw_C_RequestClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
