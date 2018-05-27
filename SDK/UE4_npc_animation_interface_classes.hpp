#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_animation_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass npc_animation_interface.npc_animation_interface_C
// 0x0000 (0x0028 - 0x0028)
class Unpc_animation_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass npc_animation_interface.npc_animation_interface_C");
		return ptr;
	}


	void SetReadyToTransition(bool ReadyToTransition_);
	void SetIsInteracting(bool IsInteracting_);
	void SetIsEntering(bool IsEntering);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
