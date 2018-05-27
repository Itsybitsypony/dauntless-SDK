#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_stagger_lookup_table_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass stagger_lookup_table.stagger_lookup_table_C
// 0x0010 (0x0048 - 0x0038)
class Ustagger_lookup_table_C : public Uenum_lookup_table_C
{
public:
	TArray<struct Fstagger_lookup_table_entry>         StaggerData;                                              // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass stagger_lookup_table.stagger_lookup_table_C");
		return ptr;
	}


	void GetStaggerData(TEnumAsByte<Estagger_type> StaggerType, struct Fstagger_lookup_table_entry* StaggerData, bool* FoundData);
	void GenerateData(TArray<struct Fobject_lookup_table_struct>* DataEntries);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
