#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_stagger_lookup_table_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function stagger_lookup_table.stagger_lookup_table_C.GetStaggerData
struct Ustagger_lookup_table_C_GetStaggerData_Params
{
	TEnumAsByte<Estagger_type>                         StaggerType;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fstagger_lookup_table_entry                 StaggerData;                                              // (Parm, OutParm)
	bool                                               FoundData;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function stagger_lookup_table.stagger_lookup_table_C.GenerateData
struct Ustagger_lookup_table_C_GenerateData_Params
{
	TArray<struct Fobject_lookup_table_struct>         DataEntries;                                              // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
