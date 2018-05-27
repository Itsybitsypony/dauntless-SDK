#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_stagger_type_classes.hpp"
#include "UE4_behemoth_stagger_type_classes.hpp"
#include "UE4_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct stagger_instance.stagger_instance
// 0x0028
struct Fstagger_instance
{
	TEnumAsByte<Estagger_type>                         StaggerType_2_1D35F86A49B3DAB5E70620B2CBB2DB47;           // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Ebehemoth_stagger_type>                StaggerSource_5_43A678AC49ACA4A11E8825AFA73E8B14;         // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0002(0x0006) MISSED OFFSET
	struct FName                                       StaggeredPartName_11_A9014CDE43CD090F42EFB0BC4DF3AB3B;    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StaggeredFromLocation_19_784B20234B00684EF0C1EDAEA59612C8;// 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class AActor*                                      StaggerCauser_14_96BC257B41D56E0DEF4E2D81C48EF013;        // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
