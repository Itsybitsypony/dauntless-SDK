// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ms_projectile_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ms_projectile_base_bp.ms_projectile_base_bp_C.OnRep_AmmoScale
// (BlueprintCallable, BlueprintEvent)

void Ams_projectile_base_bp_C::OnRep_AmmoScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_projectile_base_bp.ms_projectile_base_bp_C.OnRep_AmmoScale");

	Ams_projectile_base_bp_C_OnRep_AmmoScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_projectile_base_bp.ms_projectile_base_bp_C.OnRep_ReplicatedRotationValues
// (HasDefaults, BlueprintCallable, BlueprintEvent)

void Ams_projectile_base_bp_C::OnRep_ReplicatedRotationValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_projectile_base_bp.ms_projectile_base_bp_C.OnRep_ReplicatedRotationValues");

	Ams_projectile_base_bp_C_OnRep_ReplicatedRotationValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_projectile_base_bp.ms_projectile_base_bp_C.Clamp360
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          OutAngle                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ams_projectile_base_bp_C::Clamp360(float Angle, float* OutAngle)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_projectile_base_bp.ms_projectile_base_bp_C.Clamp360");

	Ams_projectile_base_bp_C_Clamp360_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAngle != nullptr)
		*OutAngle = params.OutAngle;
}


// Function ms_projectile_base_bp.ms_projectile_base_bp_C.GetRandValue
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           NegativeAndPositive            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Min                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Max                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ams_projectile_base_bp_C::GetRandValue(bool NegativeAndPositive, float Min, float Max, float* Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_projectile_base_bp.ms_projectile_base_bp_C.GetRandValue");

	Ams_projectile_base_bp_C_GetRandValue_Params params;
	params.NegativeAndPositive = NegativeAndPositive;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function ms_projectile_base_bp.ms_projectile_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ams_projectile_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_projectile_base_bp.ms_projectile_base_bp_C.UserConstructionScript");

	Ams_projectile_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_projectile_base_bp.ms_projectile_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Ams_projectile_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_projectile_base_bp.ms_projectile_base_bp_C.ReceiveBeginPlay");

	Ams_projectile_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_projectile_base_bp.ms_projectile_base_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ams_projectile_base_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_projectile_base_bp.ms_projectile_base_bp_C.ReceiveTick");

	Ams_projectile_base_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_projectile_base_bp.ms_projectile_base_bp_C.ExecuteUbergraph_ms_projectile_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ams_projectile_base_bp_C::ExecuteUbergraph_ms_projectile_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_projectile_base_bp.ms_projectile_base_bp_C.ExecuteUbergraph_ms_projectile_base_bp");

	Ams_projectile_base_bp_C_ExecuteUbergraph_ms_projectile_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
