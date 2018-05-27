#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_AetherVentChargeAbility_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AetherVentChargeAbility.AetherVentChargeAbility_C
// 0x0008 (0x0598 - 0x0590)
class UAetherVentChargeAbility_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AetherVentChargeAbility.AetherVentChargeAbility_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_AetherVentChargeAbility(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
