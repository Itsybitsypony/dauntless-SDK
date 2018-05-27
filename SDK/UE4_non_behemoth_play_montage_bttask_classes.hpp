#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_non_behemoth_play_montage_bttask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C
// 0x0018 (0x00B8 - 0x00A0)
class Unon_behemoth_play_montage_bttask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	class UAnimMontage*                                Montage;                                                  // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       StartSection;                                             // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass non_behemoth_play_montage_bttask.non_behemoth_play_montage_bttask_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void MontagBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	void ExecuteUbergraph_non_behemoth_play_montage_bttask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
