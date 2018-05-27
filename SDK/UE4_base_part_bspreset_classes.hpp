#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_part_bspreset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_part_bspreset.base_part_bspreset_C
// 0x0011 (0x0039 - 0x0028)
class Ubase_part_bspreset_C : public UObject
{
public:
	TArray<struct Fpart_break_stage>                   PresetData;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IgnoreThisAndUseCustomBreakData;                          // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_part_bspreset.base_part_bspreset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
