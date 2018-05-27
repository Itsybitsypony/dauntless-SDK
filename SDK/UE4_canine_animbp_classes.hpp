#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_canine_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass canine_animbp.canine_animbp_C
// 0x0B30 (0x0EB8 - 0x0388)
class Ucanine_animbp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_33BDDB9C49098B85D78B54926210D294;      // 0x0390(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DF5C81E741B21E084501B4BDDE99E74A;// 0x03E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D568E77A46D2F226C6C932A4D9D9B853;// 0x0460(0x0080)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6EC4DE2B4BC9E45B459103A97DEAB357;// 0x04E0(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FF3B8593426C671B3EF28AA4F85F51A4;// 0x0608(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B9569EB4424A768137592B9238CE5349;// 0x0650(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CFDFBDB844FC230B5F5B26B364977F9B;// 0x06C0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_F461540A4CA38F327D18A49F744E5621;// 0x0708(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_322349424244780D5213938EDAAF8AFC;      // 0x07E0(0x0068)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ABF21B434DF3013AF142CCBDB734FA19;// 0x0848(0x0070)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_78F5007A4CB82A93EBAC58B10A663C64;// 0x08B8(0x0078)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_CFE0ACD04C8F18F722D7EA86EC8EB5C8;    // 0x0930(0x01A0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2EAB93F64EA7F0877762A59438475D4A;// 0x0AD0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6161FF9D482A69767783C78A607E96B9;// 0x0B18(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2DB19D9248803D24D8AAEF995667E35C;    // 0x0B60(0x01A0)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2BA403B644D16FEA0DBAC793376783E0;    // 0x0D00(0x01A0)
	float                                              Speed;                                                    // 0x0EA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TailAdditive;                                             // 0x0EA4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LookAtAlpha;                                              // 0x0EA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtTarget;                                             // 0x0EAC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass canine_animbp.canine_animbp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_canine_animbp_AnimGraphNode_BlendSpacePlayer_6EC4DE2B4BC9E45B459103A97DEAB357();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_canine_animbp_AnimGraphNode_LookAt_CFE0ACD04C8F18F722D7EA86EC8EB5C8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_canine_animbp_AnimGraphNode_LookAt_2DB19D9248803D24D8AAEF995667E35C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_canine_animbp_AnimGraphNode_LookAt_2BA403B644D16FEA0DBAC793376783E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_canine_animbp_AnimGraphNode_TransitionResult_D568E77A46D2F226C6C932A4D9D9B853();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_canine_animbp_AnimGraphNode_TransitionResult_DF5C81E741B21E084501B4BDDE99E74A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_canine_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
