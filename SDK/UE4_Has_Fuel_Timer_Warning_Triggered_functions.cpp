// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_Has_Fuel_Timer_Warning_Triggered_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnGetDescription
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UHas_Fuel_Timer_Warning_Triggered_C::OnGetDescription()
{
	static auto fn = UObject::FindObject<UFunction>("Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnGetDescription");

	UHas_Fuel_Timer_Warning_Triggered_C_OnGetDescription_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnCommit
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonPlayerController** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest**                 OwningQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHas_Fuel_Timer_Warning_Triggered_C::OnCommit(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnCommit");

	UHas_Fuel_Timer_Warning_Triggered_C_OnCommit_Params params;
	params.PlayerController = PlayerController;
	params.OwningQuest = OwningQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnEvaluate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AArchonPlayerController** PlayerController               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UQuest**                 OwningQuest                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UHas_Fuel_Timer_Warning_Triggered_C::OnEvaluate(class AArchonPlayerController** PlayerController, class UQuest** OwningQuest)
{
	static auto fn = UObject::FindObject<UFunction>("Function Has_Fuel_Timer_Warning_Triggered.Has_Fuel_Timer_Warning_Triggered_C.OnEvaluate");

	UHas_Fuel_Timer_Warning_Triggered_C_OnEvaluate_Params params;
	params.PlayerController = PlayerController;
	params.OwningQuest = OwningQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
