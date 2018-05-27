#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EQGenerator_LivePlayers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EQGenerator_LivePlayers.EQGenerator_LivePlayers_C
// 0x0000 (0x0080 - 0x0080)
class UEQGenerator_LivePlayers_C : public UEnvQueryGenerator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EQGenerator_LivePlayers.EQGenerator_LivePlayers_C");
		return ptr;
	}


	void DoItemGeneration(TArray<struct FVector>* ContextLocations);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
