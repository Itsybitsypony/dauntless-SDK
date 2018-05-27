#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_keyword_fury_5items_ab_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass keyword_fury_5items_ab.keyword_fury_5items_ab_C
// 0x0008 (0x05E8 - 0x05E0)
class Ukeyword_fury_5items_ab_C : public Ukeyword_fury_4items_ab_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05E0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass keyword_fury_5items_ab.keyword_fury_5items_ab_C");
		return ptr;
	}


	void ApplyOnDamageGivenEffect();
	void ExecuteUbergraph_keyword_fury_5items_ab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
