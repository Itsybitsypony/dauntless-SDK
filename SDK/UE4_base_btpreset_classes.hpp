#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_btpreset_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_btpreset.base_btpreset_C
// 0x001C (0x0044 - 0x0028)
class Ubase_btpreset_C : public UObject
{
public:
	struct Fbehemoth_tuning_data                       TuningData;                                               // 0x0028(0x001C) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_btpreset.base_btpreset_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
