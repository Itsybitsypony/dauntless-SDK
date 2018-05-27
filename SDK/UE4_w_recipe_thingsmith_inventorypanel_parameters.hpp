#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_recipe_thingsmith_inventorypanel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnKeyDown
struct Uw_recipe_thingsmith_inventorypanel_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.GetChild
struct Uw_recipe_thingsmith_inventorypanel_C_GetChild_Params
{
	int*                                               ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidget*                                     ChildWidget;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnDataViewChanged
struct Uw_recipe_thingsmith_inventorypanel_C_OnDataViewChanged_Params
{
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.AddItem
struct Uw_recipe_thingsmith_inventorypanel_C_AddItem_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.FocusChildIndex
struct Uw_recipe_thingsmith_inventorypanel_C_FocusChildIndex_Params
{
	int*                                               ChildIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.On Select - Dispatcher_Event_1
struct Uw_recipe_thingsmith_inventorypanel_C_On_Select___Dispatcher_Event_1_Params
{
	class UBasicCraft_Recipe_C*                        Recipe_Widget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      SelectedRecipeID;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.UpdateRecipeListFromCatalogs
struct Uw_recipe_thingsmith_inventorypanel_C_UpdateRecipeListFromCatalogs_Params
{
	TArray<class UDataTable*>                          ItemCatalogs;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.Construct
struct Uw_recipe_thingsmith_inventorypanel_C_Construct_Params
{
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnClientInventoryChanged
struct Uw_recipe_thingsmith_inventorypanel_C_OnClientInventoryChanged_Params
{
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.RefreshItemStates
struct Uw_recipe_thingsmith_inventorypanel_C_RefreshItemStates_Params
{
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.ExecuteUbergraph_w_recipe_thingsmith_inventorypanel
struct Uw_recipe_thingsmith_inventorypanel_C_ExecuteUbergraph_w_recipe_thingsmith_inventorypanel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnGamepadConfirmButtonPressed__DelegateSignature
struct Uw_recipe_thingsmith_inventorypanel_C_OnGamepadConfirmButtonPressed__DelegateSignature_Params
{
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnTooltipWarningChanged__DelegateSignature
struct Uw_recipe_thingsmith_inventorypanel_C_OnTooltipWarningChanged__DelegateSignature_Params
{
	class FString                                      TooltipString;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_recipe_thingsmith_inventorypanel.w_recipe_thingsmith_inventorypanel_C.OnSalvageButtonClicked__DelegateSignature
struct Uw_recipe_thingsmith_inventorypanel_C_OnSalvageButtonClicked__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                StackCount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
