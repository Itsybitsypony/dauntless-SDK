#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_mainMenuNav_store_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.GetVisibility_enabled
struct Uw_mainMenuNav_store_C_GetVisibility_enabled_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.OnFocusReceived
struct Uw_mainMenuNav_store_C_OnFocusReceived_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FFocusEvent*                                InFocusEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.GetVisibility_hover
struct Uw_mainMenuNav_store_C_GetVisibility_hover_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.Construct
struct Uw_mainMenuNav_store_C_Construct_Params
{
};

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.OnSynchronizeProperties
struct Uw_mainMenuNav_store_C_OnSynchronizeProperties_Params
{
};

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.BndEvt__BU_Signout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct Uw_mainMenuNav_store_C_BndEvt__BU_Signout_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.ExecuteUbergraph_w_mainMenuNav_store
struct Uw_mainMenuNav_store_C_ExecuteUbergraph_w_mainMenuNav_store_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_mainMenuNav_store.w_mainMenuNav_store_C.ButtonClicked__DelegateSignature
struct Uw_mainMenuNav_store_C_ButtonClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
