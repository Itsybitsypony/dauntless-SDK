#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_traversal_vent_00_bp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass traversal_vent_00_bp.traversal_vent_00_bp_C
// 0x0070 (0x03F8 - 0x0388)
class Atraversal_vent_00_bp_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (Transient, DuplicateTransient)
	class UAkComponent*                                Sound;                                                    // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_vent_activate;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        traversal_vent_00;                                        // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMarkerComponent*                            EditMarker;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    p_vent_idle;                                              // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Vent;                                                     // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlightTime;                                               // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Force;                                                    // 0x03D4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	class USplineComponent*                            Spline_Component;                                         // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    EffectToRemove;                                           // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_PlayerCharacter_C*                       Character;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass traversal_vent_00_bp.traversal_vent_00_bp_C");
		return ptr;
	}


	void IsCharacterValid(class ABP_PlayerCharacter_C* Char, bool* Valid);
	void GetHorizontalForce(float Time, float* xForce, float* yForce);
	void GetFlightTime(float Height, float Gravity, float* Time);
	void GetVerticalForce(class AArchonCharacterBase* Character, struct FVector* VectorVertical, float* VerticalHeight, float* Gravity);
	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void ExecuteUbergraph_traversal_vent_00_bp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
