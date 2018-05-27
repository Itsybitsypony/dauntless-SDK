#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_emotes_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function style_emotes_bpw.style_emotes_bpw_C.FindGridItemWithItemId
struct Ustyle_emotes_bpw_C_FindGridItemWithItemId_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class Uw_catalog_GridItem_C*                       GridItem;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.CanEquipToWheel
struct Ustyle_emotes_bpw_C_CanEquipToWheel_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.IsEmoteEquipped
struct Ustyle_emotes_bpw_C_IsEmoteEquipped_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.Get_CallToAction_Text
struct Ustyle_emotes_bpw_C_Get_CallToAction_Text_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function style_emotes_bpw.style_emotes_bpw_C.FilterEmotes
struct Ustyle_emotes_bpw_C_FilterEmotes_Params
{
	EEmoteType                                         EmoteType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.GetVisibility_gamepad
struct Ustyle_emotes_bpw_C_GetVisibility_gamepad_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.OnKeyDown
struct Ustyle_emotes_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function style_emotes_bpw.style_emotes_bpw_C.FilterEmoteList_toType
struct Ustyle_emotes_bpw_C_FilterEmoteList_toType_Params
{
	EEmoteType                                         EmoteType;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FArchonCatalogItem>                  Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function style_emotes_bpw.style_emotes_bpw_C.UpdateEmoteGrid_UI
struct Ustyle_emotes_bpw_C_UpdateEmoteGrid_UI_Params
{
	EEmoteType                                         Emote_Type;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.Gamepad Back
struct Ustyle_emotes_bpw_C_Gamepad_Back_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.Map Active Emote to Wheel
struct Ustyle_emotes_bpw_C_Map_Active_Emote_to_Wheel_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.RefreshEquipped
struct Ustyle_emotes_bpw_C_RefreshEquipped_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.Input Swap
struct Ustyle_emotes_bpw_C_Input_Swap_Params
{
	bool                                               UsingGamepad;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.BndEvt__w_emotewheel_bpw_K2Node_ComponentBoundEvent_1199_CloseWheel__DelegateSignature
struct Ustyle_emotes_bpw_C_BndEvt__w_emotewheel_bpw_K2Node_ComponentBoundEvent_1199_CloseWheel__DelegateSignature_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.Refresh
struct Ustyle_emotes_bpw_C_Refresh_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.OnIntroEmoteAssigned
struct Ustyle_emotes_bpw_C_OnIntroEmoteAssigned_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.Bind Events to Emote Item
struct Ustyle_emotes_bpw_C_Bind_Events_to_Emote_Item_Params
{
	class Uw_catalog_GridItem_C*                       Grid_Item;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.Equip Hunt Arrival
struct Ustyle_emotes_bpw_C_Equip_Hunt_Arrival_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_emotes_bpw.style_emotes_bpw_C.Manual Emotes Updated
struct Ustyle_emotes_bpw_C_Manual_Emotes_Updated_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.OnManualEmotesAssigned
struct Ustyle_emotes_bpw_C_OnManualEmotesAssigned_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature
struct Ustyle_emotes_bpw_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_39_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.Bind to Manual Emotes Updated
struct Ustyle_emotes_bpw_C_Bind_to_Manual_Emotes_Updated_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.EmoteSelected_Equip
struct Ustyle_emotes_bpw_C_EmoteSelected_Equip_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               OwnsItem;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.Refresh Button Legend
struct Ustyle_emotes_bpw_C_Refresh_Button_Legend_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.Set New Active ItemID
struct Ustyle_emotes_bpw_C_Set_New_Active_ItemID_Params
{
	class FString                                      ActiveItemID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_emotes_bpw.style_emotes_bpw_C.EmoteSelected_Preview
struct Ustyle_emotes_bpw_C_EmoteSelected_Preview_Params
{
	class FString                                      ItemInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                GridIndex;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Owns;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.Construct
struct Ustyle_emotes_bpw_C_Construct_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.EmoteFocused
struct Ustyle_emotes_bpw_C_EmoteFocused_Params
{
	class FString                                      ItemInstanceId;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.EmoteUnfocused
struct Ustyle_emotes_bpw_C_EmoteUnfocused_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.ExecuteUbergraph_style_emotes_bpw
struct Ustyle_emotes_bpw_C_ExecuteUbergraph_style_emotes_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.PlayArrivalEmote__DelegateSignature
struct Ustyle_emotes_bpw_C_PlayArrivalEmote__DelegateSignature_Params
{
	class FString                                      ArrivalEmote;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_emotes_bpw.style_emotes_bpw_C.EmoteMenu_ScreenModeChange__DelegateSignature
struct Ustyle_emotes_bpw_C_EmoteMenu_ScreenModeChange__DelegateSignature_Params
{
	TEnumAsByte<EScreenMode_VanityMenu>                Screen_Mode;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_emotes_bpw.style_emotes_bpw_C.ResetEmote__DelegateSignature
struct Ustyle_emotes_bpw_C_ResetEmote__DelegateSignature_Params
{
};

// Function style_emotes_bpw.style_emotes_bpw_C.PlayEmote__DelegateSignature
struct Ustyle_emotes_bpw_C_PlayEmote__DelegateSignature_Params
{
	class FString                                      emoteID;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
