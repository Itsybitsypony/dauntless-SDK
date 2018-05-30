// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BTTask_ResetFleeTimer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTTask_ResetFleeTimer.BTTask_ResetFleeTimer_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_ResetFleeTimer_C::ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ResetFleeTimer.BTTask_ResetFleeTimer_C.ReceiveExecute");

	UBTTask_ResetFleeTimer_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTTask_ResetFleeTimer.BTTask_ResetFleeTimer_C.ExecuteUbergraph_BTTask_ResetFleeTimer
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTTask_ResetFleeTimer_C::ExecuteUbergraph_BTTask_ResetFleeTimer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTTask_ResetFleeTimer.BTTask_ResetFleeTimer_C.ExecuteUbergraph_BTTask_ResetFleeTimer");

	UBTTask_ResetFleeTimer_C_ExecuteUbergraph_BTTask_ResetFleeTimer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
