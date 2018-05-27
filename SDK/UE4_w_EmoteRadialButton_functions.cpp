// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_EmoteRadialButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Get_EmoteName_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_EmoteRadialButton_C::Get_EmoteName_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.Get_EmoteName_Text_1");

	Uw_EmoteRadialButton_C_Get_EmoteName_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_EmoteRadialButton_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.Set Button Label");

	Uw_EmoteRadialButton_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_EmoteRadialButton_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnFocusReceived");

	Uw_EmoteRadialButton_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnLoaded_A058EA6248D678A919D5DF91735114BE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EmoteRadialButton_C::OnLoaded_A058EA6248D678A919D5DF91735114BE(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnLoaded_A058EA6248D678A919D5DF91735114BE");

	Uw_EmoteRadialButton_C_OnLoaded_A058EA6248D678A919D5DF91735114BE_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EmoteRadialButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.Tick");

	Uw_EmoteRadialButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_EmoteRadialButton_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_EmoteRadialButton_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_EmoteRadialButton_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.Show Hover");

	Uw_EmoteRadialButton_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_EmoteRadialButton_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.Hide Hover");

	Uw_EmoteRadialButton_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EmoteRadialButton_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.OnSynchronizeProperties");

	Uw_EmoteRadialButton_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_EmoteRadialButton_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.Refresh");

	Uw_EmoteRadialButton_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_EmoteRadialButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.Construct");

	Uw_EmoteRadialButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.ExecuteUbergraph_w_EmoteRadialButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_EmoteRadialButton_C::ExecuteUbergraph_w_EmoteRadialButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.ExecuteUbergraph_w_EmoteRadialButton");

	Uw_EmoteRadialButton_C_ExecuteUbergraph_w_EmoteRadialButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_EmoteRadialButton.w_EmoteRadialButton_C.Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_EmoteRadialButton_C::Button_Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_EmoteRadialButton.w_EmoteRadialButton_C.Button Clicked__DelegateSignature");

	Uw_EmoteRadialButton_C_Button_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
