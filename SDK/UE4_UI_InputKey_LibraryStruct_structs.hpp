#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_InputCore_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct UI_InputKey_LibraryStruct.UI_InputKey_LibraryStruct
// 0x0088
struct FUI_InputKey_LibraryStruct
{
	struct FKey                                        InputKey_6_3CA992AC4EBAEE27C246F19C21EACD95;              // 0x0000(0x0018) (Edit, BlueprintVisible)
	TAssetPtr<class UTexture2D>                        Default_Icon_18_C2036BF84DF42E0B00803FB48DFD43D0;         // 0x0018(0x0020) (Edit, BlueprintVisible)
	struct FText                                       Default_PlayerFacingName_23_7270FCE543272AD8E1920FB5D117A01D;// 0x0038(0x0018) (Edit, BlueprintVisible)
	TAssetPtr<class UTexture2D>                        Option1_Icon_21_59A086A0466C26121751EAA5977EF735;         // 0x0050(0x0020) (Edit, BlueprintVisible)
	struct FText                                       Option1_PlayerfacingName_24_87DA1B61410C646585B7AE82F0926097;// 0x0070(0x0018) (Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
