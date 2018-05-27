// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_reagent_entry_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.GetBackground_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush Uw_reagent_entry_bpw_C::GetBackground_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.GetBackground_1");

	Uw_reagent_entry_bpw_C_GetBackground_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Get_Container_ToolTipWidget_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Uw_reagent_entry_bpw_C::Get_Container_ToolTipWidget_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Get_Container_ToolTipWidget_1");

	Uw_reagent_entry_bpw_C_Get_Container_ToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.GetTextColor
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor Uw_reagent_entry_bpw_C::GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.GetTextColor");

	Uw_reagent_entry_bpw_C_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Clear Entry
// (Public, BlueprintCallable, BlueprintEvent)

void Uw_reagent_entry_bpw_C::Clear_Entry()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Clear Entry");

	Uw_reagent_entry_bpw_C_Clear_Entry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Populate Component Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Amount                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reagent_entry_bpw_C::Populate_Component_Data(const class FString& ItemID, int Amount)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Populate Component Data");

	Uw_reagent_entry_bpw_C_Populate_Component_Data_Params params;
	params.ItemID = ItemID;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.OnLoaded_BF94643A458279D263D441AA4B4164AD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reagent_entry_bpw_C::OnLoaded_BF94643A458279D263D441AA4B4164AD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.OnLoaded_BF94643A458279D263D441AA4B4164AD");

	Uw_reagent_entry_bpw_C_OnLoaded_BF94643A458279D263D441AA4B4164AD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reagent_entry_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Tick");

	Uw_reagent_entry_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_reagent_entry_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.Construct");

	Uw_reagent_entry_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.LoadIcon
// (BlueprintCallable, BlueprintEvent)

void Uw_reagent_entry_bpw_C::LoadIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.LoadIcon");

	Uw_reagent_entry_bpw_C_LoadIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.ExecuteUbergraph_w_reagent_entry_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_reagent_entry_bpw_C::ExecuteUbergraph_w_reagent_entry_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_reagent_entry_bpw.w_reagent_entry_bpw_C.ExecuteUbergraph_w_reagent_entry_bpw");

	Uw_reagent_entry_bpw_C_ExecuteUbergraph_w_reagent_entry_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
