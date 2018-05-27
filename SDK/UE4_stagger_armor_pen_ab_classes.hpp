#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_stagger_armor_pen_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass stagger_armor_pen_ab.stagger_armor_pen_ab_C
// 0x0014 (0x05A4 - 0x0590)
class Ustagger_armor_pen_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	float                                              Magnitude;                                                // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FActiveGameplayEffectHandle                 EffectHandle;                                             // 0x059C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass stagger_armor_pen_ab.stagger_armor_pen_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_stagger_armor_pen_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
