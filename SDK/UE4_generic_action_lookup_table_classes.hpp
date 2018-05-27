#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_generic_action_lookup_table_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass generic_action_lookup_table.generic_action_lookup_table_C
// 0x0010 (0x0048 - 0x0038)
class Ugeneric_action_lookup_table_C : public Uenum_lookup_table_C
{
public:
	TArray<struct Fgeneric_action_set_entry>           GenericActionData;                                        // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass generic_action_lookup_table.generic_action_lookup_table_C");
		return ptr;
	}


	void GetGenericActionData(TEnumAsByte<Ebehemoth_generic_action_type> ActionType, struct Fgeneric_action_set_entry* ActionData, bool* FoundData);
	void GenerateData(TArray<struct Fobject_lookup_table_struct>* DataEntries);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
