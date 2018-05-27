#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanternhold_damaging_aura_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C
// 0x0010 (0x05C0 - 0x05B0)
class Ulanternhold_damaging_aura_ab_C : public Ulanternhold_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05B0(0x0008) (Transient, DuplicateTransient)
	float                                              ElapsedDuration;                                          // 0x05B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DamageTick;                                               // 0x05BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lanternhold_damaging_aura_ab.lanternhold_damaging_aura_ab_C");
		return ptr;
	}


	void CanUseInMontage(class UAnimMontage** ActiveMontage, bool* CanUse);
	void K2_ActivateAbility();
	void ExecuteUbergraph_lanternhold_damaging_aura_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
