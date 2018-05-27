// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_player_animgraph_interface_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function player_animgraph_interface.player_animgraph_interface_C.SetIsClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsClient                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_animgraph_interface_C::SetIsClient(bool IsClient)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.SetIsClient");

	Uplayer_animgraph_interface_C_SetIsClient_Params params;
	params.IsClient = IsClient;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_animgraph_interface.player_animgraph_interface_C.SetSecondaryMotion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          SkirtHeavyAlpha                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          SkirtLightAlpha                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TabardAdjustAlpha              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_animgraph_interface_C::SetSecondaryMotion(float SkirtHeavyAlpha, float SkirtLightAlpha, float TabardAdjustAlpha)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.SetSecondaryMotion");

	Uplayer_animgraph_interface_C_SetSecondaryMotion_Params params;
	params.SkirtHeavyAlpha = SkirtHeavyAlpha;
	params.SkirtLightAlpha = SkirtLightAlpha;
	params.TabardAdjustAlpha = TabardAdjustAlpha;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_animgraph_interface.player_animgraph_interface_C.UpdateAimOffsetTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Target                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uplayer_animgraph_interface_C::UpdateAimOffsetTarget(const struct FVector& Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.UpdateAimOffsetTarget");

	Uplayer_animgraph_interface_C_UpdateAimOffsetTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_animgraph_interface.player_animgraph_interface_C.EnableAimOffset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_animgraph_interface_C::EnableAimOffset(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.EnableAimOffset");

	Uplayer_animgraph_interface_C_EnableAimOffset_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAimRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                Rotation                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uplayer_animgraph_interface_C::SetCBladePullAimRotation(const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAimRotation");

	Uplayer_animgraph_interface_C_SetCBladePullAimRotation_Params params;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAimTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     AimTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_animgraph_interface_C::SetCBladePullAimTarget(class UPrimitiveComponent* AimTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAimTarget");

	Uplayer_animgraph_interface_C_SetCBladePullAimTarget_Params params;
	params.AimTarget = AimTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_animgraph_interface.player_animgraph_interface_C.SetCBladeEnablePullAim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enable                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_animgraph_interface_C::SetCBladeEnablePullAim(bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.SetCBladeEnablePullAim");

	Uplayer_animgraph_interface_C_SetCBladeEnablePullAim_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAttachTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     AttachTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 ImpactPoint                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uplayer_animgraph_interface_C::SetCBladePullAttachTarget(class UPrimitiveComponent* AttachTarget, const struct FVector& ImpactPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.SetCBladePullAttachTarget");

	Uplayer_animgraph_interface_C_SetCBladePullAttachTarget_Params params;
	params.AttachTarget = AttachTarget;
	params.ImpactPoint = ImpactPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function player_animgraph_interface.player_animgraph_interface_C.SetWeaponOnBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OnBack                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uplayer_animgraph_interface_C::SetWeaponOnBack(bool OnBack)
{
	static auto fn = UObject::FindObject<UFunction>("Function player_animgraph_interface.player_animgraph_interface_C.SetWeaponOnBack");

	Uplayer_animgraph_interface_C_SetWeaponOnBack_Params params;
	params.OnBack = OnBack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
