// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_calc_knowntargetavgpos_btservice_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function calc_knowntargetavgpos_btservice.calc_knowntargetavgpos_btservice_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucalc_knowntargetavgpos_btservice_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function calc_knowntargetavgpos_btservice.calc_knowntargetavgpos_btservice_C.ReceiveTickAI");

	Ucalc_knowntargetavgpos_btservice_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function calc_knowntargetavgpos_btservice.calc_knowntargetavgpos_btservice_C.ExecuteUbergraph_calc_knowntargetavgpos_btservice
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucalc_knowntargetavgpos_btservice_C::ExecuteUbergraph_calc_knowntargetavgpos_btservice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function calc_knowntargetavgpos_btservice.calc_knowntargetavgpos_btservice_C.ExecuteUbergraph_calc_knowntargetavgpos_btservice");

	Ucalc_knowntargetavgpos_btservice_C_ExecuteUbergraph_calc_knowntargetavgpos_btservice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
