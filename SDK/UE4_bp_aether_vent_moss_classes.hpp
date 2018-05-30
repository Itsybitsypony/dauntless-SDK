#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_aether_vent_moss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass bp_aether_vent_moss.bp_aether_vent_moss_C
// 0x000C (0x0588 - 0x057C)
class Abp_aether_vent_moss_C : public Abp_aether_vent_base_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x057C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass bp_aether_vent_moss.bp_aether_vent_moss_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_bp_aether_vent_moss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
