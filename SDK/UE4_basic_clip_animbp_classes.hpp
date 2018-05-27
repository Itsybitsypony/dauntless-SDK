#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_basic_clip_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass basic_clip_animbp.basic_clip_animbp_C
// 0x08CD (0x0C55 - 0x0388)
class Ubasic_clip_animbp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_545269DB450445736111F983BA4E5FEF;      // 0x0390(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_77F2D89A42F737C30C1C3980AEE62EDC;// 0x03E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4DFC7ABC43771ECE145EB2AC156E40D6;// 0x0460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45BDF7634B61358E2EE1248FF015B59B;// 0x04E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_02DB1CE6436E6A72BA9386ADCA57A15C;// 0x0560(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47C1D6A74EF22B0AC8AD4D8534B4544C;// 0x05E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_EC41B0734326A917458922B5DA1F6AEE;// 0x0660(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CA0EE434193BF352C2BC1B4AA083ADA;// 0x06E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31518A7F439E777C1D0D13A00CE62682;// 0x0760(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_24000B7E4A5BD96BFA030E8F4D76AA8B;// 0x07E0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_A4D1DDB84ED0F7F6985F6997F1766FAB;// 0x0850(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_80552A094DD66193C6AB83A9FF9C3D89;// 0x0898(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7E0BCE0348F5EED98E3EC28EA8DA2889;// 0x0908(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8EF9FB244ADDE8DBCBE660BA93FD492B;// 0x0950(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CAED69EB4322D5A0C26411BF5B82E483;// 0x09C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4B73C95F40AEB63A0BA348B3A5933109;// 0x0A08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4D4F93184FE15A2D50BEBD84FADB8EEE;// 0x0A78(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_127B47C1465001FFF17360B35FC4DA93;// 0x0AC0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_24D0104A45D25C6F636596B24AB03E42;// 0x0B30(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_363E476341239919428472BEE0BE714B;// 0x0B78(0x00D8)
	int                                                ammo_count;                                               // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isEjected;                                                // 0x0C54(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass basic_clip_animbp.basic_clip_animbp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_basic_clip_animbp_AnimGraphNode_TransitionResult_02DB1CE6436E6A72BA9386ADCA57A15C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_basic_clip_animbp_AnimGraphNode_TransitionResult_47C1D6A74EF22B0AC8AD4D8534B4544C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_basic_clip_animbp_AnimGraphNode_TransitionResult_45BDF7634B61358E2EE1248FF015B59B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_basic_clip_animbp_AnimGraphNode_TransitionResult_EC41B0734326A917458922B5DA1F6AEE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_basic_clip_animbp_AnimGraphNode_TransitionResult_4CA0EE434193BF352C2BC1B4AA083ADA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_basic_clip_animbp_AnimGraphNode_TransitionResult_31518A7F439E777C1D0D13A00CE62682();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_basic_clip_animbp_AnimGraphNode_TransitionResult_4DFC7ABC43771ECE145EB2AC156E40D6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_basic_clip_animbp_AnimGraphNode_TransitionResult_77F2D89A42F737C30C1C3980AEE62EDC();
	void ExecuteUbergraph_basic_clip_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
