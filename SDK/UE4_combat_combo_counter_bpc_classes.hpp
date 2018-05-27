#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_combat_combo_counter_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass combat_combo_counter_bpc.combat_combo_counter_bpc_C
// 0x0030 (0x0200 - 0x01D0)
class Ucombat_combo_counter_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	int                                                PrimaryCount;                                             // 0x01D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                SecondaryCount;                                           // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDebugInfo;                                               // 0x01E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01E1(0x0003) MISSED OFFSET
	int                                                MaxPrimaryCount;                                          // 0x01E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxSecondaryCount;                                        // 0x01E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01EC(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnComboIncremented;                                       // 0x01F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass combat_combo_counter_bpc.combat_combo_counter_bpc_C");
		return ptr;
	}


	void DebugInfo(bool Condition);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void OnComboEndedDispatcher_Event_1();
	void IncrementComboCount(EArchonAttackActionKey AttackType);
	void ServerSetComboCount(int PrimaryCount, int SecondaryCount, EArchonAttackActionKey AttackType);
	void ExecuteUbergraph_combat_combo_counter_bpc(int EntryPoint);
	void OnComboIncremented__DelegateSignature(EArchonAttackActionKey AttackType);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
