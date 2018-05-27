#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_set_max_deflection_angle_bpns_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass set_max_deflection_angle_bpns.set_max_deflection_angle_bpns_C
// 0x0004 (0x0034 - 0x0030)
class Uset_max_deflection_angle_bpns_C : public UAnimNotifyState
{
public:
	float                                              MaxDeflectionAngle;                                       // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass set_max_deflection_angle_bpns.set_max_deflection_angle_bpns_C");
		return ptr;
	}


	void SetMaxDeflectionAngle(float MaxDeflectionAngle, class UActorComponent* MeshComp);
	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
