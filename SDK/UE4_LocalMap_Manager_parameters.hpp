#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_LocalMap_Manager_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LocalMap_Manager.LocalMap_Manager_C.ToggleOff
struct ULocalMap_Manager_C_ToggleOff_Params
{
};

// Function LocalMap_Manager.LocalMap_Manager_C.ToggleOn
struct ULocalMap_Manager_C_ToggleOn_Params
{
};

// Function LocalMap_Manager.LocalMap_Manager_C.AddPlayerMarkerInfo
struct ULocalMap_Manager_C_AddPlayerMarkerInfo_Params
{
};

// Function LocalMap_Manager.LocalMap_Manager_C.GetMapScale
struct ULocalMap_Manager_C_GetMapScale_Params
{
	float                                              Scale;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function LocalMap_Manager.LocalMap_Manager_C.Update Location
struct ULocalMap_Manager_C_Update_Location_Params
{
};

// Function LocalMap_Manager.LocalMap_Manager_C.Initialize
struct ULocalMap_Manager_C_Initialize_Params
{
};

// Function LocalMap_Manager.LocalMap_Manager_C.UpdatePlayerLocation
struct ULocalMap_Manager_C_UpdatePlayerLocation_Params
{
};

// Function LocalMap_Manager.LocalMap_Manager_C.UpdatePlayerRotation
struct ULocalMap_Manager_C_UpdatePlayerRotation_Params
{
};

// Function LocalMap_Manager.LocalMap_Manager_C.LocationCheck
struct ULocalMap_Manager_C_LocationCheck_Params
{
};

// Function LocalMap_Manager.LocalMap_Manager_C.ReceiveTick
struct ULocalMap_Manager_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LocalMap_Manager.LocalMap_Manager_C.ExecuteUbergraph_LocalMap_Manager
struct ULocalMap_Manager_C_ExecuteUbergraph_LocalMap_Manager_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
