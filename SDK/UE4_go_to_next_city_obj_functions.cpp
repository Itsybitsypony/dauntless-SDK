// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_go_to_next_city_obj_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function go_to_next_city_obj.go_to_next_city_obj_C.OnFail_896B159D430F9ED210BC9EA238A18591
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugo_to_next_city_obj_C::OnFail_896B159D430F9ED210BC9EA238A18591(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function go_to_next_city_obj.go_to_next_city_obj_C.OnFail_896B159D430F9ED210BC9EA238A18591");

	Ugo_to_next_city_obj_C_OnFail_896B159D430F9ED210BC9EA238A18591_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function go_to_next_city_obj.go_to_next_city_obj_C.OnSuccess_896B159D430F9ED210BC9EA238A18591
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EPathFollowingResult> MovementResult                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugo_to_next_city_obj_C::OnSuccess_896B159D430F9ED210BC9EA238A18591(TEnumAsByte<EPathFollowingResult> MovementResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function go_to_next_city_obj.go_to_next_city_obj_C.OnSuccess_896B159D430F9ED210BC9EA238A18591");

	Ugo_to_next_city_obj_C_OnSuccess_896B159D430F9ED210BC9EA238A18591_Params params;
	params.MovementResult = MovementResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function go_to_next_city_obj.go_to_next_city_obj_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugo_to_next_city_obj_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function go_to_next_city_obj.go_to_next_city_obj_C.ReceiveExecuteAI");

	Ugo_to_next_city_obj_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function go_to_next_city_obj.go_to_next_city_obj_C.ExecuteUbergraph_go_to_next_city_obj
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ugo_to_next_city_obj_C::ExecuteUbergraph_go_to_next_city_obj(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function go_to_next_city_obj.go_to_next_city_obj_C.ExecuteUbergraph_go_to_next_city_obj");

	Ugo_to_next_city_obj_C_ExecuteUbergraph_go_to_next_city_obj_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
