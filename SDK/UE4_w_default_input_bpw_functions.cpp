// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_default_input_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_default_input_bpw.w_default_input_bpw_C.OnKeyUpFallback
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_default_input_bpw_C::OnKeyUpFallback(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_default_input_bpw.w_default_input_bpw_C.OnKeyUpFallback");

	Uw_default_input_bpw_C_OnKeyUpFallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyGeometry != nullptr)
		*MyGeometry = params.MyGeometry;
	if (InKeyEvent != nullptr)
		*InKeyEvent = params.InKeyEvent;

	return params.ReturnValue;
}


// Function w_default_input_bpw.w_default_input_bpw_C.OnKeyDownFallback
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_default_input_bpw_C::OnKeyDownFallback(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_default_input_bpw.w_default_input_bpw_C.OnKeyDownFallback");

	Uw_default_input_bpw_C_OnKeyDownFallback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MyGeometry != nullptr)
		*MyGeometry = params.MyGeometry;
	if (InKeyEvent != nullptr)
		*InKeyEvent = params.InKeyEvent;

	return params.ReturnValue;
}


// Function w_default_input_bpw.w_default_input_bpw_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_default_input_bpw_C::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_default_input_bpw.w_default_input_bpw_C.OnMouseButtonDown");

	Uw_default_input_bpw_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_default_input_bpw.w_default_input_bpw_C.OpenChat
// (BlueprintCallable, BlueprintEvent)

void Uw_default_input_bpw_C::OpenChat()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_default_input_bpw.w_default_input_bpw_C.OpenChat");

	Uw_default_input_bpw_C_OpenChat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_default_input_bpw.w_default_input_bpw_C.ExecuteUbergraph_w_default_input_bpw
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_default_input_bpw_C::ExecuteUbergraph_w_default_input_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_default_input_bpw.w_default_input_bpw_C.ExecuteUbergraph_w_default_input_bpw");

	Uw_default_input_bpw_C_ExecuteUbergraph_w_default_input_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
