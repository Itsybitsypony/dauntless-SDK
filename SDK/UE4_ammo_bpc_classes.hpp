#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ammo_bpc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ammo_bpc.ammo_bpc_C
// 0x0080 (0x0250 - 0x01D0)
class Uammo_bpc_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	bool                                               StartWithFullAmmo;                                        // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	int                                                CurrentAmmoCount;                                         // 0x01DC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxAmmoCount;                                             // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01E4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAmmoCountChanged;                                       // 0x01E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerOnAmmoAdjusted;                                     // 0x01F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ServerOnReloadWeapon;                                     // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	TArray<float>                                      AmmoMeterScale;                                           // 0x0218(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnAmmoMeterScaleUpdated;                                  // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LastLoadedAmmoScale;                                      // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StartingAmmoScale;                                        // 0x023C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    ServerOnAmmoAdjustedPreClamp;                             // 0x0240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ammo_bpc.ammo_bpc_C");
		return ptr;
	}


	void AuthReloadNumAmmo(int AmmoToReload, float AmmoWeaponScale);
	void GetAmmoIndexScale(int AmmoIndex, float* Scale);
	void ClampMeterScaleToAmmo();
	void DebugOutputAmmoScale();
	void AuthSetAmmoIndexMeterScale(float Scale, int AmmoIndex);
	void AuthReloadWeaponWithAmmoScale(float AmmoScale);
	void GetCurrentAmmoScale(float* Scale);
	void OnRep_AmmoMeterScale();
	void AuthRemoveCurrentAmmoMeterScaleIndex();
	void AuthSetCurrentMeterScale(float Scale);
	void OnRep_CurrentAmmoCount();
	void IsAmmoDepleted(bool* OutOfAmmo);
	void AuthReloadWeapon();
	void AuthAdjustAmmoCount(int AmmoAdjustment);
	void AuthSetAmmoCount(int Ammo);
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_ammo_bpc(int EntryPoint);
	void ServerOnAmmoAdjustedPreClamp__DelegateSignature(int OldAmmoCount, int NewAmmoCount);
	void OnAmmoMeterScaleUpdated__DelegateSignature(float Scale, int Index);
	void ServerOnReloadWeapon__DelegateSignature();
	void ServerOnAmmoAdjusted__DelegateSignature(int AdjustedAmount);
	void OnAmmoCountChanged__DelegateSignature(int NewAmmoCount);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
