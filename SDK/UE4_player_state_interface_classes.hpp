#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_state_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_state_interface.player_state_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uplayer_state_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_state_interface.player_state_interface_C");
		return ptr;
	}


	void SetInAirship(bool InAirship);
	void IncrementInterruptCount(class AActor* Behemoth);
	void IncrementPartBreakCount(class AActor* Behemoth);
	void SetInCity_Deprecated(bool InCity);
	void IncrementStaggerCount(class AActor* Behemoth, bool WasInterrupt);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
