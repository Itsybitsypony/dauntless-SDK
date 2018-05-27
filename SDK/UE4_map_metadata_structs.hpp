#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct map_metadata.map_metadata
// 0x0060
struct Fmap_metadata
{
	struct FText                                       DisplayName_14_CC376CD94CA321DCBAABC0848661771B;          // 0x0000(0x0018) (Edit, BlueprintVisible)
	TAssetPtr<class UTexture2D>                        Icon_35_9F85680B46C2958F7276CEA619F1AD19;                 // 0x0018(0x0020) (Edit, BlueprintVisible)
	TAssetPtr<class UTexture2D>                        SelectedIcon_40_89FD8DFF42ACF3BFD5BDA79B2D0F8D00;         // 0x0038(0x0020) (Edit, BlueprintVisible)
	struct FVector2D                                   LabelOffset_43_3EDCFFFF4E1541715BF5558E92EE6F06;          // 0x0058(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
