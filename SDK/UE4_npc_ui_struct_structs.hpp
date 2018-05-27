#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_playercontroller_requirements_classes.hpp"
#include "UE4_npc_ui_customdata_struct_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct npc_ui_struct.npc_ui_struct
// 0x0090
struct Fnpc_ui_struct
{
	struct FText                                       MenuName_41_409159554AFF7F7CBD2C3CA6F443687E;             // 0x0000(0x0018) (Edit, BlueprintVisible)
	class UClass*                                      MenuClass_55_5155073C402E1A052D5EF99670ECFD5D;            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class FString>                              RequiredTags_37_8B9B86CE42F2ABB08C77BA9937A25820;         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class FString>                              ExcludedTags_36_EE66931A4EDC656F8DD39D8E65405A49;         // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct Fplayercontroller_requirements              MenuAccessRequirements_28_40756B444AA96A757A06EDBC77B57223;// 0x0040(0x0020) (Edit, BlueprintVisible)
	struct FText                                       NoValidConditionsFoundText_43_C40326D74FCD7A46CE6041935BDF990A;// 0x0060(0x0018) (Edit, BlueprintVisible)
	struct Fnpc_ui_customdata_struct                   CustomData_46_1BCB88B64783CBC2AB30F6A9419F9638;           // 0x0078(0x0010) (Edit, BlueprintVisible)
	class UTexture2D*                                  MenuIcon_50_8E832068477406D6BECBA9BB67C97FEF;             // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
