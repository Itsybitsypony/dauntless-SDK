#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_traversal_vent_00_bp_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function traversal_vent_00_bp.traversal_vent_00_bp_C.IsCharacterValid
struct Atraversal_vent_00_bp_C_IsCharacterValid_Params
{
	class ABP_PlayerCharacter_C*                       Char;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Valid;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetHorizontalForce
struct Atraversal_vent_00_bp_C_GetHorizontalForce_Params
{
	float                                              Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              xForce;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              yForce;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetFlightTime
struct Atraversal_vent_00_bp_C_GetFlightTime_Params
{
	float                                              Height;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function traversal_vent_00_bp.traversal_vent_00_bp_C.GetVerticalForce
struct Atraversal_vent_00_bp_C_GetVerticalForce_Params
{
	class AArchonCharacterBase*                        Character;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorVertical;                                           // (Parm, OutParm, IsPlainOldData)
	float                                              VerticalHeight;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              Gravity;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function traversal_vent_00_bp.traversal_vent_00_bp_C.UserConstructionScript
struct Atraversal_vent_00_bp_C_UserConstructionScript_Params
{
};

// Function traversal_vent_00_bp.traversal_vent_00_bp_C.ReceiveActorBeginOverlap
struct Atraversal_vent_00_bp_C_ReceiveActorBeginOverlap_Params
{
	class AActor**                                     OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function traversal_vent_00_bp.traversal_vent_00_bp_C.ExecuteUbergraph_traversal_vent_00_bp
struct Atraversal_vent_00_bp_C_ExecuteUbergraph_traversal_vent_00_bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
