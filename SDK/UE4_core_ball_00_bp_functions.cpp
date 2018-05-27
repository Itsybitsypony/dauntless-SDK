// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_core_ball_00_bp_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function core_ball_00_bp.core_ball_00_bp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Acore_ball_00_bp_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_ball_00_bp.core_ball_00_bp_C.UserConstructionScript");

	Acore_ball_00_bp_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_ball_00_bp.core_ball_00_bp_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void Acore_ball_00_bp_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_ball_00_bp.core_ball_00_bp_C.Timeline_0__FinishedFunc");

	Acore_ball_00_bp_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_ball_00_bp.core_ball_00_bp_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void Acore_ball_00_bp_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_ball_00_bp.core_ball_00_bp_C.Timeline_0__UpdateFunc");

	Acore_ball_00_bp_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_ball_00_bp.core_ball_00_bp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Acore_ball_00_bp_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function core_ball_00_bp.core_ball_00_bp_C.ReceiveBeginPlay");

	Acore_ball_00_bp_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_ball_00_bp.core_ball_00_bp_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_ball_00_bp_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_ball_00_bp.core_ball_00_bp_C.ReceiveTick");

	Acore_ball_00_bp_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_ball_00_bp.core_ball_00_bp_C.UpdateDynamicDecal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Acore_ball_00_bp_C::UpdateDynamicDecal(TAssetPtr<class UTexture2D> Texture2D, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_ball_00_bp.core_ball_00_bp_C.UpdateDynamicDecal");

	Acore_ball_00_bp_C_UpdateDynamicDecal_Params params;
	params.Texture2D = Texture2D;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_ball_00_bp.core_ball_00_bp_C.SetCoreTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Acore_ball_00_bp_C::SetCoreTint(const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_ball_00_bp.core_ball_00_bp_C.SetCoreTint");

	Acore_ball_00_bp_C_SetCoreTint_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function core_ball_00_bp.core_ball_00_bp_C.ExecuteUbergraph_core_ball_00_bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Acore_ball_00_bp_C::ExecuteUbergraph_core_ball_00_bp(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function core_ball_00_bp.core_ball_00_bp_C.ExecuteUbergraph_core_ball_00_bp");

	Acore_ball_00_bp_C_ExecuteUbergraph_core_ball_00_bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
