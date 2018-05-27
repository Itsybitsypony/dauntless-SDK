#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_EQContext_CurrentPatrolCenterPoint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EQContext_CurrentPatrolCenterPoint.EQContext_CurrentPatrolCenterPoint_C
// 0x0000 (0x0030 - 0x0030)
class UEQContext_CurrentPatrolCenterPoint_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EQContext_CurrentPatrolCenterPoint.EQContext_CurrentPatrolCenterPoint_C");
		return ptr;
	}


	void ProvideSingleActor(class UObject** QuerierObject, class AActor** QuerierActor, class AActor** ResultingActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
