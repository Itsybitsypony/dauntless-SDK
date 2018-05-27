#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_part_ptpreset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_part_ptpreset.base_part_ptpreset_C
// 0x001C (0x0044 - 0x0028)
class Ubase_part_ptpreset_C : public UObject
{
public:
	struct Fpart_preset                                PresetData;                                               // 0x0028(0x001C) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_part_ptpreset.base_part_ptpreset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
