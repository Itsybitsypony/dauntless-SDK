#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_style_flares_bpw_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function style_flares_bpw.style_flares_bpw_C.RefreshFlareGrid
struct Ustyle_flares_bpw_C_RefreshFlareGrid_Params
{
};

// Function style_flares_bpw.style_flares_bpw_C.Construct
struct Ustyle_flares_bpw_C_Construct_Params
{
};

// Function style_flares_bpw.style_flares_bpw_C.Equip
struct Ustyle_flares_bpw_C_Equip_Params
{
	class FString                                      ItemInstance;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class FString                                      ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                GridInt;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function style_flares_bpw.style_flares_bpw_C.ExecuteUbergraph_style_flares_bpw
struct Ustyle_flares_bpw_C_ExecuteUbergraph_style_flares_bpw_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
