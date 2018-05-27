#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cine_camera_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass cine_camera_animbp.cine_camera_animbp_C
// 0x0224 (0x05AC - 0x0388)
class Ucine_camera_animbp_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A60D36FE4A5BD77979376F929FBCF4BB;      // 0x0390(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BFEE1472457A71914D9011B5D3C8651C;      // 0x03D8(0x0068)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_C837709845D22DB97EFD1ABE655B49B8;// 0x0440(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13F333D24F8D0EBC179AB2AE88C2728B;// 0x0488(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AAD836AE4394817243A726801F9A3D21;// 0x0540(0x0048)
	struct FRotator                                    WorldRotationOffset;                                      // 0x0588(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              WorldOverrideWeight;                                      // 0x0594(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               OverrideTransform;                                        // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0599(0x0003) MISSED OFFSET
	float                                              BlendTime;                                                // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldTranslationOffset;                                   // 0x05A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass cine_camera_animbp.cine_camera_animbp_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_cine_camera_animbp_AnimGraphNode_ModifyBone_13F333D24F8D0EBC179AB2AE88C2728B();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_cine_camera_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
