#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_loco_lookup_table_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_loco_lookup_table.behemoth_loco_lookup_table_C.GetBehemothLocoData
struct Ubehemoth_loco_lookup_table_C_GetBehemothLocoData_Params
{
	TEnumAsByte<Ebehemoth_loco_type>                   LocoType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct Fbehemoth_loco_info                         ActionData;                                               // (Parm, OutParm)
	bool                                               FoundData;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function behemoth_loco_lookup_table.behemoth_loco_lookup_table_C.GenerateData
struct Ubehemoth_loco_lookup_table_C_GenerateData_Params
{
	TArray<struct Fobject_lookup_table_struct>         DataEntries;                                              // (Parm, OutParm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
