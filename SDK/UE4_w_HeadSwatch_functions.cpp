// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_HeadSwatch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_HeadSwatch.w_HeadSwatch_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_HeadSwatch_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.OnKeyDown");

	Uw_HeadSwatch_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HeadSwatch.w_HeadSwatch_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_HeadSwatch_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.OnFocusReceived");

	Uw_HeadSwatch_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HeadSwatch.w_HeadSwatch_C.SetSwatchIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_HeadSwatch_C::SetSwatchIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.SetSwatchIcon");

	Uw_HeadSwatch_C_SetSwatchIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HeadSwatch.w_HeadSwatch_C.BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void Uw_HeadSwatch_C::BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	Uw_HeadSwatch_C_BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_HeadSwatch_C::BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature");

	Uw_HeadSwatch_C_BndEvt__BU_HeadSwatch_K2Node_ComponentBoundEvent_45_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_HeadSwatch_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.Tick");

	Uw_HeadSwatch_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_HeadSwatch_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.Construct");

	Uw_HeadSwatch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.Button Gained Focus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               My_Geometry                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_HeadSwatch_C::Button_Gained_Focus(const struct FGeometry& My_Geometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.Button Gained Focus");

	Uw_HeadSwatch_C_Button_Gained_Focus_Params params;
	params.My_Geometry = My_Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.Button Lost Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_HeadSwatch_C::Button_Lost_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.Button Lost Focus");

	Uw_HeadSwatch_C_Button_Lost_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.Swatch Selected
// (BlueprintCallable, BlueprintEvent)

void Uw_HeadSwatch_C::Swatch_Selected()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.Swatch Selected");

	Uw_HeadSwatch_C_Swatch_Selected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.Scroll Into View
// (BlueprintCallable, BlueprintEvent)

void Uw_HeadSwatch_C::Scroll_Into_View()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.Scroll Into View");

	Uw_HeadSwatch_C_Scroll_Into_View_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.ExecuteUbergraph_w_HeadSwatch
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_HeadSwatch_C::ExecuteUbergraph_w_HeadSwatch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.ExecuteUbergraph_w_HeadSwatch");

	Uw_HeadSwatch_C_ExecuteUbergraph_w_HeadSwatch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch.w_HeadSwatch_C.HeadSwatchSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   HeadMorphSelected              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              SwatchIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Swatch_Name                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_HeadSwatch_C::HeadSwatchSelect__DelegateSignature(const struct FName& HeadMorphSelected, class UTexture2D* SwatchIcon, const struct FText& Swatch_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch.w_HeadSwatch_C.HeadSwatchSelect__DelegateSignature");

	Uw_HeadSwatch_C_HeadSwatchSelect__DelegateSignature_Params params;
	params.HeadMorphSelected = HeadMorphSelected;
	params.SwatchIcon = SwatchIcon;
	params.Swatch_Name = Swatch_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
