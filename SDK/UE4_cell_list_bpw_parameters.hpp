#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cell_list_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function cell_list_bpw.cell_list_bpw_C.OnKeyDown
struct Ucell_list_bpw_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function cell_list_bpw.cell_list_bpw_C.GetDefaultFocusedWidget
struct Ucell_list_bpw_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function cell_list_bpw.cell_list_bpw_C.Construct
struct Ucell_list_bpw_C_Construct_Params
{
};

// Function cell_list_bpw.cell_list_bpw_C.Close Screen
struct Ucell_list_bpw_C_Close_Screen_Params
{
};

// Function cell_list_bpw.cell_list_bpw_C.OnCellButtonClicked
struct Ucell_list_bpw_C_OnCellButtonClicked_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function cell_list_bpw.cell_list_bpw_C.ExecuteUbergraph_cell_list_bpw
struct Ucell_list_bpw_C_ExecuteUbergraph_cell_list_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function cell_list_bpw.cell_list_bpw_C.CellSelected__DelegateSignature
struct Ucell_list_bpw_C_CellSelected__DelegateSignature_Params
{
	class FString                                      InstanceId;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
