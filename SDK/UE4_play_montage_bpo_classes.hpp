#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_play_montage_bpo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass play_montage_bpo.play_montage_bpo_C
// 0x0030 (0x0080 - 0x0050)
class Uplay_montage_bpo_C : public UArchonGameplayOperation
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0050(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                  // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FArchonGameplayOperationArgs                Args;                                                     // 0x0060(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       Section;                                                  // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      Actor;                                                    // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass play_montage_bpo.play_montage_bpo_C");
		return ptr;
	}


	void OnMontageBlendingOut_Event_1(class UAnimMontage* Montage, bool bInterrupted);
	void OnStart(struct FArchonGameplayOperationArgs* Args);
	void OnTick(struct FArchonGameplayOperationArgs* Args);
	void ExecuteUbergraph_play_montage_bpo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
