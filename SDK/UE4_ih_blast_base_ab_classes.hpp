#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ih_blast_base_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ih_blast_base_ab.ih_blast_base_ab_C
// 0x0008 (0x0A88 - 0x0A80)
class Uih_blast_base_ab_C : public Uweapon_eqs_base_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A80(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ih_blast_base_ab.ih_blast_base_ab_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_ih_blast_base_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
