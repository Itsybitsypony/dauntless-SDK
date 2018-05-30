// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_override_default_turn_warp_btservice_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ReceiveActivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uoverride_default_turn_warp_btservice_C::ReceiveActivationAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ReceiveActivationAI");

	Uoverride_default_turn_warp_btservice_C_ReceiveActivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ReceiveDeactivationAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uoverride_default_turn_warp_btservice_C::ReceiveDeactivationAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ReceiveDeactivationAI");

	Uoverride_default_turn_warp_btservice_C_ReceiveDeactivationAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ExecuteUbergraph_override_default_turn_warp_btservice
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uoverride_default_turn_warp_btservice_C::ExecuteUbergraph_override_default_turn_warp_btservice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function override_default_turn_warp_btservice.override_default_turn_warp_btservice_C.ExecuteUbergraph_override_default_turn_warp_btservice");

	Uoverride_default_turn_warp_btservice_C_ExecuteUbergraph_override_default_turn_warp_btservice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
