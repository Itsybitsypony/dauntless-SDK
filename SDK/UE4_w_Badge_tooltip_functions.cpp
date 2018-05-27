// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Badge_tooltip_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Badge_tooltip.w_Badge_tooltip_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Badge_tooltip_C::GetText_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.GetText_2");

	Uw_Badge_tooltip_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Badge_tooltip.w_Badge_tooltip_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Badge_tooltip_C::GetText_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.GetText_1");

	Uw_Badge_tooltip_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Badge_tooltip.w_Badge_tooltip_C.Get_TooltipIcon_Brush_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_Badge_tooltip_C::Get_TooltipIcon_Brush_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.Get_TooltipIcon_Brush_1");

	Uw_Badge_tooltip_C_Get_TooltipIcon_Brush_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Badge_tooltip.w_Badge_tooltip_C.GetVisibility_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Badge_tooltip_C::GetVisibility_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.GetVisibility_2");

	Uw_Badge_tooltip_C_GetVisibility_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Badge_tooltip.w_Badge_tooltip_C.Get_BorderBG_Background_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_Badge_tooltip_C::Get_BorderBG_Background_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.Get_BorderBG_Background_1");

	Uw_Badge_tooltip_C_Get_BorderBG_Background_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Badge_tooltip.w_Badge_tooltip_C.OnLoaded_F50ED2014F8A9FCB078447A4EEB0CD71
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Badge_tooltip_C::OnLoaded_F50ED2014F8A9FCB078447A4EEB0CD71(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.OnLoaded_F50ED2014F8A9FCB078447A4EEB0CD71");

	Uw_Badge_tooltip_C_OnLoaded_F50ED2014F8A9FCB078447A4EEB0CD71_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Badge_tooltip.w_Badge_tooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Badge_tooltip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.Construct");

	Uw_Badge_tooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Badge_tooltip.w_Badge_tooltip_C.Refresh
// (BlueprintCallable, BlueprintEvent)

void Uw_Badge_tooltip_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.Refresh");

	Uw_Badge_tooltip_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Badge_tooltip.w_Badge_tooltip_C.ExecuteUbergraph_w_Badge_tooltip
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Badge_tooltip_C::ExecuteUbergraph_w_Badge_tooltip(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Badge_tooltip.w_Badge_tooltip_C.ExecuteUbergraph_w_Badge_tooltip");

	Uw_Badge_tooltip_C_ExecuteUbergraph_w_Badge_tooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
