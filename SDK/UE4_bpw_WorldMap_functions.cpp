// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_WorldMap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_WorldMap.bpw_WorldMap_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_WorldMap_C::OnKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_WorldMap.bpw_WorldMap_C.OnKeyDown");

	Ubpw_WorldMap_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_WorldMap.bpw_WorldMap_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_WorldMap_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_WorldMap.bpw_WorldMap_C.Construct");

	Ubpw_WorldMap_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_WorldMap.bpw_WorldMap_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_Menu Button Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int                            ClickedIndex                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_WorldMap_C::BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_Menu_Button_Clicked__DelegateSignature(int ClickedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_WorldMap.bpw_WorldMap_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_Menu Button Clicked__DelegateSignature");

	Ubpw_WorldMap_C_BndEvt__ExitButton_K2Node_ComponentBoundEvent_0_Menu_Button_Clicked__DelegateSignature_Params params;
	params.ClickedIndex = ClickedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_WorldMap.bpw_WorldMap_C.Escape_Out
// (BlueprintCallable, BlueprintEvent)

void Ubpw_WorldMap_C::Escape_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_WorldMap.bpw_WorldMap_C.Escape_Out");

	Ubpw_WorldMap_C_Escape_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_WorldMap.bpw_WorldMap_C.ExecuteUbergraph_bpw_WorldMap
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_WorldMap_C::ExecuteUbergraph_bpw_WorldMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_WorldMap.bpw_WorldMap_C.ExecuteUbergraph_bpw_WorldMap");

	Ubpw_WorldMap_C_ExecuteUbergraph_bpw_WorldMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_WorldMap.bpw_WorldMap_C.ExitClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_WorldMap_C::ExitClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_WorldMap.bpw_WorldMap_C.ExitClicked__DelegateSignature");

	Ubpw_WorldMap_C_ExitClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
