#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mspear_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass mspear_interface.mspear_interface_C
// 0x0000 (0x0028 - 0x0028)
class Umspear_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass mspear_interface.mspear_interface_C");
		return ptr;
	}


	void GetMeter_AmmoQualityRanges(float* AmmoQualityThresh_1, float* AmmoQualityThresh_2, float* AmmoQualityThresh_3, float* AmmoQualityThresh_4, float* AmmoQualityThresh_5, int* AmmoMax);
	void GetLastFiredShotAmmoScale(float* LastFiredShotAmmoScale);
	void GetCurrentMeterAmmoQuality(float* CurrentAmmoQuality);
	void GetMeterGainScale(float* Scale);
	void GetRangedModeTunables(struct Fmspear_tunables_str* Tunables);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
