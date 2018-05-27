#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_interaction_owner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_interaction_owner.BPI_interaction_owner_C.StartActorInteraction
struct UBPI_interaction_owner_C_StartActorInteraction_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Started;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_interaction_owner.BPI_interaction_owner_C.Unhighlight
struct UBPI_interaction_owner_C_Unhighlight_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Unhighlighted;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_interaction_owner.BPI_interaction_owner_C.Highlight
struct UBPI_interaction_owner_C_Highlight_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Highlighted;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_interaction_owner.BPI_interaction_owner_C.TestUsability
struct UBPI_interaction_owner_C_TestUsability_Params
{
	class APawn*                                       Pawn;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Usable;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_interaction_owner.BPI_interaction_owner_C.CancelInteraction
struct UBPI_interaction_owner_C_CancelInteraction_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Cancelled;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_interaction_owner.BPI_interaction_owner_C.OnStopInteraction
struct UBPI_interaction_owner_C_OnStopInteraction_Params
{
	bool                                               Success;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InteractionStillInProgress;                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_interaction_owner.BPI_interaction_owner_C.OnStartInteraction
struct UBPI_interaction_owner_C_OnStartInteraction_Params
{
	class APawn*                                       UsingPawn;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_interaction_owner.BPI_interaction_owner_C.SetInteractionAvailabilty
struct UBPI_interaction_owner_C_SetInteractionAvailabilty_Params
{
	bool                                               Active_;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Active;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_interaction_owner.BPI_interaction_owner_C.ExecutePayload
struct UBPI_interaction_owner_C_ExecutePayload_Params
{
	class APawn*                                       SuccessfulInteractor;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
