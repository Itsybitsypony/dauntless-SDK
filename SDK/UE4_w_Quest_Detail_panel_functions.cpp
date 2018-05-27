// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Quest_Detail_panel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.QuestHasKillObjective
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           HasKillObjective               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void Uw_Quest_Detail_panel_C::QuestHasKillObjective(bool* HasKillObjective)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.QuestHasKillObjective");

	Uw_Quest_Detail_panel_C_QuestHasKillObjective_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HasKillObjective != nullptr)
		*HasKillObjective = params.HasKillObjective;
}


// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_Border_Objectives_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Quest_Detail_panel_C::Get_Border_Objectives_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_Border_Objectives_Visibility_1");

	Uw_Quest_Detail_panel_C_Get_Border_Objectives_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_ReturntoBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Quest_Detail_panel_C::Get_ReturntoBox_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_ReturntoBox_Visibility_1");

	Uw_Quest_Detail_panel_C_Get_ReturntoBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_Redeemer_txt_Text_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText Uw_Quest_Detail_panel_C::Get_Redeemer_txt_Text_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Get_Redeemer_txt_Text_1");

	Uw_Quest_Detail_panel_C_Get_Redeemer_txt_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.GetAssetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ObjectPath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ObjectName                     (Parm, OutParm, ZeroConstructor)

void Uw_Quest_Detail_panel_C::GetAssetName(const class FString& ObjectPath, class FString* ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.GetAssetName");

	Uw_Quest_Detail_panel_C_GetAssetName_Params params;
	params.ObjectPath = ObjectPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectName != nullptr)
		*ObjectName = params.ObjectName;
}


// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Quest_Detail_panel_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.GetVisibility_1");

	Uw_Quest_Detail_panel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Quest_Detail_panel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.Construct");

	Uw_Quest_Detail_panel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.ExecuteUbergraph_w_Quest_Detail_panel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Quest_Detail_panel_C::ExecuteUbergraph_w_Quest_Detail_panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Quest_Detail_panel.w_Quest_Detail_panel_C.ExecuteUbergraph_w_Quest_Detail_panel");

	Uw_Quest_Detail_panel_C_ExecuteUbergraph_w_Quest_Detail_panel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
