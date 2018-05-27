// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_global_loading_dispatcher_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function global_loading_dispatcher.global_loading_dispatcher_C.LoadingScreenClosed
// (Public, BlueprintCallable, BlueprintEvent)

void Uglobal_loading_dispatcher_C::LoadingScreenClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function global_loading_dispatcher.global_loading_dispatcher_C.LoadingScreenClosed");

	Uglobal_loading_dispatcher_C_LoadingScreenClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_loading_dispatcher.global_loading_dispatcher_C.IsLoadingScreenClosed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uglobal_loading_dispatcher_C::IsLoadingScreenClosed(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_loading_dispatcher.global_loading_dispatcher_C.IsLoadingScreenClosed");

	Uglobal_loading_dispatcher_C_IsLoadingScreenClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function global_loading_dispatcher.global_loading_dispatcher_C.OnReset
// (Event, Public, BlueprintEvent)

void Uglobal_loading_dispatcher_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function global_loading_dispatcher.global_loading_dispatcher_C.OnReset");

	Uglobal_loading_dispatcher_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_loading_dispatcher.global_loading_dispatcher_C.ExecuteUbergraph_global_loading_dispatcher
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uglobal_loading_dispatcher_C::ExecuteUbergraph_global_loading_dispatcher(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function global_loading_dispatcher.global_loading_dispatcher_C.ExecuteUbergraph_global_loading_dispatcher");

	Uglobal_loading_dispatcher_C_ExecuteUbergraph_global_loading_dispatcher_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function global_loading_dispatcher.global_loading_dispatcher_C.OnLoadingScreenClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uglobal_loading_dispatcher_C::OnLoadingScreenClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function global_loading_dispatcher.global_loading_dispatcher_C.OnLoadingScreenClosed__DelegateSignature");

	Uglobal_loading_dispatcher_C_OnLoadingScreenClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
