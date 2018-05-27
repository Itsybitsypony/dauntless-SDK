#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Basic.hpp"
#include "UE4_direction_enum_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct stagger_option.stagger_option
// 0x0028
struct Fstagger_option
{
	class UAnimMontage*                                Montage_6_2B48802747C87785ECCC38A6C780EC9C;               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       RequirePartName_12_2319684840C901D34BDB05BD6DD2C45E;      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<Edirection_enum>                       RequireForceDirection_15_39DFABB1472574BD4B10A8AF965B682E;// 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<class UAnimMontage*>                        MontageSequence_19_FA6D616341FA9942558B409DE33DBD0D;      // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
