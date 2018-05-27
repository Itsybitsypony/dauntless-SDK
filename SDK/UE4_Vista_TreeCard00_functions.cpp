// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Vista_TreeCard00_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Vista_TreeCard00.Vista_TreeCard00_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVista_TreeCard00_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vista_TreeCard00.Vista_TreeCard00_C.UserConstructionScript");

	AVista_TreeCard00_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vista_TreeCard00.Vista_TreeCard00_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVista_TreeCard00_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Vista_TreeCard00.Vista_TreeCard00_C.ReceiveBeginPlay");

	AVista_TreeCard00_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vista_TreeCard00.Vista_TreeCard00_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVista_TreeCard00_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vista_TreeCard00.Vista_TreeCard00_C.ReceiveTick");

	AVista_TreeCard00_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Vista_TreeCard00.Vista_TreeCard00_C.ExecuteUbergraph_Vista_TreeCard00
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AVista_TreeCard00_C::ExecuteUbergraph_Vista_TreeCard00(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Vista_TreeCard00.Vista_TreeCard00_C.ExecuteUbergraph_Vista_TreeCard00");

	AVista_TreeCard00_C_ExecuteUbergraph_Vista_TreeCard00_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
