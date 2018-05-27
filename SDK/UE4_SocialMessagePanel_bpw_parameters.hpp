#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_SocialMessagePanel_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Refresh
struct USocialMessagePanel_bpw_C_Refresh_Params
{
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Get_NextButton_Visibility_1
struct USocialMessagePanel_bpw_C_Get_NextButton_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Construct
struct USocialMessagePanel_bpw_C_Construct_Params
{
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Tick
struct USocialMessagePanel_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.SetContent
struct USocialMessagePanel_bpw_C_SetContent_Params
{
	struct FText                                       Title;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Body;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature
struct USocialMessagePanel_bpw_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.SetContentByIndex
struct USocialMessagePanel_bpw_C_SetContentByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.AddArchonNewItems
struct USocialMessagePanel_bpw_C_AddArchonNewItems_Params
{
	struct FTitleNewsResult                            NewsItems;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.OnSynchronizeProperties
struct USocialMessagePanel_bpw_C_OnSynchronizeProperties_Params
{
};

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.ExecuteUbergraph_SocialMessagePanel_bpw
struct USocialMessagePanel_bpw_C_ExecuteUbergraph_SocialMessagePanel_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
