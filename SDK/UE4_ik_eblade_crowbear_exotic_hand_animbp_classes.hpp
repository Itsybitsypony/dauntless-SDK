#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ik_eblade_crowbear_exotic_hand_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ik_eblade_crowbear_exotic_hand_animbp.ik_eblade_crowbear_exotic_hand_animbp_C
// 0x0210 (0x0598 - 0x0388)
class Uik_eblade_crowbear_exotic_hand_animbp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2CB506094AC49F78775C15A960F91418;      // 0x0390(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9F39A38A4A29FA4CB50EC9B48BD533C3;      // 0x03D8(0x0068)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_025A24524BCCEFFA59FA519B920D67ED;// 0x0440(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FE548ED7447FC002FB76E7B4C5440569;// 0x0478(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7FD9F0FB494825F3ADBDA2ABF87EB185;// 0x04C0(0x00D8)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ik_eblade_crowbear_exotic_hand_animbp.ik_eblade_crowbear_exotic_hand_animbp_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void Pause_Montage(float Length_of_Pause);
	void ExecuteUbergraph_ik_eblade_crowbear_exotic_hand_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
