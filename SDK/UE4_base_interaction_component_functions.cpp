// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_base_interaction_component_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function base_interaction_component.base_interaction_component_C.SetSiblingComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetComponent*        Callout                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Range                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Highlightable                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::SetSiblingComponents(class UWidgetComponent* Callout, class UPrimitiveComponent* Range, class UPrimitiveComponent* Highlightable)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.SetSiblingComponents");

	Ubase_interaction_component_C_SetSiblingComponents_Params params;
	params.Callout = Callout;
	params.Range = Range;
	params.Highlightable = Highlightable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.Component_CanUse?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Usable_                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::Component_CanUse_(class APawn* UsingPawn, bool* Usable_)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.Component_CanUse?");

	Ubase_interaction_component_C_Component_CanUse__Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Usable_ != nullptr)
		*Usable_ = params.Usable_;
}


// Function base_interaction_component.base_interaction_component_C.OnLoaded_09AE4DDF49C7EC6C60963AB7703F2FF9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::OnLoaded_09AE4DDF49C7EC6C60963AB7703F2FF9(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.OnLoaded_09AE4DDF49C7EC6C60963AB7703F2FF9");

	Ubase_interaction_component_C_OnLoaded_09AE4DDF49C7EC6C60963AB7703F2FF9_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.ReceiveTick");

	Ubase_interaction_component_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.ClientStartFill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::ClientStartFill(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.ClientStartFill");

	Ubase_interaction_component_C_ClientStartFill_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.ClientCancelFill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ChainedSuccess                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::ClientCancelFill(class APawn* UsingPawn, bool ChainedSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.ClientCancelFill");

	Ubase_interaction_component_C_ClientCancelFill_Params params;
	params.UsingPawn = UsingPawn;
	params.ChainedSuccess = ChainedSuccess;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.InteractionSuccess
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   SucceedingPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::InteractionSuccess(class APawn* SucceedingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.InteractionSuccess");

	Ubase_interaction_component_C_InteractionSuccess_Params params;
	params.SucceedingPawn = SucceedingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.Comp_highlight_interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::Comp_highlight_interaction(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.Comp_highlight_interaction");

	Ubase_interaction_component_C_Comp_highlight_interaction_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.Comp_unhighlight_interaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::Comp_unhighlight_interaction(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.Comp_unhighlight_interaction");

	Ubase_interaction_component_C_Comp_unhighlight_interaction_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.Comp_StartUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::Comp_StartUse(class APawn* UsingPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.Comp_StartUse");

	Ubase_interaction_component_C_Comp_StartUse_Params params;
	params.UsingPawn = UsingPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.Comp_StopUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                   UsingPawn                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::Comp_StopUse(class APawn* UsingPawn, bool Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.Comp_StopUse");

	Ubase_interaction_component_C_Comp_StopUse_Params params;
	params.UsingPawn = UsingPawn;
	params.Success = Success;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.OnInteractionBeingOverlap
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFromSweep                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult              SweepResult                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Ubase_interaction_component_C::OnInteractionBeingOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.OnInteractionBeingOverlap");

	Ubase_interaction_component_C_OnInteractionBeingOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.OnInteractionEndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     OverlappedComponent            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            OtherBodyIndex                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::OnInteractionEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.OnInteractionEndOverlap");

	Ubase_interaction_component_C_OnInteractionEndOverlap_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.BindOverlapEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     PrimitiveComponent             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::BindOverlapEvents(class UPrimitiveComponent* PrimitiveComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.BindOverlapEvents");

	Ubase_interaction_component_C_BindOverlapEvents_Params params;
	params.PrimitiveComponent = PrimitiveComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.ForceClearAllTimers
// (BlueprintCallable, BlueprintEvent)

void Ubase_interaction_component_C::ForceClearAllTimers()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.ForceClearAllTimers");

	Ubase_interaction_component_C_ForceClearAllTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void Ubase_interaction_component_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.ReceiveBeginPlay");

	Ubase_interaction_component_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function base_interaction_component.base_interaction_component_C.ExecuteUbergraph_base_interaction_component
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubase_interaction_component_C::ExecuteUbergraph_base_interaction_component(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function base_interaction_component.base_interaction_component_C.ExecuteUbergraph_base_interaction_component");

	Ubase_interaction_component_C_ExecuteUbergraph_base_interaction_component_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
