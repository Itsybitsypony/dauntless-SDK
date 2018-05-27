#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_Impact_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Impact.BPI_Impact_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Impact_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Impact.BPI_Impact_C");
		return ptr;
	}


	void ApplyImpact(const struct FVector& Position, const struct FVector& Direction, float DurationScale, float MagnitudeScale);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
