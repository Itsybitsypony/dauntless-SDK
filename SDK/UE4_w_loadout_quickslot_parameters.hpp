#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_loadout_quickslot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_loadout_quickslot.w_loadout_quickslot_C.Refresh
struct Uw_loadout_quickslot_C_Refresh_Params
{
};

// Function w_loadout_quickslot.w_loadout_quickslot_C.GetTextFromType
struct Uw_loadout_quickslot_C_GetTextFromType_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_loadout_quickslot.w_loadout_quickslot_C.Construct
struct Uw_loadout_quickslot_C_Construct_Params
{
};

// Function w_loadout_quickslot.w_loadout_quickslot_C.BndEvt__Bu_Heal_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
struct Uw_loadout_quickslot_C_BndEvt__Bu_Heal_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_loadout_quickslot.w_loadout_quickslot_C.BndEvt__QsButton_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature
struct Uw_loadout_quickslot_C_BndEvt__QsButton_K2Node_ComponentBoundEvent_71_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function w_loadout_quickslot.w_loadout_quickslot_C.PreConstruct
struct Uw_loadout_quickslot_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_quickslot.w_loadout_quickslot_C.ExecuteUbergraph_w_loadout_quickslot
struct Uw_loadout_quickslot_C_ExecuteUbergraph_w_loadout_quickslot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_loadout_quickslot.w_loadout_quickslot_C.QuickSlotHovered__DelegateSignature
struct Uw_loadout_quickslot_C_QuickSlotHovered__DelegateSignature_Params
{
	int                                                QuickSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function w_loadout_quickslot.w_loadout_quickslot_C.QuickSlotClicked__DelegateSignature
struct Uw_loadout_quickslot_C_QuickSlotClicked__DelegateSignature_Params
{
	int                                                QuickSlotIndex;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
