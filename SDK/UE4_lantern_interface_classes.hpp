#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lantern_interface.lantern_interface_C
// 0x0000 (0x0028 - 0x0028)
class Ulantern_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lantern_interface.lantern_interface_C");
		return ptr;
	}


	void InstantDischargePrimaryInterface();
	void GetCurrentSecondaryChargeInterface(float* CurrentSecondaryCharge);
	void GetSingleChargeCostInterface(float* SingleChargeCost);
	void InstantDischargeSecondaryInterface();
	void GetMaximumChargeInterface(float* MaximumCharge);
	void StartDischargeInterface(float DischargeDuration);
	void GetPrimaryChargePercentInterface(float* ChargePercent);
	void RegisterToModifyAddCharge();
	void AddChargeInterface(float Charge);
	void GetLanternMesh(class USkeletalMeshComponent** Mesh);
	void GetDischargeLoopEndSound(class UAkAudioEventBase** Sound);
	void GetDischargeEndedSound(class UAkAudioEventBase** Sound);
	void GetDischargeEndedEffect(class UParticleSystem** Effect);
	void GetDischargeLoopStartSound(class UAkAudioEventBase** Sound);
	void GetDischargeVO(class UAkAudioEventBase** Sound);
	void GetDischargeStartedSound(class UAkAudioEventBase** Sound);
	void GetDischargeLoopStartEffect(class UParticleSystem** Effect);
	void GetDischargeStartedEffect(class UParticleSystem** Effect);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
