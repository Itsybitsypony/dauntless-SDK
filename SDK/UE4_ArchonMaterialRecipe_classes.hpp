#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ArchonMaterialRecipe_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ArchonMaterialRecipe.ArchonMaterialRecipe
// 0x0058 (0x0080 - 0x0028)
class UArchonMaterialRecipe : public UObject
{
public:
	class FString                                      MaterialDescription;                                      // 0x0028(0x0010) (Edit, ZeroConstructor)
	class FString                                      MaterialName;                                             // 0x0038(0x0010) (Edit, ZeroConstructor)
	TEnumAsByte<EArchonNoiseType>                      MaterialNoiseType;                                        // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              MaterialStrength;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaterialFrequency;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaterialOffsetX;                                          // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaterialOffsetY;                                          // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                MaterialOctaves;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaterialRoughness;                                        // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaterialBiasToggle;                                      // 0x0064(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	float                                              MaterialBias;                                             // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaterialGain;                                             // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaterialGainToggle;                                      // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaterialComplementToggle;                                // 0x0071(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bMaterialFoldToggle;                                      // 0x0072(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x0073(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ArchonMaterialRecipe.ArchonMaterialRecipe");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
