// Unreal Engine 4 (4) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "UE4_w_HeadSwatch_Picker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Get Head Targets
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           OutRowNames                    (Parm, OutParm, ZeroConstructor)

void Uw_HeadSwatch_Picker_C::Get_Head_Targets(TArray<struct FName>* OutRowNames)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Get Head Targets");

	Uw_HeadSwatch_Picker_C_Get_Head_Targets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRowNames != nullptr)
		*OutRowNames = params.OutRowNames;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FFocusEvent*            InFocusEvent                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply Uw_HeadSwatch_Picker_C::OnFocusReceived(struct FGeometry* MyGeometry, struct FFocusEvent* InFocusEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.OnFocusReceived");

	Uw_HeadSwatch_Picker_C_OnFocusReceived_Params params;
	params.MyGeometry = MyGeometry;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_HeadSwatch_Picker_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Construct");

	Uw_HeadSwatch_Picker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_HeadSwatch_Picker_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Tick");

	Uw_HeadSwatch_Picker_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Show Picker Menu
// (BlueprintCallable, BlueprintEvent)

void Uw_HeadSwatch_Picker_C::Show_Picker_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Show Picker Menu");

	Uw_HeadSwatch_Picker_C_Show_Picker_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.BndEvt__PickerButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void Uw_HeadSwatch_Picker_C::BndEvt__PickerButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.BndEvt__PickerButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature");

	Uw_HeadSwatch_Picker_C_BndEvt__PickerButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.New Target Head
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   HeadMorphSelected              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              SwatchIcon                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   Swatch_Name                    (BlueprintVisible, BlueprintReadOnly, Parm)

void Uw_HeadSwatch_Picker_C::New_Target_Head(const struct FName& HeadMorphSelected, class UTexture2D* SwatchIcon, const struct FText& Swatch_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.New Target Head");

	Uw_HeadSwatch_Picker_C_New_Target_Head_Params params;
	params.HeadMorphSelected = HeadMorphSelected;
	params.SwatchIcon = SwatchIcon;
	params.Swatch_Name = Swatch_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Close Picker Menu
// (BlueprintCallable, BlueprintEvent)

void Uw_HeadSwatch_Picker_C::Close_Picker_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Close Picker Menu");

	Uw_HeadSwatch_Picker_C_Close_Picker_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.OnSynchronizeProperties
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void Uw_HeadSwatch_Picker_C::OnSynchronizeProperties()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.OnSynchronizeProperties");

	Uw_HeadSwatch_Picker_C_OnSynchronizeProperties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Picker Gained Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_HeadSwatch_Picker_C::Picker_Gained_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Picker Gained Focus");

	Uw_HeadSwatch_Picker_C_Picker_Gained_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Picker Lost Focus
// (BlueprintCallable, BlueprintEvent)

void Uw_HeadSwatch_Picker_C::Picker_Lost_Focus()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Picker Lost Focus");

	Uw_HeadSwatch_Picker_C_Picker_Lost_Focus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.ExecuteUbergraph_w_HeadSwatch_Picker
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_HeadSwatch_Picker_C::ExecuteUbergraph_w_HeadSwatch_Picker(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.ExecuteUbergraph_w_HeadSwatch_Picker");

	Uw_HeadSwatch_Picker_C_ExecuteUbergraph_w_HeadSwatch_Picker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.PickerMenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void Uw_HeadSwatch_Picker_C::PickerMenuOpened__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.PickerMenuOpened__DelegateSignature");

	Uw_HeadSwatch_Picker_C_PickerMenuOpened__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Selected Head Target__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   Target_Name                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Uw_HeadSwatch_Picker_C::Selected_Head_Target__DelegateSignature(const struct FName& Target_Name)
{
	static auto fn = UObject::FindObject<UFunction>("Function w_HeadSwatch_Picker.w_HeadSwatch_Picker_C.Selected Head Target__DelegateSignature");

	Uw_HeadSwatch_Picker_C_Selected_Head_Target__DelegateSignature_Params params;
	params.Target_Name = Target_Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
