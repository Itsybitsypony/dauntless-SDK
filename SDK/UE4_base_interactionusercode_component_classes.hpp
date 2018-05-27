#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interactionusercode_component_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass base_interactionusercode_component.base_interactionusercode_component_C
// 0x0000 (0x0200 - 0x0200)
class Ubase_interactionusercode_component_C : public UArchonInteractionUserComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass base_interactionusercode_component.base_interactionusercode_component_C");
		return ptr;
	}


	bool BlueprintCanStartInteraction(class UArchonInteractionComponent** interactionTarget);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
