#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_Archon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_ElementTypeToWeaponTrails.Struct_ElementTypeToWeaponTrails
// 0x0018
struct FStruct_ElementTypeToWeaponTrails
{
	EElementType                                       RequireElementType_2_5787BC1C4096DF6AF1A26A9BD9FD0593;    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystem*                             ParticleWeaponTrail_5_0F8A2EB0419FA198D6F4DFA1ECABB407;   // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             SecondaryParticle_8_A224A6134E3C14F17C16F49938F9BE7E;     // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
