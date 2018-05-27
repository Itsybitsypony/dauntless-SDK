// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_lamp_hanging_01_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Alamp_hanging_01_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.UserConstructionScript");

	Alamp_hanging_01_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void Alamp_hanging_01_bp_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.Timeline_0__FinishedFunc");

	Alamp_hanging_01_bp_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void Alamp_hanging_01_bp_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.Timeline_0__UpdateFunc");

	Alamp_hanging_01_bp_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Alamp_hanging_01_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.ReceiveBeginPlay");

	Alamp_hanging_01_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.startflicker
// (BlueprintCallable, BlueprintEvent)

void Alamp_hanging_01_bp_C::startflicker()
{
	static auto fn = UObject::FindObject<UFunction>("Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.startflicker");

	Alamp_hanging_01_bp_C_startflicker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.ExecuteUbergraph_lamp_hanging_01_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Alamp_hanging_01_bp_C::ExecuteUbergraph_lamp_hanging_01_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function lamp_hanging_01_bp.lamp_hanging_01_bp_C.ExecuteUbergraph_lamp_hanging_01_bp");

	Alamp_hanging_01_bp_C_ExecuteUbergraph_lamp_hanging_01_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
