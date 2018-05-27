#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPI_UsingActor_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BPI_UsingActor.BPI_UsingActor_C.StartInteracting
struct UBPI_UsingActor_C_StartInteracting_Params
{
	class AActor*                                      InteractiveActor;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Interacting;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_UsingActor.BPI_UsingActor_C.OnConsumeUseCost
struct UBPI_UsingActor_C_OnConsumeUseCost_Params
{
	TEnumAsByte<EUsableObjectResourceCostTypes>        Resource_Type;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Resource_Cost;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Successful_;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_UsingActor.BPI_UsingActor_C.OnStartUse
struct UBPI_UsingActor_C_OnStartUse_Params
{
	class UAnimMontage*                                Using_Montage;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BPI_UsingActor.BPI_UsingActor_C.OnCompleteUse
struct UBPI_UsingActor_C_OnCompleteUse_Params
{
	bool                                               Successful_;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UAnimMontage*                                InteractionMontage;                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
