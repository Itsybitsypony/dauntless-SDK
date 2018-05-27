#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_active_team_damage_effect_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lantern_active_team_damage_effect_buff.lantern_active_team_damage_effect_buff_C
// 0x0014 (0x0748 - 0x0734)
class Alantern_active_team_damage_effect_buff_C : public Alantern_active_base_buff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)
	class UDecalComponent*                             ActiveDecal;                                              // 0x0740(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lantern_active_team_damage_effect_buff.lantern_active_team_damage_effect_buff_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_lantern_active_team_damage_effect_buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
