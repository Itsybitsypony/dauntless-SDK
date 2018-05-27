#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bleedout_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bleedout_ab.bleedout_ab_C
// 0x000C (0x059C - 0x0590)
class Ubleedout_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	int                                                NumberOfBleedouts;                                        // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bleedout_ab.bleedout_ab_C");
		return ptr;
	}


	void EventReceived_43784A084ABB1A0B658EADACBDE45AC7(const struct FGameplayEventData& Payload);
	void OnCancelled_6764EC5047F88D2849F3AA973992F96F();
	void OnInterrupted_6764EC5047F88D2849F3AA973992F96F();
	void OnBlendOut_6764EC5047F88D2849F3AA973992F96F();
	void OnCompleted_6764EC5047F88D2849F3AA973992F96F();
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_bleedout_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
