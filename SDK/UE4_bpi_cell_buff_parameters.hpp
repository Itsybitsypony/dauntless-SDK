#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_cell_buff_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function bpi_cell_buff.bpi_cell_buff_C.SetRankFromCell
struct Ubpi_cell_buff_C_SetRankFromCell_Params
{
	int                                                NewRank;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function bpi_cell_buff.bpi_cell_buff_C.SetMagnitudeFromCell
struct Ubpi_cell_buff_C_SetMagnitudeFromCell_Params
{
	float                                              NewMagnitude;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
