#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Ability_QuickItem_ReviveTalisman_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_QuickItem_ReviveTalisman.Ability_QuickItem_ReviveTalisman_C
// 0x000C (0x0624 - 0x0618)
class UAbility_QuickItem_ReviveTalisman_C : public UAbility_QuickItem_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (Transient, DuplicateTransient)
	float                                              PercentMaxHealthHealed;                                   // 0x0620(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_QuickItem_ReviveTalisman.Ability_QuickItem_ReviveTalisman_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_Ability_QuickItem_ReviveTalisman(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
