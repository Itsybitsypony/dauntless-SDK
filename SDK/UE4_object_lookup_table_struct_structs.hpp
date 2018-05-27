#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct object_lookup_table_struct.object_lookup_table_struct
// 0x0010
struct Fobject_lookup_table_struct
{
	unsigned char                                      EnumIndex_10_3AFE27824F5F37B39EAE288EB1B283AE;            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class Ubase_lookup_data_wrapper_C*                 DataWrapper_12_E3280FC1404E24B7BE16B4B40264867B;          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
