// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_colorpicksquare_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_colorpicksquare.bpw_colorpicksquare_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_colorpicksquare_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.GetVisibility_1");

	Ubpw_colorpicksquare_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get_SurfaceImage_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Ubpw_colorpicksquare_C::Get_SurfaceImage_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get_SurfaceImage_Brush_1");

	Ubpw_colorpicksquare_C_Get_SurfaceImage_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.GetToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ubpw_colorpicksquare_C::GetToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.GetToolTipWidget_1");

	Ubpw_colorpicksquare_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get Dye Info Row Name
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Row_Name                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ubpw_colorpicksquare_C::Get_Dye_Info_Row_Name(struct FName* Row_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get Dye Info Row Name");

	Ubpw_colorpicksquare_C_Get_Dye_Info_Row_Name_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Row_Name != nullptr)
		*Row_Name = params.Row_Name;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_colorpicksquare_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnMouseButtonDown");

	Ubpw_colorpicksquare_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get Button Color
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            Button_Color                   (Parm, OutParm, IsPlainOldData)

void Ubpw_colorpicksquare_C::Get_Button_Color(struct FLinearColor* Button_Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.Get Button Color");

	Ubpw_colorpicksquare_C_Get_Button_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Color != nullptr)
		*Button_Color = params.Button_Color;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnLoaded_A9C468A04127AE561891A0B24FE2D837
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_colorpicksquare_C::OnLoaded_A9C468A04127AE561891A0B24FE2D837(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnLoaded_A9C468A04127AE561891A0B24FE2D837");

	Ubpw_colorpicksquare_C_OnLoaded_A9C468A04127AE561891A0B24FE2D837_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnRightClick
// (BlueprintCallable, BlueprintEvent)

void Ubpw_colorpicksquare_C::OnRightClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.OnRightClick");

	Ubpw_colorpicksquare_C_OnRightClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Set Button Color
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UTexture2D>    SwatchTexture                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_colorpicksquare_C::Set_Button_Color(TAssetPtr<class UTexture2D> SwatchTexture, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.Set Button Color");

	Ubpw_colorpicksquare_C_Set_Button_Color_Params params;
	params.SwatchTexture = SwatchTexture;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Select
// (BlueprintCallable, BlueprintEvent)

void Ubpw_colorpicksquare_C::Select()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.Select");

	Ubpw_colorpicksquare_C_Select_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Deselect
// (BlueprintCallable, BlueprintEvent)

void Ubpw_colorpicksquare_C::Deselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.Deselect");

	Ubpw_colorpicksquare_C_Deselect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_colorpicksquare_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature");

	Ubpw_colorpicksquare_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_473_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Highlight
// (BlueprintCallable, BlueprintEvent)

void Ubpw_colorpicksquare_C::Highlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.Highlight");

	Ubpw_colorpicksquare_C_Highlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.Set Dye Info Row
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   RowName                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_colorpicksquare_C::Set_Dye_Info_Row(const struct FName& RowName, bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.Set Dye Info Row");

	Ubpw_colorpicksquare_C_Set_Dye_Info_Row_Params params;
	params.RowName = RowName;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.ExecuteUbergraph_bpw_colorpicksquare
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_colorpicksquare_C::ExecuteUbergraph_bpw_colorpicksquare(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.ExecuteUbergraph_bpw_colorpicksquare");

	Ubpw_colorpicksquare_C_ExecuteUbergraph_bpw_colorpicksquare_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_colorpicksquare.bpw_colorpicksquare_C.ButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Ubpw_colorpicksquare_C*  Color_Picker_Reference         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_colorpicksquare_C::ButtonPressed__DelegateSignature(class Ubpw_colorpicksquare_C* Color_Picker_Reference)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_colorpicksquare.bpw_colorpicksquare_C.ButtonPressed__DelegateSignature");

	Ubpw_colorpicksquare_C_ButtonPressed__DelegateSignature_Params params;
	params.Color_Picker_Reference = Color_Picker_Reference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
