// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_cell_buff_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpi_cell_buff.bpi_cell_buff_C.SetRankFromCell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewRank                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_cell_buff_C::SetRankFromCell(int NewRank)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_cell_buff.bpi_cell_buff_C.SetRankFromCell");

	Ubpi_cell_buff_C_SetRankFromCell_Params params;
	params.NewRank = NewRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpi_cell_buff.bpi_cell_buff_C.SetMagnitudeFromCell
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewMagnitude                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpi_cell_buff_C::SetMagnitudeFromCell(float NewMagnitude)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpi_cell_buff.bpi_cell_buff_C.SetMagnitudeFromCell");

	Ubpi_cell_buff_C_SetMagnitudeFromCell_Params params;
	params.NewMagnitude = NewMagnitude;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
