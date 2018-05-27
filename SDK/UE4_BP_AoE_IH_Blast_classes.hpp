#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_AoE_IH_Blast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_AoE_IH_Blast.BP_AoE_IH_Blast_C
// 0x0008 (0x0468 - 0x0460)
class ABP_AoE_IH_Blast_C : public Aaoe_base_bp_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_AoE_IH_Blast.BP_AoE_IH_Blast_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_BP_AoE_IH_Blast(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
