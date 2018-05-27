// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ms_beam_radiant_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.SetBeamDamageScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ams_beam_radiant_bp_C::SetBeamDamageScale(bool Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.SetBeamDamageScale");

	Ams_beam_radiant_bp_C_SetBeamDamageScale_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.GetBeamDamageScale
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor**                 HitActor                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ams_beam_radiant_bp_C::GetBeamDamageScale(class AActor** HitActor, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.GetBeamDamageScale");

	Ams_beam_radiant_bp_C_GetBeamDamageScale_Params params;
	params.HitActor = HitActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Ams_beam_radiant_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.UserConstructionScript");

	Ams_beam_radiant_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Ams_beam_radiant_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ReceiveBeginPlay");

	Ams_beam_radiant_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ams_beam_radiant_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ReceiveTick");

	Ams_beam_radiant_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.AuthHitTarget_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Hit                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ams_beam_radiant_bp_C::AuthHitTarget_Event_1(bool Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.AuthHitTarget_Event_1");

	Ams_beam_radiant_bp_C_AuthHitTarget_Event_1_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ExecuteUbergraph_ms_beam_radiant_bp
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ams_beam_radiant_bp_C::ExecuteUbergraph_ms_beam_radiant_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ms_beam_radiant_bp.ms_beam_radiant_bp_C.ExecuteUbergraph_ms_beam_radiant_bp");

	Ams_beam_radiant_bp_C_ExecuteUbergraph_ms_beam_radiant_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
