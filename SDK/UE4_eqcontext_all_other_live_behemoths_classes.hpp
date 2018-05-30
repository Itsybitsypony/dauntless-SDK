#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eqcontext_all_other_live_behemoths_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eqcontext_all_other_live_behemoths.eqcontext_all_other_live_behemoths_C
// 0x0000 (0x0030 - 0x0030)
class Ueqcontext_all_other_live_behemoths_C : public Ueqcontext_all_live_behemoths_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eqcontext_all_other_live_behemoths.eqcontext_all_other_live_behemoths_C");
		return ptr;
	}


	void ProvideActorsSet(class UObject** QuerierObject, class AActor** QuerierActor, TArray<class AActor*>* ResultingActorsSet);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
