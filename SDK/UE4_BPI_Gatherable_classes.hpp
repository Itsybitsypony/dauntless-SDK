#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_Gatherable_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Gatherable.BPI_Gatherable_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Gatherable_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Gatherable.BPI_Gatherable_C");
		return ptr;
	}


	void SpawnShinyLoot(const struct FName& LootID, const struct Feqs_lobbed_projectile_data& ShinyInfo, class UEnvQuery* ShinyEQS, float LifeTime);
	void SetGrantItemID(const class FString& GatherID, bool* Output);
	void EnableHighlightForDuration(float Duration, bool* Output);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
