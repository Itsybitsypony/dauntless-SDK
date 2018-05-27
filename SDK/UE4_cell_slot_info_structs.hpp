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

// UserDefinedStruct cell_slot_info.cell_slot_info
// 0x0018
struct Fcell_slot_info
{
	ECellType                                          SlotType_11_238DEB5847F6AB4522DBF99D3889E697;             // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               SlotRarity_14_DA7CF521473550581F9768BA5DF7AA49;           // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	class FString                                      SlottedCellID_6_912318FF49DED8F8555DBDBC4437B288;         // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
