#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_flag_windsock_00_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function flag_windsock_00_bp.flag_windsock_00_bp_C.GetWeatherType
struct Aflag_windsock_00_bp_C_GetWeatherType_Params
{
	TEnumAsByte<Eweather_type_enum>                    Weather;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function flag_windsock_00_bp.flag_windsock_00_bp_C.UserConstructionScript
struct Aflag_windsock_00_bp_C_UserConstructionScript_Params
{
};

// Function flag_windsock_00_bp.flag_windsock_00_bp_C.ReceiveBeginPlay
struct Aflag_windsock_00_bp_C_ReceiveBeginPlay_Params
{
};

// Function flag_windsock_00_bp.flag_windsock_00_bp_C.ReceiveTick
struct Aflag_windsock_00_bp_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function flag_windsock_00_bp.flag_windsock_00_bp_C.SetWindRotation
struct Aflag_windsock_00_bp_C_SetWindRotation_Params
{
	float                                              SetWindRotation;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function flag_windsock_00_bp.flag_windsock_00_bp_C.ExecuteUbergraph_flag_windsock_00_bp
struct Aflag_windsock_00_bp_C_ExecuteUbergraph_flag_windsock_00_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
