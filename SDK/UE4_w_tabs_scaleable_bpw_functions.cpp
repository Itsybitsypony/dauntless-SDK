// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_tabs_scaleable_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.GetTabIcon
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// TAssetPtr<class UObject>       ReturnValue                    (Parm, OutParm, ReturnParm)

TAssetPtr<class UObject> Uw_tabs_scaleable_bpw_C::GetTabIcon(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.GetTabIcon");

	Uw_tabs_scaleable_bpw_C_GetTabIcon_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_tabs_scaleable_bpw_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnKeyDown");

	Uw_tabs_scaleable_bpw_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.VisibilityUsingGamepad
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_tabs_scaleable_bpw_C::VisibilityUsingGamepad()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.VisibilityUsingGamepad");

	Uw_tabs_scaleable_bpw_C_VisibilityUsingGamepad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Has Active Category
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Return_Value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::Has_Active_Category(bool* Return_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Has Active Category");

	Uw_tabs_scaleable_bpw_C_Has_Active_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Return_Value != nullptr)
		*Return_Value = params.Return_Value;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnLoaded_A058EA6248D678A919D5DF9185C63225
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::OnLoaded_A058EA6248D678A919D5DF9185C63225(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnLoaded_A058EA6248D678A919D5DF9185C63225");

	Uw_tabs_scaleable_bpw_C_OnLoaded_A058EA6248D678A919D5DF9185C63225_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnLoaded_A058EA6248D678A919D5DF91A184542C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::OnLoaded_A058EA6248D678A919D5DF91A184542C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.OnLoaded_A058EA6248D678A919D5DF91A184542C");

	Uw_tabs_scaleable_bpw_C_OnLoaded_A058EA6248D678A919D5DF91A184542C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_tabs_scaleable_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Construct");

	Uw_tabs_scaleable_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Handle New Category
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class Uw_tab_imagebutton_bpw_C* Category_Button                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::Handle_New_Category(class Uw_tab_imagebutton_bpw_C* Category_Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Handle New Category");

	Uw_tabs_scaleable_bpw_C_Handle_New_Category_Params params;
	params.Category_Button = Category_Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Focus Default Category
// (BlueprintCallable, BlueprintEvent)

void Uw_tabs_scaleable_bpw_C::Focus_Default_Category()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Focus Default Category");

	Uw_tabs_scaleable_bpw_C_Focus_Default_Category_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_tabs_scaleable_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Refresh");

	Uw_tabs_scaleable_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.CategoryClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewModeIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::CategoryClicked(int NewModeIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.CategoryClicked");

	Uw_tabs_scaleable_bpw_C_CategoryClicked_Params params;
	params.NewModeIndex = NewModeIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.NextCategory
// (BlueprintCallable, BlueprintEvent)

void Uw_tabs_scaleable_bpw_C::NextCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.NextCategory");

	Uw_tabs_scaleable_bpw_C_NextCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.PreviousCategory
// (BlueprintCallable, BlueprintEvent)

void Uw_tabs_scaleable_bpw_C::PreviousCategory()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.PreviousCategory");

	Uw_tabs_scaleable_bpw_C_PreviousCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Input Swap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Using_Gamepad                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::Input_Swap(bool Using_Gamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Input Swap");

	Uw_tabs_scaleable_bpw_C_Input_Swap_Params params;
	params.Using_Gamepad = Using_Gamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.PreConstruct");

	Uw_tabs_scaleable_bpw_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.ExecuteUbergraph_w_tabs_scaleable_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::ExecuteUbergraph_w_tabs_scaleable_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.ExecuteUbergraph_w_tabs_scaleable_bpw");

	Uw_tabs_scaleable_bpw_C_ExecuteUbergraph_w_tabs_scaleable_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Invalid__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_tabs_scaleable_bpw_C::Invalid__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.Invalid__DelegateSignature");

	Uw_tabs_scaleable_bpw_C_Invalid__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.TabSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewMode                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_tabs_scaleable_bpw_C::TabSelected__DelegateSignature(int NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_tabs_scaleable_bpw.w_tabs_scaleable_bpw_C.TabSelected__DelegateSignature");

	Uw_tabs_scaleable_bpw_C_TabSelected__DelegateSignature_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
