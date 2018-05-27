// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_fauna_base_ai_controller_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function fauna_base_ai_controller.fauna_base_ai_controller_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Afauna_base_ai_controller_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_ai_controller.fauna_base_ai_controller_C.UserConstructionScript");

	Afauna_base_ai_controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_ai_controller.fauna_base_ai_controller_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_ai_controller_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_ai_controller.fauna_base_ai_controller_C.ReceiveTick");

	Afauna_base_ai_controller_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_ai_controller.fauna_base_ai_controller_C.OnPossess
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn**                  PossessedPawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_ai_controller_C::OnPossess(class APawn** PossessedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_ai_controller.fauna_base_ai_controller_C.OnPossess");

	Afauna_base_ai_controller_C_OnPossess_Params params;
	params.PossessedPawn = PossessedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function fauna_base_ai_controller.fauna_base_ai_controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature
// (HasOutParms, BlueprintEvent)
// Parameters:
// TArray<class AActor*>          UpdatedActors                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Afauna_base_ai_controller_C::BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature(TArray<class AActor*>* UpdatedActors)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_ai_controller.fauna_base_ai_controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature");

	Afauna_base_ai_controller_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_PerceptionUpdatedDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (UpdatedActors != nullptr)
		*UpdatedActors = params.UpdatedActors;
}


// Function fauna_base_ai_controller.fauna_base_ai_controller_C.ExecuteUbergraph_fauna_base_ai_controller
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Afauna_base_ai_controller_C::ExecuteUbergraph_fauna_base_ai_controller(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function fauna_base_ai_controller.fauna_base_ai_controller_C.ExecuteUbergraph_fauna_base_ai_controller");

	Afauna_base_ai_controller_C_ExecuteUbergraph_fauna_base_ai_controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
