#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_revive_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass revive_ab.revive_ab_C
// 0x000C (0x059C - 0x0590)
class Urevive_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	int                                                NumberOfBleedouts;                                        // 0x0598(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass revive_ab.revive_ab_C");
		return ptr;
	}


	void OnCancelled_C226FCD64D92176DC81B569C6C08C69B();
	void OnInterrupted_C226FCD64D92176DC81B569C6C08C69B();
	void OnBlendOut_C226FCD64D92176DC81B569C6C08C69B();
	void OnCompleted_C226FCD64D92176DC81B569C6C08C69B();
	void OnFinish_969C43114E8C915EEEFFD984680F13EA();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_revive_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
