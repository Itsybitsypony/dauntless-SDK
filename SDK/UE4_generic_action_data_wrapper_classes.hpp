#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_generic_action_data_wrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass generic_action_data_wrapper.generic_action_data_wrapper_C
// 0x0018 (0x0040 - 0x0028)
class Ugeneric_action_data_wrapper_C : public Ubase_lookup_data_wrapper_C
{
public:
	struct Fgeneric_action_set_entry                   GenericActionData;                                        // 0x0028(0x0018) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass generic_action_data_wrapper.generic_action_data_wrapper_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
