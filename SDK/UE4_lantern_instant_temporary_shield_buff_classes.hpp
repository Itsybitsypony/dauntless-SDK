#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_instant_temporary_shield_buff_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lantern_instant_temporary_shield_buff.lantern_instant_temporary_shield_buff_C
// 0x0014 (0x06F0 - 0x06DC)
class Alantern_instant_temporary_shield_buff_C : public Abase_buff_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x06DC(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	bool                                               ShouldRemoveTotalShieldValue;                             // 0x06E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x06E9(0x0003) MISSED OFFSET
	float                                              Magnitude;                                                // 0x06EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lantern_instant_temporary_shield_buff.lantern_instant_temporary_shield_buff_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnAdded();
	void OnRemoved();
	void CheckForAllShieldGone();
	void RemoveEffects();
	void AddEffects();
	void ExecuteUbergraph_lantern_instant_temporary_shield_buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
