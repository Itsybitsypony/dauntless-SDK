// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTService_LookAlongPath_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTService_LookAlongPath.BTService_LookAlongPath_C.SetLookAheadPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABp_Behemoth_C*          Behemoth                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_LookAlongPath_C::SetLookAheadPosition(class ABp_Behemoth_C* Behemoth)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_LookAlongPath.BTService_LookAlongPath_C.SetLookAheadPosition");

	UBTService_LookAlongPath_C_SetLookAheadPosition_Params params;
	params.Behemoth = Behemoth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_LookAlongPath_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveActivation");

	UBTService_LookAlongPath_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveDeactivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_LookAlongPath_C::ReceiveDeactivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveDeactivation");

	UBTService_LookAlongPath_C_ReceiveDeactivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_LookAlongPath_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_LookAlongPath.BTService_LookAlongPath_C.ReceiveTick");

	UBTService_LookAlongPath_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTService_LookAlongPath.BTService_LookAlongPath_C.ExecuteUbergraph_BTService_LookAlongPath
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTService_LookAlongPath_C::ExecuteUbergraph_BTService_LookAlongPath(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTService_LookAlongPath.BTService_LookAlongPath_C.ExecuteUbergraph_BTService_LookAlongPath");

	UBTService_LookAlongPath_C_ExecuteUbergraph_BTService_LookAlongPath_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
