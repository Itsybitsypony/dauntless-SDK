// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_context_menu_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function context_menu_bpw.context_menu_bpw_C.Add Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcontext_menu_action    Action                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_context_menu_action_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_bpw_C::Add_Action(const struct Fcontext_menu_action& Action, bool Enabled, class Uw_context_menu_action_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Add Action");

	Ucontext_menu_bpw_C_Add_Action_Params params;
	params.Action = Action;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function context_menu_bpw.context_menu_bpw_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ucontext_menu_bpw_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.GetDefaultFocusedWidget");

	Ucontext_menu_bpw_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function context_menu_bpw.context_menu_bpw_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ucontext_menu_bpw_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.OnKeyUp");

	Ucontext_menu_bpw_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function context_menu_bpw.context_menu_bpw_C.Should Handle Interact Released
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool Ucontext_menu_bpw_C::Should_Handle_Interact_Released()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Should Handle Interact Released");

	Ucontext_menu_bpw_C_Should_Handle_Interact_Released_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function context_menu_bpw.context_menu_bpw_C.Get Action Layout Parameters
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               Position                       (Parm, OutParm, IsPlainOldData)

void Ucontext_menu_bpw_C::Get_Action_Layout_Parameters(int Index, float* Angle, struct FVector2D* Position)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Get Action Layout Parameters");

	Ucontext_menu_bpw_C_Get_Action_Layout_Parameters_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
	if (Position != nullptr)
		*Position = params.Position;
}


// Function context_menu_bpw.context_menu_bpw_C.Add Action to Panel
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct Fcontext_menu_action    Action                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCanvasPanel*            Canvas                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanSelect                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_context_menu_action_C* Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_bpw_C::Add_Action_to_Panel(const struct Fcontext_menu_action& Action, class UCanvasPanel* Canvas, bool CanSelect, class Uw_context_menu_action_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Add Action to Panel");

	Ucontext_menu_bpw_C_Add_Action_to_Panel_Params params;
	params.Action = Action;
	params.Canvas = Canvas;
	params.CanSelect = CanSelect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function context_menu_bpw.context_menu_bpw_C.Get Action Widget Location
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_bpw_C::Get_Action_Widget_Location(int Index, float* Angle)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Get Action Widget Location");

	Ucontext_menu_bpw_C_Get_Action_Widget_Location_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function context_menu_bpw.context_menu_bpw_C.Find Selected Action Index
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_bpw_C::Find_Selected_Action_Index(int* Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Find Selected Action Index");

	Ucontext_menu_bpw_C_Find_Selected_Action_Index_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function context_menu_bpw.context_menu_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ucontext_menu_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Construct");

	Ucontext_menu_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.Show Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_bpw_C::Show_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Show Selection");

	Ucontext_menu_bpw_C_Show_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.Hide Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_bpw_C::Hide_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Hide Selection");

	Ucontext_menu_bpw_C_Hide_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.Update Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_bpw_C::Update_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Update Selection");

	Ucontext_menu_bpw_C_Update_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.Update Visual Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_bpw_C::Update_Visual_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Update Visual Selection");

	Ucontext_menu_bpw_C_Update_Visual_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.Confirm Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_bpw_C::Confirm_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Confirm Selection");

	Ucontext_menu_bpw_C_Confirm_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.Cancel Selection
// (BlueprintCallable, BlueprintEvent)

void Ucontext_menu_bpw_C::Cancel_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Cancel Selection");

	Ucontext_menu_bpw_C_Cancel_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_bpw_C::Update(float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Update");

	Ucontext_menu_bpw_C_Update_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.OnAquireTopOfFocusStack
// (Event, Public, BlueprintEvent)

void Ucontext_menu_bpw_C::OnAquireTopOfFocusStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.OnAquireTopOfFocusStack");

	Ucontext_menu_bpw_C_OnAquireTopOfFocusStack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.Update Selection Strength
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Strength                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_bpw_C::Update_Selection_Strength(float Strength)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.Update Selection Strength");

	Ucontext_menu_bpw_C_Update_Selection_Strength_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function context_menu_bpw.context_menu_bpw_C.ExecuteUbergraph_context_menu_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ucontext_menu_bpw_C::ExecuteUbergraph_context_menu_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function context_menu_bpw.context_menu_bpw_C.ExecuteUbergraph_context_menu_bpw");

	Ucontext_menu_bpw_C_ExecuteUbergraph_context_menu_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
