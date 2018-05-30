#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_heal_part_on_flee_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_heal_part_on_flee_ab.behemoth_heal_part_on_flee_ab_C
// 0x000C (0x059C - 0x0590)
class Ubehemoth_heal_part_on_flee_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	float                                              AmountToHealBase;                                         // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_heal_part_on_flee_ab.behemoth_heal_part_on_flee_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_behemoth_heal_part_on_flee_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
