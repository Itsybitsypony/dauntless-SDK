// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_cblades_weapon_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function cblades_weapon_bp.cblades_weapon_bp_C.GetMeterTunables
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcblades_tunables_str   Tunables                       (Parm, OutParm)

void Acblades_weapon_bp_C::GetMeterTunables(struct Fcblades_tunables_str* Tunables)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.GetMeterTunables");

	Acblades_weapon_bp_C_GetMeterTunables_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Tunables != nullptr)
		*Tunables = params.Tunables;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.CanExecuteComboTransition
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FComboInputBuffer       ComboInputBuffer               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Acblades_weapon_bp_C::CanExecuteComboTransition(struct FComboInputBuffer* ComboInputBuffer)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.CanExecuteComboTransition");

	Acblades_weapon_bp_C_CanExecuteComboTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ComboInputBuffer != nullptr)
		*ComboInputBuffer = params.ComboInputBuffer;

	return params.ReturnValue;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.GetPushAimTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*     Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acblades_weapon_bp_C::GetPushAimTarget(class UPrimitiveComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.GetPushAimTarget");

	Acblades_weapon_bp_C_GetPushAimTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.GetPullAimTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TraceTestAngle                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceLength                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          TraceRadius                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<EDrawDebugTrace>   DebugDrawMode                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     Target                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acblades_weapon_bp_C::GetPullAimTarget(float TraceTestAngle, float TraceLength, float TraceRadius, TEnumAsByte<EDrawDebugTrace> DebugDrawMode, class UPrimitiveComponent** Target)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.GetPullAimTarget");

	Acblades_weapon_bp_C_GetPullAimTarget_Params params;
	params.TraceTestAngle = TraceTestAngle;
	params.TraceLength = TraceLength;
	params.TraceRadius = TraceRadius;
	params.DebugDrawMode = DebugDrawMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Target != nullptr)
		*Target = params.Target;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.UpdateSpline
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*        Spline                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TArray<class USplineMeshComponent*> SplineComponentArray           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void Acblades_weapon_bp_C::UpdateSpline(class USplineComponent* Spline, TArray<class USplineMeshComponent*>* SplineComponentArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.UpdateSpline");

	Acblades_weapon_bp_C_UpdateSpline_Params params;
	params.Spline = Spline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SplineComponentArray != nullptr)
		*SplineComponentArray = params.SplineComponentArray;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.DEPRECIATED_SpecialAbilityAim
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acblades_weapon_bp_C::DEPRECIATED_SpecialAbilityAim()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.DEPRECIATED_SpecialAbilityAim");

	Acblades_weapon_bp_C_DEPRECIATED_SpecialAbilityAim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.RotatePlayerToTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*         TargetComponent                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acblades_weapon_bp_C::RotatePlayerToTarget(class USceneComponent* TargetComponent, float Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.RotatePlayerToTarget");

	Acblades_weapon_bp_C_RotatePlayerToTarget_Params params;
	params.TargetComponent = TargetComponent;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.GetBestCameraTarget
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>      Array                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UCameraComponent*        Camera                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent*     TargetComponent                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Acblades_weapon_bp_C::GetBestCameraTarget(class UCameraComponent* Camera, class AActor* Player, TArray<struct FHitResult>* Array, class UPrimitiveComponent** TargetComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.GetBestCameraTarget");

	Acblades_weapon_bp_C_GetBestCameraTarget_Params params;
	params.Camera = Camera;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (TargetComponent != nullptr)
		*TargetComponent = params.TargetComponent;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Acblades_weapon_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.UserConstructionScript");

	Acblades_weapon_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.CBlade_Push
// (BlueprintCallable, BlueprintEvent)

void Acblades_weapon_bp_C::CBlade_Push()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.CBlade_Push");

	Acblades_weapon_bp_C_CBlade_Push_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.CBlade_Pull_Aim
// (BlueprintCallable, BlueprintEvent)

void Acblades_weapon_bp_C::CBlade_Pull_Aim()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.CBlade_Pull_Aim");

	Acblades_weapon_bp_C_CBlade_Pull_Aim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.Server_PullProjectile
// (BlueprintCallable, BlueprintEvent)

void Acblades_weapon_bp_C::Server_PullProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.Server_PullProjectile");

	Acblades_weapon_bp_C_Server_PullProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.CallWeaponSpecificFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  Function_Name                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acblades_weapon_bp_C::CallWeaponSpecificFunction(struct FName* Function_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.CallWeaponSpecificFunction");

	Acblades_weapon_bp_C_CallWeaponSpecificFunction_Params params;
	params.Function_Name = Function_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.PullLaunchStarted
// (BlueprintCallable, BlueprintEvent)

void Acblades_weapon_bp_C::PullLaunchStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.PullLaunchStarted");

	Acblades_weapon_bp_C_PullLaunchStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.DebugMulticastDrawSphere
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Location                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Thickness                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acblades_weapon_bp_C::DebugMulticastDrawSphere(const struct FVector& Location, float Duration, float Thickness, const struct FLinearColor& Color, float Radius)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.DebugMulticastDrawSphere");

	Acblades_weapon_bp_C_DebugMulticastDrawSphere_Params params;
	params.Location = Location;
	params.Duration = Duration;
	params.Thickness = Thickness;
	params.Color = Color;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acblades_weapon_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.ReceiveTick");

	Acblades_weapon_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.GameplayCue.Combat.OnDamageGiven
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<EGameplayCueEvent>* EventType                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FGameplayCueParameters* Parameters                     (BlueprintVisible, BlueprintReadOnly, Parm)

void Acblades_weapon_bp_C::GameplayCue_Combat_OnDamageGiven(TEnumAsByte<EGameplayCueEvent>* EventType, struct FGameplayCueParameters* Parameters)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.GameplayCue.Combat.OnDamageGiven");

	Acblades_weapon_bp_C_GameplayCue_Combat_OnDamageGiven_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.K2_OnEquip
// (Event, Public, BlueprintEvent)

void Acblades_weapon_bp_C::K2_OnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.K2_OnEquip");

	Acblades_weapon_bp_C_K2_OnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.Cheat Charge Weapon
// (Public, BlueprintCallable, BlueprintEvent)

void Acblades_weapon_bp_C::Cheat_Charge_Weapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.Cheat Charge Weapon");

	Acblades_weapon_bp_C_Cheat_Charge_Weapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function cblades_weapon_bp.cblades_weapon_bp_C.ExecuteUbergraph_cblades_weapon_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acblades_weapon_bp_C::ExecuteUbergraph_cblades_weapon_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function cblades_weapon_bp.cblades_weapon_bp_C.ExecuteUbergraph_cblades_weapon_bp");

	Acblades_weapon_bp_C_ExecuteUbergraph_cblades_weapon_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
