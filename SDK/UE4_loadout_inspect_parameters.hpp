#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loadout_inspect_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function loadout_inspect.loadout_inspect_C.GetFirstKeyword
struct Uloadout_inspect_C_GetFirstKeyword_Params
{
	class UWidget*                                     KeywordWidget;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_inspect.loadout_inspect_C.GetDefaultFocusedWidget
struct Uloadout_inspect_C_GetDefaultFocusedWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function loadout_inspect.loadout_inspect_C.OnKeyDown
struct Uloadout_inspect_C_OnKeyDown_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FKeyEvent*                                  InKeyEvent;                                               // (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function loadout_inspect.loadout_inspect_C.Construct
struct Uloadout_inspect_C_Construct_Params
{
};

// Function loadout_inspect.loadout_inspect_C.Keyword Selected
struct Uloadout_inspect_C_Keyword_Selected_Params
{
	struct FName                                       CellEffectID;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function loadout_inspect.loadout_inspect_C.BackClicked
struct Uloadout_inspect_C_BackClicked_Params
{
};

// Function loadout_inspect.loadout_inspect_C.ExecuteUbergraph_loadout_inspect
struct Uloadout_inspect_C_ExecuteUbergraph_loadout_inspect_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
