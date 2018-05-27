#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_new_thingsmith_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.GetDefaultFocusedWidget
struct Unew_thingsmith_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnKeyDown
struct Unew_thingsmith_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.InitFromParams
struct Unew_thingsmith_bpw_C_InitFromParams_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.DisplayWebStore
struct Unew_thingsmith_bpw_C_DisplayWebStore_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.DoCraftVO
struct Unew_thingsmith_bpw_C_DoCraftVO_Params
{
	class UArchonInventoryItem*                        InventoryItem;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.LanternDataTableLookup_3dPreview_WIP
struct Unew_thingsmith_bpw_C_LanternDataTableLookup_3dPreview_WIP_Params
{
	class FString                                      Array;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.GetBodyTypeSetting
struct Unew_thingsmith_bpw_C_GetBodyTypeSetting_Params
{
	EArchonBodyType                                    BodyType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.ChangeBrushTint
struct Unew_thingsmith_bpw_C_ChangeBrushTint_Params
{
	struct FSlateColor                                 NewTint;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UImage*                                      WidgetImage;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Build Crafting Payload
struct Unew_thingsmith_bpw_C_Build_Crafting_Payload_Params
{
	struct FCraftingPayload                            Payload;                                                  // (Parm, OutParm)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Evaluate Selected Recipe for Craftability
struct Unew_thingsmith_bpw_C_Evaluate_Selected_Recipe_for_Craftability_Params
{
	bool                                               CanCraft_;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Update Button State
struct Unew_thingsmith_bpw_C_Update_Button_State_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnLoaded_A058EA6248D678A919D5DF9131AAF10F
struct Unew_thingsmith_bpw_C_OnLoaded_A058EA6248D678A919D5DF9131AAF10F_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Construct
struct Unew_thingsmith_bpw_C_Construct_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.BndEvt__CraftButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
struct Unew_thingsmith_bpw_C_BndEvt__CraftButton_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.New Selection Made
struct Unew_thingsmith_bpw_C_New_Selection_Made_Params
{
	class UBasicCraft_Recipe_C*                        BasicCraft_Recipe;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SelectedRecipeID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Attempt Craft
struct Unew_thingsmith_bpw_C_Attempt_Craft_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Destruct
struct Unew_thingsmith_bpw_C_Destruct_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.InitializeRecipes
struct Unew_thingsmith_bpw_C_InitializeRecipes_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.RecipeItemSelected
struct Unew_thingsmith_bpw_C_RecipeItemSelected_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnDataChanged_Event_1
struct Unew_thingsmith_bpw_C_OnDataChanged_Event_1_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnGamepadConfirmButtonPressed_Event_1
struct Unew_thingsmith_bpw_C_OnGamepadConfirmButtonPressed_Event_1_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.NPCInteractInitialize
struct Unew_thingsmith_bpw_C_NPCInteractInitialize_Params
{
	class Avendor_interactive_bp_C*                    Vendor;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fnpc_ui_struct                              NPCMenuTuning;                                            // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.CloseMenu
struct Unew_thingsmith_bpw_C_CloseMenu_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.Setup Icon and Count
struct Unew_thingsmith_bpw_C_Setup_Icon_and_Count_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.On Crafted Item Refresh
struct Unew_thingsmith_bpw_C_On_Crafted_Item_Refresh_Params
{
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.ExecuteUbergraph_new_thingsmith_bpw
struct Unew_thingsmith_bpw_C_ExecuteUbergraph_new_thingsmith_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.OnCraftPressedDispatcher__DelegateSignature
struct Unew_thingsmith_bpw_C_OnCraftPressedDispatcher__DelegateSignature_Params
{
	bool                                               Successful_Purchase;                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.NewRecipeSelection__DelegateSignature
struct Unew_thingsmith_bpw_C_NewRecipeSelection__DelegateSignature_Params
{
	class FString                                      RecipeID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function new_thingsmith_bpw.new_thingsmith_bpw_C.On MenuClosed__DelegateSignature
struct Unew_thingsmith_bpw_C_On_MenuClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
