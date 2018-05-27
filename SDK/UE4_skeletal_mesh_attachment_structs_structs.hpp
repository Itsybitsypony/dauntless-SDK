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

// UserDefinedStruct skeletal_mesh_attachment_structs.skeletal_mesh_attachment_structs
// 0x0030
struct Fskeletal_mesh_attachment_structs
{
	TArray<TAssetPtr<class USkeletalMesh>>             SkeletalMeshIds_8_E24D8B6948FD8718FE174E950A8284A7;       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<TAssetPtr<class UStaticMesh>>               StaticMeshIds_11_9FF496834DCC007801C8F4A5E733E62B;        // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SocketNames_7_D630E6A043F266A02D60AB928E243F34;           // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
