#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemPhoenix.EGiveItemSourceType
enum class EGiveItemSourceType : uint8_t
{
	EGiveItemSourceType__Base      = 0,
	EGiveItemSourceType__BoostToken = 1,
	EGiveItemSourceType__ChampionBoost = 2,
	EGiveItemSourceType__PatronBoost = 3,
	EGiveItemSourceType__EGiveItemSourceType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemPhoenix.GiveItemSource
// 0x0018
struct FGiveItemSource
{
	EGiveItemSourceType                                SourceType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class FString                                      AdditionalInfo;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct OnlineSubsystemPhoenix.GiveItemInfo
// 0x0040
struct FGiveItemInfo
{
	struct FName                                       Item;                                                     // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Amount;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FGiveItemSource>                     Sources;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       ReplacedItem;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
