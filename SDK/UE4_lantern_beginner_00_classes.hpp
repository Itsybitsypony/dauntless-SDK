#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lantern_beginner_00_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass lantern_beginner_00.lantern_beginner_00_C
// 0x000C (0x0568 - 0x055C)
class Alantern_beginner_00_C : public Alantern_base_bp_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x055C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass lantern_beginner_00.lantern_beginner_00_C");
		return ptr;
	}


	void UserConstructionScript();
	void BP_OnLanternEquipped();
	void ExecuteUbergraph_lantern_beginner_00(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
