#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Core_basic_00_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Core_basic_00_bp.Core_basic_00_bp_C
// 0x00D0 (0x0458 - 0x0388)
class ACore_basic_00_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UStaticMeshComponent*                        knob0;                                                    // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Stopper;                                                  // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal_3;                                                  // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal_1;                                                  // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_StopperPop;                                             // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    P_ElectroTesla;                                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal_Behemoth;                                           // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             Decal_2;                                                  // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        BasicCoreShell;                                           // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SettleTime_CoreAnim_SettleIn_4DFE195546787F9F37FFE886E4FACA3D;// 0x03E0(0x000C) (IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    SettleTime__Direction_4DFE195546787F9F37FFE886E4FACA3D;   // 0x03EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	class UTimelineComponent*                          SettleTime;                                               // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDecalComponent*                             d_BehemothStamp;                                          // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Momentum_RotationCharge;                                  // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpeedWobble_Rotation_Y;                                   // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FText                                       DecalText_01;                                             // 0x0408(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTextRenderComponent*>                TextRenderComponents;                                     // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UMaterialInstanceDynamic*                    DecalMaterialInstance0;                                   // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalMaterialInstance1;                                   // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    DecalMaterialInstance2;                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    CoreMaterial;                                             // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    KnobMaterial;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Core_basic_00_bp.Core_basic_00_bp_C");
		return ptr;
	}


	void UserConstructionScript();
	void SettleTime__FinishedFunc();
	void SettleTime__UpdateFunc();
	void UpdateSpeedWobble_ReduceSlow();
	void UpdateSpeedWobble_Mid();
	void UpdateSpeedWobble_None();
	void Reset_NoWobble();
	void Reset_Mid();
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateWobble_AddSlow();
	void Add_Text_Decal();
	void RemoveDecals();
	void UpdateDynamicDecal(TAssetPtr<class UTexture2D> Texture2D, const struct FLinearColor& Value);
	void SetCoreTint(const struct FLinearColor& Value);
	void ExecuteUbergraph_Core_basic_00_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
