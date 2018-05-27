// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_look_at_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function look_at_component.look_at_component_C.ClearLookAtTarget
// (Public, BlueprintCallable, BlueprintEvent)

void Ulook_at_component_C::ClearLookAtTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function look_at_component.look_at_component_C.ClearLookAtTarget");

	Ulook_at_component_C_ClearLookAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function look_at_component.look_at_component_C.GetLookAtAlpha
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          LookAtAlpha                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ulook_at_component_C::GetLookAtAlpha(float* LookAtAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function look_at_component.look_at_component_C.GetLookAtAlpha");

	Ulook_at_component_C_GetLookAtAlpha_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtAlpha != nullptr)
		*LookAtAlpha = params.LookAtAlpha;
}


// Function look_at_component.look_at_component_C.Disable
// (Public, BlueprintCallable, BlueprintEvent)

void Ulook_at_component_C::Disable()
{
	static auto fn = UObject::FindObject<UFunction>("Function look_at_component.look_at_component_C.Disable");

	Ulook_at_component_C_Disable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function look_at_component.look_at_component_C.Enable
// (Public, BlueprintCallable, BlueprintEvent)

void Ulook_at_component_C::Enable()
{
	static auto fn = UObject::FindObject<UFunction>("Function look_at_component.look_at_component_C.Enable");

	Ulook_at_component_C_Enable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function look_at_component.look_at_component_C.GetLookAtTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 LookAtTarget                   (Parm, OutParm, IsPlainOldData)

void Ulook_at_component_C::GetLookAtTarget(struct FVector* LookAtTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function look_at_component.look_at_component_C.GetLookAtTarget");

	Ulook_at_component_C_GetLookAtTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LookAtTarget != nullptr)
		*LookAtTarget = params.LookAtTarget;
}


// Function look_at_component.look_at_component_C.SetLookAtTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 LookAtTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Ulook_at_component_C::SetLookAtTarget(const struct FVector& LookAtTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function look_at_component.look_at_component_C.SetLookAtTarget");

	Ulook_at_component_C_SetLookAtTarget_Params params;
	params.LookAtTarget = LookAtTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function look_at_component.look_at_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulook_at_component_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function look_at_component.look_at_component_C.ReceiveTick");

	Ulook_at_component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function look_at_component.look_at_component_C.ExecuteUbergraph_look_at_component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ulook_at_component_C::ExecuteUbergraph_look_at_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function look_at_component.look_at_component_C.ExecuteUbergraph_look_at_component");

	Ulook_at_component_C_ExecuteUbergraph_look_at_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
