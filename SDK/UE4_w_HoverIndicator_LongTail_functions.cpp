// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_HoverIndicator_LongTail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_HoverIndicator_LongTail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.Construct");

	Uw_HoverIndicator_LongTail_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_HoverIndicator_LongTail_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.OnSynchronizeProperties");

	Uw_HoverIndicator_LongTail_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.Refresh Material
// (BlueprintCallable, BlueprintEvent)

void Uw_HoverIndicator_LongTail_C::Refresh_Material()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.Refresh Material");

	Uw_HoverIndicator_LongTail_C_Refresh_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_HoverIndicator_LongTail_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.Input Swap");

	Uw_HoverIndicator_LongTail_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.ExecuteUbergraph_w_HoverIndicator_LongTail
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_HoverIndicator_LongTail_C::ExecuteUbergraph_w_HoverIndicator_LongTail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HoverIndicator_LongTail.w_HoverIndicator_LongTail_C.ExecuteUbergraph_w_HoverIndicator_LongTail");

	Uw_HoverIndicator_LongTail_C_ExecuteUbergraph_w_HoverIndicator_LongTail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
