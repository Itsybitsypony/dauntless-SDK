// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_context_menu_gamepad_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Add Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcontext_menu_action*   Action                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_context_menu_action_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_gamepad_bpw_C::Add_Action(struct Fcontext_menu_action* Action, bool* Enabled, class Uw_context_menu_action_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Add Action");

	Ucontext_menu_gamepad_bpw_C_Add_Action_Params params;
	params.Action = Action;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucontext_menu_gamepad_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.OnKeyDown");

	Ucontext_menu_gamepad_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucontext_menu_gamepad_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.OnKeyUp");

	Ucontext_menu_gamepad_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucontext_menu_gamepad_bpw_C::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.OnMouseButtonUp");

	Ucontext_menu_gamepad_bpw_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.OnAnalogValueChanged
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FAnalogInputEvent*      InAnalogInputEvent             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucontext_menu_gamepad_bpw_C::OnAnalogValueChanged(struct FGeometry* MyGeometry, struct FAnalogInputEvent* InAnalogInputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.OnAnalogValueChanged");

	Ucontext_menu_gamepad_bpw_C_OnAnalogValueChanged_Params params;
	params.MyGeometry = MyGeometry;
	params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_gamepad_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Tick");

	Ucontext_menu_gamepad_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucontext_menu_gamepad_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Construct");

	Ucontext_menu_gamepad_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_gamepad_bpw_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.PreConstruct");

	Ucontext_menu_gamepad_bpw_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Show Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_gamepad_bpw_C::Show_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Show Selection");

	Ucontext_menu_gamepad_bpw_C_Show_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Hide Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_gamepad_bpw_C::Hide_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Hide Selection");

	Ucontext_menu_gamepad_bpw_C_Hide_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Update Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_gamepad_bpw_C::Update_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Update Selection");

	Ucontext_menu_gamepad_bpw_C_Update_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Update Selection Strength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_gamepad_bpw_C::Update_Selection_Strength(float* Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.Update Selection Strength");

	Ucontext_menu_gamepad_bpw_C_Update_Selection_Strength_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.ExecuteUbergraph_context_menu_gamepad_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_gamepad_bpw_C::ExecuteUbergraph_context_menu_gamepad_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_gamepad_bpw.context_menu_gamepad_bpw_C.ExecuteUbergraph_context_menu_gamepad_bpw");

	Ucontext_menu_gamepad_bpw_C_ExecuteUbergraph_context_menu_gamepad_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
