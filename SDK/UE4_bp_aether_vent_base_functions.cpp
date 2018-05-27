// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bp_aether_vent_base_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_aether_vent_base.bp_aether_vent_base_C.SetInteractionAvailability
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool*                          Active                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Out                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_aether_vent_base_C::SetInteractionAvailability(bool* Active, bool* Out)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.SetInteractionAvailability");

	Abp_aether_vent_base_C_SetInteractionAvailability_Params params;
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out != nullptr)
		*Out = params.Out;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.OnRep_VentActivated
// (BlueprintCallable, BlueprintEvent)

void Abp_aether_vent_base_C::OnRep_VentActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.OnRep_VentActivated");

	Abp_aether_vent_base_C_OnRep_VentActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.CanUserStartInteraction 
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanUse                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Abp_aether_vent_base_C::CanUserStartInteraction_(class UArchonInteractionUserComponent** User, bool* CanUse)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.CanUserStartInteraction ");

	Abp_aether_vent_base_C_CanUserStartInteraction__Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CanUse != nullptr)
		*CanUse = params.CanUse;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.AdjustAetherEffects
// (Public, BlueprintCallable, BlueprintEvent)

void Abp_aether_vent_base_C::AdjustAetherEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.AdjustAetherEffects");

	Abp_aether_vent_base_C_AdjustAetherEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.AdjustComponentToGround
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_aether_vent_base_C::AdjustComponentToGround(class USceneComponent* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.AdjustComponentToGround");

	Abp_aether_vent_base_C_AdjustComponentToGround_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.ReduceEmber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Ammount                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_aether_vent_base_C::ReduceEmber(float Ammount)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.ReduceEmber");

	Abp_aether_vent_base_C_ReduceEmber_Params params;
	params.Ammount = Ammount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.OnRep_EmberLeft
// (BlueprintCallable, BlueprintEvent)

void Abp_aether_vent_base_C::OnRep_EmberLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.OnRep_EmberLeft");

	Abp_aether_vent_base_C_OnRep_EmberLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_aether_vent_base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.UserConstructionScript");

	Abp_aether_vent_base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abp_aether_vent_base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.ReceiveBeginPlay");

	Abp_aether_vent_base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.OnUserCompletedInteraction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UArchonInteractionUserComponent** User                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_aether_vent_base_C::OnUserCompletedInteraction(class UArchonInteractionUserComponent** User)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.OnUserCompletedInteraction");

	Abp_aether_vent_base_C_OnUserCompletedInteraction_Params params;
	params.User = User;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bp_aether_vent_base.bp_aether_vent_base_C.ExecuteUbergraph_bp_aether_vent_base
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Abp_aether_vent_base_C::ExecuteUbergraph_bp_aether_vent_base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bp_aether_vent_base.bp_aether_vent_base_C.ExecuteUbergraph_bp_aether_vent_base");

	Abp_aether_vent_base_C_ExecuteUbergraph_bp_aether_vent_base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
