#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_loco_lookup_table_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_loco_lookup_table.behemoth_loco_lookup_table_C
// 0x0010 (0x0048 - 0x0038)
class Ubehemoth_loco_lookup_table_C : public Uenum_lookup_table_C
{
public:
	TArray<struct Fbehemoth_loco_info>                 LocoData;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_loco_lookup_table.behemoth_loco_lookup_table_C");
		return ptr;
	}


	void GetBehemothLocoData(TEnumAsByte<Ebehemoth_loco_type> LocoType, struct Fbehemoth_loco_info* ActionData, bool* FoundData);
	void GenerateData(TArray<struct Fobject_lookup_table_struct>* DataEntries);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
