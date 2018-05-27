#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_FlyingWalking_Seagull_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FlyingWalking_Seagull_AnimBlueprint.FlyingWalking_Seagull_AnimBlueprint_C
// 0x0D60 (0x10E8 - 0x0388)
class UFlyingWalking_Seagull_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C63F70964FC842124921B8AAA0084A9E;      // 0x0390(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5501ADF240D93F586EF3E49A04433476;// 0x03E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6245E1924FC5BF85E69D3E97058AEE05;// 0x0460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26198367487B141FB202BDBD05661D5F;// 0x04E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2C3C6DFB48E6EB00ECE8BF8C56FD3679;// 0x0560(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_85D3882441A89AF9D5FEB4B847DCD7AA;// 0x05E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7FECDE4E4DA366AD6A3B22B3E577E46A;// 0x0660(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45DF9D124122C103C53995A519A86A90;// 0x06E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1E33E75A461EABE53C7A08BAF20F606D;// 0x0760(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_0D30FBBC48204B2E63F632A52F54BAB0;// 0x07D0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F34C333847ED5D0F6EF9DB9EFFCDB846;// 0x08A0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E990CAB24784B06543E5A295FC122C8F;// 0x0910(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_38635179435ED346E592FFAFF7A3748F;// 0x0980(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_692B08EB49197F3CE78538BB2715AEA7;// 0x09F0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8E0919E24DA7DB23DED188B2111308DC;// 0x0A60(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E6A69F45418CB3CCD25E72BE6EDAA05B;// 0x0AD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9E536E454E06EF07A23BEEB6EDA6D702;// 0x0B18(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C314D26B4DBCC5F7D559B89A915DFA3A;// 0x0B88(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4324FBBB463A3401F16A849FF167C231;// 0x0BF8(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2939083D4C66C2873566748BBF17A5E8;// 0x0CC8(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_6CE3493F4256B1A3478B91A0642F5D7C;// 0x0D10(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B622749F43E618A1F1C0D4BDF08754C1;// 0x0E38(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_63B88B7340AA4EF278300FBE836B662F;// 0x0E80(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7426AF7C404CDD684167C78ECF0A9533;// 0x0FA8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5F47357F4EE065A10EBE83B793022551;// 0x0FF0(0x00D8)
	bool                                               FlyUp_;                                                   // 0x10C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlyUpFast_;                                               // 0x10C9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x10CA(0x0002) MISSED OFFSET
	float                                              FlyingSpeed;                                              // 0x10CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Direction;                                                // 0x10D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AreWeFlying_;                                             // 0x10D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AreWeWalking_;                                            // 0x10D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAir_;                                                 // 0x10D6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlapFast_;                                                // 0x10D7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToGround;                                         // 0x10D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WalkingSpeed;                                             // 0x10DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayIdleLoop_;                                            // 0x10E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x10E1(0x0003) MISSED OFFSET
	int                                                RandomIdleAnimation;                                      // 0x10E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FlyingWalking_Seagull_AnimBlueprint.FlyingWalking_Seagull_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_TransitionResult_85D3882441A89AF9D5FEB4B847DCD7AA();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_TransitionResult_26198367487B141FB202BDBD05661D5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_TransitionResult_7FECDE4E4DA366AD6A3B22B3E577E46A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_TransitionResult_45DF9D124122C103C53995A519A86A90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_BlendListByInt_0D30FBBC48204B2E63F632A52F54BAB0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_TransitionResult_6245E1924FC5BF85E69D3E97058AEE05();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_BlendListByBool_4324FBBB463A3401F16A849FF167C231();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_6CE3493F4256B1A3478B91A0642F5D7C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_TransitionResult_5501ADF240D93F586EF3E49A04433476();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_63B88B7340AA4EF278300FBE836B662F();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint_AnimGraphNode_TransitionResult_2C3C6DFB48E6EB00ECE8BF8C56FD3679();
	void AnimNotify_IdleEnd();
	void ExecuteUbergraph_FlyingWalking_Seagull_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
