#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_Healing_Pylon_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C
// 0x0010 (0x0684 - 0x0674)
class UAbility_QuickItem_Healing_Pylon_01_C : public UAbility_QuickItem_Base_Pylon_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0678(0x0008) (Transient, DuplicateTransient)
	float                                              HealthPerSecond;                                          // 0x0680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_Healing_Pylon_01.Ability_QuickItem_Healing_Pylon_01_C");
		return ptr;
	}


	void PylonTick(struct FVector* PylonLocation);
	void HealVFX(class AActor* VFXTarget);
	void ExecuteUbergraph_Ability_QuickItem_Healing_Pylon_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
