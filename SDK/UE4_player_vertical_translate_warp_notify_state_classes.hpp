#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_vertical_translate_warp_notify_state_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C
// 0x001C (0x005C - 0x0040)
class Uplayer_vertical_translate_warp_notify_state_C : public UTranslateWarpWindowNotify
{
public:
	float                                              SlopeAngleUp;                                             // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SlopeAngleDown;                                           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTime;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                TraceColour;                                              // 0x004C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_vertical_translate_warp_notify_state.player_vertical_translate_warp_notify_state_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation);
	void AdjustPlayRate(float Duration, const struct FVector& OriginalEndPoint, const struct FVector& WarpedEndPosition, class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage);
	void ExtractEndPoint(float Duration, class USkeletalMeshComponent* Mesh, class UAnimMontage* Montage, struct FVector* OriginalEndPoint, struct FVector* WarpedEndPoint);
	bool Received_NotifyBegin(class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, float* TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
