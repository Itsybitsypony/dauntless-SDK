// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ai_info_debug_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ai_info_debug.ai_info_debug_C.POST Server Behemoth Montage Event
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Started                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Interrupted                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aai_info_debug_C::POST_Server_Behemoth_Montage_Event(class UAnimMontage* Montage, bool Started, bool Interrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_info_debug.ai_info_debug_C.POST Server Behemoth Montage Event");

	Aai_info_debug_C_POST_Server_Behemoth_Montage_Event_Params params;
	params.Montage = Montage;
	params.Started = Started;
	params.Interrupted = Interrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_info_debug.ai_info_debug_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aai_info_debug_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_info_debug.ai_info_debug_C.UserConstructionScript");

	Aai_info_debug_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_info_debug.ai_info_debug_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aai_info_debug_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_info_debug.ai_info_debug_C.ReceiveBeginPlay");

	Aai_info_debug_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_info_debug.ai_info_debug_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aai_info_debug_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_info_debug.ai_info_debug_C.ReceiveTick");

	Aai_info_debug_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_info_debug.ai_info_debug_C.Set Debug Visibility
// (BlueprintCallable, BlueprintEvent)

void Aai_info_debug_C::Set_Debug_Visibility()
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_info_debug.ai_info_debug_C.Set Debug Visibility");

	Aai_info_debug_C_Set_Debug_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_info_debug.ai_info_debug_C.MontageStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aai_info_debug_C::MontageStarted(class UAnimMontage* Montage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_info_debug.ai_info_debug_C.MontageStarted");

	Aai_info_debug_C_MontageStarted_Params params;
	params.Montage = Montage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_info_debug.ai_info_debug_C.MontageBlendingOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*            Montage                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInterrupted                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aai_info_debug_C::MontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_info_debug.ai_info_debug_C.MontageBlendingOut");

	Aai_info_debug_C_MontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ai_info_debug.ai_info_debug_C.ExecuteUbergraph_ai_info_debug
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aai_info_debug_C::ExecuteUbergraph_ai_info_debug(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ai_info_debug.ai_info_debug_C.ExecuteUbergraph_ai_info_debug");

	Aai_info_debug_C_ExecuteUbergraph_ai_info_debug_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
