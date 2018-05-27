#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_context_menu_action_icon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Set Action From ItemID
struct Uw_context_menu_action_icon_C_Set_Action_From_ItemID_Params
{
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Get Rarity Background Color
struct Uw_context_menu_action_icon_C_Get_Rarity_Background_Color_Params
{
	EItemRarityLevelType                               Rarity;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Get Label Position
struct Uw_context_menu_action_icon_C_Get_Label_Position_Params
{
	float                                              Angle;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.OnLoaded_A058EA6248D678A919D5DF914AEC729E
struct Uw_context_menu_action_icon_C_OnLoaded_A058EA6248D678A919D5DF914AEC729E_Params
{
	class UObject*                                     Loaded;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.PreConstruct
struct Uw_context_menu_action_icon_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Construct
struct Uw_context_menu_action_icon_C_Construct_Params
{
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Selected
struct Uw_context_menu_action_icon_C_Selected_Params
{
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Unselected
struct Uw_context_menu_action_icon_C_Unselected_Params
{
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Initialize
struct Uw_context_menu_action_icon_C_Initialize_Params
{
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Handle Action
struct Uw_context_menu_action_icon_C_Handle_Action_Params
{
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.Refresh Action
struct Uw_context_menu_action_icon_C_Refresh_Action_Params
{
};

// Function w_context_menu_action_icon.w_context_menu_action_icon_C.ExecuteUbergraph_w_context_menu_action_icon
struct Uw_context_menu_action_icon_C_ExecuteUbergraph_w_context_menu_action_icon_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
