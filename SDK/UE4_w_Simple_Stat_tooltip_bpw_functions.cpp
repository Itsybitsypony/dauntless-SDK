// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Simple_Stat_tooltip_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Simple_Stat_tooltip_bpw.w_Simple_Stat_tooltip_bpw_C.GetText_Value
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Simple_Stat_tooltip_bpw_C::GetText_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Simple_Stat_tooltip_bpw.w_Simple_Stat_tooltip_bpw_C.GetText_Value");

	Uw_Simple_Stat_tooltip_bpw_C_GetText_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Simple_Stat_tooltip_bpw.w_Simple_Stat_tooltip_bpw_C.OnLoaded_FCE8185C4D215A2DC53DF99741F5CABC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Simple_Stat_tooltip_bpw_C::OnLoaded_FCE8185C4D215A2DC53DF99741F5CABC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Simple_Stat_tooltip_bpw.w_Simple_Stat_tooltip_bpw_C.OnLoaded_FCE8185C4D215A2DC53DF99741F5CABC");

	Uw_Simple_Stat_tooltip_bpw_C_OnLoaded_FCE8185C4D215A2DC53DF99741F5CABC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Simple_Stat_tooltip_bpw.w_Simple_Stat_tooltip_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Simple_Stat_tooltip_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Simple_Stat_tooltip_bpw.w_Simple_Stat_tooltip_bpw_C.Construct");

	Uw_Simple_Stat_tooltip_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Simple_Stat_tooltip_bpw.w_Simple_Stat_tooltip_bpw_C.ExecuteUbergraph_w_Simple_Stat_tooltip_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Simple_Stat_tooltip_bpw_C::ExecuteUbergraph_w_Simple_Stat_tooltip_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Simple_Stat_tooltip_bpw.w_Simple_Stat_tooltip_bpw_C.ExecuteUbergraph_w_Simple_Stat_tooltip_bpw");

	Uw_Simple_Stat_tooltip_bpw_C_ExecuteUbergraph_w_Simple_Stat_tooltip_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
