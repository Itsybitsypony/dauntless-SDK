#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_transmog_screen_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Transmog Button Label
struct Utransmog_screen_bpw_C_Get_Transmog_Button_Label_Params
{
	struct FText                                       Label;                                                    // (Parm, OutParm)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Player Token Count
struct Utransmog_screen_bpw_C_Refresh_Player_Token_Count_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.OnKeyUp
struct Utransmog_screen_bpw_C_OnKeyUp_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.OnPreviewKeyDown
struct Utransmog_screen_bpw_C_OnPreviewKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Is Apply Key
struct Utransmog_screen_bpw_C_Is_Apply_Key_Params
{
	struct FKey                                        Key;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Transmog Preview ItemId
struct Utransmog_screen_bpw_C_Get_Transmog_Preview_ItemId_Params
{
	class FString                                      ItemID;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Has Selected New Target
struct Utransmog_screen_bpw_C_Has_Selected_New_Target_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Can Transmog Target
struct Utransmog_screen_bpw_C_Can_Transmog_Target_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Target Token Cost
struct Utransmog_screen_bpw_C_Get_Target_Token_Cost_Params
{
	int                                                Transmog_Cost;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Player Token Count
struct Utransmog_screen_bpw_C_Get_Player_Token_Count_Params
{
	int                                                NumTokens;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Button Legend
struct Utransmog_screen_bpw_C_Refresh_Button_Legend_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Setup Revert Transmog
struct Utransmog_screen_bpw_C_Setup_Revert_Transmog_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.OnKeyDown
struct Utransmog_screen_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Item Details
struct Utransmog_screen_bpw_C_Refresh_Item_Details_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Is Armour Transmog Target
struct Utransmog_screen_bpw_C_Is_Armour_Transmog_Target_Params
{
	class UObject*                                     Target;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Armour*                 TransmogItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Get Available Armour Transmog Targets
struct Utransmog_screen_bpw_C_Get_Available_Armour_Transmog_Targets_Params
{
	TArray<class FString>                              Targets;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.GetDefaultFocusedWidget
struct Utransmog_screen_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh Targets Panel
struct Utransmog_screen_bpw_C_Refresh_Targets_Panel_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Target Selected
struct Utransmog_screen_bpw_C_Transmog_Target_Selected_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Target Focused
struct Utransmog_screen_bpw_C_Transmog_Target_Focused_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Events
struct Utransmog_screen_bpw_C_Bind_Transmog_Events_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Target Selected
struct Utransmog_screen_bpw_C_Bind_Transmog_Target_Selected_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Target Focused
struct Utransmog_screen_bpw_C_Bind_Transmog_Target_Focused_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Select Current Transmog Target
struct Utransmog_screen_bpw_C_Select_Current_Transmog_Target_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Close Transmog
struct Utransmog_screen_bpw_C_Close_Transmog_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Revert Changes
struct Utransmog_screen_bpw_C_Revert_Changes_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.On Confirm Transmog
struct Utransmog_screen_bpw_C_On_Confirm_Transmog_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Transmog Clear Selected
struct Utransmog_screen_bpw_C_Bind_Transmog_Clear_Selected_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Transmog Clear Selected
struct Utransmog_screen_bpw_C_Transmog_Clear_Selected_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.On Selected Transmog Updated
struct Utransmog_screen_bpw_C_On_Selected_Transmog_Updated_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind to Apply Complete
struct Utransmog_screen_bpw_C_Bind_to_Apply_Complete_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind Apply Button Mouse Events
struct Utransmog_screen_bpw_C_Bind_Apply_Button_Mouse_Events_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.On Apply Start
struct Utransmog_screen_bpw_C_On_Apply_Start_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.On Apply Cancel
struct Utransmog_screen_bpw_C_On_Apply_Cancel_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.On Instance Items Updated
struct Utransmog_screen_bpw_C_On_Instance_Items_Updated_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Refresh All
struct Utransmog_screen_bpw_C_Refresh_All_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Construct
struct Utransmog_screen_bpw_C_Construct_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.PreConstruct
struct Utransmog_screen_bpw_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.Bind to Inventory Change
struct Utransmog_screen_bpw_C_Bind_to_Inventory_Change_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.OnInventoryChanged
struct Utransmog_screen_bpw_C_OnInventoryChanged_Params
{
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.ExecuteUbergraph_transmog_screen_bpw
struct Utransmog_screen_bpw_C_ExecuteUbergraph_transmog_screen_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function transmog_screen_bpw.transmog_screen_bpw_C.UpdatePaperdoll_Transmog__DelegateSignature
struct Utransmog_screen_bpw_C_UpdatePaperdoll_Transmog__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      TransmogId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
