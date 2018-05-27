// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_button_legend_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_button_legend.w_button_legend_C.Get Button Hint From Box
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class UPanelWidget*            Panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_button_legend_hint_C* ButtonHint                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::Get_Button_Hint_From_Box(const struct FKey& Key, class UPanelWidget* Panel, class Uw_button_legend_hint_C** ButtonHint, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Get Button Hint From Box");

	Uw_button_legend_C_Get_Button_Hint_From_Box_Params params;
	params.Key = Key;
	params.Panel = Panel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ButtonHint != nullptr)
		*ButtonHint = params.ButtonHint;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function w_button_legend.w_button_legend_C.Get Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_button_legend_action_hint_C* Button_Hint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::Get_Action(const struct FName& Action, class Uw_button_legend_action_hint_C** Button_Hint, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Get Action");

	Uw_button_legend_C_Get_Action_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Hint != nullptr)
		*Button_Hint = params.Button_Hint;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function w_button_legend.w_button_legend_C.Find Action
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_button_legend_action_hint_C* Button_Hint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::Find_Action(const struct FName& Action, class Uw_button_legend_action_hint_C** Button_Hint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Find Action");

	Uw_button_legend_C_Find_Action_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Hint != nullptr)
		*Button_Hint = params.Button_Hint;
}


// Function w_button_legend.w_button_legend_C.Clear Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void Uw_button_legend_C::Clear_Action(struct FName* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Clear Action");

	Uw_button_legend_C_Clear_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
}


// Function w_button_legend.w_button_legend_C.Add Action
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Action                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FScriptDelegate         Event                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::Add_Action(bool Enabled, struct FName* Action, struct FText* Label, struct FScriptDelegate* Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Add Action");

	Uw_button_legend_C_Add_Action_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Action != nullptr)
		*Action = params.Action;
	if (Label != nullptr)
		*Label = params.Label;
	if (Event != nullptr)
		*Event = params.Event;
}


// Function w_button_legend.w_button_legend_C.Add Controller Only Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_button_legend_C::Add_Controller_Only_Button(const struct FKey& Key, const struct FText& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Add Controller Only Button");

	Uw_button_legend_C_Add_Controller_Only_Button_Params params;
	params.Key = Key;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend.w_button_legend_C.Set Button Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsVisible                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::Set_Button_Visibility(const struct FKey& Key, bool IsVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Set Button Visibility");

	Uw_button_legend_C_Set_Button_Visibility_Params params;
	params.Key = Key;
	params.IsVisible = IsVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend.w_button_legend_C.Get Button Hint
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class Uw_button_legend_hint_C* Button_Hint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           Found                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::Get_Button_Hint(const struct FKey& Key, class Uw_button_legend_hint_C** Button_Hint, bool* Found)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Get Button Hint");

	Uw_button_legend_C_Get_Button_Hint_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Hint != nullptr)
		*Button_Hint = params.Button_Hint;
	if (Found != nullptr)
		*Found = params.Found;
}


// Function w_button_legend.w_button_legend_C.Find Button Hint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ControllerOnly                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Uw_button_legend_hint_C* Button_Hint                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::Find_Button_Hint(const struct FKey& Key, bool ControllerOnly, class Uw_button_legend_hint_C** Button_Hint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Find Button Hint");

	Uw_button_legend_C_Find_Button_Hint_Params params;
	params.Key = Key;
	params.ControllerOnly = ControllerOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Button_Hint != nullptr)
		*Button_Hint = params.Button_Hint;
}


// Function w_button_legend.w_button_legend_C.Clear Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_button_legend_C::Clear_Button(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Clear Button");

	Uw_button_legend_C_Clear_Button_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend.w_button_legend_C.Add Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Label                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_button_legend_C::Add_Button(const struct FKey& Key, const struct FText& Label)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Add Button");

	Uw_button_legend_C_Add_Button_Params params;
	params.Key = Key;
	params.Label = Label;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend.w_button_legend_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.PreConstruct");

	Uw_button_legend_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend.w_button_legend_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_button_legend_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.Construct");

	Uw_button_legend_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend.w_button_legend_C.On Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UsingGamepad                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::On_Input_Swap(bool UsingGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.On Input Swap");

	Uw_button_legend_C_On_Input_Swap_Params params;
	params.UsingGamepad = UsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_button_legend.w_button_legend_C.ExecuteUbergraph_w_button_legend
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_button_legend_C::ExecuteUbergraph_w_button_legend(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_button_legend.w_button_legend_C.ExecuteUbergraph_w_button_legend");

	Uw_button_legend_C_ExecuteUbergraph_w_button_legend_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
