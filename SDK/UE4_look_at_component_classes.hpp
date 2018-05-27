#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_look_at_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass look_at_component.look_at_component_C
// 0x008C (0x025C - 0x01D0)
class Ulook_at_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	struct FVector                                     DesiredLookAtTarget;                                      // 0x01D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LookAtTarget;                                             // 0x01E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetSwitchThreshold;                                    // 0x01F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Elook_at_component_state>              State;                                                    // 0x01F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01F5(0x0003) MISSED OFFSET
	float                                              LookAtAlpha;                                              // 0x01F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EaseInTime;                                               // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EaseOutTime;                                              // 0x0200(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Enabled;                                                  // 0x0204(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0205(0x0003) MISSED OFFSET
	class UCurveFloat*                                 EaseOutWhenTargetBehindCurve;                             // 0x0208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EnableDebugRendering;                                     // 0x0210(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0211(0x0007) MISSED OFFSET
	struct FName                                       HeadJointName;                                            // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetSwitchSmoothing;                                    // 0x0220(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TargetTrackingSpeed;                                      // 0x0224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       TorsoJointName;                                           // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TorsoJointUpAxis;                                         // 0x0230(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x023C(0x0004) MISSED OFFSET
	class UCurveFloat*                                 EaseOutWhenCharacterHorizontal;                           // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       PelvisJointName;                                          // 0x0248(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PelvisJointForwardAxis;                                   // 0x0250(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass look_at_component.look_at_component_C");
		return ptr;
	}


	void ClearLookAtTarget();
	void GetLookAtAlpha(float* LookAtAlpha);
	void Disable();
	void Enable();
	void GetLookAtTarget(struct FVector* LookAtTarget);
	void SetLookAtTarget(const struct FVector& LookAtTarget);
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_look_at_component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
