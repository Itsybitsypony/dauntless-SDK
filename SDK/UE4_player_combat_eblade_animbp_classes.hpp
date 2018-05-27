#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_combat_eblade_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass player_combat_eblade_animbp.player_combat_eblade_animbp_C
// 0x003C (0x9270 - 0x9234)
class Uplayer_combat_eblade_animbp_C : public Uplayer_combat_base_animbp_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x9234(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x9238(0x0008) (Transient, DuplicateTransient)
	float                                              Min_Value;                                                // 0x9240(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Max_Value;                                                // 0x9244(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Range_0;                                                  // 0x9248(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Range_1;                                                  // 0x924C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                NewVar_0_1;                                               // 0x9250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              GlowIntensity;                                            // 0x9260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x9264(0x0004) MISSED OFFSET
	class Aatmospheres_base_bp_C*                      current_atmosphere;                                       // 0x9268(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass player_combat_eblade_animbp.player_combat_eblade_animbp_C");
		return ptr;
	}


	void GetAtmosphereSpawner(class Aatmosphere_spawner_bp_C** Atmosphere_Spawner);
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void OnAtmosphereChanged(class AAtmosphereBase* SpawnedAtmosphere);
	void ExecuteUbergraph_player_combat_eblade_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
