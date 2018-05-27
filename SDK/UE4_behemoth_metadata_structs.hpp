#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_behemoth_resistset_type_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct behemoth_metadata.behemoth_metadata
// 0x0070
struct Fbehemoth_metadata
{
	struct FName                                       BehemothName_8_8D5901B5411BCC59696B988CFE9C89DE;          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_resistset_type>              Resists_5_B096220E4353F6CBC5D459B5204DE813;               // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FText                                       DisplayName_14_CC376CD94CA321DCBAABC0848661771B;          // 0x0010(0x0018) (Edit, BlueprintVisible)
	TAssetPtr<class UTexture2D>                        Icon_11_10FEDD8E44DE945AD367679C2B31C9B1;                 // 0x0028(0x0020) (Edit, BlueprintVisible)
	class UTexture2D*                                  Icon_lobby_23_43465A1248DFC5A96AA3539E8DD6FFC4;           // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BehemothDifficulty_28_3193AD1F4C9A1B649B0C828C12D68C84;   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BehemothComplexity_29_1F8210CD4FC34B9D61493CA1100FA808;   // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      PursuitUnlockQuest_32_EB44AA3548AB6A78E6BC9A80DE8017A1;   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UDataTable*                                  ConditionalLootTable_35_BDC3342345BF025BBFFDF0A17A2F335F; // 0x0068(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
