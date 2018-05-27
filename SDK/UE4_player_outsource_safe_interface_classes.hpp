#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_outsource_safe_interface_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass player_outsource_safe_interface.player_outsource_safe_interface_C
// 0x0000 (0x0028 - 0x0028)
class Uplayer_outsource_safe_interface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass player_outsource_safe_interface.player_outsource_safe_interface_C");
		return ptr;
	}


	void SetLocalWeatherType(TEnumAsByte<Eweather_type_enum> NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
