#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_CompassManager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function CompassManager.CompassManager_C.Initialize
struct UCompassManager_C_Initialize_Params
{
	class Ubpw_Compass_C*                              CompassWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CompassManager.CompassManager_C.Update Compass
struct UCompassManager_C_Update_Compass_Params
{
};

// Function CompassManager.CompassManager_C.ReceiveBeginPlay
struct UCompassManager_C_ReceiveBeginPlay_Params
{
};

// Function CompassManager.CompassManager_C.ReceiveTick
struct UCompassManager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function CompassManager.CompassManager_C.ExecuteUbergraph_CompassManager
struct UCompassManager_C_ExecuteUbergraph_CompassManager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
