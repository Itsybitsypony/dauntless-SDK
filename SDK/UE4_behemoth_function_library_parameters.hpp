#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_function_library_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function behemoth_function_library.behemoth_function_library_C.GetResistsForResistPowerType
struct Ubehemoth_function_library_C_GetResistsForResistPowerType_Params
{
	TEnumAsByte<Ebehemoth_resistset_type>              ResistAndPowerSetType;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	EElementType                                       PrimaryOffenseType;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              PhysicalResistMult;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FlameResistMult;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              FrostResistMult;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              ShockResistMult;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              RadiantResistMult;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              UmbralResistMult;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               HasCustomResistsSet;                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
