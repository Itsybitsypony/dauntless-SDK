// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_bpw_CreateGuild_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bpw_CreateGuild.bpw_CreateGuild_C.GetDefaultFocusedWidget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWidget* Ubpw_CreateGuild_C::GetDefaultFocusedWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.GetDefaultFocusedWidget");

	Ubpw_CreateGuild_C_GetDefaultFocusedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FKeyEvent*              InKeyEvent                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Ubpw_CreateGuild_C::OnKeyUp(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.OnKeyUp");

	Ubpw_CreateGuild_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.Name Error
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Show                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Error                          (BlueprintVisible, BlueprintReadOnly, Parm)

void Ubpw_CreateGuild_C::Name_Error(bool Show, const struct FText& Error)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.Name Error");

	Ubpw_CreateGuild_C_Name_Error_Params params;
	params.Show = Show;
	params.Error = Error;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.Show Request Processing
// (BlueprintCallable, BlueprintEvent)

void Ubpw_CreateGuild_C::Show_Request_Processing()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.Show Request Processing");

	Ubpw_CreateGuild_C_Show_Request_Processing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.Show Guild Create
// (BlueprintCallable, BlueprintEvent)

void Ubpw_CreateGuild_C::Show_Guild_Create()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.Show Guild Create");

	Ubpw_CreateGuild_C_Show_Guild_Create_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Ubpw_CreateGuild_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.Construct");

	Ubpw_CreateGuild_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.OnCreateGuild
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DidSucceed                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   ErrorMessage                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Ubpw_CreateGuild_C::OnCreateGuild(bool DidSucceed, const struct FText& ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.OnCreateGuild");

	Ubpw_CreateGuild_C_OnCreateGuild_Params params;
	params.DidSucceed = DidSucceed;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.Close
// (BlueprintCallable, BlueprintEvent)

void Ubpw_CreateGuild_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.Close");

	Ubpw_CreateGuild_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.Create Guild Confirmed
// (BlueprintCallable, BlueprintEvent)

void Ubpw_CreateGuild_C::Create_Guild_Confirmed()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.Create Guild Confirmed");

	Ubpw_CreateGuild_C_Create_Guild_Confirmed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature
// (BlueprintEvent)

void Ubpw_CreateGuild_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature");

	Ubpw_CreateGuild_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_36_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature
// (BlueprintEvent)

void Ubpw_CreateGuild_C::BndEvt__DeclineButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.BndEvt__DeclineButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature");

	Ubpw_CreateGuild_C_BndEvt__DeclineButton_K2Node_ComponentBoundEvent_40_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.ExecuteUbergraph_bpw_CreateGuild
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Ubpw_CreateGuild_C::ExecuteUbergraph_bpw_CreateGuild(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.ExecuteUbergraph_bpw_CreateGuild");

	Ubpw_CreateGuild_C_ExecuteUbergraph_bpw_CreateGuild_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.GuildDialogClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_CreateGuild_C::GuildDialogClosed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.GuildDialogClosed__DelegateSignature");

	Ubpw_CreateGuild_C_GuildDialogClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function bpw_CreateGuild.bpw_CreateGuild_C.Guild Created__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Ubpw_CreateGuild_C::Guild_Created__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function bpw_CreateGuild.bpw_CreateGuild_C.Guild Created__DelegateSignature");

	Ubpw_CreateGuild_C_Guild_Created__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
