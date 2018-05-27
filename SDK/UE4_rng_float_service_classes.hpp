#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_rng_float_service_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass rng_float_service.rng_float_service_C
// 0x0030 (0x00C8 - 0x0098)
class Urng_float_service_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0098(0x0008) (Transient, DuplicateTransient)
	struct FBlackboardKeySelector                      RNG_Float_key;                                            // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass rng_float_service.rng_float_service_C");
		return ptr;
	}


	void ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_rng_float_service(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
