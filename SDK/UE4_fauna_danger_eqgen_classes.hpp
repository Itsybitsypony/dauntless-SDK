#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_danger_eqgen_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass fauna_danger_eqgen.fauna_danger_eqgen_C
// 0x0000 (0x0080 - 0x0080)
class Ufauna_danger_eqgen_C : public UEnvQueryGenerator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass fauna_danger_eqgen.fauna_danger_eqgen_C");
		return ptr;
	}


	void DoItemGeneration(TArray<struct FVector>* ContextLocations);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
