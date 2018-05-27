// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_behemoth_eventdispatcher_bpc_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function behemoth_eventdispatcher_bpc.behemoth_eventdispatcher_bpc_C.OnCustomNotifyEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CustomNotifyEventName          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_eventdispatcher_bpc_C::OnCustomNotifyEvent__DelegateSignature(const struct FName& CustomNotifyEventName)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_eventdispatcher_bpc.behemoth_eventdispatcher_bpc_C.OnCustomNotifyEvent__DelegateSignature");

	Ubehemoth_eventdispatcher_bpc_C_OnCustomNotifyEvent__DelegateSignature_Params params;
	params.CustomNotifyEventName = CustomNotifyEventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function behemoth_eventdispatcher_bpc.behemoth_eventdispatcher_bpc_C.AuthOnStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<Ebehemoth_states_enum> State                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<Ebehemoth_state_event> ChangeThatHappened             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubehemoth_eventdispatcher_bpc_C::AuthOnStateChanged__DelegateSignature(TEnumAsByte<Ebehemoth_states_enum> State, TEnumAsByte<Ebehemoth_state_event> ChangeThatHappened)
{
	static auto fn = UObject::FindObject<UFunction>("Function behemoth_eventdispatcher_bpc.behemoth_eventdispatcher_bpc_C.AuthOnStateChanged__DelegateSignature");

	Ubehemoth_eventdispatcher_bpc_C_AuthOnStateChanged__DelegateSignature_Params params;
	params.State = State;
	params.ChangeThatHappened = ChangeThatHappened;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
