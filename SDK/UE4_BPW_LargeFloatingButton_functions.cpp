// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BPW_LargeFloatingButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_LargeFloatingButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.Construct");

	UBPW_LargeFloatingButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LargeFloatingButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.Tick");

	UBPW_LargeFloatingButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.BndEvt__Large Button_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBPW_LargeFloatingButton_C::BndEvt__Large_Button_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.BndEvt__Large Button_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature");

	UBPW_LargeFloatingButton_C_BndEvt__Large_Button_K2Node_ComponentBoundEvent_628_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBPW_LargeFloatingButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.OnSynchronizeProperties");

	UBPW_LargeFloatingButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.ExecuteUbergraph_BPW_LargeFloatingButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBPW_LargeFloatingButton_C::ExecuteUbergraph_BPW_LargeFloatingButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.ExecuteUbergraph_BPW_LargeFloatingButton");

	UBPW_LargeFloatingButton_C_ExecuteUbergraph_BPW_LargeFloatingButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.Focused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBPW_LargeFloatingButton_C::Focused__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPW_LargeFloatingButton.BPW_LargeFloatingButton_C.Focused__DelegateSignature");

	UBPW_LargeFloatingButton_C_Focused__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
