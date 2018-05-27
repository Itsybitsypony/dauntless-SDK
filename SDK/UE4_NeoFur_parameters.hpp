#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_NeoFur_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function NeoFur.NeoFurComponent.SetVisibleLengthScale
struct UNeoFurComponent_SetVisibleLengthScale_Params
{
	float                                              NewVisibleLengthScale;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NeoFur.NeoFurComponent.SetShellDistance
struct UNeoFurComponent_SetShellDistance_Params
{
	float                                              NewDistance;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function NeoFur.NeoFurComponent.SetFurPhysicsParameters
struct UNeoFurComponent_SetFurPhysicsParameters_Params
{
	struct FNeoFurPhysicsParameters                    Parameters;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function NeoFur.NeoFurComponent.GetTotalActiveShellCount
struct UNeoFurComponent_GetTotalActiveShellCount_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function NeoFur.NeoFurComponent.GetFurPhysicsParameters
struct UNeoFurComponent_GetFurPhysicsParameters_Params
{
	struct FNeoFurPhysicsParameters                    ReturnValue;                                              // (ConstParm, Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
