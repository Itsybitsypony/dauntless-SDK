// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_choose_random_perceived_actors_btservice_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function choose_random_perceived_actors_btservice.choose_random_perceived_actors_btservice_C.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uchoose_random_perceived_actors_btservice_C::ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function choose_random_perceived_actors_btservice.choose_random_perceived_actors_btservice_C.ReceiveSearchStartAI");

	Uchoose_random_perceived_actors_btservice_C_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function choose_random_perceived_actors_btservice.choose_random_perceived_actors_btservice_C.ExecuteUbergraph_choose_random_perceived_actors_btservice
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uchoose_random_perceived_actors_btservice_C::ExecuteUbergraph_choose_random_perceived_actors_btservice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function choose_random_perceived_actors_btservice.choose_random_perceived_actors_btservice_C.ExecuteUbergraph_choose_random_perceived_actors_btservice");

	Uchoose_random_perceived_actors_btservice_C_ExecuteUbergraph_choose_random_perceived_actors_btservice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
