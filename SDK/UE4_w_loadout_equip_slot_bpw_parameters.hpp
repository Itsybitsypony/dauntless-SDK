#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_loadout_equip_slot_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Item
struct Uw_loadout_equip_slot_bpw_C_Setup_Item_Params
{
	class UArchonInventoryItem*                        InventoryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Handle No Keyword
struct Uw_loadout_equip_slot_bpw_C_Handle_No_Keyword_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Handle Found Keyword
struct Uw_loadout_equip_slot_bpw_C_Handle_Found_Keyword_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Keyword;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Texture;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetFoundKeywordDetails
struct Uw_loadout_equip_slot_bpw_C_GetFoundKeywordDetails_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               HasIcon;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TAssetPtr<class UTexture2D>                        Icon;                                                     // (Parm, OutParm)
	struct FName                                       Keyword;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetKeyWordsForItem
struct Uw_loadout_equip_slot_bpw_C_GetKeyWordsForItem_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TArray<struct FName>                               Keywords;                                                 // (Parm, OutParm, ZeroConstructor)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_IsWeaponSlot_Visibility_1
struct Uw_loadout_equip_slot_bpw_C_Get_IsWeaponSlot_Visibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnFocusReceived
struct Uw_loadout_equip_slot_bpw_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupWeaponPower
struct Uw_loadout_equip_slot_bpw_C_LookupWeaponPower_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupArmourPower
struct Uw_loadout_equip_slot_bpw_C_LookupArmourPower_Params
{
	class FString                                      inString;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	float                                              Global_Resistance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.LookupLanternPower
struct Uw_loadout_equip_slot_bpw_C_LookupLanternPower_Params
{
	float                                              Global_Resistance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_Equip_Slot_ToolTipWidget_1
struct Uw_loadout_equip_slot_bpw_C_Get_Equip_Slot_ToolTipWidget_1_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_EquipImage_ToolTipText_1
struct Uw_loadout_equip_slot_bpw_C_Get_EquipImage_ToolTipText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Get_SlotTypeName_Text_1
struct Uw_loadout_equip_slot_bpw_C_Get_SlotTypeName_Text_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.GetBrush_Color
struct Uw_loadout_equip_slot_bpw_C_GetBrush_Color_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Item from Slot
struct Uw_loadout_equip_slot_bpw_C_Setup_Item_from_Slot_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Setup Equipped Item from Slot
struct Uw_loadout_equip_slot_bpw_C_Setup_Equipped_Item_from_Slot_Params
{
	class UArchonInventoryItem*                        FoundItem;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_B866DD2E4AA25968117B8CB4553E25DD
struct Uw_loadout_equip_slot_bpw_C_OnLoaded_B866DD2E4AA25968117B8CB4553E25DD_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_82D3ADED497240A97E87AC90D6FF39AD
struct Uw_loadout_equip_slot_bpw_C_OnLoaded_82D3ADED497240A97E87AC90D6FF39AD_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_B53520DB46668B6D716B50883B711D4A
struct Uw_loadout_equip_slot_bpw_C_OnLoaded_B53520DB46668B6D716B50883B711D4A_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_0B5879644ED758A36F0916889C8A1532
struct Uw_loadout_equip_slot_bpw_C_OnLoaded_0B5879644ED758A36F0916889C8A1532_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_4A0E96EA4013F9B88937008639A01418
struct Uw_loadout_equip_slot_bpw_C_OnLoaded_4A0E96EA4013F9B88937008639A01418_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.OnLoaded_CFFBADC44D92762AF22AC2AD5A3EA07D
struct Uw_loadout_equip_slot_bpw_C_OnLoaded_CFFBADC44D92762AF22AC2AD5A3EA07D_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateAspects
struct Uw_loadout_equip_slot_bpw_C_UpdateAspects_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Tick
struct Uw_loadout_equip_slot_bpw_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Construct
struct Uw_loadout_equip_slot_bpw_C_Construct_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateItem_FromID
struct Uw_loadout_equip_slot_bpw_C_UpdateItem_FromID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.UpdateItem
struct Uw_loadout_equip_slot_bpw_C_UpdateItem_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Hover_Hide
struct Uw_loadout_equip_slot_bpw_C_Hover_Hide_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Hover_Show
struct Uw_loadout_equip_slot_bpw_C_Hover_Show_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.BndEvt__Equipment_Slot_Button_K2Node_ComponentBoundEvent_120_OnCheckBoxComponentStateChanged__DelegateSignature
struct Uw_loadout_equip_slot_bpw_C_BndEvt__Equipment_Slot_Button_K2Node_ComponentBoundEvent_120_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Try Load Icon
struct Uw_loadout_equip_slot_bpw_C_Try_Load_Icon_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.Use Default Icon
struct Uw_loadout_equip_slot_bpw_C_Use_Default_Icon_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.ExecuteUbergraph_w_loadout_equip_slot_bpw
struct Uw_loadout_equip_slot_bpw_C_ExecuteUbergraph_w_loadout_equip_slot_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_UnHovered__DelegateSignature
struct Uw_loadout_equip_slot_bpw_C_EquipSlot_UnHovered__DelegateSignature_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_FocusReceived__DelegateSignature
struct Uw_loadout_equip_slot_bpw_C_EquipSlot_FocusReceived__DelegateSignature_Params
{
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_Hovered__DelegateSignature
struct Uw_loadout_equip_slot_bpw_C_EquipSlot_Hovered__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      Instance;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_loadout_equip_slot_bpw.w_loadout_equip_slot_bpw_C.EquipSlot_Clicked__DelegateSignature
struct Uw_loadout_equip_slot_bpw_C_EquipSlot_Clicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
