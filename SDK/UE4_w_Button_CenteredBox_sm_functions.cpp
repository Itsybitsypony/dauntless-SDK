// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Button_CenteredBox_sm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Button_CenteredBox_sm_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Set Button Label");

	Uw_Button_CenteredBox_sm_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Button_CenteredBox_sm_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.OnFocusReceived");

	Uw_Button_CenteredBox_sm_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_CenteredBox_sm_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Tick");

	Uw_Button_CenteredBox_sm_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Button_CenteredBox_sm_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_Button_CenteredBox_sm_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_CenteredBox_sm_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Show Hover");

	Uw_Button_CenteredBox_sm_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_CenteredBox_sm_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Hide Hover");

	Uw_Button_CenteredBox_sm_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Button_CenteredBox_sm_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.OnSynchronizeProperties");

	Uw_Button_CenteredBox_sm_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.ExecuteUbergraph_w_Button_CenteredBox_sm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_CenteredBox_sm_C::ExecuteUbergraph_w_Button_CenteredBox_sm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.ExecuteUbergraph_w_Button_CenteredBox_sm");

	Uw_Button_CenteredBox_sm_C_ExecuteUbergraph_w_Button_CenteredBox_sm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_Button_CenteredBox_sm_C::Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_CenteredBox_sm.w_Button_CenteredBox_sm_C.Button Clicked__DelegateSignature");

	Uw_Button_CenteredBox_sm_C_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
