// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_Button_banner_Customize_entry_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.CheckIfEquipped_AgainstID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  A                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class FString                  B                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Button_banner_Customize_entry_C::CheckIfEquipped_AgainstID(const class FString& A, const class FString& B)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.CheckIfEquipped_AgainstID");

	Uw_Button_banner_Customize_entry_C_CheckIfEquipped_AgainstID_Params params;
	params.A = A;
	params.B = B;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.CheckIfEquipped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void Uw_Button_banner_Customize_entry_C::CheckIfEquipped(const class FString& ItemID)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.CheckIfEquipped");

	Uw_Button_banner_Customize_entry_C_CheckIfEquipped_Params params;
	params.ItemID = ItemID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility Uw_Button_banner_Customize_entry_C::GetVisibility_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.GetVisibility_1");

	Uw_Button_banner_Customize_entry_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Set Button Label
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText                   Text                           (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_Button_banner_Customize_entry_C::Set_Button_Label(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Set Button Label");

	Uw_Button_banner_Customize_entry_C_Set_Button_Label_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_Button_banner_Customize_entry_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.OnFocusReceived");

	Uw_Button_banner_Customize_entry_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Button_banner_Customize_entry_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Construct");

	Uw_Button_banner_Customize_entry_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_banner_Customize_entry_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Tick");

	Uw_Button_banner_Customize_entry_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_Button_banner_Customize_entry_C::BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature");

	Uw_Button_banner_Customize_entry_C_BndEvt__HairButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Show Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_banner_Customize_entry_C::Show_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Show Hover");

	Uw_Button_banner_Customize_entry_C_Show_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Hide Hover
// (BlueprintCallable, BlueprintEvent)

void Uw_Button_banner_Customize_entry_C::Hide_Hover()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Hide Hover");

	Uw_Button_banner_Customize_entry_C_Hide_Hover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_Button_banner_Customize_entry_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.OnSynchronizeProperties");

	Uw_Button_banner_Customize_entry_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.ExecuteUbergraph_w_Button_banner_Customize_entry
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_banner_Customize_entry_C::ExecuteUbergraph_w_Button_banner_Customize_entry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.ExecuteUbergraph_w_Button_banner_Customize_entry");

	Uw_Button_banner_Customize_entry_C_ExecuteUbergraph_w_Button_banner_Customize_entry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Button Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                  ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_Button_banner_Customize_entry_C::Button_Clicked__DelegateSignature(const class FString& ItemID, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_Button_banner_Customize_entry.w_Button_banner_Customize_entry_C.Button Clicked__DelegateSignature");

	Uw_Button_banner_Customize_entry_C_Button_Clicked__DelegateSignature_Params params;
	params.ItemID = ItemID;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
