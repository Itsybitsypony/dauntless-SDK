#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EmoteRadialButton_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Get_EmoteName_Text_1
struct Uw_EmoteRadialButton_C_Get_EmoteName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Set Button Label
struct Uw_EmoteRadialButton_C_Set_Button_Label_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnFocusReceived
struct Uw_EmoteRadialButton_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnLoaded_A058EA6248D678A919D5DF91735114BE
struct Uw_EmoteRadialButton_C_OnLoaded_A058EA6248D678A919D5DF91735114BE_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Tick
struct Uw_EmoteRadialButton_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_EmoteRadialButton_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Show Hover
struct Uw_EmoteRadialButton_C_Show_Hover_Params
{
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Hide Hover
struct Uw_EmoteRadialButton_C_Hide_Hover_Params
{
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnSynchronizeProperties
struct Uw_EmoteRadialButton_C_OnSynchronizeProperties_Params
{
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Refresh
struct Uw_EmoteRadialButton_C_Refresh_Params
{
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Construct
struct Uw_EmoteRadialButton_C_Construct_Params
{
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.ExecuteUbergraph_w_EmoteRadialButton
struct Uw_EmoteRadialButton_C_ExecuteUbergraph_w_EmoteRadialButton_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Button Clicked__DelegateSignature
struct Uw_EmoteRadialButton_C_Button_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
