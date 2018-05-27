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

// UserDefinedStruct context_menu_action.context_menu_action
// 0x003D
struct Fcontext_menu_action
{
	struct FText                                       Label_2_D6A043774BF005AA45CCDE91112A102A;                 // 0x0000(0x0018) (Edit, BlueprintVisible)
	TAssetPtr<class UTexture2D>                        Icon_5_B50F418541F9EC0B94EEA789FA014768;                  // 0x0018(0x0020) (Edit, BlueprintVisible)
	float                                              Cooldown_8_3256371B41C3BE560B6A44A13863D739;              // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EItemRarityLevelType                               Rarity_15_1E1648A04F52F147AEB1D8BA1F1B6D6C;               // 0x003C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
