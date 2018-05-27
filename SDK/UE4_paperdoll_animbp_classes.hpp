#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_paperdoll_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass paperdoll_animbp.paperdoll_animbp_C
// 0x1980 (0x1D08 - 0x0388)
class Upaperdoll_animbp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1C6AA8FD4E3B1AA73E305991AB211393;      // 0x0390(0x0068)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_DC25B0174C5AB4C6904935BE5729423D;// 0x03F8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4AE02CE24115D0A65AB4C686E2F30F8B;// 0x0440(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4261590E43B2FD64DA86779F4A9BA94C;// 0x04F8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_41E347C54D887C67EDB9DA9C370737D9;// 0x05B0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_829572444E46149D4F775CB81B118B98;// 0x0668(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7851E7BB4C8F9BE2D0180385DF7EC75F;// 0x0720(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6A3CB148433647D6B3D84A86EB577739;// 0x07D8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C24EABF34F07F838F87D4AAD8D6A813E;// 0x0890(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EB0F31BD499A401CF5AB31AB940A9AAD;// 0x0948(0x00B8)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_AC7E2AFB49DC009B087A06AC165DD2A5; // 0x0A00(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_62085FC54F599293A1C9C4B4FED24687;// 0x0AE0(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_D13BAFAD468FFA0C07DBA6859C8021C7; // 0x0B28(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_29DFC6B84C68BAE4C9CD7D9A21C9DA04;      // 0x0C08(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42929A86470D2E7D622478846C99CB09;// 0x0C50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_23816A8E4E0D6727C3A8C8B8D9B931F6;// 0x0CD0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3BDBDF024CFBF00D795363A42DA44B9E;// 0x0D50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12A5255B411C732964C19A904C636436;// 0x0DD0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF07D84D4A054A66DF890E870917CFFD;// 0x0E50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_974F8B524FE1824418C361873049B2EA;// 0x0ED0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31A7CFFF4E48B44A288626A4DA705D47;// 0x0F50(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_00397FF7403C73604FDBE4B46C6FA780;// 0x0FD0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2E32CBF84025A5D1AF1444A16D0CD732;// 0x1050(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D338B8C342D98D450894B3926C699B55;// 0x10D0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3D2CCBD24C999FA63D4048A67C7CA83D;// 0x1150(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8F2522E344410929DBFA8490F9B9C8AD;// 0x11D0(0x0080)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C6CA4B1548E4673D4C8EE8AE14EECF4C;// 0x1250(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E5EB2CFB41BA9209C2CB698C7E789679;// 0x12C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2DDD999943CD2286203D54B4A6B1CB35;// 0x1308(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_915251D84EFA3AF99B6E7CB9F291EBC1;// 0x1378(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4633A5CA4B56984DBA0A33BA5492C58A;// 0x13C0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FD7EFFA649A344CDA1CE5F8524A52EFD;// 0x1430(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_727030784D5F9D46288B6B9E3D670BD8;// 0x1478(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_93FF28ED4B5DB7967D25D095324B1B4A;// 0x14E8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3E62160F43B6C3D5E93EE7B817BAFFDA;// 0x1530(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_05E095394F005C5F198DBA8D80EDFC22;// 0x15A0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6141F5B04260D567C2886B9C95603D05;// 0x15E8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_6FA8F0DE4A83F4A47B0A38A9FA958347;// 0x1658(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0BD2D9D9416FB63856FD52BDC2879B16;// 0x16A0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4B810F994AA909AE78474ABFFCA9432D;// 0x1710(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_E2B591EA466526959F47D483A3D0739E;// 0x1758(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6540367343AF8F8F47ABBBBEE0A4D229;// 0x1830(0x00B8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_F012F1CB4E458A11AE457BA12C1CAC0E;// 0x18E8(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4354CCC243488E8B82B407B9D40CF6D4;// 0x19C8(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4B3D8E0041003107471396B7D0149673;// 0x1A80(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_646C4D30416DCA394DB4009E40B3C2A1;// 0x1AC8(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7297EB7B4A47CAD2C2102EBDD00444C1;// 0x1B70(0x0050)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A0D57EEB421B24E5B79BC780694B7FBD;// 0x1BC0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3E6974F842729E4AE97A57A9A052F71D;// 0x1C08(0x0050)
	float                                              female_additive;                                          // 0x1C58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x1C5C(0x0004) MISSED OFFSET
	struct FTransform                                  LHand_Transform;                                          // 0x1C60(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  RHand_Transform;                                          // 0x1C90(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	EWeaponType                                        Current_Weapon_Type;                                      // 0x1CC0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1CC1(0x0003) MISSED OFFSET
	struct FVector                                     Wpn_Root_Loc_Right;                                       // 0x1CC4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Wpn_Root_Loc_Left;                                        // 0x1CD0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              _2h_Retargeting_Ratio;                                    // 0x1CDC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              _1h_Retargeting_Ratio;                                    // 0x1CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x1CE4(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      Paperdoll_mesh;                                           // 0x1CE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IH_Offset_Alpha;                                          // 0x1CF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CB_Focused;                                               // 0x1CF4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EB_Focused;                                               // 0x1CF5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               MS_Focused;                                               // 0x1CF6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GA_Focused;                                               // 0x1CF7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IH_Focused;                                               // 0x1CF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EArchonBodyType                                    BodyType;                                                 // 0x1CF9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x1CFA(0x0002) MISSED OFFSET
	float                                              FemaleLanternOffsetAlpha;                                 // 0x1CFC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Lantern_Focused;                                          // 0x1D00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x1D01(0x0003) MISSED OFFSET
	float                                              HandIkAlpha;                                              // 0x1D04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass paperdoll_animbp.paperdoll_animbp_C");
		return ptr;
	}


	void getCurrentWeaponType();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_00397FF7403C73604FDBE4B46C6FA780();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_2E32CBF84025A5D1AF1444A16D0CD732();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_D338B8C342D98D450894B3926C699B55();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_12A5255B411C732964C19A904C636436();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_3D2CCBD24C999FA63D4048A67C7CA83D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_8F2522E344410929DBFA8490F9B9C8AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_3BDBDF024CFBF00D795363A42DA44B9E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_23816A8E4E0D6727C3A8C8B8D9B931F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_ModifyBone_6540367343AF8F8F47ABBBBEE0A4D229();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_BlendListByEnum_F012F1CB4E458A11AE457BA12C1CAC0E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_ModifyBone_4354CCC243488E8B82B407B9D40CF6D4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_42929A86470D2E7D622478846C99CB09();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TwoBoneIK_D13BAFAD468FFA0C07DBA6859C8021C7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TwoBoneIK_AC7E2AFB49DC009B087A06AC165DD2A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_ModifyBone_6A3CB148433647D6B3D84A86EB577739();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_ModifyBone_7851E7BB4C8F9BE2D0180385DF7EC75F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_ModifyBone_41E347C54D887C67EDB9DA9C370737D9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_31A7CFFF4E48B44A288626A4DA705D47();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_ModifyBone_4261590E43B2FD64DA86779F4A9BA94C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_ModifyBone_4AE02CE24115D0A65AB4C686E2F30F8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_BF07D84D4A054A66DF890E870917CFFD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_paperdoll_animbp_AnimGraphNode_TransitionResult_974F8B524FE1824418C361873049B2EA();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_paperdoll_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
