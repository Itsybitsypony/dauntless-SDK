#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_armoursmith_animBP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass npc_armoursmith_animBP.npc_armoursmith_animBP_C
// 0x0000 (0x1314 - 0x1314)
class Unpc_armoursmith_animBP_C : public Unpc_vendor_animbp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass npc_armoursmith_animBP.npc_armoursmith_animBP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
