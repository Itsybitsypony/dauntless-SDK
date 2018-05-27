#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mspear_charge_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass mspear_charge_ab.mspear_charge_ab_C
// 0x01A8 (0x0738 - 0x0590)
class Umspear_charge_ab_C : public UGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0590(0x0008) (Transient, DuplicateTransient)
	bool                                               DeterminationDebuggingEnabled;                            // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0599(0x0007) MISSED OFFSET
	class Uammo_bpc_C*                                 AmmoComponent;                                            // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct Fmspear_tunables_str                        RangedModeTunables;                                       // 0x05A8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              MeterGainScale;                                           // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MeterGainScaleInitialized;                                // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	class AArchonWeapon*                               LWeapon;                                                  // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FWeaponPowerTableData                       LWeaponPowerData;                                         // 0x05C8(0x0168) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LDeterminationTickPeriod;                                 // 0x0730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LDeterminationBracketRange;                               // 0x0734(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass mspear_charge_ab.mspear_charge_ab_C");
		return ptr;
	}


	void GetDetermination(float* Determination);
	void DebugOutputToLog(const class FString& Text);
	void EventReceived_689DFF264047DC2C6AD46DB4AF6DBC3B(const struct FGameplayEventData& Payload);
	void EventReceived_6A0153D14E7A171DAB63098135895A3E(const struct FGameplayEventData& Payload);
	void OnFinish_14475F854B3B6C816AFC219FC8668B81();
	void OnChange_7D6D836B4D54D8D27793D1AF9D20A89C();
	void OnChange_1EE39B04438E3E9F2FD5FDB3F1D489C9();
	void K2_ActivateAbility();
	void ServerOnAmmoAdjusted(int AdjustedAmount);
	void ExecuteUbergraph_mspear_charge_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
