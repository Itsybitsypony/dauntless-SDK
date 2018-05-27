#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_NoInputBufferNotify_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass NoInputBufferNotify.NoInputBufferNotify_C
// 0x0078 (0x00A8 - 0x0030)
class UNoInputBufferNotify_C : public UAnimNotifyState
{
public:
	struct FComboInputBuffer                           Transition;                                               // 0x0030(0x0070) (Edit, BlueprintVisible)
	class UClass*                                      TransitionCondition;                                      // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NoInputBufferNotify.NoInputBufferNotify_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
