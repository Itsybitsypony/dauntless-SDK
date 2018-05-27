#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_too_many_actors_strategy_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct spawnedactor_manager_info.spawnedactor_manager_info
// 0x000D
struct Fspawnedactor_manager_info
{
	class UClass*                                      ActorClass_14_78BEDF9942D684E959AAFCBFC17622E9;           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	int                                                MaxAllowedAmount_8_D64EDF244F9ABB030B072094C925968E;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Etoo_many_actors_strategy>             WhatToDoIfOverMaxAllowed_11_FAE934654732AC6B4F8851B751AB7218;// 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
