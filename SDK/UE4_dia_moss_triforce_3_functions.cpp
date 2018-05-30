// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_dia_moss_triforce_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function dia_moss_triforce_3.dia_moss_triforce_2_C.hide_foliage
// (BlueprintCallable, BlueprintEvent)

void Adia_moss_triforce_2_C::hide_foliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_3.dia_moss_triforce_2_C.hide_foliage");

	Adia_moss_triforce_2_C_hide_foliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_3.dia_moss_triforce_2_C.unhide_foliage
// (BlueprintCallable, BlueprintEvent)

void Adia_moss_triforce_2_C::unhide_foliage()
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_3.dia_moss_triforce_2_C.unhide_foliage");

	Adia_moss_triforce_2_C_unhide_foliage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_3.dia_moss_triforce_2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adia_moss_triforce_2_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_3.dia_moss_triforce_2_C.ReceiveTick");

	Adia_moss_triforce_2_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_3.dia_moss_triforce_2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Adia_moss_triforce_2_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_3.dia_moss_triforce_2_C.ReceiveBeginPlay");

	Adia_moss_triforce_2_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_3.dia_moss_triforce_2_C.ReceiveGameplayStart
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Adia_moss_triforce_2_C::ReceiveGameplayStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_3.dia_moss_triforce_2_C.ReceiveGameplayStart");

	Adia_moss_triforce_2_C_ReceiveGameplayStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function dia_moss_triforce_3.dia_moss_triforce_2_C.ExecuteUbergraph_dia_moss_triforce_3
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Adia_moss_triforce_2_C::ExecuteUbergraph_dia_moss_triforce_3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function dia_moss_triforce_3.dia_moss_triforce_2_C.ExecuteUbergraph_dia_moss_triforce_3");

	Adia_moss_triforce_2_C_ExecuteUbergraph_dia_moss_triforce_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
