#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_quest_panel_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.ClearAllButFirst
struct Ubpw_debug_quest_panel_C_ClearAllButFirst_Params
{
	class UVerticalBox*                                VerticalBox;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.GetAssetName
struct Ubpw_debug_quest_panel_C_GetAssetName_Params
{
	class FString                                      ObjectPath;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ObjectName;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.GetVisibility_1
struct Ubpw_debug_quest_panel_C_GetVisibility_1_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.Construct
struct Ubpw_debug_quest_panel_C_Construct_Params
{
};

// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.BndEvt__Button_Redeem_K2Node_ComponentBoundEvent_327_OnButtonClickedEvent__DelegateSignature
struct Ubpw_debug_quest_panel_C_BndEvt__Button_Redeem_K2Node_ComponentBoundEvent_327_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.UpdateAll
struct Ubpw_debug_quest_panel_C_UpdateAll_Params
{
};

// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.ExecuteUbergraph_bpw_debug_quest_panel
struct Ubpw_debug_quest_panel_C_ExecuteUbergraph_bpw_debug_quest_panel_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
