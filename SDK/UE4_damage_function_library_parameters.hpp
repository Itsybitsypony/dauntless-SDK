#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function damage_function_library.damage_function_library_C.CombineDamageTableRows
struct Udamage_function_library_C_CombineDamageTableRows_Params
{
	struct FDamageTableData                            DamageRow1;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FDamageTableData                            DamageRow2;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            CombinedDamageTableData;                                  // (Parm, OutParm)
};

// Function damage_function_library.damage_function_library_C.ScaleDamageRow
struct Udamage_function_library_C_ScaleDamageRow_Params
{
	struct FDamageTableData                            DamageTableData;                                          // (BlueprintVisible, BlueprintReadOnly, Parm)
	float                                              ScaleFactor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            ScaledDamageTableData;                                    // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
