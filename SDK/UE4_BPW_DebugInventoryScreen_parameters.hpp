#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_DebugInventoryScreen_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show_byTag
struct UBPW_DebugInventoryScreen_C_Show_byTag_Params
{
	class FString                                      Tag;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetText_AmountOfItems
struct UBPW_DebugInventoryScreen_C_GetText_AmountOfItems_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.OnGenerateWidget_1
struct UBPW_DebugInventoryScreen_C_OnGenerateWidget_1_Params
{
	class FString                                      Item;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetTextAmount_PLATINUM
struct UBPW_DebugInventoryScreen_C_GetTextAmount_PLATINUM_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.GetTextAmount_NOTES
struct UBPW_DebugInventoryScreen_C_GetTextAmount_NOTES_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show_Weapons
struct UBPW_DebugInventoryScreen_C_Show_Weapons_Params
{
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.hide
struct UBPW_DebugInventoryScreen_C_hide_Params
{
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.Show
struct UBPW_DebugInventoryScreen_C_Show_Params
{
	EItemGroupType                                     B;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.BndEvt__ComboBoxString_369_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature
struct UBPW_DebugInventoryScreen_C_BndEvt__ComboBoxString_369_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature_Params
{
	class FString                                      SelectedItem;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TEnumAsByte<ESelectInfo>                           SelectionType;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.BndEvt__w_debug_FilterButtons_K2Node_ComponentBoundEvent_37_UpdateString__DelegateSignature
struct UBPW_DebugInventoryScreen_C_BndEvt__w_debug_FilterButtons_K2Node_ComponentBoundEvent_37_UpdateString__DelegateSignature_Params
{
	class FString                                      String;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function BPW_DebugInventoryScreen.BPW_DebugInventoryScreen_C.ExecuteUbergraph_BPW_DebugInventoryScreen
struct UBPW_DebugInventoryScreen_C_ExecuteUbergraph_BPW_DebugInventoryScreen_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
