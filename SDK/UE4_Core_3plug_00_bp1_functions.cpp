// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Core_3plug_00_bp1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACore_3plug_00_bp1_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.UserConstructionScript");

	ACore_3plug_00_bp1_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ACore_3plug_00_bp1_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.Timeline_0__FinishedFunc");

	ACore_3plug_00_bp1_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ACore_3plug_00_bp1_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.Timeline_0__UpdateFunc");

	ACore_3plug_00_bp1_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACore_3plug_00_bp1_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ReceiveTick");

	ACore_3plug_00_bp1_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.UpdateDynamicDecal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    Texture2D                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACore_3plug_00_bp1_C::UpdateDynamicDecal(TAssetPtr<class UTexture2D> Texture2D, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.UpdateDynamicDecal");

	ACore_3plug_00_bp1_C_UpdateDynamicDecal_Params params;
	params.Texture2D = Texture2D;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACore_3plug_00_bp1_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ReceiveBeginPlay");

	ACore_3plug_00_bp1_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.SetCoreTint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Value                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ACore_3plug_00_bp1_C::SetCoreTint(const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.SetCoreTint");

	ACore_3plug_00_bp1_C_SetCoreTint_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ExecuteUbergraph_Core_3plug_00_bp1
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ACore_3plug_00_bp1_C::ExecuteUbergraph_Core_3plug_00_bp1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Core_3plug_00_bp1.Core_3plug_00_bp1_C.ExecuteUbergraph_Core_3plug_00_bp1");

	ACore_3plug_00_bp1_C_ExecuteUbergraph_Core_3plug_00_bp1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
