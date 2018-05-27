// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_friendslist_friend_item_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnMouseButtonDown_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_friendslist_friend_item_bpw_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnMouseButtonDown_1");

	Uw_friendslist_friend_item_bpw_C_OnMouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.On_Border_175_MouseDoubleClick_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_friendslist_friend_item_bpw_C::On_Border_175_MouseDoubleClick_1(const struct FGeometry& MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.On_Border_175_MouseDoubleClick_1");

	Uw_friendslist_friend_item_bpw_C_On_Border_175_MouseDoubleClick_1_Params params;
	params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseEvent != nullptr)
		*MouseEvent = params.MouseEvent;

	return params.ReturnValue;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_friendslist_friend_item_bpw_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnFocusReceived");

	Uw_friendslist_friend_item_bpw_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_friendslist_friend_item_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.Construct");

	Uw_friendslist_friend_item_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_friendslist_friend_item_bpw_C::OnFocusLost(struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnFocusLost");

	Uw_friendslist_friend_item_bpw_C_OnFocusLost_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_friendslist_friend_item_bpw_C::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnMouseEnter");

	Uw_friendslist_friend_item_bpw_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void Uw_friendslist_friend_item_bpw_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.OnMouseLeave");

	Uw_friendslist_friend_item_bpw_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.BndEvt__Button_158_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_friendslist_friend_item_bpw_C::BndEvt__Button_158_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.BndEvt__Button_158_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature");

	Uw_friendslist_friend_item_bpw_C_BndEvt__Button_158_K2Node_ComponentBoundEvent_134_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.ButtonClick
// (BlueprintCallable, BlueprintEvent)

void Uw_friendslist_friend_item_bpw_C::ButtonClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.ButtonClick");

	Uw_friendslist_friend_item_bpw_C_ButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.ExecuteUbergraph_w_friendslist_friend_item_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_friendslist_friend_item_bpw_C::ExecuteUbergraph_w_friendslist_friend_item_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.ExecuteUbergraph_w_friendslist_friend_item_bpw");

	Uw_friendslist_friend_item_bpw_C_ExecuteUbergraph_w_friendslist_friend_item_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.DoubleClick_Chat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  PlayerName                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_friendslist_friend_item_bpw_C::DoubleClick_Chat__DelegateSignature(const class FString& PlayerName)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_friendslist_friend_item_bpw.w_friendslist_friend_item_bpw_C.DoubleClick_Chat__DelegateSignature");

	Uw_friendslist_friend_item_bpw_C_DoubleClick_Chat__DelegateSignature_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
