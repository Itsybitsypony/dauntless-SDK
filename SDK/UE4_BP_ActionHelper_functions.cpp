// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BP_ActionHelper_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ActionHelper.BP_ActionHelper_C.DebugShowChosenHelper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ActionHelper_C::DebugShowChosenHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionHelper.BP_ActionHelper_C.DebugShowChosenHelper");

	ABP_ActionHelper_C_DebugShowChosenHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionHelper.BP_ActionHelper_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActionHelper_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionHelper.BP_ActionHelper_C.UserConstructionScript");

	ABP_ActionHelper_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionHelper.BP_ActionHelper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ActionHelper_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionHelper.BP_ActionHelper_C.ReceiveBeginPlay");

	ABP_ActionHelper_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionHelper.BP_ActionHelper_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionHelper_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionHelper.BP_ActionHelper_C.ReceiveTick");

	ABP_ActionHelper_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActionHelper.BP_ActionHelper_C.ExecuteUbergraph_BP_ActionHelper
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActionHelper_C::ExecuteUbergraph_BP_ActionHelper(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionHelper.BP_ActionHelper_C.ExecuteUbergraph_BP_ActionHelper");

	ABP_ActionHelper_C_ExecuteUbergraph_BP_ActionHelper_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
