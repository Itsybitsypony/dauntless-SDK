#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EQGenerator_random_circle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EQGenerator_random_circle.EQGenerator_random_circle_C
// 0x000D (0x008D - 0x0080)
class UEQGenerator_random_circle_C : public UEnvQueryGenerator_BlueprintBase
{
public:
	float                                              RadiusInner;                                              // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RadiusOuter;                                              // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumPoints;                                                // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ProjectToNavmesh;                                         // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EQGenerator_random_circle.EQGenerator_random_circle_C");
		return ptr;
	}


	void DoItemGeneration(TArray<struct FVector>* ContextLocations);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
