#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Button_banner_Customize_entry_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.CheckIfEquipped_AgainstID
struct Uw_Button_banner_Customize_entry_C_CheckIfEquipped_AgainstID_Params
{
	class FString                                      A;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.CheckIfEquipped
struct Uw_Button_banner_Customize_entry_C_CheckIfEquipped_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.GetVisibility_1
struct Uw_Button_banner_Customize_entry_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Set Button Label
struct Uw_Button_banner_Customize_entry_C_Set_Button_Label_Params
{
	struct FText                                       Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.OnFocusReceived
struct Uw_Button_banner_Customize_entry_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Construct
struct Uw_Button_banner_Customize_entry_C_Construct_Params
{
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Tick
struct Uw_Button_banner_Customize_entry_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
struct Uw_Button_banner_Customize_entry_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Show Hover
struct Uw_Button_banner_Customize_entry_C_Show_Hover_Params
{
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Hide Hover
struct Uw_Button_banner_Customize_entry_C_Hide_Hover_Params
{
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.OnSynchronizeProperties
struct Uw_Button_banner_Customize_entry_C_OnSynchronizeProperties_Params
{
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.ExecuteUbergraph_w_Button_banner_Customize_entry
struct Uw_Button_banner_Customize_entry_C_ExecuteUbergraph_w_Button_banner_Customize_entry_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Button Clicked__DelegateSignature
struct Uw_Button_banner_Customize_entry_C_Button_Clicked__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
