#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_regen_health_over_time_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass fauna_regen_health_over_time_ab.fauna_regen_health_over_time_ab_C
// 0x0008 (0x0598 - 0x0590)
class Ufauna_regen_health_over_time_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass fauna_regen_health_over_time_ab.fauna_regen_health_over_time_ab_C");
		return ptr;
	}


	void OnChange_3985D0F8470E44FAC585128F7225E61F();
	void OnFinish_8D45E9AA4B8F75FBE5BA64A729AF91A2();
	void K2_ActivateAbility();
	void ExecuteUbergraph_fauna_regen_health_over_time_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
