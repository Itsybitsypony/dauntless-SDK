#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_moonface_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass moonface_animbp.moonface_animbp_C
// 0x1304 (0x17A4 - 0x04A0)
class Umoonface_animbp_C : public UArchonAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04A0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_8B52FD9B4AD28208B7F42B81DA778350;      // 0x04A8(0x0068)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F4FAD4754A9F1529CC1A13A4149B2936;// 0x0510(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7EA0B80E4AAA587CC7A6BCB2402E65FD;// 0x0590(0x0080)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B3C426444DE6644C9A7E23A537F85E93;// 0x0610(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_AB0429644DB3257B93972B9CA4C6A3CA;// 0x06E0(0x0128)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_C9E11847496593F5429772AB76972A74;// 0x0808(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCD23F094004CAA1E9826DA83CAFF7D52;// 0x0930(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A7542AC491C82AEDBC7F3928C80E5C9;// 0x0978(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CCD23F094004CAA1E9826DA83CAFF7D5;// 0x09E8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_20B25C464824A3909C17D49D64B6A74C;// 0x0A30(0x00D8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F17BA29E47F9CCCB9991BAA8DE0A55FB;// 0x0B08(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_CC47F34A4256850CF5CF53A7C64404C4;// 0x0BD8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_41650C8A4772B19D85EE2AAA62392F23;// 0x0C80(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1BCEEC004BFA0BDA21A1F6A6A3D64093;// 0x0CD0(0x0050)
	struct FAnimNode_Root                              AnimGraphNode_Root_B645578C4BBF3219BFA81D81898FB28B;      // 0x0D20(0x0048)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0D68(0x0008) MISSED OFFSET
	struct FAnimNode_ArchonFootPlacement               AnimGraphNode_ArchonFootPlacement_6D07CB1948E71859D11AB09B18F79F1F;// 0x0D70(0x0520)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_8C23F6EB4855E73FDB771C8E69F13379;// 0x1290(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B3AF6BB249A86DB50968ADA134FA0058;// 0x1338(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13D73C7D4696ADF066C87DA7F53A620C;// 0x1388(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_1F034B254E41E52C96A26F945CCEA918;// 0x1440(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_15D2D10946EE71256F7B399AC20337AD;// 0x1488(0x0048)
	struct FAnimNode_Replay                            AnimGraphNode_Replay_9D74D29947A74ECDD754029E58CE28EB;    // 0x14D0(0x00F0)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_7069A5E74AA6A468553EF9A5A4FA7C3E;// 0x15C0(0x0158)
	float                                              Left_Wing_Alpha;                                          // 0x1718(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Right_Wing_Alpha;                                         // 0x171C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct Fbehemoth_anim_variables_struc              Behemoth_Variables;                                       // 0x1720(0x0054) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              Jaw_Rotation_Direction;                                   // 0x1774(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Look_At_Offset;                                           // 0x1778(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              VolumeOffset;                                             // 0x1784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Aim_Offset_Direction;                                     // 0x1788(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    Previous_Behemoth_Rotation;                               // 0x178C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enable_Aim_Offset;                                        // 0x1798(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1799(0x0003) MISSED OFFSET
	float                                              Aim_Offset_Alpha;                                         // 0x179C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct Fbehemoth_state_anim_variables_struct       BehemothStateVariables;                                   // 0x17A0(0x0004) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass moonface_animbp.moonface_animbp_C");
		return ptr;
	}


	void Debris(const struct FName& Socket, bool IsHigh);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_ArchonFootPlacement_6D07CB1948E71859D11AB09B18F79F1F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_ModifyBone_13D73C7D4696ADF066C87DA7F53A620C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_Replay_9D74D29947A74ECDD754029E58CE28EB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_RotationOffsetBlendSpace_7069A5E74AA6A468553EF9A5A4FA7C3E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_BlendListByBool_B3C426444DE6644C9A7E23A537F85E93();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_BlendListByBool_F17BA29E47F9CCCB9991BAA8DE0A55FB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_TransitionResult_7EA0B80E4AAA587CC7A6BCB2402E65FD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_TransitionResult_F4FAD4754A9F1529CC1A13A4149B2936();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_BlendSpacePlayer_AB0429644DB3257B93972B9CA4C6A3CA();
	void SetCustomState(const struct FName& CustomStateName);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_Debris_Feet();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_moonface_animbp_AnimGraphNode_BlendSpacePlayer_C9E11847496593F5429772AB76972A74();
	void AnimNotify_Debris_Hands();
	void SetEnableAimOffset(bool Enable);
	void ExecuteUbergraph_moonface_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
