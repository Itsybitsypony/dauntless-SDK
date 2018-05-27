// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_CC_ColourPickerPalette_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Active Eye Dropper
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Uw_PaletteEyeDropper_C*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class Uw_PaletteEyeDropper_C* Uw_CC_ColourPickerPalette_C::Get_Active_Eye_Dropper()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Active Eye Dropper");

	Uw_CC_ColourPickerPalette_C_Get_Active_Eye_Dropper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Set Active Slider
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Primary_Active                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Set_Active_Slider(bool Primary_Active)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Set Active Slider");

	Uw_CC_ColourPickerPalette_C_Set_Active_Slider_Params params;
	params.Primary_Active = Primary_Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Secondary Dropper Viewport Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Get_Secondary_Dropper_Viewport_Location(struct FGeometry* Geometry, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Secondary Dropper Viewport Location");

	Uw_CC_ColourPickerPalette_C_Get_Secondary_Dropper_Viewport_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Geometry != nullptr)
		*Geometry = params.Geometry;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Primary Dropper Viewport Location
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Get_Primary_Dropper_Viewport_Location(struct FGeometry* Geometry, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Primary Dropper Viewport Location");

	Uw_CC_ColourPickerPalette_C_Get_Primary_Dropper_Viewport_Location_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Geometry != nullptr)
		*Geometry = params.Geometry;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Handle Analog Slider Y
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Did_Move_Slider                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Handle_Analog_Slider_Y(bool* Did_Move_Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Handle Analog Slider Y");

	Uw_CC_ColourPickerPalette_C_Handle_Analog_Slider_Y_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Did_Move_Slider != nullptr)
		*Did_Move_Slider = params.Did_Move_Slider;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Handle Analog Slider X
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Did_Move_Slider                (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Handle_Analog_Slider_X(bool* Did_Move_Slider)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Handle Analog Slider X");

	Uw_CC_ColourPickerPalette_C_Handle_Analog_Slider_X_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Did_Move_Slider != nullptr)
		*Did_Move_Slider = params.Did_Move_Slider;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Refresh Secondary Colour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPickerPalette_C::Refresh_Secondary_Colour()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Refresh Secondary Colour");

	Uw_CC_ColourPickerPalette_C_Refresh_Secondary_Colour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Refresh Primary Colour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_CC_ColourPickerPalette_C::Refresh_Primary_Colour()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Refresh Primary Colour");

	Uw_CC_ColourPickerPalette_C_Refresh_Primary_Colour_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Dropper Viewport Position
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector2D               ViewportPosition               (Parm, OutParm, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Get_Dropper_Viewport_Position(struct FGeometry* Geometry, struct FVector2D* ViewportPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Get Dropper Viewport Position");

	Uw_CC_ColourPickerPalette_C_Get_Dropper_Viewport_Position_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Geometry != nullptr)
		*Geometry = params.Geometry;
	if (ViewportPosition != nullptr)
		*ViewportPosition = params.ViewportPosition;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.IsLeftStickNavigation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_CC_ColourPickerPalette_C::IsLeftStickNavigation(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.IsLeftStickNavigation");

	Uw_CC_ColourPickerPalette_C_IsLeftStickNavigation_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Update Colour Picker Material
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic* Material                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Slider_X                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Slider_Y                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            LinearColor                    (Parm, OutParm, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Update_Colour_Picker_Material(class UMaterialInstanceDynamic* Material, float Slider_X, float Slider_Y, struct FLinearColor* LinearColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Update Colour Picker Material");

	Uw_CC_ColourPickerPalette_C_Update_Colour_Picker_Material_Params params;
	params.Material = Material;
	params.Slider_X = Slider_X;
	params.Slider_Y = Slider_Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LinearColor != nullptr)
		*LinearColor = params.LinearColor;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Should Handle Analog Stick
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Slider_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Analog_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_CC_ColourPickerPalette_C::Should_Handle_Analog_Stick(float Slider_Value, float Analog_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Should Handle Analog Stick");

	Uw_CC_ColourPickerPalette_C_Should_Handle_Analog_Stick_Params params;
	params.Slider_Value = Slider_Value;
	params.Analog_Value = Analog_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Analog Step Slider
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Slider                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Analog_Value                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Slider_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Analog_Step_Slider(float Slider, float Analog_Value, float* Slider_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Analog Step Slider");

	Uw_CC_ColourPickerPalette_C_Analog_Step_Slider_Params params;
	params.Slider = Slider;
	params.Analog_Value = Analog_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slider_Value != nullptr)
		*Slider_Value = params.Slider_Value;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPickerPalette_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnAnalogValueChanged");

	Uw_CC_ColourPickerPalette_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPickerPalette_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnKeyDown");

	Uw_CC_ColourPickerPalette_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPickerPalette_C::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseMove");

	Uw_CC_ColourPickerPalette_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPickerPalette_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseButtonDown");

	Uw_CC_ColourPickerPalette_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Update Sliders From Mouse
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           Mouse_Input                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_CC_ColourPickerPalette_C::Update_Sliders_From_Mouse(const struct FGeometry& Geometry, const struct FPointerEvent& Mouse_Input)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Update Sliders From Mouse");

	Uw_CC_ColourPickerPalette_C_Update_Sliders_From_Mouse_Params params;
	params.Geometry = Geometry;
	params.Mouse_Input = Mouse_Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_CC_ColourPickerPalette_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnFocusReceived");

	Uw_CC_ColourPickerPalette_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnLoaded_A997719A43C51C81C2378EBE5815F692
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::OnLoaded_A997719A43C51C81C2378EBE5815F692(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnLoaded_A997719A43C51C81C2378EBE5815F692");

	Uw_CC_ColourPickerPalette_C_OnLoaded_A997719A43C51C81C2378EBE5815F692_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_ColourPickerPalette_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Construct");

	Uw_CC_ColourPickerPalette_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_CC_ColourPickerPalette_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnFocusLost");

	Uw_CC_ColourPickerPalette_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Tick");

	Uw_CC_ColourPickerPalette_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.On Sliders Changed
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::On_Sliders_Changed(const struct FGeometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.On Sliders Changed");

	Uw_CC_ColourPickerPalette_C_On_Sliders_Changed_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_CC_ColourPickerPalette_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnMouseEnter");

	Uw_CC_ColourPickerPalette_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_ColourPickerPalette_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.OnSynchronizeProperties");

	Uw_CC_ColourPickerPalette_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.New Palette
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TAssetPtr<class UObject>       Palette                        (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_CC_ColourPickerPalette_C::New_Palette(TAssetPtr<class UObject> Palette)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.New Palette");

	Uw_CC_ColourPickerPalette_C_New_Palette_Params params;
	params.Palette = Palette;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_CC_ColourPickerPalette_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Destruct");

	Uw_CC_ColourPickerPalette_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.On Sliders Initialized
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               Geometry                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::On_Sliders_Initialized(const struct FGeometry& Geometry)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.On Sliders Initialized");

	Uw_CC_ColourPickerPalette_C_On_Sliders_Initialized_Params params;
	params.Geometry = Geometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.ExecuteUbergraph_w_CC_ColourPickerPalette
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::ExecuteUbergraph_w_CC_ColourPickerPalette(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.ExecuteUbergraph_w_CC_ColourPickerPalette");

	Uw_CC_ColourPickerPalette_C_ExecuteUbergraph_w_CC_ColourPickerPalette_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Secondary Slider Color Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Secondary_Slider_Color_Changed__DelegateSignature(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Secondary Slider Color Changed__DelegateSignature");

	Uw_CC_ColourPickerPalette_C_Secondary_Slider_Color_Changed__DelegateSignature_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Primary Slider Color Changed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void Uw_CC_ColourPickerPalette_C::Primary_Slider_Color_Changed__DelegateSignature(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_CC_ColourPickerPalette.w_CC_ColourPickerPalette_C.Primary Slider Color Changed__DelegateSignature");

	Uw_CC_ColourPickerPalette_C_Primary_Slider_Color_Changed__DelegateSignature_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
