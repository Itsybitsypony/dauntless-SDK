#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_foot_plant_detector_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass foot_plant_detector_component.foot_plant_detector_component_C
// 0x007E (0x024E - 0x01D0)
class Ufoot_plant_detector_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	TEnumAsByte<EFootPlantState>                       FootPlantState;                                           // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01D9(0x0003) MISSED OFFSET
	float                                              LHeightThreshold;                                         // 0x01DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LSpeedThreshold;                                          // 0x01E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PlantHeightThreshold;                                     // 0x01E4(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              PlantSpeedThreshold;                                      // 0x01E8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UnplantHeightThreshold;                                   // 0x01EC(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UnplantSpeedThreshold;                                    // 0x01F0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01F4(0x0004) MISSED OFFSET
	struct FName                                       JointName;                                                // 0x01F8(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              LPlantStartTime;                                          // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LUnplantStartTime;                                        // 0x0204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    FootPlanted;                                              // 0x0208(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FName                                       CurveNameOverride;                                        // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PlantTime;                                                // 0x0220(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	float                                              UnplantTime;                                              // 0x0224(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	struct FScriptMulticastDelegate                    FootUnplanted;                                            // 0x0228(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              LFilteredSpeed;                                           // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DrawDebug;                                                // 0x023C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x023D(0x0003) MISSED OFFSET
	float                                              DebugLifetime;                                            // 0x0240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LFootHeight;                                              // 0x0244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LFootSpeed;                                               // 0x0248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               LFootPlantedThisFrame;                                    // 0x024C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x024D(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass foot_plant_detector_component.foot_plant_detector_component_C");
		return ptr;
	}


	void GetFootPlantState(TEnumAsByte<EFootPlantState>* FootPlantState);
	void LGetFootPlantState(class AActor* Target, const struct FName& CurveOverride, const struct FName& Joint, float HeightThreshold, float SpeedThreshold, bool* Planted, float* FootHeight, float* FootSpeed);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_foot_plant_detector_component(int EntryPoint);
	void FootUnplanted__DelegateSignature(float FootSpeed, const struct FName& JointName);
	void FootPlanted__DelegateSignature(float DelayedFootSpeed, const struct FName& JointName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
