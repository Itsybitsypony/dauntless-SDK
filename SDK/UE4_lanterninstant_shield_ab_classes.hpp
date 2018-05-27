#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lanterninstant_shield_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lanterninstant_shield_ab.lanterninstant_shield_ab_C
// 0x0008 (0x05B0 - 0x05A8)
class Ulanterninstant_shield_ab_C : public Ulanterninstant_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05A8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lanterninstant_shield_ab.lanterninstant_shield_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_lanterninstant_shield_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
