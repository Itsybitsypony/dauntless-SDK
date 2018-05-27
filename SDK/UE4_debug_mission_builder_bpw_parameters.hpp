#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debug_mission_builder_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedAtmosphere
struct Udebug_mission_builder_bpw_C_GetSelectedAtmosphere_Params
{
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedMap
struct Udebug_mission_builder_bpw_C_GetSelectedMap_Params
{
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.GetSelectedBehemoth
struct Udebug_mission_builder_bpw_C_GetSelectedBehemoth_Params
{
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ReadyLeader
struct Udebug_mission_builder_bpw_C_ReadyLeader_Params
{
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ComboBoxItemFormatting
struct Udebug_mission_builder_bpw_C_ComboBoxItemFormatting_Params
{
	class FString                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnKeyDown
struct Udebug_mission_builder_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnFailure_C23DECAD4CC103341C4427B3C3F4CFB9
struct Udebug_mission_builder_bpw_C_OnFailure_C23DECAD4CC103341C4427B3C3F4CFB9_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.OnSuccess_C23DECAD4CC103341C4427B3C3F4CFB9
struct Udebug_mission_builder_bpw_C_OnSuccess_C23DECAD4CC103341C4427B3C3F4CFB9_Params
{
	struct FArchonLobbyId                              LobbyId;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                      Error;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ReturnFocusedButton
struct Udebug_mission_builder_bpw_C_ReturnFocusedButton_Params
{
	class Uw_MenuButton_C*                             FocusedButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.Construct
struct Udebug_mission_builder_bpw_C_Construct_Params
{
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu Button Clicked__DelegateSignature
struct Udebug_mission_builder_bpw_C_BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu_Button_Clicked__DelegateSignature_Params
{
	int                                                ClickedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_mission_builder_bpw.debug_mission_builder_bpw_C.ExecuteUbergraph_debug_mission_builder_bpw
struct Udebug_mission_builder_bpw_C_ExecuteUbergraph_debug_mission_builder_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
