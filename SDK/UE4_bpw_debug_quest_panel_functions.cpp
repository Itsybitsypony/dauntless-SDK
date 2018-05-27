// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_debug_quest_panel_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.ClearAllButFirst
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVerticalBox*            VerticalBox                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_panel_C::ClearAllButFirst(class UVerticalBox* VerticalBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.ClearAllButFirst");

	Ubpw_debug_quest_panel_C_ClearAllButFirst_Params params;
	params.VerticalBox = VerticalBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.GetAssetName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ObjectPath                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  ObjectName                     (Parm, OutParm, ZeroConstructor)

void Ubpw_debug_quest_panel_C::GetAssetName(const class FString& ObjectPath, class FString* ObjectName)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.GetAssetName");

	Ubpw_debug_quest_panel_C_GetAssetName_Params params;
	params.ObjectPath = ObjectPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ObjectName != nullptr)
		*ObjectName = params.ObjectName;
}


// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Ubpw_debug_quest_panel_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.GetVisibility_1");

	Ubpw_debug_quest_panel_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_debug_quest_panel_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.Construct");

	Ubpw_debug_quest_panel_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.BndEvt__Button_Redeem_K2Node_ComponentBoundEvent_327_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Ubpw_debug_quest_panel_C::BndEvt__Button_Redeem_K2Node_ComponentBoundEvent_327_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.BndEvt__Button_Redeem_K2Node_ComponentBoundEvent_327_OnButtonClickedEvent__DelegateSignature");

	Ubpw_debug_quest_panel_C_BndEvt__Button_Redeem_K2Node_ComponentBoundEvent_327_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.UpdateAll
// (BlueprintCallable, BlueprintEvent)

void Ubpw_debug_quest_panel_C::UpdateAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.UpdateAll");

	Ubpw_debug_quest_panel_C_UpdateAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.ExecuteUbergraph_bpw_debug_quest_panel
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_debug_quest_panel_C::ExecuteUbergraph_bpw_debug_quest_panel(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_debug_quest_panel.bpw_debug_quest_panel_C.ExecuteUbergraph_bpw_debug_quest_panel");

	Ubpw_debug_quest_panel_C_ExecuteUbergraph_bpw_debug_quest_panel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
