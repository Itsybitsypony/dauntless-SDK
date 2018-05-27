#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_hoofed_quadruped_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass hoofed_quadruped_animbp.hoofed_quadruped_animbp_C
// 0x05BC (0x0944 - 0x0388)
class Uhoofed_quadruped_animbp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E1D2881B4CB64441B3F7F38D2AA6A3DC;      // 0x0390(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_511327F84FB59F1ECD350E98A3309524;      // 0x03D8(0x0068)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_51AECF8E422E75DEBEF073ABAF25F1C1;// 0x0440(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_75F539AC424816F1A9972DBA0081E36C;// 0x04C0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9AFECBC84F1CE92A32F70D92A1CD3AC1;// 0x0540(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_505C046F4268B95BD6A9C3B8182294F6;// 0x05C0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5B7CBD9B4C1CBB3E7360DDBA47680796;// 0x0640(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_9F326C4343C033E3B74A269A92F4BDD5;// 0x06B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DEFD6503437F1C8DC47035A9568BCEEA;// 0x06F8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_93C55BEB4E6F65961E4813A7E411C17A;// 0x0768(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5CB32D744E9A61EFFC844A9FE8016597;// 0x07B0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_58FC4FCD4731DF9CADD68BAC3952767E;// 0x0820(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F685BC6439B3E1C154BB0B9E4BCD6CF;// 0x0868(0x00D8)
	float                                              Speed;                                                    // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass hoofed_quadruped_animbp.hoofed_quadruped_animbp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_hoofed_quadruped_animbp_AnimGraphNode_TransitionResult_9AFECBC84F1CE92A32F70D92A1CD3AC1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_hoofed_quadruped_animbp_AnimGraphNode_TransitionResult_505C046F4268B95BD6A9C3B8182294F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_hoofed_quadruped_animbp_AnimGraphNode_SequencePlayer_5B7CBD9B4C1CBB3E7360DDBA47680796();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_hoofed_quadruped_animbp_AnimGraphNode_TransitionResult_75F539AC424816F1A9972DBA0081E36C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_hoofed_quadruped_animbp_AnimGraphNode_SequencePlayer_DEFD6503437F1C8DC47035A9568BCEEA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_hoofed_quadruped_animbp_AnimGraphNode_TransitionResult_51AECF8E422E75DEBEF073ABAF25F1C1();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_hoofed_quadruped_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
