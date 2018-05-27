#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_damage_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function damage_interface.damage_interface_C.GetDamageRow
struct Udamage_interface_C_GetDamageRow_Params
{
	struct FName                                       DamageKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FDamageTableData                            DamageRow;                                                // (Parm, OutParm)
	float                                              DamageScale;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               RowFound;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
