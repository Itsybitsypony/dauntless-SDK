#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_gamemode_behemoth_spawner_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C
// 0x003C (0x020C - 0x01D0)
class Ubp_gamemode_behemoth_spawner_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01D0(0x0008) (Transient, DuplicateTransient)
	bool                                               EnableBehemothIntros;                                     // 0x01D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x01D9(0x0007) MISSED OFFSET
	class ABP_PatrolCenterPoint_C*                     SelectedPatrolPoint;                                      // 0x01E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               BehemothSpawned;                                          // 0x01E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x01E9(0x0007) MISSED OFFSET
	class UClass*                                      SelectedMonsterClass;                                     // 0x01F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AArchonBehemoth*                             SpawnedBehemoth;                                          // 0x01F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class Abehemoth_cinematic_intro_marker_C*          SelectedCinematicMarker;                                  // 0x0200(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                BehemothCount;                                            // 0x0208(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_gamemode_behemoth_spawner_component.bp_gamemode_behemoth_spawner_component_C");
		return ptr;
	}


	void TrySetBehemothPowerOverride(class AArchonBehemoth* Behemoth, const class FString& BehemothName, const struct FHunt_BehemothInfo& HuntBehemothInfo, bool* OverrideFound);
	void Initialize();
	void AddOffsetToLocation(const struct FVector& OriginalLocation, struct FVector* NewLocation);
	void SpawnBehemothAtLocation(class UClass* MonsterClass, const struct FVector& Location, const struct FRotator& Rotation, class AArchonBehemoth** Behemoth, struct FTransform* SpawnTransform);
	void SelectSpawnLocation(class ABP_PatrolCenterPoint_C** SelectedPatrolPoint, class Abehemoth_cinematic_intro_marker_C** SelectedCinematicMarker);
	void SpawnBehemothAtPatrolPoint(class UClass* MonsterClass, class ABP_PatrolCenterPoint_C* PatrolPoint, class Abehemoth_cinematic_intro_marker_C* CinematicMarker, class AArchonBehemoth** Behemoth);
	bool ShouldShowBehemothIntros();
	void SpawnBehemoth(class UClass* SelectedMonsterClass, bool IntroCinematicsEnabled);
	void ExecuteUbergraph_bp_gamemode_behemoth_spawner_component(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
