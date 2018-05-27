#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_GC_GameplayCue_Combat_Trail_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C
// 0x0030 (0x0460 - 0x0430)
class AGC_GameplayCue_Combat_Trail_C : public AGameplayCueNotify_Actor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0430(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            Trail_References;                                         // 0x0440(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct Ftag_to_combat_trails_struct>        CombatTrailParams;                                        // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GC_GameplayCue_Combat_Trail.GC_GameplayCue_Combat_Trail_C");
		return ptr;
	}


	void GetFirstTrailThatMeetsRequirements(const struct FGameplayTagContainer& Tags, class AActor* Owner, TArray<struct Ftag_to_combat_trails_struct>* Effects, struct Ftag_to_combat_trails_struct* FirstMatch, bool* FoundTrail);
	void GetMeshAndSocket(const struct FGameplayTagContainer& Tags, class AActor* Actor, class USkeletalMeshComponent** Mesh, struct FName* TopSocket, struct FName* BottomSocket, struct FName* LeftSocket, struct FName* RightSocket, struct FName* MiddleSocket);
	void GetTrailEffectsForTags(const struct FGameplayTagContainer& Tags, TArray<struct FStruct_TagToTrailEffects>* Effects, TArray<struct FStruct_TagToTrailEffects>* Particle_Systems);
	void UserConstructionScript();
	void K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters);
	void ExecuteUbergraph_GC_GameplayCue_Combat_Trail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
