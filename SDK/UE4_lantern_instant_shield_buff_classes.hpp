#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_instant_shield_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lantern_instant_shield_buff.lantern_instant_shield_buff_C
// 0x0014 (0x0748 - 0x0734)
class Alantern_instant_shield_buff_C : public Alantern_active_base_buff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0734(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0738(0x0008) (Transient, DuplicateTransient)
	float                                              ShieldMagnitude;                                          // 0x0740(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Duration;                                                 // 0x0744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lantern_instant_shield_buff.lantern_instant_shield_buff_C");
		return ptr;
	}


	void UserConstructionScript();
	void MulticastOnAdded();
	void ExecuteUbergraph_lantern_instant_shield_buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
