#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EquipmentProgression_Link_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function w_EquipmentProgression_Link.w_EquipmentProgression_Link_C.Set Bottom
struct Uw_EquipmentProgression_Link_C_Set_Bottom_Params
{
	TEnumAsByte<EProgressionLink>                      New_Link;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function w_EquipmentProgression_Link.w_EquipmentProgression_Link_C.Set Top
struct Uw_EquipmentProgression_Link_C_Set_Top_Params
{
	TEnumAsByte<EProgressionLink>                      New_Link;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
