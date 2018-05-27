#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_WorldMap_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpw_WorldMap.bpw_WorldMap_C.OnKeyDown
struct Ubpw_WorldMap_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function bpw_WorldMap.bpw_WorldMap_C.Construct
struct Ubpw_WorldMap_C_Construct_Params
{
};

// Function bpw_WorldMap.bpw_WorldMap_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_Menu Button Clicked__DelegateSignature
struct Ubpw_WorldMap_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_Menu_Button_Clicked__DelegateSignature_Params
{
	int                                                ClickedIndex;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_WorldMap.bpw_WorldMap_C.Escape_Out
struct Ubpw_WorldMap_C_Escape_Out_Params
{
};

// Function bpw_WorldMap.bpw_WorldMap_C.ExecuteUbergraph_bpw_WorldMap
struct Ubpw_WorldMap_C_ExecuteUbergraph_bpw_WorldMap_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpw_WorldMap.bpw_WorldMap_C.ExitClicked__DelegateSignature
struct Ubpw_WorldMap_C_ExitClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
