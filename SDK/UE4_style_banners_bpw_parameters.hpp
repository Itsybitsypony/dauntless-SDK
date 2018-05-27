#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_banners_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function style_banners_bpw.style_banners_bpw_C.GetText_1
struct Ustyle_banners_bpw_C_GetText_1_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function style_banners_bpw.style_banners_bpw_C.GetText_DebugStage
struct Ustyle_banners_bpw_C_GetText_DebugStage_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function style_banners_bpw.style_banners_bpw_C.GetVisibility_2
struct Ustyle_banners_bpw_C_GetVisibility_2_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.GetVisibility_1
struct Ustyle_banners_bpw_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.Update New Animation
struct Ustyle_banners_bpw_C_Update_New_Animation_Params
{
	class FString                                      Anim;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.OnKeyDown
struct Ustyle_banners_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function style_banners_bpw.style_banners_bpw_C.CheckIfEquipped
struct Ustyle_banners_bpw_C_CheckIfEquipped_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UArchonInventoryItem_Banner*                 BannerInventoryItem;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEquipped;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.RefreshMenuButtons_FromLocalID
struct Ustyle_banners_bpw_C_RefreshMenuButtons_FromLocalID_Params
{
	TEnumAsByte<EBannerCustomizationCategories>        Category;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.Get Owned Dyes
struct Ustyle_banners_bpw_C_Get_Owned_Dyes_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.AssignColourFromDyeWindow
struct Ustyle_banners_bpw_C_AssignColourFromDyeWindow_Params
{
	class FString                                      DyeID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                DyeSlot;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.GetDisplayName
struct Ustyle_banners_bpw_C_GetDisplayName_Params
{
	class UArchonCatalog*                              Catalog_;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FText                                       Display_Name;                                             // (Parm, OutParm)
};

// Function style_banners_bpw.style_banners_bpw_C.SetupMenuButtons
struct Ustyle_banners_bpw_C_SetupMenuButtons_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.UpdateBanner
struct Ustyle_banners_bpw_C_UpdateBanner_Params
{
	class FString                                      UpdatedItem;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.Create Tinting Window
struct Ustyle_banners_bpw_C_Create_Tinting_Window_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.Update New Fabric Colour
struct Ustyle_banners_bpw_C_Update_New_Fabric_Colour_Params
{
	class FString                                      FabricColour;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.Update New Border Colour
struct Ustyle_banners_bpw_C_Update_New_Border_Colour_Params
{
	class FString                                      BorderColour;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.Update New Sigil Colour
struct Ustyle_banners_bpw_C_Update_New_Sigil_Colour_Params
{
	class FString                                      SigilColour;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.Update New Standard
struct Ustyle_banners_bpw_C_Update_New_Standard_Params
{
	class FString                                      StandardItemID;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.Update New Sigil
struct Ustyle_banners_bpw_C_Update_New_Sigil_Params
{
	class FString                                      SigilItemID;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.Update New Border
struct Ustyle_banners_bpw_C_Update_New_Border_Params
{
	class FString                                      BorderItemID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.UpdateBanner_Dyes
struct Ustyle_banners_bpw_C_UpdateBanner_Dyes_Params
{
	class FString                                      DyeInfoRowName;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                DyeSlotSwitch;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.ShowSubList
struct Ustyle_banners_bpw_C_ShowSubList_Params
{
	EItemGroupType                                     Kind;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_BuCat_Standard_K2Node_ComponentBoundEvent_102_Button Clicked__DelegateSignature
struct Ustyle_banners_bpw_C_BndEvt__w_BuCat_Standard_K2Node_ComponentBoundEvent_102_Button_Clicked__DelegateSignature_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_ButCat_Sigil_K2Node_ComponentBoundEvent_111_Button Clicked__DelegateSignature
struct Ustyle_banners_bpw_C_BndEvt__w_ButCat_Sigil_K2Node_ComponentBoundEvent_111_Button_Clicked__DelegateSignature_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.CustomizationSelected_UpdateBanner
struct Ustyle_banners_bpw_C_CustomizationSelected_UpdateBanner_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_banners_bpw.style_banners_bpw_C.Customization Selected_UpdateBannerColours
struct Ustyle_banners_bpw_C_Customization_Selected_UpdateBannerColours_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_banners_bpw.style_banners_bpw_C.UpdateDyeInfo
struct Ustyle_banners_bpw_C_UpdateDyeInfo_Params
{
	struct FName                                       RowID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.ReturnToCategories
struct Ustyle_banners_bpw_C_ReturnToCategories_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_Button_bannerCategory_C_128_K2Node_ComponentBoundEvent_46_Button Clicked__DelegateSignature
struct Ustyle_banners_bpw_C_BndEvt__w_Button_bannerCategory_C_128_K2Node_ComponentBoundEvent_46_Button_Clicked__DelegateSignature_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.RefreshButtons_FromLoadout
struct Ustyle_banners_bpw_C_RefreshButtons_FromLoadout_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.BndEvt__w_Button_bannerCategory_C_0_K2Node_ComponentBoundEvent_64_Button Clicked__DelegateSignature
struct Ustyle_banners_bpw_C_BndEvt__w_Button_bannerCategory_C_0_K2Node_ComponentBoundEvent_64_Button_Clicked__DelegateSignature_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.Construct
struct Ustyle_banners_bpw_C_Construct_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.Disable Input While Anim Playing
struct Ustyle_banners_bpw_C_Disable_Input_While_Anim_Playing_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.Enable Input
struct Ustyle_banners_bpw_C_Enable_Input_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.BndEvt__FocusBlocker_K2Node_ComponentBoundEvent_496_FakeFocusReceived__DelegateSignature
struct Ustyle_banners_bpw_C_BndEvt__FocusBlocker_K2Node_ComponentBoundEvent_496_FakeFocusReceived__DelegateSignature_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.Refresh
struct Ustyle_banners_bpw_C_Refresh_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.ColourButton1
struct Ustyle_banners_bpw_C_ColourButton1_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.ColourButton2
struct Ustyle_banners_bpw_C_ColourButton2_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.RefreshFabricList
struct Ustyle_banners_bpw_C_RefreshFabricList_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.RefreshSigilList
struct Ustyle_banners_bpw_C_RefreshSigilList_Params
{
};

// Function style_banners_bpw.style_banners_bpw_C.ExecuteUbergraph_style_banners_bpw
struct Ustyle_banners_bpw_C_ExecuteUbergraph_style_banners_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.SetPaperdoll_BannerEmote__DelegateSignature
struct Ustyle_banners_bpw_C_SetPaperdoll_BannerEmote__DelegateSignature_Params
{
	class FString                                      Emote;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_banners_bpw.style_banners_bpw_C.ScreenMode_ChangeScreenMode__DelegateSignature
struct Ustyle_banners_bpw_C_ScreenMode_ChangeScreenMode__DelegateSignature_Params
{
	TEnumAsByte<EScreenMode_VanityMenu>                ScreenMode;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_ByPart_Item__DelegateSignature
struct Ustyle_banners_bpw_C_BannerUpdateEvent_ByPart_Item__DelegateSignature_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_ByPart_Dye__DelegateSignature
struct Ustyle_banners_bpw_C_BannerUpdateEvent_ByPart_Dye__DelegateSignature_Params
{
	struct FName                                       RowName;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ActiveDyeSlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_banners_bpw.style_banners_bpw_C.BannerUpdateEvent_UpdateAll__DelegateSignature
struct Ustyle_banners_bpw_C_BannerUpdateEvent_UpdateAll__DelegateSignature_Params
{
	struct FBannerCustomizationItemIDs                 BannerIDs;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
