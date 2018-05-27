#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_PausableMontage_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_PausableMontage.BPI_PausableMontage_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_PausableMontage_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PausableMontage.BPI_PausableMontage_C");
		return ptr;
	}


	void Pause_Montage(float Length_of_Pause);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
