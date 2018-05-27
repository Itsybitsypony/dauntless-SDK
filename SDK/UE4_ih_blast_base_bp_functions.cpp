// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_ih_blast_base_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ih_blast_base_bp.ih_blast_base_bp_C.GetCustomDamageScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Aih_blast_base_bp_C::GetCustomDamageScale(class AActor** TargetActor, float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_base_bp.ih_blast_base_bp_C.GetCustomDamageScale");

	Aih_blast_base_bp_C_GetCustomDamageScale_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function ih_blast_base_bp.ih_blast_base_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Aih_blast_base_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_base_bp.ih_blast_base_bp_C.UserConstructionScript");

	Aih_blast_base_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ih_blast_base_bp.ih_blast_base_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Aih_blast_base_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_base_bp.ih_blast_base_bp_C.ReceiveBeginPlay");

	Aih_blast_base_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ih_blast_base_bp.ih_blast_base_bp_C.CustomAOELogic
// (BlueprintCallable, BlueprintEvent)

void Aih_blast_base_bp_C::CustomAOELogic()
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_base_bp.ih_blast_base_bp_C.CustomAOELogic");

	Aih_blast_base_bp_C_CustomAOELogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ih_blast_base_bp.ih_blast_base_bp_C.ExecuteUbergraph_ih_blast_base_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Aih_blast_base_bp_C::ExecuteUbergraph_ih_blast_base_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ih_blast_base_bp.ih_blast_base_bp_C.ExecuteUbergraph_ih_blast_base_bp");

	Aih_blast_base_bp_C_ExecuteUbergraph_ih_blast_base_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
