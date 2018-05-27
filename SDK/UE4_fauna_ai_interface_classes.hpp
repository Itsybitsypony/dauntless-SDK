#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_ai_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass fauna_ai_interface.fauna_ai_interface_C
// 0x0000 (0x0028 - 0x0028)
class Ufauna_ai_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass fauna_ai_interface.fauna_ai_interface_C");
		return ptr;
	}


	void SetLocoState(TEnumAsByte<Efauna_loco_state_enum> NewState);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
