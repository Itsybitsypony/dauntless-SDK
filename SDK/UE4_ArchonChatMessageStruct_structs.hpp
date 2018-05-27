#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ArchonChatMessageStruct.ArchonChatMessageStruct
// 0x0030
struct FArchonChatMessageStruct
{
	class FString                                      Sender_12_A04399B84C807F748826E488DFF91EEE;               // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Message_8_D742A71F41D320CC8F91A4818625141E;               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class FString                                      Receiver_13_176C657D4D84CDF55BA712B08496B669;             // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
