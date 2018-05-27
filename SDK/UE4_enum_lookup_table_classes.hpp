#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_enum_lookup_table_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass enum_lookup_table.enum_lookup_table_C
// 0x0010 (0x0038 - 0x0028)
class Uenum_lookup_table_C : public UObject
{
public:
	TArray<struct Fobject_lookup_table_struct>         INTERNAL_DataTable;                                       // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass enum_lookup_table.enum_lookup_table_C");
		return ptr;
	}


	void GenerateDataFromClassList(TArray<class UClass*>* LookupTableClassList);
	void GenerateData(TArray<struct Fobject_lookup_table_struct>* DataEntries);
	void GetDataForEnum(unsigned char Enum, class Ubase_lookup_data_wrapper_C** Data);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
