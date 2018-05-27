#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_player_requirement_type_classes.hpp"
#include "UE4_require_or_exclude_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct player_requirements_str.player_requirements_str
// 0x0002
struct Fplayer_requirements_str
{
	TEnumAsByte<Eplayer_requirement_type>              StateRequirement_4_18BAF63446EE848D96979083D3310665;      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Erequire_or_exclude>                   StateRequirementType_8_3DC8643F4BA20A8F521FE6BC5148A8F6;  // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
