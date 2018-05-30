#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_coordination_message_wrapper_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass coordination_message_wrapper.coordination_message_wrapper_C
// 0x0020 (0x0048 - 0x0028)
class Ucoordination_message_wrapper_C : public UObject
{
public:
	struct Fcoordination_message                       Message;                                                  // 0x0028(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass coordination_message_wrapper.coordination_message_wrapper_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
