#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_WorldMap_Image_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_WorldMap_Image.w_WorldMap_Image_C.Construct
struct Uw_WorldMap_Image_C_Construct_Params
{
};

// Function w_WorldMap_Image.w_WorldMap_Image_C.OnMouseEnter
struct Uw_WorldMap_Image_C_OnMouseEnter_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_WorldMap_Image.w_WorldMap_Image_C.OnMouseLeave
struct Uw_WorldMap_Image_C_OnMouseLeave_Params
{
	struct FPointerEvent*                              MouseEvent;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function w_WorldMap_Image.w_WorldMap_Image_C.ExecuteUbergraph_w_WorldMap_Image
struct Uw_WorldMap_Image_C_ExecuteUbergraph_w_WorldMap_Image_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
