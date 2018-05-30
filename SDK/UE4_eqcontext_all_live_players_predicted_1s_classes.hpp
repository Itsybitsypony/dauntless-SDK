#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eqcontext_all_live_players_predicted_1s_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eqcontext_all_live_players_predicted_1s.eqcontext_all_live_players_predicted_1s_C
// 0x0000 (0x0030 - 0x0030)
class Ueqcontext_all_live_players_predicted_1s_C : public UEnvQueryContext_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eqcontext_all_live_players_predicted_1s.eqcontext_all_live_players_predicted_1s_C");
		return ptr;
	}


	void ProvideLocationsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<struct FVector>* ResultingLocationSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
