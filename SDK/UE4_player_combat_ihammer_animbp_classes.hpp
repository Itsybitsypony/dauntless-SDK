#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_combat_ihammer_animbp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass player_combat_ihammer_animbp.player_combat_ihammer_animbp_C
// 0x000C (0x9240 - 0x9234)
class Uplayer_combat_ihammer_animbp_C : public Uplayer_combat_base_animbp_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x9234(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x9238(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass player_combat_ihammer_animbp.player_combat_ihammer_animbp_C");
		return ptr;
	}


	void OnAmmoCountChanged_Event_1(int NewAmmoCount);
	void ExecuteUbergraph_player_combat_ihammer_animbp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
