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

// UserDefinedStruct BodyTypeData_Type.BodyTypeData_Type
// 0x0020
struct FBodyTypeData_Type
{
	class USkeletalMesh*                               SkinMesh_3_5ED9A08B487ECA22785F139B06B89E63;              // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMesh*                               HeadMesh_5_87A2FAD844A7A0038667DA9CEA11567F;              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AnimAdditive_9_3C03D16943A03EB64373E499CFCCB3D7;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       PonyTailSocket_12_6DFB1F3C4538C3E809533497BCC9D4EA;       // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
