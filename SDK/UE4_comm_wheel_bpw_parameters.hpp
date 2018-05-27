#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_comm_wheel_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function comm_wheel_bpw.comm_wheel_bpw_C.FindFlareQuickItem
struct Ucomm_wheel_bpw_C_FindFlareQuickItem_Params
{
	class UArchonInventoryItem_QuickItem*              Quick_Item;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Slot_Index;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.OnMouseButtonUp
struct Ucomm_wheel_bpw_C_OnMouseButtonUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent                               MouseEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Get Action Widget Angle
struct Ucomm_wheel_bpw_C_Get_Action_Widget_Angle_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Find Selected Action Index
struct Ucomm_wheel_bpw_C_Find_Selected_Action_Index_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Get Emote ItemId
struct Ucomm_wheel_bpw_C_Get_Emote_ItemId_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Get Banner ItemId
struct Ucomm_wheel_bpw_C_Get_Banner_ItemId_Params
{
	class FString                                      AnimationItemID;                                          // (Parm, OutParm, ZeroConstructor)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Get Flare Properties
struct Ucomm_wheel_bpw_C_Get_Flare_Properties_Params
{
	class UArchonInventoryItem_QuickItem*              QuickItem;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Display_Name;                                             // (Parm, OutParm)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
	EItemRarityLevelType                               Rarity_Level;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.OnKeyUp
struct Ucomm_wheel_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.OnAnalogValueChanged
struct Ucomm_wheel_bpw_C_OnAnalogValueChanged_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FAnalogInputEvent*                          InAnalogInputEvent;                                       // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Construct
struct Ucomm_wheel_bpw_C_Construct_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Tick
struct Ucomm_wheel_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Confirm Action
struct Ucomm_wheel_bpw_C_Confirm_Action_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.OnFocusLost
struct Ucomm_wheel_bpw_C_OnFocusLost_Params
{
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Selection
struct Ucomm_wheel_bpw_C_Update_Selection_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Visual Selection
struct Ucomm_wheel_bpw_C_Update_Visual_Selection_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Show Selector
struct Ucomm_wheel_bpw_C_Show_Selector_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Hide Selector
struct Ucomm_wheel_bpw_C_Hide_Selector_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Angle from Vector
struct Ucomm_wheel_bpw_C_Update_Angle_from_Vector_Params
{
	struct FVector                                     Vector;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.On Flare Selected
struct Ucomm_wheel_bpw_C_On_Flare_Selected_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.On Banner Selected
struct Ucomm_wheel_bpw_C_On_Banner_Selected_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 1
struct Ucomm_wheel_bpw_C_On_Emote_1_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 2
struct Ucomm_wheel_bpw_C_On_Emote_2_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 3
struct Ucomm_wheel_bpw_C_On_Emote_3_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.On Emote 4
struct Ucomm_wheel_bpw_C_On_Emote_4_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Close Wheel
struct Ucomm_wheel_bpw_C_Close_Wheel_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Selector Strength
struct Ucomm_wheel_bpw_C_Update_Selector_Strength_Params
{
	float                                              Strength;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Input
struct Ucomm_wheel_bpw_C_Update_Input_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.Update Cooldowns
struct Ucomm_wheel_bpw_C_Update_Cooldowns_Params
{
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.ExecuteUbergraph_comm_wheel_bpw
struct Ucomm_wheel_bpw_C_ExecuteUbergraph_comm_wheel_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function comm_wheel_bpw.comm_wheel_bpw_C.OnWheelClose__DelegateSignature
struct Ucomm_wheel_bpw_C_OnWheelClose__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
