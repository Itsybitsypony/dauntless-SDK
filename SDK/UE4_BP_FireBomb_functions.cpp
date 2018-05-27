// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_FireBomb_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FireBomb.BP_FireBomb_C.ScaleUpBomb
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FireBomb_C::ScaleUpBomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.ScaleUpBomb");

	ABP_FireBomb_C_ScaleUpBomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.StopVFX
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FireBomb_C::StopVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.StopVFX");

	ABP_FireBomb_C_StopVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.StopSounds
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FireBomb_C::StopSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.StopSounds");

	ABP_FireBomb_C_StopSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.StartVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FireBomb_C::StartVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.StartVFX");

	ABP_FireBomb_C_StartVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.StartSounds
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_FireBomb_C::StartSounds()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.StartSounds");

	ABP_FireBomb_C_StartSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_FireBomb_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.UserConstructionScript");

	ABP_FireBomb_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireBomb_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.ReceiveTick");

	ABP_FireBomb_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FireBomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.ReceiveBeginPlay");

	ABP_FireBomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireBomb_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.ReceiveEndPlay");

	ABP_FireBomb_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FireBomb.BP_FireBomb_C.ExecuteUbergraph_BP_FireBomb
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_FireBomb_C::ExecuteUbergraph_BP_FireBomb(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FireBomb.BP_FireBomb_C.ExecuteUbergraph_BP_FireBomb");

	ABP_FireBomb_C_ExecuteUbergraph_BP_FireBomb_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
