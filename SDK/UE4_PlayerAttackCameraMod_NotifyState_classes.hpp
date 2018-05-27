#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_PlayerAttackCameraMod_NotifyState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerAttackCameraMod_NotifyState.PlayerAttackCameraMod_NotifyState_C
// 0x0030 (0x0060 - 0x0030)
class UPlayerAttackCameraMod_NotifyState_C : public UAnimNotifyState
{
public:
	class UCurveFloat*                                 InCameraBoomOffsetCurve;                                  // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     InCameraOffset;                                           // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              InCameraArmLengthOffset;                                  // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              InCameraTransitionTime;                                   // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 OutCameraBoomOffsetCurve;                                 // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              OutCameraTransitionTime;                                  // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FOVDelta;                                                 // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAttackCameraMod_NotifyState.PlayerAttackCameraMod_NotifyState_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
