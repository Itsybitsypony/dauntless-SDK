// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_HUD_boostIndicator_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_HUD_boostIndicator_bpw_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.GetVisibility_1");

	Uw_HUD_boostIndicator_bpw_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.GetVisibility_Backpiece
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_HUD_boostIndicator_bpw_C::GetVisibility_Backpiece()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.GetVisibility_Backpiece");

	Uw_HUD_boostIndicator_bpw_C_GetVisibility_Backpiece_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_HUD_boostIndicator_bpw_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.OnMouseButtonDown_1");

	Uw_HUD_boostIndicator_bpw_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.Get_TitleScale_Visibility_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_HUD_boostIndicator_bpw_C::Get_TitleScale_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.Get_TitleScale_Visibility_1");

	Uw_HUD_boostIndicator_bpw_C_Get_TitleScale_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.Get_txt_playername_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_HUD_boostIndicator_bpw_C::Get_txt_playername_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.Get_txt_playername_Text_1");

	Uw_HUD_boostIndicator_bpw_C_Get_txt_playername_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ShowStyleHunterIndicator?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_HUD_boostIndicator_bpw_C::ShowStyleHunterIndicator_()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ShowStyleHunterIndicator?");

	Uw_HUD_boostIndicator_bpw_C_ShowStyleHunterIndicator__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ShowChampionIndicator?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_HUD_boostIndicator_bpw_C::ShowChampionIndicator_()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ShowChampionIndicator?");

	Uw_HUD_boostIndicator_bpw_C_ShowChampionIndicator__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ShowPatronIndicator?
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_HUD_boostIndicator_bpw_C::ShowPatronIndicator_()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ShowPatronIndicator?");

	Uw_HUD_boostIndicator_bpw_C_ShowPatronIndicator__Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.RefreshBoostStatus
// (BlueprintCallable, BlueprintEvent)

void Uw_HUD_boostIndicator_bpw_C::RefreshBoostStatus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.RefreshBoostStatus");

	Uw_HUD_boostIndicator_bpw_C_RefreshBoostStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ShowifLeader
// (BlueprintCallable, BlueprintEvent)

void Uw_HUD_boostIndicator_bpw_C::ShowifLeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ShowifLeader");

	Uw_HUD_boostIndicator_bpw_C_ShowifLeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.UpdateTitleDisplay
// (BlueprintCallable, BlueprintEvent)

void Uw_HUD_boostIndicator_bpw_C::UpdateTitleDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.UpdateTitleDisplay");

	Uw_HUD_boostIndicator_bpw_C_UpdateTitleDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.UpdateRank
// (BlueprintCallable, BlueprintEvent)

void Uw_HUD_boostIndicator_bpw_C::UpdateRank()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.UpdateRank");

	Uw_HUD_boostIndicator_bpw_C_UpdateRank_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_HUD_boostIndicator_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.Construct");

	Uw_HUD_boostIndicator_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_HUD_boostIndicator_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.OnSynchronizeProperties");

	Uw_HUD_boostIndicator_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ExecuteUbergraph_w_HUD_boostIndicator_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_HUD_boostIndicator_bpw_C::ExecuteUbergraph_w_HUD_boostIndicator_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.ExecuteUbergraph_w_HUD_boostIndicator_bpw");

	Uw_HUD_boostIndicator_bpw_C_ExecuteUbergraph_w_HUD_boostIndicator_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_HUD_boostIndicator_bpw_C::Clicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HUD_boostIndicator_bpw.w_HUD_boostIndicator_bpw_C.Clicked__DelegateSignature");

	Uw_HUD_boostIndicator_bpw_C_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
