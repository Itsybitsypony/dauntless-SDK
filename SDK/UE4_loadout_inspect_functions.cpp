// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_loadout_inspect_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function loadout_inspect.loadout_inspect_C.GetFirstKeyword
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidget*                 KeywordWidget                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uloadout_inspect_C::GetFirstKeyword(class UWidget** KeywordWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_inspect.loadout_inspect_C.GetFirstKeyword");

	Uloadout_inspect_C_GetFirstKeyword_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KeywordWidget != nullptr)
		*KeywordWidget = params.KeywordWidget;
}


// Function loadout_inspect.loadout_inspect_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uloadout_inspect_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_inspect.loadout_inspect_C.GetDefaultFocusedWidget");

	Uloadout_inspect_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loadout_inspect.loadout_inspect_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uloadout_inspect_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_inspect.loadout_inspect_C.OnKeyDown");

	Uloadout_inspect_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function loadout_inspect.loadout_inspect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uloadout_inspect_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_inspect.loadout_inspect_C.Construct");

	Uloadout_inspect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_inspect.loadout_inspect_C.Keyword Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   CellEffectID                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_inspect_C::Keyword_Selected(const struct FName& CellEffectID)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_inspect.loadout_inspect_C.Keyword Selected");

	Uloadout_inspect_C_Keyword_Selected_Params params;
	params.CellEffectID = CellEffectID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_inspect.loadout_inspect_C.BackClicked
// (BlueprintCallable, BlueprintEvent)

void Uloadout_inspect_C::BackClicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_inspect.loadout_inspect_C.BackClicked");

	Uloadout_inspect_C_BackClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function loadout_inspect.loadout_inspect_C.ExecuteUbergraph_loadout_inspect
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uloadout_inspect_C::ExecuteUbergraph_loadout_inspect(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function loadout_inspect.loadout_inspect_C.ExecuteUbergraph_loadout_inspect");

	Uloadout_inspect_C_ExecuteUbergraph_loadout_inspect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
