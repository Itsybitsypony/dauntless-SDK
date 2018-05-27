// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_BasePylon_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_BasePylon.BP_BasePylon_C.StopVFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BasePylon_C::StopVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.StopVFX");

	ABP_BasePylon_C_StopVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasePylon.BP_BasePylon_C.StopSounds
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BasePylon_C::StopSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.StopSounds");

	ABP_BasePylon_C_StopSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasePylon.BP_BasePylon_C.StartVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_BasePylon_C::StartVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.StartVFX");

	ABP_BasePylon_C_StartVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasePylon.BP_BasePylon_C.StartSounds
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_BasePylon_C::StartSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.StartSounds");

	ABP_BasePylon_C_StartSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasePylon.BP_BasePylon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_BasePylon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.UserConstructionScript");

	ABP_BasePylon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasePylon.BP_BasePylon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BasePylon_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.ReceiveTick");

	ABP_BasePylon_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasePylon.BP_BasePylon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BasePylon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.ReceiveBeginPlay");

	ABP_BasePylon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasePylon.BP_BasePylon_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BasePylon_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.ReceiveEndPlay");

	ABP_BasePylon_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_BasePylon.BP_BasePylon_C.ExecuteUbergraph_BP_BasePylon
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_BasePylon_C::ExecuteUbergraph_BP_BasePylon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasePylon.BP_BasePylon_C.ExecuteUbergraph_BP_BasePylon");

	ABP_BasePylon_C_ExecuteUbergraph_BP_BasePylon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
