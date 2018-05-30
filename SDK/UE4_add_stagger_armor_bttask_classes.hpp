#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_add_stagger_armor_bttask_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass add_stagger_armor_bttask.add_stagger_armor_bttask_C
// 0x0088 (0x0128 - 0x00A0)
class Uadd_stagger_armor_bttask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (Transient, DuplicateTransient)
	struct Fsimplified_blackboard_key_data             UnscaledArmorAmount;                                      // 0x00A8(0x0040) (Edit, BlueprintVisible)
	struct Fsimplified_blackboard_key_data             ArmorDuration;                                            // 0x00E8(0x0040) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass add_stagger_armor_bttask.add_stagger_armor_bttask_C");
		return ptr;
	}


	void ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn);
	void ExecuteUbergraph_add_stagger_armor_bttask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
