#pragma once

// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_go_to_next_city_obj_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function go_to_next_city_obj.go_to_next_city_obj_C.OnFail_896B159D430F9ED210BC9EA238A18591
struct Ugo_to_next_city_obj_C_OnFail_896B159D430F9ED210BC9EA238A18591_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function go_to_next_city_obj.go_to_next_city_obj_C.OnSuccess_896B159D430F9ED210BC9EA238A18591
struct Ugo_to_next_city_obj_C_OnSuccess_896B159D430F9ED210BC9EA238A18591_Params
{
	TEnumAsByte<EPathFollowingResult>                  MovementResult;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function go_to_next_city_obj.go_to_next_city_obj_C.ReceiveExecuteAI
struct Ugo_to_next_city_obj_C_ReceiveExecuteAI_Params
{
	class AAIController**                              OwnerController;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class APawn**                                      ControlledPawn;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function go_to_next_city_obj.go_to_next_city_obj_C.ExecuteUbergraph_go_to_next_city_obj
struct Ugo_to_next_city_obj_C_ExecuteUbergraph_go_to_next_city_obj_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
