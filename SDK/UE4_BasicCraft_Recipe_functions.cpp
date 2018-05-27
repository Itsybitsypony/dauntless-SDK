// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_BasicCraft_Recipe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBasicCraft_Recipe_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnFocusReceived");

	UBasicCraft_Recipe_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Get_Icon_img_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* UBasicCraft_Recipe_C::Get_Icon_img_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.Get_Icon_img_ToolTipWidget_1");

	UBasicCraft_Recipe_C_Get_Icon_img_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Get_Kind_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UBasicCraft_Recipe_C::Get_Kind_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.Get_Kind_Text_1");

	UBasicCraft_Recipe_C_Get_Kind_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UBasicCraft_Recipe_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetVisibility_1");

	UBasicCraft_Recipe_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetBackground_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UBasicCraft_Recipe_C::GetBackground_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetBackground_1");

	UBasicCraft_Recipe_C_GetBackground_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBasicCraft_Recipe_C::GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetTextColor");

	UBasicCraft_Recipe_C_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Refresh State
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBasicCraft_Recipe_C::Refresh_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.Refresh State");

	UBasicCraft_Recipe_C_Refresh_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Update Weapon ID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  Recipe_ID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBasicCraft_Recipe_C::Update_Weapon_ID(const class FString& Recipe_ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.Update Weapon ID");

	UBasicCraft_Recipe_C_Update_Weapon_ID_Params params;
	params.Recipe_ID = Recipe_ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetHighlightColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UBasicCraft_Recipe_C::GetHighlightColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.GetHighlightColor");

	UBasicCraft_Recipe_C_GetHighlightColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UBasicCraft_Recipe_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseButtonDown");

	UBasicCraft_Recipe_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnLoaded_E395C10C4A16B7B6075B7695E9D8157F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicCraft_Recipe_C::OnLoaded_E395C10C4A16B7B6075B7695E9D8157F(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnLoaded_E395C10C4A16B7B6075B7695E9D8157F");

	UBasicCraft_Recipe_C_OnLoaded_E395C10C4A16B7B6075B7695E9D8157F_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBasicCraft_Recipe_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseEnter");

	UBasicCraft_Recipe_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBasicCraft_Recipe_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.OnMouseLeave");

	UBasicCraft_Recipe_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasicCraft_Recipe_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.Construct");

	UBasicCraft_Recipe_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Clear Selection
// (BlueprintCallable, BlueprintEvent)

void UBasicCraft_Recipe_C::Clear_Selection()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.Clear Selection");

	UBasicCraft_Recipe_C_Clear_Selection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.Load Icon
// (BlueprintCallable, BlueprintEvent)

void UBasicCraft_Recipe_C::Load_Icon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.Load Icon");

	UBasicCraft_Recipe_C_Load_Icon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.ExecuteUbergraph_BasicCraft_Recipe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBasicCraft_Recipe_C::ExecuteUbergraph_BasicCraft_Recipe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.ExecuteUbergraph_BasicCraft_Recipe");

	UBasicCraft_Recipe_C_ExecuteUbergraph_BasicCraft_Recipe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BasicCraft_Recipe.BasicCraft_Recipe_C.On Select - Dispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBasicCraft_Recipe_C*    Recipe_Widget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class FString                  SelectedRecipeID               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UBasicCraft_Recipe_C::On_Select___Dispatcher__DelegateSignature(class UBasicCraft_Recipe_C* Recipe_Widget, const class FString& SelectedRecipeID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BasicCraft_Recipe.BasicCraft_Recipe_C.On Select - Dispatcher__DelegateSignature");

	UBasicCraft_Recipe_C_On_Select___Dispatcher__DelegateSignature_Params params;
	params.Recipe_Widget = Recipe_Widget;
	params.SelectedRecipeID = SelectedRecipeID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
