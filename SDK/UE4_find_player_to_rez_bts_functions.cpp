// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_find_player_to_rez_bts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function find_player_to_rez_bts.find_player_to_rez_bts_C.GetBleedingOutSlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*             Controller                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufind_player_to_rez_bts_C::GetBleedingOutSlayer(class AController* Controller)
{
	static auto fn = UObject::FindObject<UFunction>("Function find_player_to_rez_bts.find_player_to_rez_bts_C.GetBleedingOutSlayer");

	Ufind_player_to_rez_bts_C_GetBleedingOutSlayer_Params params;
	params.Controller = Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function find_player_to_rez_bts.find_player_to_rez_bts_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufind_player_to_rez_bts_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function find_player_to_rez_bts.find_player_to_rez_bts_C.ReceiveTick");

	Ufind_player_to_rez_bts_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function find_player_to_rez_bts.find_player_to_rez_bts_C.ReceiveSearchStartAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufind_player_to_rez_bts_C::ReceiveSearchStartAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function find_player_to_rez_bts.find_player_to_rez_bts_C.ReceiveSearchStartAI");

	Ufind_player_to_rez_bts_C_ReceiveSearchStartAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function find_player_to_rez_bts.find_player_to_rez_bts_C.ExecuteUbergraph_find_player_to_rez_bts
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ufind_player_to_rez_bts_C::ExecuteUbergraph_find_player_to_rez_bts(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function find_player_to_rez_bts.find_player_to_rez_bts_C.ExecuteUbergraph_find_player_to_rez_bts");

	Ufind_player_to_rez_bts_C_ExecuteUbergraph_find_player_to_rez_bts_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
