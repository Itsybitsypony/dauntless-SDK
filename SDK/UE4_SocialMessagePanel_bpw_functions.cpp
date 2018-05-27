// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_SocialMessagePanel_bpw_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Refresh
// (Public, BlueprintCallable, BlueprintEvent)

void USocialMessagePanel_bpw_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Refresh");

	USocialMessagePanel_bpw_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Get_NextButton_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility USocialMessagePanel_bpw_C::Get_NextButton_Visibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Get_NextButton_Visibility_1");

	USocialMessagePanel_bpw_C_Get_NextButton_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USocialMessagePanel_bpw_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Construct");

	USocialMessagePanel_bpw_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialMessagePanel_bpw_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.Tick");

	USocialMessagePanel_bpw_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.SetContent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText                   Body                           (BlueprintVisible, BlueprintReadOnly, Parm)

void USocialMessagePanel_bpw_C::SetContent(const struct FText& Title, const struct FText& Body)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.SetContent");

	USocialMessagePanel_bpw_C_SetContent_Params params;
	params.Title = Title;
	params.Body = Body;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USocialMessagePanel_bpw_C::BndEvt__NextButton_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature");

	USocialMessagePanel_bpw_C_BndEvt__NextButton_K2Node_ComponentBoundEvent_247_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.SetContentByIndex
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialMessagePanel_bpw_C::SetContentByIndex(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.SetContentByIndex");

	USocialMessagePanel_bpw_C_SetContentByIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.AddArchonNewItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTitleNewsResult        NewsItems                      (BlueprintVisible, BlueprintReadOnly, Parm)

void USocialMessagePanel_bpw_C::AddArchonNewItems(const struct FTitleNewsResult& NewsItems)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.AddArchonNewItems");

	USocialMessagePanel_bpw_C_AddArchonNewItems_Params params;
	params.NewsItems = NewsItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USocialMessagePanel_bpw_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.OnSynchronizeProperties");

	USocialMessagePanel_bpw_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.ExecuteUbergraph_SocialMessagePanel_bpw
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USocialMessagePanel_bpw_C::ExecuteUbergraph_SocialMessagePanel_bpw(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function SocialMessagePanel_bpw.SocialMessagePanel_bpw_C.ExecuteUbergraph_SocialMessagePanel_bpw");

	USocialMessagePanel_bpw_C_ExecuteUbergraph_SocialMessagePanel_bpw_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
