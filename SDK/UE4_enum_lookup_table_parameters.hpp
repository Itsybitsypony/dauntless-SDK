#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_enum_lookup_table_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function enum_lookup_table.enum_lookup_table_C.GenerateDataFromClassList
struct Uenum_lookup_table_C_GenerateDataFromClassList_Params
{
	TArray<class UClass*>                              LookupTableClassList;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function enum_lookup_table.enum_lookup_table_C.GenerateData
struct Uenum_lookup_table_C_GenerateData_Params
{
	TArray<struct Fobject_lookup_table_struct>         DataEntries;                                              // (Parm, OutParm, ZeroConstructor)
};

// Function enum_lookup_table.enum_lookup_table_C.GetDataForEnum
struct Uenum_lookup_table_C_GetDataForEnum_Params
{
	unsigned char                                      Enum;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Ubase_lookup_data_wrapper_C*                 Data;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
