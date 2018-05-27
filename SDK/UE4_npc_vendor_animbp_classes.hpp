#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_vendor_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass npc_vendor_animbp.npc_vendor_animbp_C
// 0x0F8C (0x1314 - 0x0388)
class Unpc_vendor_animbp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2A45A5234F0F64B0BED5FBBF25C21F3A;// 0x0390(0x0050)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5E35151B4FE387810E5F0DAC01EE1F7A;// 0x03E0(0x00A8)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_30DFAE6F4D0529BD5210A6A4830F7B5F;// 0x0488(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FD388DDC4905DA70D346D3A775B3A056;// 0x0568(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_538A5C2E413C261B852EC88F466F685E;// 0x05B0(0x0070)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1548EBCD45A04DD93E6468A08833107E;// 0x0620(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C1B3E69048EDDC2D7FF3B8B9AEA14E5A;// 0x0668(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_62D3834E42A2F58D3A26FDB52502B479;// 0x0720(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D59197E043E58FFE61FF2F9BB170FFC0;// 0x07D8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6CB77A9442C5C2D95125C5B4C5E3E880;// 0x0890(0x00B8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6BCE6C2F4AC6BC3C7B6859A6137E8622;// 0x0948(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85B44A6C4F5F280131DF2C981C67A6FF;// 0x0A18(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_Root_0EA18D554481A42CE4BB22B8BF7DF2D9;      // 0x0A88(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E879A1C04F0A6047886EB6AB5F01FABE;// 0x0AD0(0x0070)
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_AF8EF1BC4DF81E777C9140B92C864317; // 0x0B40(0x0220)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AAA9BD0F4A0B6973AC76F996BC069E5D;      // 0x0D60(0x0068)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_DFB5D2624847C5654D2ACE882F688BF1;// 0x0DC8(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_61D77421413FB42E2F8BB79BAE1381E5;// 0x1048(0x0280)
	float                                              VoiceVolume;                                              // 0x12C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    LookAtPlayer;                                             // 0x12CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    CurrentRotator;                                           // 0x12D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Min_Value;                                                // 0x12E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Value;                                                // 0x12E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Range0;                                                   // 0x12EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Range1;                                                   // 0x12F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Mouth_0_Alpha;                                            // 0x12F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Mouth_1_Alpha;                                            // 0x12F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Mouth_2_Alpha;                                            // 0x12FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VoiceVolumeNormalized;                                    // 0x1300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CanLookatPlayer;                                          // 0x1304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1305(0x0003) MISSED OFFSET
	float                                              LookAtPlayerAlpha;                                        // 0x1308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Entering_;                                                // 0x130C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInInteraction_;                                         // 0x130D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ReadyToTransition;                                        // 0x130E(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               VendorFeatureEnabled;                                     // 0x130F(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              isKatAlpha;                                               // 0x1310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass npc_vendor_animbp.npc_vendor_animbp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_npc_vendor_animbp_AnimGraphNode_BlendListByBool_6BCE6C2F4AC6BC3C7B6859A6137E8622();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_npc_vendor_animbp_AnimGraphNode_ModifyBone_6CB77A9442C5C2D95125C5B4C5E3E880();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_npc_vendor_animbp_AnimGraphNode_ModifyBone_D59197E043E58FFE61FF2F9BB170FFC0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_npc_vendor_animbp_AnimGraphNode_ModifyBone_62D3834E42A2F58D3A26FDB52502B479();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_npc_vendor_animbp_AnimGraphNode_ModifyBone_C1B3E69048EDDC2D7FF3B8B9AEA14E5A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_npc_vendor_animbp_AnimGraphNode_LayeredBoneBlend_30DFAE6F4D0529BD5210A6A4830F7B5F();
	void SetIsEntering(bool IsEntering);
	void SetIsInteracting(bool IsInteracting_);
	void AnimNotify_ClearIsEntering();
	void AnimNotify_ClearReadyToTransition();
	void SetReadyToTransition(bool ReadyToTransition_);
	void ExecuteUbergraph_npc_vendor_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
