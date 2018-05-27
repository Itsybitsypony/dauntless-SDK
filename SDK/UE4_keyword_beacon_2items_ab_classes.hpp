#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_beacon_2items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_beacon_2items_ab.keyword_beacon_2items_ab_C
// 0x0034 (0x0604 - 0x05D0)
class Ukeyword_beacon_2items_ab_C : public Ukeyword_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05D0(0x0008) (Transient, DuplicateTransient)
	float                                              ResistanceAmount;                                         // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x05DC(0x0004) MISSED OFFSET
	struct FGameplayTag                                EffectTag;                                                // 0x05E0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Range;                                                    // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05EC(0x0004) MISSED OFFSET
	TArray<class AArchonCharacter*>                    AffectedPlayers;                                          // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              PowerAmount;                                              // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_beacon_2items_ab.keyword_beacon_2items_ab_C");
		return ptr;
	}


	void RemoveBuffOnPlayer(class AArchonCharacter* Target);
	void BuffPlayer(class AArchonCharacter* Target);
	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_keyword_beacon_2items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
