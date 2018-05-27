#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_live_behemoths_generator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass live_behemoths_generator.live_behemoths_generator_C
// 0x0004 (0x0084 - 0x0080)
class Ulive_behemoths_generator_C : public UEnvQueryGenerator_BlueprintBase
{
public:
	float                                              Distance;                                                 // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass live_behemoths_generator.live_behemoths_generator_C");
		return ptr;
	}


	void DoItemGeneration(TArray<struct FVector>* ContextLocations);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
