#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_calc_knowntargetavgpos_btservice_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function calc_knowntargetavgpos_btservice.calc_knowntargetavgpos_btservice_C.ReceiveTickAI
struct Ucalc_knowntargetavgpos_btservice_C_ReceiveTickAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function calc_knowntargetavgpos_btservice.calc_knowntargetavgpos_btservice_C.ExecuteUbergraph_calc_knowntargetavgpos_btservice
struct Ucalc_knowntargetavgpos_btservice_C_ExecuteUbergraph_calc_knowntargetavgpos_btservice_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
