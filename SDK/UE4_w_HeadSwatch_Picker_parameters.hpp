#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_HeadSwatch_Picker_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Get Head Targets
struct Uw_HeadSwatch_Picker_C_Get_Head_Targets_Params
{
	TArray<struct FName>                               OutRowNames;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.OnFocusReceived
struct Uw_HeadSwatch_Picker_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Construct
struct Uw_HeadSwatch_Picker_C_Construct_Params
{
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Tick
struct Uw_HeadSwatch_Picker_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Show Picker Menu
struct Uw_HeadSwatch_Picker_C_Show_Picker_Menu_Params
{
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.BndEvt__PickerButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
struct Uw_HeadSwatch_Picker_C_BndEvt__PickerButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.New Target Head
struct Uw_HeadSwatch_Picker_C_New_Target_Head_Params
{
	struct FName                                       HeadMorphSelected;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SwatchIcon;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Swatch_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Close Picker Menu
struct Uw_HeadSwatch_Picker_C_Close_Picker_Menu_Params
{
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.OnSynchronizeProperties
struct Uw_HeadSwatch_Picker_C_OnSynchronizeProperties_Params
{
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Picker Gained Focus
struct Uw_HeadSwatch_Picker_C_Picker_Gained_Focus_Params
{
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Picker Lost Focus
struct Uw_HeadSwatch_Picker_C_Picker_Lost_Focus_Params
{
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.ExecuteUbergraph_w_HeadSwatch_Picker
struct Uw_HeadSwatch_Picker_C_ExecuteUbergraph_w_HeadSwatch_Picker_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.PickerMenuOpened__DelegateSignature
struct Uw_HeadSwatch_Picker_C_PickerMenuOpened__DelegateSignature_Params
{
};

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Selected Head Target__DelegateSignature
struct Uw_HeadSwatch_Picker_C_Selected_Head_Target__DelegateSignature_Params
{
	struct FName                                       Target_Name;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
