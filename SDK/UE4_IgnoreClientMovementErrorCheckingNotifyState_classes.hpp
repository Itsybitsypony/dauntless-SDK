#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_IgnoreClientMovementErrorCheckingNotifyState_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IgnoreClientMovementErrorCheckingNotifyState.IgnoreClientMovementErrorCheckingNotifyState_C
// 0x0000 (0x0030 - 0x0030)
class UIgnoreClientMovementErrorCheckingNotifyState_C : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IgnoreClientMovementErrorCheckingNotifyState.IgnoreClientMovementErrorCheckingNotifyState_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
