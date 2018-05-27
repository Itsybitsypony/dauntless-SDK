#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_outsource_safe_interface_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function player_outsource_safe_interface.player_outsource_safe_interface_C.SetLocalWeatherType
struct Uplayer_outsource_safe_interface_C_SetLocalWeatherType_Params
{
	TEnumAsByte<Eweather_type_enum>                    NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
