// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_akevent_conditional_notify_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function akevent_conditional_notify.akevent_conditional_notify_C.ShouldExecuteNotify
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor**                 Owner                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldExecute_                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uakevent_conditional_notify_C::ShouldExecuteNotify(class AActor** Owner, bool* ShouldExecute_)
{
	static auto fn = UObject::FindObject<UFunction>("Function akevent_conditional_notify.akevent_conditional_notify_C.ShouldExecuteNotify");

	Uakevent_conditional_notify_C_ShouldExecuteNotify_Params params;
	params.Owner = Owner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ShouldExecute_ != nullptr)
		*ShouldExecute_ = params.ShouldExecute_;
}


// Function akevent_conditional_notify.akevent_conditional_notify_C.GetNotifyName
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

class FString Uakevent_conditional_notify_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function akevent_conditional_notify.akevent_conditional_notify_C.GetNotifyName");

	Uakevent_conditional_notify_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
