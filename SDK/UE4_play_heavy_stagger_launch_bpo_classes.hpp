#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_play_heavy_stagger_launch_bpo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass play_heavy_stagger_launch_bpo.play_heavy_stagger_launch_bpo_C
// 0x0010 (0x0090 - 0x0080)
class Uplay_heavy_stagger_launch_bpo_C : public Uplay_montage_bpo_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0080(0x0008) (Transient, DuplicateTransient)
	class AArchonCharacter*                            Character_1;                                              // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass play_heavy_stagger_launch_bpo.play_heavy_stagger_launch_bpo_C");
		return ptr;
	}


	void OnTick(struct FArchonGameplayOperationArgs* Args);
	void ExecuteUbergraph_play_heavy_stagger_launch_bpo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
