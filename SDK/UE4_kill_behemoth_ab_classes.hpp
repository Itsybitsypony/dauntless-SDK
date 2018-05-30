#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_kill_behemoth_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass kill_behemoth_ab.kill_behemoth_ab_C
// 0x0008 (0x0598 - 0x0590)
class Ukill_behemoth_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass kill_behemoth_ab.kill_behemoth_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_kill_behemoth_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
