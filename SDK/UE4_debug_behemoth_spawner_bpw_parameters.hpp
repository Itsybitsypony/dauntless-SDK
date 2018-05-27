#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_debug_behemoth_spawner_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ComboBoxItemFormatting
struct Udebug_behemoth_spawner_bpw_C_ComboBoxItemFormatting_Params
{
	class FString                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.OnKeyDown
struct Udebug_behemoth_spawner_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ReturnFocusedButton
struct Udebug_behemoth_spawner_bpw_C_ReturnFocusedButton_Params
{
	class Uw_MenuButton_C*                             FocusedButton;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.Construct
struct Udebug_behemoth_spawner_bpw_C_Construct_Params
{
};

// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu Button Clicked__DelegateSignature
struct Udebug_behemoth_spawner_bpw_C_BndEvt__Button_Select_K2Node_ComponentBoundEvent_488_Menu_Button_Clicked__DelegateSignature_Params
{
	int                                                ClickedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.Server_RequestBehemoth
struct Udebug_behemoth_spawner_bpw_C_Server_RequestBehemoth_Params
{
	struct FName                                       Behemoth;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function debug_behemoth_spawner_bpw.debug_behemoth_spawner_bpw_C.ExecuteUbergraph_debug_behemoth_spawner_bpw
struct Udebug_behemoth_spawner_bpw_C_ExecuteUbergraph_debug_behemoth_spawner_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
