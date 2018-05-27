#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ih_primed_ammo_shell_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ih_primed_ammo_shell_ab.ih_primed_ammo_shell_ab_C
// 0x0008 (0x0598 - 0x0590)
class Uih_primed_ammo_shell_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ih_primed_ammo_shell_ab.ih_primed_ammo_shell_ab_C");
		return ptr;
	}


	void EventReceived_6222CCCF45E36BAB149D5E95C01399AB(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void ExecuteUbergraph_ih_primed_ammo_shell_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
