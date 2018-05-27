// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interactioncode_component_player_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_interactioncode_component_player.base_interactioncode_component_player_C.GetPlayerInteractionMontage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UAnimMontage*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UAnimMontage* Ubase_interactioncode_component_player_C::GetPlayerInteractionMontage(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.GetPlayerInteractionMontage");

	Ubase_interactioncode_component_player_C_GetPlayerInteractionMontage_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function base_interactioncode_component_player.base_interactioncode_component_player_C.GetInteractionDuration
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float Ubase_interactioncode_component_player_C::GetInteractionDuration(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.GetInteractionDuration");

	Ubase_interactioncode_component_player_C_GetInteractionDuration_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function base_interactioncode_component_player.base_interactioncode_component_player_C.CancelFill
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent* User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_player_C::CancelFill(class UArchonInteractionUserComponent* User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.CancelFill");

	Ubase_interactioncode_component_player_C_CancelFill_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component_player.base_interactioncode_component_player_C.BlueprintCanUserStartInteraction
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ubase_interactioncode_component_player_C::BlueprintCanUserStartInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.BlueprintCanUserStartInteraction");

	Ubase_interactioncode_component_player_C_BlueprintCanUserStartInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function base_interactioncode_component_player.base_interactioncode_component_player_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubase_interactioncode_component_player_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.ReceiveBeginPlay");

	Ubase_interactioncode_component_player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_player_C::UserCompletedInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserCompletedInteraction");

	Ubase_interactioncode_component_player_C_UserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserStartedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_player_C::UserStartedInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserStartedInteraction");

	Ubase_interactioncode_component_player_C_UserStartedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserCanceledInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_player_C::UserCanceledInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.UserCanceledInteraction");

	Ubase_interactioncode_component_player_C_UserCanceledInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interactioncode_component_player.base_interactioncode_component_player_C.ExecuteUbergraph_base_interactioncode_component_player
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interactioncode_component_player_C::ExecuteUbergraph_base_interactioncode_component_player(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interactioncode_component_player.base_interactioncode_component_player_C.ExecuteUbergraph_base_interactioncode_component_player");

	Ubase_interactioncode_component_player_C_ExecuteUbergraph_base_interactioncode_component_player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
