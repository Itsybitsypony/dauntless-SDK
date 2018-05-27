#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_stagger_lookup_data_wrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass stagger_lookup_data_wrapper.stagger_lookup_data_wrapper_C
// 0x0020 (0x0048 - 0x0028)
class Ustagger_lookup_data_wrapper_C : public Ubase_lookup_data_wrapper_C
{
public:
	struct Fstagger_lookup_table_entry                 StaggerData;                                              // 0x0028(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass stagger_lookup_data_wrapper.stagger_lookup_data_wrapper_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
