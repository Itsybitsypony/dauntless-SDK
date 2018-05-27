// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_SwappableButton_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_SwappableButton.w_SwappableButton_C.GetIconFromKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// TAssetPtr<class UTexture2D>    Output_Get                     (Parm, OutParm)

void Uw_SwappableButton_C::GetIconFromKey(const struct FKey& Key, TAssetPtr<class UTexture2D>* Output_Get)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.GetIconFromKey");

	Uw_SwappableButton_C_GetIconFromKey_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;
}


// Function w_SwappableButton.w_SwappableButton_C.Refresh Clickable Button Style
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_SwappableButton_C::Refresh_Clickable_Button_Style()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Refresh Clickable Button Style");

	Uw_SwappableButton_C_Refresh_Clickable_Button_Style_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Refresh Position
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::Refresh_Position(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Refresh Position");

	Uw_SwappableButton_C_Refresh_Position_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Get Slot Position from Anchors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D               Position                       (Parm, OutParm, IsPlainOldData)

void Uw_SwappableButton_C::Get_Slot_Position_from_Anchors(struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Get Slot Position from Anchors");

	Uw_SwappableButton_C_Get_Slot_Position_from_Anchors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
}


// Function w_SwappableButton.w_SwappableButton_C.Refresh Anchors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::Refresh_Anchors(class UWidget* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Refresh Anchors");

	Uw_SwappableButton_C_Refresh_Anchors_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Get Horizontal Alignment from Anchors
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TEnumAsByte<EHorizontalAlignment> Alignment                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::Get_Horizontal_Alignment_from_Anchors(TEnumAsByte<EHorizontalAlignment>* Alignment)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Get Horizontal Alignment from Anchors");

	Uw_SwappableButton_C_Get_Horizontal_Alignment_from_Anchors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Alignment != nullptr)
		*Alignment = params.Alignment;
}


// Function w_SwappableButton.w_SwappableButton_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_SwappableButton_C::Set_Button_Label(const struct FText& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Set Button Label");

	Uw_SwappableButton_C_Set_Button_Label_Params params;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_SwappableButton_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.OnKeyDown");

	Uw_SwappableButton_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_SwappableButton.w_SwappableButton_C.OnLoaded_A058EA6248D678A919D5DF918A0F256D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::OnLoaded_A058EA6248D678A919D5DF918A0F256D(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.OnLoaded_A058EA6248D678A919D5DF918A0F256D");

	Uw_SwappableButton_C_OnLoaded_A058EA6248D678A919D5DF918A0F256D_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_SwappableButton_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Construct");

	Uw_SwappableButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_SwappableButton_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Refresh");

	Uw_SwappableButton_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_SwappableButton_C::BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_SwappableButton_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Input Swap");

	Uw_SwappableButton_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_SwappableButton_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Show Hover");

	Uw_SwappableButton_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_SwappableButton_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Hide Hover");

	Uw_SwappableButton_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Tick");

	Uw_SwappableButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_SwappableButton_C::BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Uw_SwappableButton_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_SwappableButton_C::BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	Uw_SwappableButton_C_BndEvt__ClickableButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.Refresh Button Label Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_Hovered                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::Refresh_Button_Label_Color(bool Is_Hovered)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.Refresh Button Label Color");

	Uw_SwappableButton_C_Refresh_Button_Label_Color_Params params;
	params.Is_Hovered = Is_Hovered;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.PreConstruct");

	Uw_SwappableButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.ExecuteUbergraph_w_SwappableButton
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_SwappableButton_C::ExecuteUbergraph_w_SwappableButton(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.ExecuteUbergraph_w_SwappableButton");

	Uw_SwappableButton_C_ExecuteUbergraph_w_SwappableButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_SwappableButton.w_SwappableButton_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_SwappableButton_C::OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_SwappableButton.w_SwappableButton_C.OnClicked__DelegateSignature");

	Uw_SwappableButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
