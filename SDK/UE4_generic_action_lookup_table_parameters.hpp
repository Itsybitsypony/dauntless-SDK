#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_generic_action_lookup_table_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function generic_action_lookup_table.generic_action_lookup_table_C.GetGenericActionData
struct Ugeneric_action_lookup_table_C_GetGenericActionData_Params
{
	TEnumAsByte<Ebehemoth_generic_action_type>         ActionType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fgeneric_action_set_entry                   ActionData;                                               // (Parm, OutParm)
	bool                                               FoundData;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function generic_action_lookup_table.generic_action_lookup_table_C.GenerateData
struct Ugeneric_action_lookup_table_C_GenerateData_Params
{
	TArray<struct Fobject_lookup_table_struct>         DataEntries;                                              // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
