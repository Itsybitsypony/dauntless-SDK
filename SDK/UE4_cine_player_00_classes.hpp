#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_player_00_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass cine_player_00.cine_player_00_C
// 0x0060 (0x0BE8 - 0x0B88)
class Acine_player_00_C : public Acine_player_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B88(0x0008) (Transient, DuplicateTransient)
	class Ucine_blendshape_anim_component_C*           cine_blendshape_anim_component;                           // 0x0B90(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, float>                          Active_Face_Morphs;                                       // 0x0B98(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass cine_player_00.cine_player_00_C");
		return ptr;
	}


	void GetMorphTargetDriver(class USkeletalMeshComponent** MorphTargetOwner, class USkeletalMeshComponent** AnimInstanceOwner);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_cine_player_00(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
