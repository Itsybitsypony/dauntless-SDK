#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_aoe_base_slam_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass aoe_base_slam.aoe_base_slam_C
// 0x0090 (0x0540 - 0x04B0)
class Aaoe_base_slam_C : public Aaoe_simple_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             SlamFXSpawnPoint;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        bp_jumpslam;                                              // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Timeline_0_Decal_Fade_E0324C4A47E72FD42E114CB7B8C9D4D0;   // 0x04C8(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_0__Direction_E0324C4A47E72FD42E114CB7B8C9D4D0;   // 0x04CC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Timeline_1;                                               // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Grass_Flatten_Push_Distance_C0156C534F1B2DF957F80F903DB0B901;// 0x04D8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Grass_Flatten_Push_Strength_C0156C534F1B2DF957F80F903DB0B901;// 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Grass_Flatten__Direction_C0156C534F1B2DF957F80F903DB0B901;// 0x04E0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x04E1(0x0007) MISSED OFFSET
	class UTimelineComponent*                          Grass_Flatten;                                            // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Decal_Crack;                                              // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Is_Grass_At_Default_MPC;                                  // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	float                                              Default_Grass_Push_Strength;                              // 0x04FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Flatten_Grass_Delay;                                      // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	float                                              Default_Grass_Push_Distance;                              // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               AlignToGround;                                            // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0509(0x0007) MISSED OFFSET
	class UParticleSystem*                             SlamVFX;                                                  // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SlamVFX_Scale;                                            // 0x0518(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               ScaleVFXToRadius;                                         // 0x0524(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0525(0x0003) MISSED OFFSET
	struct FVector                                     DecalScale;                                               // 0x0528(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0534(0x0004) MISSED OFFSET
	class UMaterialInterface*                          DecalToSpawn;                                             // 0x0538(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass aoe_base_slam.aoe_base_slam_C");
		return ptr;
	}


	void UserConstructionScript();
	void Grass_Flatten__FinishedFunc();
	void Grass_Flatten__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void CustomAOELogic();
	void ExecuteUbergraph_aoe_base_slam(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
