// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Options_Entry_Keybind_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.StopAwaitingInput
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::StopAwaitingInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.StopAwaitingInput");

	Uw_Options_Entry_Keybind_bpw_C_StopAwaitingInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           LookupOnly                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           WillClearKey                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::ClearKey(const struct FKey& Key, bool LookupOnly, bool* WillClearKey)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearKey");

	Uw_Options_Entry_Keybind_bpw_C_ClearKey_Params params;
	params.Key = Key;
	params.LookupOnly = LookupOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WillClearKey != nullptr)
		*WillClearKey = params.WillClearKey;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearActionMapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  ActionMapping                  (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Options_Entry_Keybind_bpw_C::ClearActionMapping(const struct FInputActionKeyMapping& ActionMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearActionMapping");

	Uw_Options_Entry_Keybind_bpw_C_ClearActionMapping_Params params;
	params.ActionMapping = ActionMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearCurrentActiveState
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::ClearCurrentActiveState()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ClearCurrentActiveState");

	Uw_Options_Entry_Keybind_bpw_C_ClearCurrentActiveState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnPreviewKeyDown
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Options_Entry_Keybind_bpw_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnPreviewKeyDown");

	Uw_Options_Entry_Keybind_bpw_C_OnPreviewKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsKeyValidForSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Valid                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::IsKeyValidForSlot(const struct FKey& Key, bool* Valid)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsKeyValidForSlot");

	Uw_Options_Entry_Keybind_bpw_C_IsKeyValidForSlot_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Valid != nullptr)
		*Valid = params.Valid;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetBindingSlot
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Primary                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Secondary                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Gamepad                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EActionKeyMappingType          Slot                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::GetBindingSlot(bool Primary, bool Secondary, bool Gamepad, EActionKeyMappingType* Slot, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetBindingSlot");

	Uw_Options_Entry_Keybind_bpw_C_GetBindingSlot_Params params;
	params.Primary = Primary;
	params.Secondary = Secondary;
	params.Gamepad = Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Slot != nullptr)
		*Slot = params.Slot;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetNewMapping
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  OldActionMapping               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKey                    NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsValidInputMapping            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FInputAxisKeyMapping    OldAxisMapping                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsValidAxisMapping             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsAxisMapping                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EActionKeyMappingType          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Clear                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::SetNewMapping(const struct FInputActionKeyMapping& OldActionMapping, const struct FKey& NewKey, bool IsValidInputMapping, const struct FInputAxisKeyMapping& OldAxisMapping, bool IsValidAxisMapping, bool IsAxisMapping, EActionKeyMappingType Slot, bool Clear)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetNewMapping");

	Uw_Options_Entry_Keybind_bpw_C_SetNewMapping_Params params;
	params.OldActionMapping = OldActionMapping;
	params.NewKey = NewKey;
	params.IsValidInputMapping = IsValidInputMapping;
	params.OldAxisMapping = OldAxisMapping;
	params.IsValidAxisMapping = IsValidAxisMapping;
	params.IsAxisMapping = IsAxisMapping;
	params.Slot = Slot;
	params.Clear = Clear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Options_Entry_Keybind_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnFocusReceived");

	Uw_Options_Entry_Keybind_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetScale
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::GetScale(float* Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetScale");

	Uw_Options_Entry_Keybind_bpw_C_GetScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Scale != nullptr)
		*Scale = params.Scale;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsValidAxisMapping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputAxisKeyMapping    AxisMapping                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::IsValidAxisMapping(const struct FInputAxisKeyMapping& AxisMapping, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsValidAxisMapping");

	Uw_Options_Entry_Keybind_bpw_C_IsValidAxisMapping_Params params;
	params.AxisMapping = AxisMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsValidInputMapping
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  InputMapping                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::IsValidInputMapping(const struct FInputActionKeyMapping& InputMapping, bool* IsValid)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsValidInputMapping");

	Uw_Options_Entry_Keybind_bpw_C_IsValidInputMapping_Params params;
	params.InputMapping = InputMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.DoesAxisDirectionMatch
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Scale                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Uw_Options_Entry_Keybind_bpw_C::DoesAxisDirectionMatch(float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.DoesAxisDirectionMatch");

	Uw_Options_Entry_Keybind_bpw_C_DoesAxisDirectionMatch_Params params;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetAxisMapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputAxisKeyMapping    OldKeyMapping                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKey                    NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsCurrentlyMapped              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EActionKeyMappingType          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Clear                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::SetAxisMapping(const struct FInputAxisKeyMapping& OldKeyMapping, const struct FKey& NewKey, bool IsCurrentlyMapped, EActionKeyMappingType Slot, bool Clear)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetAxisMapping");

	Uw_Options_Entry_Keybind_bpw_C_SetAxisMapping_Params params;
	params.OldKeyMapping = OldKeyMapping;
	params.NewKey = NewKey;
	params.IsCurrentlyMapped = IsCurrentlyMapped;
	params.Slot = Slot;
	params.Clear = Clear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetAxisMappingForActiveSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputAxisKeyMapping    AxisMapping                    (Parm, OutParm)

void Uw_Options_Entry_Keybind_bpw_C::GetAxisMappingForActiveSlot(struct FInputAxisKeyMapping* AxisMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetAxisMappingForActiveSlot");

	Uw_Options_Entry_Keybind_bpw_C_GetAxisMappingForActiveSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AxisMapping != nullptr)
		*AxisMapping = params.AxisMapping;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UpdateKey
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Input                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Clear                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           KeyWasBound                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::UpdateKey(bool Clear, struct FKey* Input, bool* KeyWasBound)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UpdateKey");

	Uw_Options_Entry_Keybind_bpw_C_UpdateKey_Params params;
	params.Clear = Clear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Input != nullptr)
		*Input = params.Input;
	if (KeyWasBound != nullptr)
		*KeyWasBound = params.KeyWasBound;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Options_Entry_Keybind_bpw_C::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnPreviewMouseButtonDown");

	Uw_Options_Entry_Keybind_bpw_C_OnPreviewMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsAreadyBound
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsAlreadyBound                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::IsAreadyBound(const struct FKey& Key, bool* IsAlreadyBound)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.IsAreadyBound");

	Uw_Options_Entry_Keybind_bpw_C_IsAreadyBound_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsAlreadyBound != nullptr)
		*IsAlreadyBound = params.IsAlreadyBound;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetActionMappingForActiveSlot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  ActionMapping                  (Parm, OutParm)

void Uw_Options_Entry_Keybind_bpw_C::GetActionMappingForActiveSlot(struct FInputActionKeyMapping* ActionMapping)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetActionMappingForActiveSlot");

	Uw_Options_Entry_Keybind_bpw_C_GetActionMappingForActiveSlot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActionMapping != nullptr)
		*ActionMapping = params.ActionMapping;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UpdateWidgetUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::UpdateWidgetUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UpdateWidgetUI");

	Uw_Options_Entry_Keybind_bpw_C_UpdateWidgetUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnWidgetClicked
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Options_Entry_Keybind_bpw_C::OnWidgetClicked(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnWidgetClicked");

	Uw_Options_Entry_Keybind_bpw_C_OnWidgetClicked_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetActionMapping
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInputActionKeyMapping  OldKeyMapping                  (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKey                    NewKey                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsCurrentlyMapped              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// EActionKeyMappingType          Slot                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Clear                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::SetActionMapping(const struct FInputActionKeyMapping& OldKeyMapping, const struct FKey& NewKey, bool IsCurrentlyMapped, EActionKeyMappingType Slot, bool Clear)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.SetActionMapping");

	Uw_Options_Entry_Keybind_bpw_C_SetActionMapping_Params params;
	params.OldKeyMapping = OldKeyMapping;
	params.NewKey = NewKey;
	params.IsCurrentlyMapped = IsCurrentlyMapped;
	params.Slot = Slot;
	params.Clear = Clear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Get Secondary Key Label Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Options_Entry_Keybind_bpw_C::Get_Secondary_Key_Label_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Get Secondary Key Label Text");

	Uw_Options_Entry_Keybind_bpw_C_Get_Secondary_Key_Label_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Options_Entry_Keybind_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.GetVisibility_1");

	Uw_Options_Entry_Keybind_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Get Primary Key Label Text
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Options_Entry_Keybind_bpw_C::Get_Primary_Key_Label_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Get Primary Key Label Text");

	Uw_Options_Entry_Keybind_bpw_C_Get_Primary_Key_Label_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.EditorSync_SetTextLabel
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::EditorSync_SetTextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.EditorSync_SetTextLabel");

	Uw_Options_Entry_Keybind_bpw_C_EditorSync_SetTextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UI_SetTextLabel
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Options_Entry_Keybind_bpw_C::UI_SetTextLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.UI_SetTextLabel");

	Uw_Options_Entry_Keybind_bpw_C_UI_SetTextLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnLoaded_DE51A12B4DFDDCCB0FD2E2B4B6494B86
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::OnLoaded_DE51A12B4DFDDCCB0FD2E2B4B6494B86(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnLoaded_DE51A12B4DFDDCCB0FD2E2B4B6494B86");

	Uw_Options_Entry_Keybind_bpw_C_OnLoaded_DE51A12B4DFDDCCB0FD2E2B4B6494B86_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.Construct");

	Uw_Options_Entry_Keybind_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.OnSynchronizeProperties");

	Uw_Options_Entry_Keybind_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__PrimaryKeyButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::BndEvt__PrimaryKeyButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__PrimaryKeyButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature");

	Uw_Options_Entry_Keybind_bpw_C_BndEvt__PrimaryKeyButton_K2Node_ComponentBoundEvent_107_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.LoadWidgetGamepadIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Options_Entry_Keybind_bpw_C::LoadWidgetGamepadIcon(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.LoadWidgetGamepadIcon");

	Uw_Options_Entry_Keybind_bpw_C_LoadWidgetGamepadIcon_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__Key2Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::BndEvt__Key2Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__Key2Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	Uw_Options_Entry_Keybind_bpw_C_BndEvt__Key2Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature");

	Uw_Options_Entry_Keybind_bpw_C_BndEvt__GamepadKeyButton_K2Node_ComponentBoundEvent_64_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.TryUpdateKey
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Clear                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::TryUpdateKey(const struct FKey& Key, bool Clear)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.TryUpdateKey");

	Uw_Options_Entry_Keybind_bpw_C_TryUpdateKey_Params params;
	params.Key = Key;
	params.Clear = Clear;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ConfirmUpdateKey
// (BlueprintCallable, BlueprintEvent)

void Uw_Options_Entry_Keybind_bpw_C::ConfirmUpdateKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ConfirmUpdateKey");

	Uw_Options_Entry_Keybind_bpw_C_ConfirmUpdateKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ExecuteUbergraph_w_Options_Entry_Keybind_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Options_Entry_Keybind_bpw_C::ExecuteUbergraph_w_Options_Entry_Keybind_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Options_Entry_Keybind_bpw.w_Options_Entry_Keybind_bpw_C.ExecuteUbergraph_w_Options_Entry_Keybind_bpw");

	Uw_Options_Entry_Keybind_bpw_C_ExecuteUbergraph_w_Options_Entry_Keybind_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
