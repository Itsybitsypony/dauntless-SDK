#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpi_cell_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bpi_cell_buff.bpi_cell_buff_C
// 0x0000 (0x0028 - 0x0028)
class Ubpi_cell_buff_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bpi_cell_buff.bpi_cell_buff_C");
		return ptr;
	}


	void SetRankFromCell(int NewRank);
	void SetMagnitudeFromCell(float NewMagnitude);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
