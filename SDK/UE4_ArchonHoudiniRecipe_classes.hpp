#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonHoudiniRecipe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ArchonHoudiniRecipe.ArchonHoudiniRecipe
// 0x0008 (0x0030 - 0x0028)
class UArchonHoudiniRecipe : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonHoudiniRecipe.ArchonHoudiniRecipe");
		return ptr;
	}

};


// Class ArchonHoudiniRecipe.ArchonHoudiniRecipeNode
// 0x0008 (0x00A0 - 0x0098)
class UArchonHoudiniRecipeNode : public UEdGraphNode
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0098(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonHoudiniRecipe.ArchonHoudiniRecipeNode");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
