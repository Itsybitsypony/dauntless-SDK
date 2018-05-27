#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_eb_q_projectile_alpha_snowflake_bp_v2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass eb_q_projectile_alpha_snowflake_bp_v2.eb_q_projectile_alpha_snowflake_bp_v2_C
// 0x0034 (0x0584 - 0x0550)
class Aeb_q_projectile_alpha_snowflake_bp_v2_C : public Aaoe_beaver_groundstomp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    p_debris_snow_05;                                         // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        ice_wall_00_spire;                                        // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             RotatorOffset;                                            // 0x0568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_1_Scale_BAC766A04E9C206CCA351ABB9F2B5157;        // 0x0570(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_1__Direction_BAC766A04E9C206CCA351ABB9F2B5157;   // 0x0574(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0575(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_2;                                               // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandFloat;                                                // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass eb_q_projectile_alpha_snowflake_bp_v2.eb_q_projectile_alpha_snowflake_bp_v2_C");
		return ptr;
	}


	void UserConstructionScript();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_eb_q_projectile_alpha_snowflake_bp_v2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
