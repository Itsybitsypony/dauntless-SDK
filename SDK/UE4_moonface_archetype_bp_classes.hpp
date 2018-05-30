#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_moonface_archetype_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass moonface_archetype_bp.moonface_archetype_bp_C
// 0x0068 (0x12EC - 0x1284)
class Amoonface_archetype_bp_C : public Amixed_flier_archetype_bp_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x1284(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x1288(0x0008) (Transient, DuplicateTransient)
	class Umonsterpart_bpc_C*                          tail;                                                     // 0x1290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArchonFootIKComponent*                      ArchonFootIK_0_1;                                         // 0x1298(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Look_At_Arrow_1;                                          // 0x12A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Local_Emissive_Blend_0_Interpolated_Value_379F942A495445488EE8EC9FB3F681EB;// 0x12A8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Local_Emissive_Blend_0__Direction_379F942A495445488EE8EC9FB3F681EB;// 0x12AC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x12AD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Local_Emissive_Blend_1;                                   // 0x12B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Local_Emissive_Blend_No_Animation_0_Interpolated_Value_738C59C84C5198628B853C8F9986E88D;// 0x12B8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Local_Emissive_Blend_No_Animation_0__Direction_738C59C84C5198628B853C8F9986E88D;// 0x12BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x12BD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Local_Emissive_Blend_No_Animation_1;                      // 0x12C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Morph_Target_Names_1;                                     // 0x12C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Voice_Volume_1;                                           // 0x12D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Base_Eye_Emissive_Color_1;                                // 0x12DC(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass moonface_archetype_bp.moonface_archetype_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void Local_Emissive_Blend_No_Animation_0__FinishedFunc();
	void Local_Emissive_Blend_No_Animation_0__UpdateFunc();
	void Local_Emissive_Blend_0__FinishedFunc();
	void Local_Emissive_Blend_0__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void Client_Stop_Rage_VFX(bool* From_Animation_, float* Deactivation_Delay);
	void Event_Stop_Local_Rage_VFX(bool* From_Animation_);
	void ExecuteUbergraph_moonface_archetype_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
