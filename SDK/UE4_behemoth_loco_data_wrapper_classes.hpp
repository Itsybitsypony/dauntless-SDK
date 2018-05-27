#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_loco_data_wrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass behemoth_loco_data_wrapper.behemoth_loco_data_wrapper_C
// 0x0010 (0x0038 - 0x0028)
class Ubehemoth_loco_data_wrapper_C : public Ubase_lookup_data_wrapper_C
{
public:
	struct Fbehemoth_loco_info                         LocoData;                                                 // 0x0028(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass behemoth_loco_data_wrapper.behemoth_loco_data_wrapper_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
