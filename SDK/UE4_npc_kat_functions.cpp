// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_npc_kat_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function npc_kat.npc_kat_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Anpc_kat_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_kat.npc_kat_C.UserConstructionScript");

	Anpc_kat_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_kat.npc_kat_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Anpc_kat_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_kat.npc_kat_C.ReceiveBeginPlay");

	Anpc_kat_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_kat.npc_kat_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_kat_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_kat.npc_kat_C.ReceiveTick");

	Anpc_kat_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function npc_kat.npc_kat_C.ExecuteUbergraph_npc_kat
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Anpc_kat_C::ExecuteUbergraph_npc_kat(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function npc_kat.npc_kat_C.ExecuteUbergraph_npc_kat");

	Anpc_kat_C_ExecuteUbergraph_npc_kat_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
