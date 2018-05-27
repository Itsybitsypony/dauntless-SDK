#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_ambient_component_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function base_ambient_component.base_ambient_component_C.ReceiveBeginPlay
struct Ubase_ambient_component_C_ReceiveBeginPlay_Params
{
};

// Function base_ambient_component.base_ambient_component_C.OnUserRequestedAmbient_Event_1
struct Ubase_ambient_component_C_OnUserRequestedAmbient_Event_1_Params
{
	class UArchonAmbientUserComponent*                 User;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              DeltaTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function base_ambient_component.base_ambient_component_C.ExecuteUbergraph_base_ambient_component
struct Ubase_ambient_component_C_ExecuteUbergraph_base_ambient_component_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
