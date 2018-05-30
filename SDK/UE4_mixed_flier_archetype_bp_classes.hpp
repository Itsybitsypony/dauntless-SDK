#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_mixed_flier_archetype_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass mixed_flier_archetype_bp.mixed_flier_archetype_bp_C
// 0x008C (0x1284 - 0x11F8)
class Amixed_flier_archetype_bp_C : public ABp_Behemoth_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x11F8(0x0008) (Transient, DuplicateTransient)
	class UArchonFootIKComponent*                      ArchonFootIK_1;                                           // 0x1200(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UArrowComponent*                             Look_At_Arrow;                                            // 0x1208(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Umonsterpart_bpc_C*                          BackLeft;                                                 // 0x1210(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Umonsterpart_bpc_C*                          BackRight;                                                // 0x1218(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Umonsterpart_bpc_C*                          FrontLeft;                                                // 0x1220(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Umonsterpart_bpc_C*                          FrontRight;                                               // 0x1228(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Umonsterpart_bpc_C*                          Head;                                                     // 0x1230(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class Umonsterpart_bpc_C*                          Body;                                                     // 0x1238(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Local_Emissive_Blend_Interpolated_Value_A3E5FE324866658C2B241F98FED08B33;// 0x1240(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Local_Emissive_Blend__Direction_A3E5FE324866658C2B241F98FED08B33;// 0x1244(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1245(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Local_Emissive_Blend;                                     // 0x1248(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Local_Emissive_Blend_No_Animation_Interpolated_Value_0575378B4B9156D9FF47AEACE20F6A6E;// 0x1250(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Local_Emissive_Blend_No_Animation__Direction_0575378B4B9156D9FF47AEACE20F6A6E;// 0x1254(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x1255(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Local_Emissive_Blend_No_Animation;                        // 0x1258(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               Morph_Target_Names;                                       // 0x1260(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Voice_Volume;                                             // 0x1270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                Base_Eye_Emissive_Color;                                  // 0x1274(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass mixed_flier_archetype_bp.mixed_flier_archetype_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void Local_Emissive_Blend_No_Animation__FinishedFunc();
	void Local_Emissive_Blend_No_Animation__UpdateFunc();
	void Local_Emissive_Blend__FinishedFunc();
	void Local_Emissive_Blend__UpdateFunc();
	void ReceiveTick(float* DeltaSeconds);
	void Client_Stop_Rage_VFX(bool* From_Animation_, float* Deactivation_Delay);
	void Event_Stop_Local_Rage_VFX(bool From_Animation_);
	void ExecuteUbergraph_mixed_flier_archetype_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
