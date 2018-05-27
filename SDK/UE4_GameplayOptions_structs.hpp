#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_SlateCore_classes.hpp"
#include "UE4_Archon_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct GameplayOptions.GameplayOptions
// 0x0019
struct FGameplayOptions
{
	int                                                VoiceLanguage_3_169CA3E74BDC2063199EB69A74203AD1;         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TextLanguage_5_55FEE5804407D93678561DA7D974A3D5;          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ECheckBoxState                                     Subtitles_9_D61E91BB44677033CFED33AAA315826D;             // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                HelmetDisplay_16_AB47CFB7467C4FE43298DC96638B9BC7;        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NameplateDisplay_17_A77C8C6544023C42E1C3DC9690CE43E0;     // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                CombatText_21_AD398EB947668370F4208FA54B1571E1;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EPartyInviteFilter                                 PartyInviteFilter_24_A3FE971549385C1C03BEF7BC124C4E25;    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
