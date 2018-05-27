#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_monsterpart_bpi_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function monsterpart_bpi.monsterpart_bpi_C.GetPhatBones
struct Umonsterpart_bpi_C_GetPhatBones_Params
{
	TArray<struct FName>                               PhATBones;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function monsterpart_bpi.monsterpart_bpi_C.GetSeverPhatBones
struct Umonsterpart_bpi_C_GetSeverPhatBones_Params
{
	TArray<struct FName>                               SeverPhatBones;                                           // (Parm, OutParm, ZeroConstructor)
};

// Function monsterpart_bpi.monsterpart_bpi_C.GetCurrentPartType
struct Umonsterpart_bpi_C_GetCurrentPartType_Params
{
	TEnumAsByte<Ebehemoth_part_type>                   PartType;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function monsterpart_bpi.monsterpart_bpi_C.GetBodyPartType
struct Umonsterpart_bpi_C_GetBodyPartType_Params
{
	TEnumAsByte<Ebehemoth_bodypart_type>               BodyPartType;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
