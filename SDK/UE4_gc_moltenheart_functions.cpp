// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_gc_moltenheart_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function gc_moltenheart.gc_moltenheart_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Agc_moltenheart_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function gc_moltenheart.gc_moltenheart_C.UserConstructionScript");

	Agc_moltenheart_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gc_moltenheart.gc_moltenheart_C.ClearVFX
// (BlueprintCallable, BlueprintEvent)

void Agc_moltenheart_C::ClearVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function gc_moltenheart.gc_moltenheart_C.ClearVFX");

	Agc_moltenheart_C_ClearVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gc_moltenheart.gc_moltenheart_C.StartWarning
// (BlueprintCallable, BlueprintEvent)

void Agc_moltenheart_C::StartWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function gc_moltenheart.gc_moltenheart_C.StartWarning");

	Agc_moltenheart_C_StartWarning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gc_moltenheart.gc_moltenheart_C.K2_HandleGameplayCue
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class AActor**                 MyTarget                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Agc_moltenheart_C::K2_HandleGameplayCue(class AActor** MyTarget, TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function gc_moltenheart.gc_moltenheart_C.K2_HandleGameplayCue");

	Agc_moltenheart_C_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function gc_moltenheart.gc_moltenheart_C.ExecuteUbergraph_gc_moltenheart
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Agc_moltenheart_C::ExecuteUbergraph_gc_moltenheart(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function gc_moltenheart.gc_moltenheart_C.ExecuteUbergraph_gc_moltenheart");

	Agc_moltenheart_C_ExecuteUbergraph_gc_moltenheart_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
