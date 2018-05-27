#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_FlyingWalking_Crow_AnimBlueprint_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FlyingWalking_Crow_AnimBlueprint.FlyingWalking_Crow_AnimBlueprint_C
// 0x0E84 (0x120C - 0x0388)
class UFlyingWalking_Crow_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B8439BB7464D98ABEAF02BA494274016;      // 0x0390(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40136042482D6DD780797BA85A8DAA33;// 0x03E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E4FC0C04CC4B70985D5CFAF1586249E;// 0x0460(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_26198367487B141FB202BDBD05661D5F;// 0x04E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2C3C6DFB48E6EB00ECE8BF8C56FD3679;// 0x0560(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6DD8AFF746B7A5634364E38F50854022;// 0x05E0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7FECDE4E4DA366AD6A3B22B3E577E46A;// 0x0660(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_45DF9D124122C103C53995A519A86A90;// 0x06E0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_68F4C72C42F5C47C6F92EA8472677DD5;// 0x0760(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2115071847BAEEC86CB23397B25DA688;// 0x07D0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AA04A5494143472DEE80EC8CF9485614;// 0x0840(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DED443F640546F80D522BA93AD2587B5;// 0x08B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_02D63604496626B3CBE2C99689D14398;// 0x0920(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6B3CC7D2450318F2A0686FB37D57E67D;// 0x0990(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DCD62CB64C106F61F3908EA5D5A219C8;// 0x0A00(0x0070)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_1679FD9845268B88EA8E0180902915BF;// 0x0A70(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_530C73DC4CAEB13B9B30BEB3721D4887;// 0x0B40(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB811B3B402EBC4B2C6410816A113431;// 0x0B88(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4324FBBB463A3401F16A849FF167C231;// 0x0BF8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_1AB318E9470533B63BCC4FA5CB239305;// 0x0CC8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2939083D4C66C2873566748BBF17A5E8;// 0x0DF0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_7A90063142904E77A42C4192E7156D24;// 0x0E38(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B622749F43E618A1F1C0D4BDF08754C1;// 0x0F60(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_202B7931413CA3260B6C14A33775AAA7;// 0x0FA8(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7426AF7C404CDD684167C78ECF0A9533;// 0x10D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_34EED0794BA5A1F41E3C25AFE9CFE643;// 0x1118(0x00D8)
	float                                              Direction;                                                // 0x11F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Flying_Speed;                                             // 0x11F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Walking_Speed;                                            // 0x11F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AreWeFlying_;                                             // 0x11FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Are_We_Walking_;                                          // 0x11FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInAir_;                                                 // 0x11FE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FlapFast_;                                                // 0x11FF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToGround;                                         // 0x1200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayIdleLoop_;                                            // 0x1204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1205(0x0003) MISSED OFFSET
	int                                                RandomIdleAnimation;                                      // 0x1208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FlyingWalking_Crow_AnimBlueprint.FlyingWalking_Crow_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_TransitionResult_6DD8AFF746B7A5634364E38F50854022();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_TransitionResult_7FECDE4E4DA366AD6A3B22B3E577E46A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_TransitionResult_26198367487B141FB202BDBD05661D5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_TransitionResult_45DF9D124122C103C53995A519A86A90();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_BlendListByInt_1679FD9845268B88EA8E0180902915BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_TransitionResult_2E4FC0C04CC4B70985D5CFAF1586249E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_BlendListByBool_4324FBBB463A3401F16A849FF167C231();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_1AB318E9470533B63BCC4FA5CB239305();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_7A90063142904E77A42C4192E7156D24();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_TransitionResult_40136042482D6DD780797BA85A8DAA33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_202B7931413CA3260B6C14A33775AAA7();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint_AnimGraphNode_TransitionResult_2C3C6DFB48E6EB00ECE8BF8C56FD3679();
	void AnimNotify_IdleEnd();
	void ExecuteUbergraph_FlyingWalking_Crow_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
