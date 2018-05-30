#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eqs_generator_valid_action_helpers_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eqs_generator_valid_action_helpers.eqs_generator_valid_action_helpers_C
// 0x0000 (0x0080 - 0x0080)
class Ueqs_generator_valid_action_helpers_C : public UEnvQueryGenerator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eqs_generator_valid_action_helpers.eqs_generator_valid_action_helpers_C");
		return ptr;
	}


	void DoItemGeneration(TArray<struct FVector>* ContextLocations);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
