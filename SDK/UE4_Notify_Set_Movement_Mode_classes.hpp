#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Notify_Set_Movement_Mode_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Notify_Set_Movement_Mode.Notify_Set_Movement_Mode_C
// 0x0001 (0x0031 - 0x0030)
class UNotify_Set_Movement_Mode_C : public UAnimNotifyState
{
public:
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Notify_Set_Movement_Mode.Notify_Set_Movement_Mode_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
