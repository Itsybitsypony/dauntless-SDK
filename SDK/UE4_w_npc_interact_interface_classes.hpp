#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_npc_interact_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass w_npc_interact_interface.w_npc_interact_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uw_npc_interact_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass w_npc_interact_interface.w_npc_interact_interface_C");
		return ptr;
	}


	void NPCInteractInitialize(class Avendor_interactive_bp_C* Vendor, const struct Fnpc_ui_struct& NPCMenuTuning);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
