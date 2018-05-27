// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_FakeFocusReceiveCaster_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_FakeFocusReceiveCaster.w_FakeFocusReceiveCaster_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_FakeFocusReceiveCaster_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FakeFocusReceiveCaster.w_FakeFocusReceiveCaster_C.OnFocusReceived");

	Uw_FakeFocusReceiveCaster_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_FakeFocusReceiveCaster.w_FakeFocusReceiveCaster_C.FakeFocusReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_FakeFocusReceiveCaster_C::FakeFocusReceived__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_FakeFocusReceiveCaster.w_FakeFocusReceiveCaster_C.FakeFocusReceived__DelegateSignature");

	Uw_FakeFocusReceiveCaster_C_FakeFocusReceived__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
